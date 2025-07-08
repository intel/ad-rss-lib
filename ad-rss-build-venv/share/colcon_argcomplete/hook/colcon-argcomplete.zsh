autoload -U +X compinit && compinit
autoload -U +X bashcompinit && bashcompinit
if type register-python-argcomplete3 > /dev/null 2>&1; then
  eval "$(register-python-argcomplete3 colcon)"
elif type register-python-argcomplete > /dev/null 2>&1; then
  eval "$(register-python-argcomplete colcon)"
fi
