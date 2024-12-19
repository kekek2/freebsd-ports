--- lib/env.c.orig	2024-12-18 06:12:52 UTC
+++ lib/env.c
@@ -22,10 +22,6 @@
 #include "strv.h"
 #include "all-io.h"
 
-#ifndef HAVE_ENVIRON_DECL
-extern char **environ;
-#endif
-
 static char * const forbid[] = {
         "BASH_ENV=",    /* GNU creeping featurism strikes again... */
         "ENV=",
@@ -212,6 +208,7 @@ void env_list_free(struct ul_env_list *ls)
 	}
 }
 
+#ifdef HAVE_ENVIRON_DECL
 /*
  * Removes unwanted variables from environ[]. If @org is not NULL than stores
  * unwnated variables to the list.
@@ -257,6 +254,7 @@ void sanitize_env(void)
 {
 	__sanitize_env(NULL);
 }
+#endif
 
 char *safe_getenv(const char *arg)
 {
