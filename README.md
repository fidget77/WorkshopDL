[![Banner](https://raw.githubusercontent.com/VovoloGames/WorkshopDL/main/screenshots/banner_opaque_red.png)](https://github.com/VovoloGames/WorkshopDL)

<em>Since most of the popular workshop downloading websites have shutdown or instruct users to download & use SteamCMD, a command-line program,
I've decided to make my own standalone workshop downloader with a GUI to make things easier.</em>
# WorkshopDL [![Version](https://img.shields.io/github/v/tag/VovoloGames/WorkshopDL?label=version&style=flat-square&color=black)](https://github.com/VovoloGames/WorkshopDL/releases) [![GitHub all releases](https://img.shields.io/github/downloads/VovoloGames/WorkshopDL/total?style=flat-square)](https://github.com/VovoloGames/WorkshopDL/releases)
WorkshopDL - A Steam Workshop Downloader

![Screenshot](https://raw.githubusercontent.com/VovoloGames/WorkshopDL/main/screenshots/screenshot1.png)

![Screenshot](https://raw.githubusercontent.com/VovoloGames/WorkshopDL/main/screenshots/screenshot2.png)

![Screenshot](https://raw.githubusercontent.com/VovoloGames/WorkshopDL/main/screenshots/screenshot3.png)

# What is WorkshopDL?
Do you own a game on a different platform than Steam (Like GOG or the Epic Games Store) and you always wanted to use mods from the Steam workshop? WorkshopDL allows you to download mods from the Steam workshop for free! It currently supports more than 900+ games!

## Features
- Very easy to use.
- User-friendly GUI.
- Includes a handy mod installer.
- Includes a Garry's mod, <em>mod</em> unpacker!
- You can download workshop collections!
- You can download both anonymously or using your personal Steam account (Optional).
- You can Import URLs from a text file.
- You can save your mod queue as a text file.
- Auto-URL detection and Auto-Queueing.
- Unlike similar tools, it actually works.
- The program is self-contained. No setups, no bloat.
- It offers multiple ways to download mods. SteamCMD, SteamWebAPI... and more to come!
- Automatically clears leftover files from canceled downloads and corrupted files, that occupy free space.
- Download any mod no matter what it's file size is! (Use the "File>Validate A Mod" option if the mod is 1GB+)

## How To Use
`(You can read more information for various issues, inside WorkshopDL by going at "Help>Support".)`

1. Execute "WorkshopDL.exe"
Do *not* open the "steamcmd.exe" located inside the steamcmd folder.

2. At the "Workshop Homepage" box simply copy & paste, inside the box, the game's workshop homepage URL.
For example, here is a workshop homepage https://steamcommunity.com/app/4000/workshop/.

3. At the "Workshop mod URL" box simply copy & paste, inside the box, the URL of the mod you want to download.

4. Click download.
(Note: The first time it might take longer to download cause SteamCMD is downloading some necessary files.
This will *only* happen on your very first launch.)

5. After the download is completed the folder containing the mod will open on a separate window.
6. Installation of mods differs from game to game.

Note 1: Games that aren't listed here https://steamdb.info/sub/17906/apps/ are not guaranteed to work.

Note 2: If a game does not work, try to download the mods using the AppID (Homepage) of it's dedicated server. You can also try downloading with SteamWebAPI. It works with a lot of SteamCMD unsupported games, usually single-player ones.

## FAQ
Q: Why would I need this?  
>  A: If you own a game on a different platform like GOG or the Epic Games store, you can not download mods for the game, as the majority of mods are locked inside Steam's workshop. So instead of buying the game a second time to access the mods, you can simply use WorkshopDL.

Q: How does this work?  
>  A: It pretty much is a GUI that launches Valve's SteamCMD commandline tool with the needed parameters to download the workshop item you want.  
>
>  As of version 1.4.4 and above, it has a lot more complicated features, like workshop collection support, the ability to download mods using the >SteamWebAPI, a download queue... and the list goes on!

Q: Which games are supported by WorkshopDL?  
>  A: Games listed here https://steamdb.info/sub/17906/apps/ will work with no issues.
Other games might work too, but it is not guaranteed.

Q: Is this safe to use?  
>  A: Yes. It is completely safe! It is impossible to get banned for using this tool.
>If you mean virus-wise, it is clean and open-source! Here is a [VirusTotal scan](https://www.virustotal.com/gui/file/230681883147c5d84e9a019b4494d9fd627a0580ae2e858d1ce3369d17587974) of the latest version.

Q: Why do people plagiarize your FAQ?  
> A: Writing original text, is hard for some people.

# Miscellaneous
[![rin forum](https://img.shields.io/badge/Forum%20Post-cs.rin.ru-darkgray?style=flat-square)](https://cs.rin.ru/forum/viewtopic.php?f=29&t=124583)
[![Virus Total](https://img.shields.io/badge/Virus%20Total%20Scan-v1.6.4%20Clean-brightgreen?style=flat-square)](https://www.virustotal.com/gui/file/230681883147c5d84e9a019b4494d9fd627a0580ae2e858d1ce3369d17587974)

# About the Source Code
You need [Clickteam Fusion 2.5](https://www.clickteam.com/clickteam-fusion-2-5) to open the .mfa file, as WorkshopDL was made using it.

# Donate
If you want, you can donate Steam keys or wallet codes to my email.  
vovologames[at]proton[dot]me  

#
###### <em>WorkshopDL is not affiliated with Valve Corporation or Steam. WorkshopDL is not affiliated with other downloading software.</em>
