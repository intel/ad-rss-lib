/*******************************************************************************
 * Licensed Materials - Property of IBM
 * (c) Copyright IBM Corporation 2009, 2015. All Rights Reserved.
 *
 * Note to U.S. Government Users Restricted Rights:  
 * Use, duplication or disclosure restricted by GSA ADP Schedule 
 * Contract with IBM Corp. 
  *******************************************************************************/

var menuAlignment = 'left';
var activateSubOnClick = true;
var activeMenuItem = false;
var activeTabIndex = 0;
var hideBreadcrumbs = true;

function showHide()
{
	if(activeMenuItem)
	{
		activeMenuItem.className = 'inactiveMenuItem';
		var theId = activeMenuItem.id.replace(/[^0-9]/g,'');
		document.getElementById('submenu_'+theId).style.display='none';
	}
	activeMenuItem = this;
	this.className = 'activeMenuItem';
	var theId = this.id.replace(/[^0-9]/g,'');
	document.getElementById('submenu_'+theId).style.display='block';
}
function initMenu()
{
	var mainMenuObj = document.getElementById('mainMenu');
	var menuItems = mainMenuObj.getElementsByTagName('A');
	if(document.all)
	{
		mainMenuObj.style.visibility = 'hidden';
		document.getElementById('submenu').style.visibility = 'hidden';
	}
	var currentLeftPos = 15;
	for(var no=0;no<menuItems.length;no++)
	{
		if(activateSubOnClick)
		{
			menuItems[no].onclick = showHide;
		}
		else 
		{
			menuItems[no].onmouseover = showHide;
		}
		
		menuItems[no].id = 'mainMenuItem' + (no+1);
		if(menuAlignment=='left')
		{
			menuItems[no].style.left = currentLeftPos + 'px';
		}
		else
		{	
			menuItems[no].style.right = currentLeftPos + 'px';
		}
		currentLeftPos = currentLeftPos + menuItems[no].offsetWidth;
		if(no==activeTabIndex)
		{
			menuItems[no].className='activeMenuItem';
			activeMenuItem = menuItems[no];
		}
		else
		{
			menuItems[no].className='inactiveMenuItem';
		}
		if(!document.all)
		{
			menuItems[no].style.bottom = '-1px';
		}
	}
	var subCounter = 1;
	var parentWidth = mainMenuObj.offsetWidth;
	while(document.getElementById('submenu_' + subCounter))
	{
		var subItem = document.getElementById('submenu_' + subCounter);
		if(subCounter==(activeTabIndex+1))
		{
			subItem.style.display='block';
		}
		else
		{
			subItem.style.display='none';
		}
		subCounter++;
	}
	if(document.all)
	{
		mainMenuObj.style.visibility = 'visible';
		document.getElementById('submenu').style.visibility='visible';
	}
	document.getElementById('submenu').style.display='block';
}

function listener(event)
{
	if (event.data.substring(0, 15) == "onBacklinkClick")
	{
		var res = event.data.split("|");
		highlightToCEntry("#" + res[1], true);
	}
	else if (event.data.substring(0, 14) == "onIFrameScroll")
	{
		if (hideBreadcrumbs)
		{
			document.getElementById("breadcrumbs").innerHTML = "";
		}
		hideBreadcrumbs = true;
	}
}

function loadFile(url, anchorId)
{
	hideBreadcrumbs = false;
	if (anchorId == null)
	{
		anchorId = "";
	}

	var iFrameElem = document.getElementById('main_iframe');
	iFrameElem.src = url + anchorId;
		
	if (window.addEventListener)
	{	// chrome, FF
		addEventListener("message", listener, false);
	}
	else if (window.attachEvent)
	{	// IE
		attachEvent("onmessage", listener);
	}
	
	highlightToCEntry(anchorId, false);
}

function expandElementsUpTo(list, currentElement)
{
	for (var i = 0; i < list.length; i++)
	{
		var elem = list[i];
		elem.style.display = "block";
		
		if (elem.getAttribute("id") == "listsubmenu")
		{
			elem.setAttribute("rel", "open");
			elem.style.backgroundImage = "url(minus.gif)"
		}

		if (elem == currentElement)
		{
			continue;
		}
		else
		{			
			expandElementsUpTo(getChildren(elem), currentElement);
		}
	}
}

function highlightToCEntry(anchorId, doExpand)
{
	if (anchorId == null || anchorId == "")
	{
		return;
	}
	
	var elemFound = false;	
	var alltocs = document.getElementsByClassName("collapsibleList");
	var breadcrumbsResolved = false;
	// find the index of the UL that contains element with unique anchorId
	for (var index = 0; index < alltocs.length; index++)
	{
		var lis = alltocs[index].getElementsByTagName("li");
		
		for (var j = 0; j < lis.length; j++)
		{
			var currentElement = lis[j];
			
			currentElement.style.backgroundColor="#fff";
			if ((currentElement.innerHTML.indexOf(anchorId) > -1) && (!breadcrumbsResolved))
			{
				if (!elemFound)
				{
					currentElement.style.backgroundColor="#ddd";
					elemFound = true;
				}

				var parents = getParents(currentElement);
				if (doExpand)
				{				
					expandElementsUpTo(parents, currentElement);
					
					currentElement.scrollIntoView(false);
					initMenu();
				}
				
				showBreadcrumbs(parents);
				breadcrumbsResolved = true;
			}
		}
	}
}

