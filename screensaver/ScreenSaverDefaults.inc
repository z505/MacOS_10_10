{ Parsed from ScreenSaver.framework ScreenSaverDefaults.h }


{$ifdef TYPES}
type
  ScreenSaverDefaultsPtr = ^ScreenSaverDefaults;
{$endif}

{$ifdef CLASSES}

type
  ScreenSaverDefaults = objcclass external (NSUserDefaults)
  private
    _defaults: NSMutableDictionary;
    _registeredDefaults: NSMutableDictionary;
    _userName: NSString;
    _domainName: NSString;
    _dirty: boolean;
    _screenLockPrefChanged: boolean;
  public
    class function defaultsForModuleWithName (inModuleName: NSString): id; message 'defaultsForModuleWithName:';
  end;
{$endif}

