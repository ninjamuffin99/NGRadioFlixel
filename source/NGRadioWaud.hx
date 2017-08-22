package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.math.FlxMath;

class PlayState extends FlxState
{
	
	override public function create():Void
	{
		//Using Waud to load radio, only works in HTML5
		
		Waud.init();
		Waud.autoMute();
		
		//var snd = new WaudSound("http://ice-sov.musicradio.com/SmoothUKMP3", { autoplay:true, webaudio:false });
		var snd = new WaudSound("http://radio-stream01.ungrounded.net/hiphop", { autoplay:true, webaudio:false });
		
		snd.play();
		
		super.create();
	}

	override public function update(elapsed:Float):Void
	{
		super.update(elapsed);
	}
}
