SUMMARY = "Very fast asynchronous FTP server library"
DESCRIPTION = "Very fast asynchronous FTP server library."
HOMEPAGE = "https://github.com/giampaolo/pyftpdlib/"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=809331ad7ea76d32073fb715808083ee"

SRC_URI[md5sum] = "7f8089520d60171bee5dab2b721e8d00"
SRC_URI[sha256sum] = "1adf1c03d1508749e7c2f26dc9850ec0ef834318d725b7ae5ac91698f5c86752"

PYPI_PACKAGE = "pyftpdlib"


PACKAGES =+ "${PN}-test"
FILES_${PN}-zoneinfo = "${libdir}/${PYTHON_DIR}/site-packages/pyftpdlib/test"

RDEPENDS_${PN} += " \
    ${PYTHON_PN}-pyopenssl \
    ${PYTHON_PN}-pysendfile \
"
RDEPENDS_${PN}-tests = "${PN}"
BBCLASSEXTEND = "native nativesdk"
