{ Parsed from AppKit.framework NSColorWell.h }


{$ifdef TYPES}
type
  NSColorWellPtr = ^NSColorWell;
{$endif}

{$ifdef CLASSES}

type
  NSColorWell = objcclass external (NSControl)
  private
    _color: NSColor;
    _reserved: id;
    _reserved2: SEL;
    __cwFlags: bitpacked record
      case byte of
        0: (_anonBitField___cwFlags0: cuint);
        1: (
          isActive: 0..1;
          isBordered: 0..1;
          cantDraw: 0..1;
          isNotContinuous: 0..1;
          refusesFR: 0..1;
          reservedColorWell: 0..((1 shl 27)-1);
        );
      end;
  public
    procedure deactivate; message 'deactivate';
    procedure activate (exclusive: boolean); message 'activate:';
    function isActive: boolean; message 'isActive';
    procedure drawWellInside (insideRect: NSRect); message 'drawWellInside:';
    procedure setBordered(newValue: boolean); message 'setBordered:';
    function isBordered: boolean; message 'isBordered';
    procedure takeColorFrom (sender: id); message 'takeColorFrom:';
    procedure setColor(newValue: NSColor); message 'setColor:';
    function color: NSColor; message 'color';
  end;
{$endif}

