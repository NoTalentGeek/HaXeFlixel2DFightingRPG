package lime;


import lime.utils.Assets;


class AssetData {

	private static var initialized:Bool = false;
	
	public static var library = new #if haxe3 Map <String, #else Hash <#end LibraryType> ();
	public static var path = new #if haxe3 Map <String, #else Hash <#end String> ();
	public static var type = new #if haxe3 Map <String, #else Hash <#end AssetType> ();	
	
	public static function initialize():Void {
		
		if (!initialized) {
			
			path.set ("assets/sounds/sounds-go-here.txt", "assets/sounds/sounds-go-here.txt");
			type.set ("assets/sounds/sounds-go-here.txt", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/tiled/Map1.tmx", "assets/tiled/Map1.tmx");
			type.set ("assets/tiled/Map1.tmx", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/tiled/PROTOTYPE/coin.png", "assets/tiled/PROTOTYPE/coin.png");
			type.set ("assets/tiled/PROTOTYPE/coin.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/tiled/PROTOTYPE/decorations/capa01_B.png", "assets/tiled/PROTOTYPE/decorations/capa01_B.png");
			type.set ("assets/tiled/PROTOTYPE/decorations/capa01_B.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/tiled/PROTOTYPE/decorations/capa01_A.png", "assets/tiled/PROTOTYPE/decorations/capa01_A.png");
			type.set ("assets/tiled/PROTOTYPE/decorations/capa01_A.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/tiled/PROTOTYPE/logo.png", "assets/tiled/PROTOTYPE/logo.png");
			type.set ("assets/tiled/PROTOTYPE/logo.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/tiled/PROTOTYPE/level.tmx", "assets/tiled/PROTOTYPE/level.tmx");
			type.set ("assets/tiled/PROTOTYPE/level.tmx", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/tiled/PROTOTYPE/level.png", "assets/tiled/PROTOTYPE/level.png");
			type.set ("assets/tiled/PROTOTYPE/level.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/tiled/spr0002.png", "assets/tiled/spr0002.png");
			type.set ("assets/tiled/spr0002.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/data/data-goes-here.txt", "assets/data/data-goes-here.txt");
			type.set ("assets/data/data-goes-here.txt", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/images/spr0001.png", "assets/images/spr0001.png");
			type.set ("assets/images/spr0001.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/images-go-here.txt", "assets/images/images-go-here.txt");
			type.set ("assets/images/images-go-here.txt", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/music/music-goes-here.txt", "assets/music/music-goes-here.txt");
			type.set ("assets/music/music-goes-here.txt", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/images/spr0001.png", "assets/images/spr0001.png");
			type.set ("assets/images/spr0001.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("flixel/sounds/beep.ogg", "flixel/sounds/beep.ogg");
			type.set ("flixel/sounds/beep.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("flixel/sounds/flixel.ogg", "flixel/sounds/flixel.ogg");
			type.set ("flixel/sounds/flixel.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("flixel/fonts/nokiafc22.ttf", "flixel/fonts/nokiafc22.ttf");
			type.set ("flixel/fonts/nokiafc22.ttf", Reflect.field (AssetType, "font".toUpperCase ()));
			path.set ("flixel/fonts/monsterrat.ttf", "flixel/fonts/monsterrat.ttf");
			type.set ("flixel/fonts/monsterrat.ttf", Reflect.field (AssetType, "font".toUpperCase ()));
			path.set ("flixel/images/ui/button.png", "flixel/images/ui/button.png");
			type.set ("flixel/images/ui/button.png", Reflect.field (AssetType, "image".toUpperCase ()));
			
			
			initialized = true;
			
		} //!initialized
		
	} //initialize
	
	
} //AssetData
