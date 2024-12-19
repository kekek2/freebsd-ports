--- misc/e2fuzz.c.orig	2024-05-21 02:52:47 UTC
+++ misc/e2fuzz.c
@@ -277,8 +277,8 @@ static int process_fs(const char *fsname)
 			c |= 0x80;
 		if (verbose)
 			printf("Corrupting byte %lld in block %lld to 0x%x\n",
-			       off % fs->blocksize,
-			       off / fs->blocksize, c);
+			       (long long)off % fs->blocksize,
+			       (long long)off / fs->blocksize, c);
 		if (dryrun)
 			continue;
 #ifdef HAVE_PWRITE64
