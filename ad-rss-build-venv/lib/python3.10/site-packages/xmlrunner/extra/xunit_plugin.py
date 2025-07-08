import io
import lxml.etree as etree


TRANSFORM = etree.XSLT(etree.XML(b'''\
<?xml version="1.0" encoding="UTF-8"?>
<xsl:stylesheet xmlns:xsl="http://www.w3.org/1999/XSL/Transform" version="2.0">
    <xsl:output method="xml" indent="yes" />

    <!-- /dev/null for these attributes -->
    <xsl:template match="//testcase/@file" />
    <xsl:template match="//testcase/@line" />
    <xsl:template match="//testcase/@timestamp" />

    <!-- copy the rest -->
    <xsl:template match="node()|@*">
        <xsl:copy>
            <xsl:apply-templates select="node()|@*" />
        </xsl:copy>
    </xsl:template>
</xsl:stylesheet>'''))


def transform(xml_data):
    out = io.BytesIO()
    xml_doc = etree.XML(xml_data)
    result = TRANSFORM(xml_doc)
    result.write(out)
    return out.getvalue()
