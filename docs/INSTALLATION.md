# ArtemisPS3
An Open Source Playstation 3 Hacking System created under the [Project Artemis initiative](http://www.gamehacking.org/artemis)

Your PS3 must be running CFW 3.55 or above (DEX and CEX supported)!
------

Installing Artemis PS3
------
*	Download the [latest Artemis PS3 package](https://github.com/bucanero/ArtemisPS3/releases)
*	Install it onto your PS3 (method to install depends on your CFW)

Installing cheat codes
------
*	Choose between installing the `.ncl` files on a flash drive or in the Artemis installation directory
*	For the flash drive make a new folder on the root called `USERLIST`
	*	Inside the folder place any `.ncl` files inside it
	*	Insert the usb drive into the right usb slot of your PS3 and launch Artemis PS3
*	For the installation directory method launch an FTP server on your PS3 (multiman)
	*	Navigate to `/dev_hdd0/game/ARTPS3001/USRDIR/USERLIST/`
	*	Place any `.ncl` files inside the folder and launch Artemis PS3

Using Artemis
-----
*	Launch Artemis from the XMB and selected your codes
*	Once you have selected your codes Press **X** on Start in the main menu
*	You should hear a single beep (if you hear three MAMBA failed to install)
*	From here you can launch the game or launch homebrew to mount the game
*	When the game has launched, a notification will appear telling you to `press Start to attach`
*	Once you are ready to use your codes in the game, open the in game XMB by pressing the PS button
*	HOLD **Start** until Artemis says that it has attached
*	At this point any codes chosen to constant write will be constantly writing
*	For any single write codes you wish to write again, just enter the in game XMB again and hold **Start**
*	If you wish the detatch (and therefore stop constant writing), enter the in game XMB and HOLD **Select**

Creating cheat lists (.ncl)
-----
*	NetCheat List Files are built into NetCheat PS3
*	Download and run [NetCheatPS3](http://netcheat.gamehacking.org/ncUpdater/ncUpdateDir.zip)
*	In the codes tab create a new code and name it as you wish
*	Within the textbox enter any NetCheat PS3 codes (or use the Codelist by clicking the square on the bottom left)
*	Finally click Save All and specify a save location for the new .ncl

Creating advanced cheat lists (.ncl)
-----
	New in Artemis PS3 is the ability to add option tags.
	These tags enable you to specify options for a code that has multiple effects for one address.
	Using tags instead of multiple codes condenses the overall cheats list.
	The format for an option tag is very specific and must be used exactly as described.
	A tag begin with brackets that surround an ID ([Z]).
	This ID must be a collection of capital Z's.
	For instance, a tag such as [ZZZZ] has an ID of ZZZZ. [zz] is not a valid ID.
	Following the opening tag are the elements, or options.
	Each element begins with the value that the option represents, an equal sign (=), and the name of the option.
	Elements are separated by semicolons (;).
	So right now an option tag would look something like this: [ZZ]0010=This is 0x10;0020=This is 0x20
	But now we have to end the tag. To end an option tag you simply add a forward slash (/) in front of the ID and surround 			that with brackets ([/Z]).
	Finally to actually implement this as a value for a code, simply put the ID of the tag anywhere in the code you'd like.
	For instance, in Jak 1 there are 4 different types of eco states you can be in. Red, blue, green, and yellow.
	Each uses the same line. So the appropriate code using option tags would be:
	0 201FEE08 ZZ
	0 201FEE18 FFFFFF7F
	0 201FEE0C 00000040
	[ZZ]01=Yellow;02=Red;03=Blue;04=Green[/ZZ]
