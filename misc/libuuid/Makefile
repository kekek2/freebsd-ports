PORTNAME=	libuuid
PORTVERSION=	1.3.0
CATEGORIES=	misc
MASTER_SITES=	KERNEL_ORG/linux/utils/util-linux/v${UTIL_LINUX_PORTVERSION:R}/
DISTNAME=	util-linux-${UTIL_LINUX_PORTVERSION}

MAINTAINER=	kekek2@ya.ru
COMMENT=	Library generates and parses 128-bit Universally Unique IDs (UUIDs)
WWW=		https://git.kernel.org/cgit/utils/util-linux/util-linux.git

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/Documentation/licenses/COPYING.BSD-3-Clause

USES=		bison meson pkgconfig tar:xz
USE_LDCONFIG=	yes

MESON_ARGS=	--auto-features=disabled -Dbuild-libuuid=enabled -Dprogram-tests=false

OPTIONS_DEFINE=	DOCS NLS
OPTIONS_SUB=	yes
DOCS_BUILD_DEPENDS=	asciidoctor:textproc/rubygem-asciidoctor
NLS_USES=	gettext

UTIL_LINUX_PORTVERSION=	2.40.2

.include <bsd.port.mk>