function showBreadcrumbs(contentsArray)
{
	if (contentsArray.length > 0)
	{
		var tocpath = contentsArray[0].innerHTML;
		for (var k = 1; k < contentsArray.length; k++)
		{
			tocpath = contentsArray[k].innerHTML + " &raquo; " + tocpath;
		}
		
		document.getElementById("breadcrumbs").innerHTML = tocpath;
	}
	else
	{
		document.getElementById("breadcrumbs").innerHTML = "";
	}
}

function getParents(element)
{
	var tocIndex = 0;
	var elemIndex = 0;
	var alltocs = document.getElementsByClassName("collapsibleList");
	var found = false;
	
	// find the index of the UL that contains 'element'
	for (var index = 0; index < alltocs.length; index++)
	{
		tocIndex++;
		elemIndex = 0;
		var lis = alltocs[index].getElementsByTagName("li");
		for (var i = 0; i < lis.length; i++)
		{
			elemIndex++;
			if (lis[i] == element)
			{
				found = true;
				break;
			}
		}
		if (found)
		{
			break;
		}
	}
	
	// find all parents of 'element' from that particular UL
	lis = alltocs[tocIndex - 1].getElementsByTagName("li");
	
	var parents = [];
	var parentLevel = element.getAttribute("level");
	if (parentLevel >=  1 && elemIndex > 1)
	{
		for (var j = elemIndex - 1; j >= 0; j--)
		{
			if (parentLevel > lis[j].getAttribute("level"))
			{
				parentLevel = lis[j].getAttribute("level");
				parents.push(lis[j]);
			}
		}
	}
	
	return parents;
}

function setBacklinkVisibile(obj, isVisible)
{
	var children = obj.childNodes[0].childNodes;
	for (var idx = 0; idx < children.length; idx++)
	{
		var child = children[idx];

		if (child.className == "backlink")
		{
			child.style.visibility = isVisible ? "visible" : "hidden";
		}
	}
}
	
function onBacklinkClick(obj)
{
	window.parent.postMessage("onBacklinkClick|" + obj.parentNode.parentNode.name, "*");
}

function onScrollBody(obj)
{
	window.parent.postMessage("onIFrameScroll", "*");
}


function createTree()
{
	var lists = document.getElementsByClassName("collapsibleList");

	for (var ulIndex = 0; ulIndex < lists.length; ulIndex++)
	{
		var lis = lists[ulIndex].getElementsByTagName("li");

		for (var liIndex = 0; liIndex < lis.length; liIndex++)
		{
			var nextElemLevel = 1;
			var currElem = lis[liIndex];
			if (liIndex < lis.length - 1)
			{
				nextElemLevel = lis[liIndex + 1].getAttribute("level");
			}
			
			var lvl = currElem.getAttribute("level");
			currElem.style.backgroundPosition = (lvl - 1) * 8 + "px 60%"
			currElem.style.paddingLeft = (lvl - 1) * 8 + 11 + "px"
			if (lvl < nextElemLevel)
			{
				currElem.setAttribute("id", "listsubmenu");
				currElem.onclick = function(event)
				{
					var positionX = event.clientX;

					var newLevel = this.getAttribute("level");
					var clickX = positionX - ((newLevel - 1) * 8 + 11);
					if (clickX < 15)
					{
						var children = getChildren(this);

						if (this.getAttribute("rel") == "closed")
						{
							this.setAttribute("rel", "open");
							this.style.backgroundImage = "url(minus.gif)"
							expandElements(children);
						}
						else
						{
							this.setAttribute("rel", "closed");
							this.style.backgroundImage = "url(plus.gif)"
							collapseElements(children);
						}
					}
				}
			}
		}
	}
}

function expandElements(list)
{
	if (list === null || list.lenght === 0)
	{
		return;
	}
	
	var firstElem = list[0];
	
	if (typeof firstElem === "undefined" || firstElem === null)
	{
		return;
	}
	
	var firstLevel = + firstElem.getAttribute("level");
	for (var i = 0; i < list.length; i++)
	{
		var elem = list[i];
		var currentLevel = + elem.getAttribute("level");
		
		if (firstLevel == currentLevel)
		{
			elem.style.display = "block";
			var relVal = elem.getAttribute("rel");
			
			if (relVal === "open" || relVal === null)
			{
				var children = getChildren(elem);
				expandElements(children);
			}
		}
	}
}

function collapseElements(list)
{
	for (var i = 0; i < list.length; i++)
	{
		list[i].style.display = "none";
	}
}

function getChildren(element)
{
	var found = false;
	var count = 0;
	
	// get all ULs in document
	var lists = document.getElementsByClassName("collapsibleList");	
	
	// find the index of the UL that contains 'element'
	for (var index = 0; index < lists.length; index++)
	{
		count++;
		var lis = lists[index].getElementsByTagName("li");
		for (var i = 0; i < lis.length; i++)
		{
			if (lis[i] == element)
			{
				found = true;
				break;
			}
		}
		if (found)
		{
			break;
		}
	}

	// find all children of 'element' from that particular UL
	lis = lists[count - 1].getElementsByTagName("li");
	found = false;

	var children = [];
	for (var j = 0; j < lis.length; j++)
	{
		if (found)
		{
			if (element.getAttribute("level") < lis[j].getAttribute("level"))
			{
				children.push(lis[j]);
			}
			else
			{
				break;
			}
		}
		
		if (lis[j] == element)
		{
			found = true;
		}
	}
	
	return children;
}