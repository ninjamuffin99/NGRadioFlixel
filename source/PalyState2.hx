package;

import flixel.FlxG;
import flixel.FlxState;
import flixel.system.FlxSound;

/**
 * ...
 * @author ninjaMuffin
 */
class PalyState2 extends FlxState 
{
	var snd:FlxSound;
	override public function create():Void 
	{
		//This stuff plays radio!
		
		snd = new FlxSound();
		snd.loadStream("http://radio-stream01.ungrounded.net/hiphop", false, false);
		
		snd.play();
		
		super.create();
	}
	
}