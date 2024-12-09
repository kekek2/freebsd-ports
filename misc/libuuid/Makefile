PORTNAME=	libuuid
PORTVERSION=	1.3.0
CATEGORIES=	misc
DISTNAME=	util-linux-${UTIL_LINUX_PORTVERSION}

MAINTAINER=	kekek2@ya.ru
COMMENT=	Library generates and parses 128-bit Universally Unique IDs (UUIDs)
WWW=		https://git.kernel.org/cgit/utils/util-linux/util-linux.git

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/Documentation/licenses/COPYING.BSD-3-Clause

USES=		bison meson pkgconfig tar:xz
USE_LDCONFIG=	yes
USE_GITHUB=	yes
GH_ACCOUNT=	kekek2
GH_PROJECT=	util-linux
GH_TAGNAME=	aab4518d081613c370cbcac81ecbdfb4a0d55aeb

MESON_ARGS=	--auto-features=disabled -Dbuild-libuuid=enabled -Dprogram-tests=false

OPTIONS_DEFINE=	DOCS NLS
OPTIONS_SUB=	yes
DOCS_BUILD_DEPENDS=	asciidoctor:textproc/rubygem-asciidoctor
NLS_USES=	gettext

UTIL_LINUX_PORTVERSION=	2.40.2

.include <bsd.port.mk>
