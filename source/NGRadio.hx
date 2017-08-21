package;

import flixel.FlxG;
import flixel.FlxState;
import flixel.addons.ui.FlxUIDropDownMenu;
import flixel.system.FlxSound;
import haxe.EnumTools;

/**
 * ...
 * @author ninjaMuffin
 */
class NGRadio extends FlxState 
{
	var snd:FlxSound;
	
	private var _currentStation:StationType = HIPHOP;
	
	override public function create():Void 
	{
		//This stuff plays radio!
		
		snd = new FlxSound();
		
		
		snd.play();
		
		dropDownStuff();
		
		startMusic();
		
		super.create();
	}
	
	private function startMusic():Void
	{
		switch (_currentStation)
		{
			case EASY:
				snd.loadStream("http://radio-stream01.ungrounded.net/easylistening", false, false);
			case ELECTRONIC:
				snd.loadStream("http://radio-stream01.ungrounded.net/electronic", false, false);
			case HEAVYMETAL:
				snd.loadStream("http://radio-stream01.ungrounded.net/heavymetal", false, false);
			case HIPHOP:
				snd.loadStream("http://radio-stream01.ungrounded.net/hiphop", false, false);
			case NGMIX:
				snd.loadStream("http://radio-stream01.ungrounded.net/ngmix", false, false);
			case PODCASTS:
				snd.loadStream("http://radio-stream01.ungrounded.net/podcasts", false, false);
			case ROCK:
				snd.loadStream("http://radio-stream01.ungrounded.net/rock", false, false);
		}
		snd.play();
	}
	
	private function dropDownStuff():Void
	{
		var stations:Array<String> = 
			["Easy Listening", "Electronic", "Heavy Metal", "Hip Hop", "NG Mix", "Podcasts", "Rock"];
		
		var stationDropDown = new FlxUIDropDownMenu(100, 100, FlxUIDropDownMenu.makeStrIdLabelArray(stations, true), onStationChange);
		add(stationDropDown);
	}
	
	private function onStationChange(ID:String):Void
	{
		_currentStation = EnumTools.createByIndex(StationType, Std.parseInt(ID));
		startMusic();
	}
	
	override public function update(elapsed:Float):Void 
	{
		//these dont do shit
		FlxG.watch.add(snd, "artist");
		FlxG.watch.add(snd, "name");
		FlxG.watch.add(this, "_currentStation");
		super.update(elapsed);
	}
	
}

enum StationType
{
	EASY;
	ELECTRONIC;
	HEAVYMETAL;
	HIPHOP;
	NGMIX;
	PODCASTS;
	ROCK;
}
	
