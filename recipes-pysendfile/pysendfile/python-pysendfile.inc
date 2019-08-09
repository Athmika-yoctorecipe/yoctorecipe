SUMMARY = "A Python interface to sendfile(2)"
DESCRIPTION = "A Python interface to sendfile(2)"
HOMEPAGE = "https://github.com/giampaolo/pysendfile"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=b8eec2f0885ebe1362d0bdb1617f61b5"

SRC_URI[md5sum] = "e7b301eddd703ab74a48c59a8fda1f97"
SRC_URI[sha256sum] = "510a414b270986fba3c79cb76d90a4c910c701bfb43ff983a5d4e92846050e17"

PYPI_PACKAGE = "pysendfile"


PACKAGES =+ "${PN}-test"
FILES_${PN}-zoneinfo = "${libdir}/${PYTHON_DIR}/site-packages/test"

RDEPENDS_${PN}-test = "${PN}"
BBCLASSEXTEND = "native nativesdk"
