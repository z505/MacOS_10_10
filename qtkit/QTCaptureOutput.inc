{ Parsed from QTKit.framework (MacOSX10.10) QTCaptureOutput.h }
{ Created on Sun Mar 8 1:48:37 2015 }


{$ifdef TYPES}
type
  QTCaptureOutputPtr = ^QTCaptureOutput;
{$endif}

{$if ((QTKIT_VERSION_MAX_ALLOWED >= QTKIT_VERSION_7_2)) and ((MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_4))}
{$ifdef CLASSES}

type
  QTCaptureOutput = objcclass external (NSObject)
  private
    _session: QTCaptureSession;
    _reserved1: clong;
    _reserved2: clong;
    _reserved3: clong;
  public
    function connections AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3: NSArray; message 'connections AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3';
  end;
{$endif}

{$endif}