--- headless/lib/browser/headless_content_browser_client.h.orig	2019-03-11 22:00:59 UTC
+++ headless/lib/browser/headless_content_browser_client.h
@@ -34,7 +34,7 @@ class HeadlessContentBrowserClient : public content::C
       ::storage::OptionalQuotaSettingsCallback callback) override;
   content::GeneratedCodeCacheSettings GetGeneratedCodeCacheSettings(
       content::BrowserContext* context) override;
-#if defined(OS_POSIX) && !defined(OS_MACOSX)
+#if defined(OS_POSIX) && !defined(OS_MACOSX) && !defined(OS_BSD)
   void GetAdditionalMappedFilesForChildProcess(
       const base::CommandLine& command_line,
       int child_process_id,
