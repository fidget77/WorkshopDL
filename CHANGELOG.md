```
Version 1.4.1
[*] Removed legacy code.
[*] Auto-Try is now enabled by default.
[*] Various minor fixes and optimizations.

Version 1.4.0
[*] Fixed a bug where it wouldn't download mods if you hadn't used a prior version.
[*] Added a menu option that opens the download folder of 3rd party downloads. (Not SteamCMD downloads.)
[! ] The 3rd Download Provider option has a lot of issues lately. I would suggest not bothering with it. I did not remove it because sometimes it works.

Version 1.3.9
[*] Mods downloaded with "steamusercontent-a.akamaihd.net" are now downloaded from WorkshopDL and renamed automatically.
[*] Upgraded the engine to Clickteam Fusion 2.5 (Build 294.3 - BETA) which improved startup speeds on some older machines.

Version 1.3.8
[*] Added a new method of grabbing mods.
[*] Added an option to auto-try other providers if your selected one fails.
[*] The auto-try option will now skip workshop.abcvg.info due to some issues.
[! ] If have checked the Auto-Try option and it starts downloading the mod from your browser, you must rename it to the string that automatically got into your clipboard. Simply use ctrl+v when renaming it.
[! ] About the Download Providers. You should only use other providers than SteamCMD if the game is not supported.
I suggest trying "steamusercontent-a.akamaihd.net" if SteamCMD does not work.

Version 1.3.7
[*] Added again the ability to download files through steamworkshop.download 's network.
[*] Made the whole 3rd party download experience user-friendly.
[*] Added a progress bar when downloading files within WorkshopDL.
[*] Added according error messages.
[! ] You can change your "Download Provider" by going to Options>Download Provider and selecting the one you want to use.
Alternatively you can right-click and change it from the popup menu.
[! ] I suggest using other download providers only with unsupported games.

Version 1.3.6
[*] Updated the supported games list.
[*] When hovering over the "(?)" icon, the tooltip will include the number of supported games (918 games by the time I'm writing this).
[*] Added a new error message.
[*] Other minor changes.
[*] ...Oh and also, added a very cool easter egg which can be accessed by right clicking on the version number :-)
[! ] As for the 3rd party download support, I might add it again on future versions when I improve it a bit.

Version 1.3.5
[*] Added an option to enable downloading using a third-party website. (The default is http://steamworkshop.download/download/view/{ID})
[*] To download using a third-party website, check "Options>Enable "Right click" download using Third-Party site". Then right-click on the download button to download the mod through the sites network. I suggest using this only to download unsupported games.
[! ] This does not work with collections or the mod lists sadly. You can only download a single mod using this method.

Version 1.3.4
[*] Fixed my older implementation of collection ID grabbing.
[*] Removed swd.
[! ] Sometimes when importing a workshop collection, it states that there are 2~3 more mods to download. This is just a visual bug.
[! ] When downloading large collections a few mods might timeout. For the time being, if this happens, just download those mods manually.

Version 1.3.3
[*] Changed the workshop ID grabber to a workshop collection downloader, that should now work as intentend.
[*] The workshop downloader is using swd (https://github.com/changhe3/swd) to download workshop collections.

Version 1.3.2
[*] Labeled the workshop ID grabber as experimental. It is currently inconsistent across different games.
[*] Improved the workshop ID grabber to have the least amount of skips. (It usually skips around 3~7 mods on 100+ mod collections.)
[*] Added a debug mode. To enable it add debug=1 on your config file under [Menu_Bar]. To disable it remove debug=1.
[*] Fixed the icon.

Version 1.3.1
[*] Fixed the workshop collection ID grabber.
[*] Removed older releases, that had common issues, to reduce bloat.

Version 1.3.0
[*] It now supports all collection sizes without crashing!

Version 1.2.9
[*] Changed the ZipObject module to fix false-positives from malwarebytes. Everything else is the same as version 1.2.8.

Version 1.2.8
[*] Fixed the crash when using the collection ID grabber on collections with more than 500 mods. It still crashes on 600+ mod collections.

Version 1.2.7
[*] Fixed some issues.
[*] Removed unstable releases.

Version 1.2.6
[*] Fixed the URL import that broke with version 1.2.5.
[*] steamcmd.exe is now downloaded from Valve instead of being bundled with WorkshopDL. There is no real need to upgrade to 1.2.6 if you use 1.2.5 as everything else is the same.

Version 1.2.5
[*] Fixed the workshop collection ID grabber. It now works as intended.

Version 1.2.4
[*] Added the ability to download workshop collections! (File>Get IDs from collection)
[*] You can now save your mod queue to a .txt file, by right clicking and selecting the save as .txt option.
[*] The mod queue now displays the number of mods in it.
[*] Fixed some visual bugs.

Version 1.2.2
[*] Added an indication of which account is being used, at the bottom right corner.
[*] You can click on said indication, to switch between your Steam account and the anonymous mode.

Version 1.2.1
[*] Fixed typos.

Version 1.2.0
[*] Improved the Steam account integration.
[*] Added more options for troubleshooting.
[*] Bundled the source code with the release.
[*] Fixed a bunch of boring stuff.

Version 1.1.7
[*] Fixed a bug that occured when booting up the program for the first time.

Version 1.1.6
[*] Fixed a minor bug introduced in the 1.1.5 update.

Version 1.1.5
[*] Improved the multiple downloads algorithm. (Thanks @m4rcks98!)
[*] Added an option to use your Steam account for downloads. (Thanks again @m4rcks98 for the suggestion.)

Version 1.1.4
[*] Fixed the import algorithm.
[*] Hopefully fixed the False-positive detection from Malwarebytes.

Version 1.1.3
[*] Added a menu option to import mod URLs form a text file. (File>Import URLs from text file). Thanks to @FallenBerserk for the suggestion!

Version 1.1.2
[*] Added a download queue/list. This way you can download multiple mods at once.
[*] Added an option to enable Auto-Queueing. (Options>Auto add Workshop URLs to download queue/list)
Auto-Queueing, automatically adds workshop mod urls from your clipboard to the download queue.
[*] Replaced the 2nd "Visit" button with an "Add To List" button which adds the mod to the download queue/list.
[*] Fixed some logic errors with the url detection.
[*] Added a hover highlight on the edit boxes.
[*] General fixes and imrpovements.

Version 1.1.0
[*] Added a droplist with a search function, that includes all supported games. (Games not listed there can also work, but it is not guaranteed.)
[*] Improved the UI and some other stuff.
[*] Added a right-click context menu.
[*] Removed non-stable releases.

Version 1.0.3
[*] Optimized the code making everything run slightly faster.
[*] Optimized the URL detection algorithm, reducing unnecessary loops.
[*] Reduced the file size due to said optimizations.
[*] Changed the button placement.
[*] Changed the icon.
[*] Other minor changes and improvements.

Version 1.0.2
[*] Fixed Malwarebytes false-positive detection of "MachineLearning/Anomalous.94%". (It was caused due to their experimental AI scanning. It detected the "SimpleMsgBox.mfx" module as a suspicious one. "SimpleMsgBox.mfx", as it's name suggests, was used to display windows-like message boxes, to inform the user about the download status and for any other errors that might had occur. I have now replaced it with a better solution that does not trigger false-positives.)
[*] Improved the message boxes by adding (?,!) icons and the playback of windows native error sound.
[*] The download folder now appears on top of the message box thus making installing mods, faster.
[*] Fixed typos.

Version 1.0.1
[*] Added an option to enable Steam Workshop URL Auto-detection. (Options>Detect Workshop URLs from clipboard)
[*] Added a way to access the main download folder. (File>Downloads Folder)
[*] Added helpful tooltips when hovering over buttons and texts.
[*] The version text on the bottom right, now directs to this post.
[*] Changed the window size to 512x250 from 500x250
[*] Added clear buttons to delete entries.
[*] Added new error messages.

Version 1.0.0
[*] Initial release.
```
