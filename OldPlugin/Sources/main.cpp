#include "cheats.hpp"

namespace CTRPluginFramework
{
    void PatchProcess(FwkSettings &settings) { }

    int main()
    {
        PluginMenu *menu = new PluginMenu("DarkFlare's MK7 NTR Plugin", 3, 5, 1);
        menu->SynchronizeWithFrame(true);

		MenuFolder *kartcodes = nullptr, *speedcodes = nullptr, *itemcodes = nullptr, *coursecodes = nullptr, *menucodes = nullptr, *gamemodes = nullptr, *regioncodes = nullptr;

        kartcodes = new MenuFolder("Kart Codes");
		kartcodes->Append(new MenuEntry("Invincibility", invincible, "You will be invincible. You will also appear blinking on other people's screens online."));
		kartcodes->Append(new MenuEntry("Aimbot", aimbot, "You will be invincible. You will also appear blinking on other people's screens online."));
		kartcodes->Append(new MenuEntry("Always Star Power", alwaysStarPower, "You will always have star effects, such as invincibility and color."));
		kartcodes->Append(new MenuEntry("Always Black Kart", alwaysBlackKart, "Your kart will be black as if you got bloopered."));
		kartcodes->Append(new MenuEntry("Always Shocked", alwaysShocked, "Your kart will always be small as if you got shocked."));
		kartcodes->Append(new MenuEntry("Always Crushed", alwaysCrushed, "Your kart will always be flat as if you got crushed. This is only visible on opponents screens online. On your screen, you'll appear normally."));
		kartcodes->Append(new MenuEntry("Trick Anywhere", trickAnywhere, "You will be able to perform a trick anywhere by pressing R."));
		kartcodes->Append(new MenuEntry("Instant MiniTurbo", instantMT, "You will instantly get red and blue MiniTurbos when drifting."));
		kartcodes->Append(new MenuEntry("Huge Bunnyhop", hugeBunnyhop, "You will jump very high when hopping before a drift."));
		kartcodes->Append(new MenuEntry("Size Changer", sizeChanger, "Your kart will constantly increase and decrease in size. Use D-Pad Left and D-Pad Right to change the speed at which your kart will change size. This code can cause problems sometimes."));
        menu->Append(kartcodes);
		
		speedcodes = new MenuFolder("Speed & Movement Codes");
		speedcodes->Append(new MenuEntry("200cc", TwoHundredCC, "You will go 200cc speeds. Restart the race after applying the code for the effect to take place."));
		speedcodes->Append(new MenuEntry("500cc", FiveHundredCC, "You will go 500cc speeds. Restart the race after applying the code for the effect to take place."));
		speedcodes->Append(new MenuEntry("Instant Acceleration", instantAcceleration, "Your kart will instantly accelerate to the maximum speed when pressing A."));
		speedcodes->Append(new MenuEntry("Instant Backwards Acceleration", instantBackAcceleration, "Your kart will instantly accelerate to it's maximum reverse speed when pressing B."));
		speedcodes->Append(new MenuEntry("Instant Stop", instantStop, "Your kart will instantly come to a complete stop when pressing A+B."));
		speedcodes->Append(new MenuEntry("Fast Reverse Speeds", fastReverse, "You will reverse at higher speeds than before when holding B."));
		speedcodes->Append(new MenuEntry("Inside Drifing Kart", insideDrift, "Your kart will drift inwards, like certain bikes did in Mario Kart Wii."));
		speedcodes->Append(new MenuEntry("Stalking Hack (See Note)", stalking, "-Y + Right = Increase\n-Y + Left = Decrease\n-Y + Up = Stalk the player until code is disabled\n-Hold Y to stalk the player temporarily, release Y to stop stalking\n-Y + Down = Disable Code"));
		speedcodes->Append(new MenuEntry("Touch Screen Teleporter", TouchCode, "Touch the bottom screen or drag your stylus across it to warp your kart to that position on the map!"));
		speedcodes->Append(new MenuEntry("Moonjump (See Note)", moonjump, "-Start + R = Enable"));
		speedcodes->Append(new MenuEntry("Drive Anywhere (See Note)", driveAnywhere, "-Start = Disable\n-Select = Enable\n-Select + Up = Go Up\n-Select + Down = Go Down"));
		speedcodes->Append(new MenuEntry("Save Slot Teleporter (See Note)", saveSlotTeleporter, "-Start + X = Save Current Position\n-Start + Y = Load Saved Position"));
		menu->Append(speedcodes);
		
		itemcodes = new MenuFolder("Item Codes");
		itemcodes->Append(new MenuEntry("Item Wheel (See Note)", itemWheel, "-X = Bullet\n-Y = Tanooki\n-Start = Blue Shell\n-Select = Lightning\n-D-Pad Left = Lucky 7\n-D-Pad Right = Red Shell\n-D-Pad Up = Green Shell\n-D-Pad Down = Bob-Omb"));
		itemcodes->Append(new MenuEntry("Always Have Certain Item", SetItem, "A keyboard will come up when you exit the menu and you will be allowed to enter your item ID. You can get these from the MK7 NTR Plugin GBAtemp thread."));
		itemcodes->Append(new MenuEntry("Cycle Completely Random Item", randomItems, "You will be constantly given a random item."));
		itemcodes->Append(new MenuEntry("Truly Random Items", trulyRandomItems, "Items will be completely random, regardless of your position. The bottom screen item icon will tell you the item you were supposed to recieve, while the top screen item icon will tell you the purely random item you recieved."));
		itemcodes->Append(new MenuEntry("Drop Mushrooms (See Note)", dropMushrooms, "This code replaces green shells with droppable mushrooms. Throw a 'green shell' to drop a mushroom."));
		itemcodes->Append(new MenuEntry("Fast Blue Shell", fastBlueShell, "Blue shells will go very fast."));
		itemcodes->Append(new MenuEntry("Stopped Blue Shell", stoppedBlueShell, "Blue shells will not move after being thrown."));
		itemcodes->Append(new MenuEntry("Fast Green Shell", fastGreenShell, "Green shells will go very fast."));
		itemcodes->Append(new MenuEntry("Stopped Green Shell", stoppedGreenShell, "Green shells will not move after being thrown."));
		itemcodes->Append(new MenuEntry("Control Bullet (See Note)", bulletControl, "You will be able to control your bullets.")); // make sure to update this with the controls after adding controls to bullet
		itemcodes->Append(new MenuEntry("Bullet Speed Modifier (See Note)", bulletSpeed, "-X = Very Fast\n-B = Stopped\n-A = Normal Speed"));
		itemcodes->Append(new MenuEntry("Blue Shell Ride (See Note)", blueShellRide, "-D-Pad Left = Enable\nYou will warp to a blue shell and ride it."));
		itemcodes->Append(new MenuEntry("Disable Star Music", disableStarMusic, "The star music won't play when you're in a star."));
		menu->Append(itemcodes);

		coursecodes = new MenuFolder("Course Codes");
		coursecodes->Append(new MenuEntry("CPU Brawl", cpuBrawl, "The CPU will on top of each other, fighting."));
		coursecodes->Append(new MenuEntry("Max Timer", maxTimer, "The timer will freeze at 4:59.9xx."));
		coursecodes->Append(new MenuEntry("Water Everywhere", waterEverywhere, "You will always be underwater."));
		menu->Append(coursecodes);

		menucodes = new MenuFolder("Menu Codes");
		menucodes->Append(new MenuEntry("No Countdown", noCountdown, "You will be able to drive when the countdown normally would be happening."));
		menucodes->Append(new MenuEntry("Spedometer", spedometer, "Spedometer will appear."));
		menucodes->Append(new MenuEntry("Disable First Person View", disableFirstPersonView, "You will not be able to activate first person view by pressing Up on the D-Pad."));
		menucodes->Append(new MenuEntry("No Disconnect", NoDC, "You will not get disconnected unless the cause of the disconnection is an actual network problem."));
		menucodes->Append(new MenuEntry("Fast Game/Anti-Matrix", fastGame, "The game will move at a very fast speed. Unstable, use at your own risk!"));
		menucodes->Append(new MenuEntry("Live Time Trial Ghost Replay", timeTrialGhost, "This code will let you view any ghost. Please follow these steps:\n1. Activate this code and then enter the time trial with the ghost you want to view.\n2. Your kart will be out of bounds. Restart the race.\n3. Done! The code should be working."));
		menucodes->Append(new MenuEntry("Send Custom Community Message", customMessage, "When you hold D-Pad Left while sending a message in a community, it will replace your message with the message ID that you enter."));
		menucodes->Append(new MenuEntry("VR Extender (See Note)", vrExtender, "-Start = 999999\n-Select = 420000\n-D-Pad Down = 0\n-D-Pad Up = 696969\n-D-Pad Right = 666666\n-D-Pad Left = 777777"));
		menucodes->Append(new MenuEntry("Set Custom VR", SetVR, "A keyboard will come up when you exit the menu and you will be allowed to enter your desired VR, between 0 and 999999 (Be sure to enter values in hexadecimal)"));
		menucodes->Append(new MenuEntry("Random VR", randomVR, "A random VR value will be generated."));
		menucodes->Append(new MenuEntry("Unlock Everything", unlockEverything, "Everything will be unlocked. After enabling, save the game by completing a time trial or something, exit the game, and open it again. At this point everything should be permanently unlocked."));
		menu->Append(menucodes);

		gamemodes = new MenuFolder("Custom Game Modes");
		//gamemodes->Append(new MenuEntry("Shine Thief", shineTheif, shineTheif_note));
		//gamemodes->Append(new MenuEntry("Tag", tagMode, tagMode_note));
		gamemodes->Append(new MenuEntry("Elimination Mode", eliminationMode, "Every 30 seconds, the player in last place will be eliminated. The last player standing wins! This mode works best in rooms with more players."));
		gamemodes->Append(new MenuEntry("Countdown Mode", CountdownMode, "You will have 2 minutes to race. Every time you hit a player with an item, your time will increase by 3 seconds. You will need to strategically gain more time while still being towards the front of the pack. The player in first place when everyone's time runs out wins!"));
		gamemodes->Append(new MenuEntry("Drivable 200cc", TwoHundredCCStable, "This version of 200cc has fast falling when pressing B while in the air, brake drifting by pressing B during drifts (also works in boosts), and drifting at lower speeds and in off road."));
		gamemodes->Append(new MenuEntry("Drivable 500cc", FiveHundredCCStable, "This version of 500cc has fast falling when pressing B while in the air, brake drifting by pressing B during drifts (also works in boosts), and drifting at lower speeds and in off road."));
		menu->Append(gamemodes);

		regioncodes = new MenuFolder("Region & Flag Codes");
		regioncodes->Append(new MenuEntry("Set Custom Flag", SetFlag, "A keyboard will come up when you exit the menu and you will be allowed to enter your desired flag ID (in hexadecimal). You can get these from the MK7 NTR Plugin GBAtemp thread."));
		regioncodes->Append(new MenuEntry("Set Custom Globe Coordinates", SetCoordinates, "A keyboard will come up when you exit the menu and you will be allowed to enter your desired coordinates. You can get these from the MK7 NTR Plugin GBAtemp thread."));
		menu->Append(regioncodes);

        menu->Run();
        return 0;
    }
}