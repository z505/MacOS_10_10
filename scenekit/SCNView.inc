{ Parsed from SceneKit.framework (MacOSX10.10) SCNView.h }
{ Created on Sun Mar 8 1:46:53 2015 }


{$ifdef TYPES}
type
  SCNViewPtr = ^SCNView;
{$endif}

{$ifdef TYPES}
type
  SCNAntialiasingMode = NSUInteger;
  SCNAntialiasingModePtr = ^SCNAntialiasingMode;

const
  SCNAntialiasingModeNone = 0;
  SCNAntialiasingModeMultisampling2X = 1;
  SCNAntialiasingModeMultisampling4X = 2;
  SCNAntialiasingModeMultisampling8X = 3;
  SCNAntialiasingModeMultisampling16X = 4;
{$endif}

{$ifdef CLASSES}

type
  SCNView = objcclass external (NSView, SCNSceneRendererProtocol, SCNTechniqueSupportProtocol)
  private
    _reserved: id;
  public
    function initWithFrame_options (frame: NSRect; options: NSDictionary): id; message 'initWithFrame:options:';
    procedure setScene(newValue: SCNScene); message 'setScene:';
    function scene: SCNScene; message 'scene';
    procedure setBackgroundColor(newValue: NSColor); message 'setBackgroundColor:';
    function backgroundColor: NSColor; message 'backgroundColor';
    procedure setAllowsCameraControl(newValue: boolean); message 'setAllowsCameraControl:';
    function allowsCameraControl: boolean; message 'allowsCameraControl';
    function snapshot: NSImage; message 'snapshot'; { available in 10_10, 8_0 }
    procedure play (sender: id); message 'play:';
    procedure pause (sender: id); message 'pause:';
    procedure stop (sender: id); message 'stop:';
    procedure setOpenGLContext(newValue: NSOpenGLContext); message 'setOpenGLContext:';
    function openGLContext: NSOpenGLContext; message 'openGLContext';
    procedure setAntialiasingMode(newValue: SCNAntialiasingMode); message 'setAntialiasingMode:';
    function antialiasingMode: SCNAntialiasingMode; message 'antialiasingMode';
    procedure setPixelFormat(newValue: NSOpenGLPixelFormat); message 'setPixelFormat:';
    function pixelFormat: NSOpenGLPixelFormat; message 'pixelFormat';

    { Adopted protocols }
    procedure setAutoenablesDefaultLighting(newValue: boolean); message 'setAutoenablesDefaultLighting:';
    function autoenablesDefaultLighting: boolean; message 'autoenablesDefaultLighting';
    function context: pointer; message 'context';
    procedure setCurrentTime(newValue: NSTimeInterval); message 'setCurrentTime:';
    function currentTime: NSTimeInterval; message 'currentTime';
    procedure setDelegate(newValue: SCNSceneRendererDelegateProtocol); message 'setDelegate:';
    function delegate: SCNSceneRendererDelegateProtocol; message 'delegate';
    function hitTest_options (thePoint: CGPoint; options: NSDictionary): NSArray; message 'hitTest:options:';
    function isNodeInsideFrustum_withPointOfView (node: SCNNode; pointOfView: SCNNode): boolean; message 'isNodeInsideFrustum:withPointOfView:'; { available in 10_9, 8_0 }
    procedure setJitteringEnabled(newValue: boolean); message 'setJitteringEnabled:';
    function isJitteringEnabled: boolean; message 'isJitteringEnabled';
    procedure setLoops(newValue: boolean); message 'setLoops:';
    function loops: boolean; message 'loops';
    procedure setOverlaySKScene(newValue: SKScene); message 'setOverlaySKScene:';
    function overlaySKScene: SKScene; message 'overlaySKScene';
    procedure setPlaying(newValue: boolean); message 'setPlaying:';
    function isPlaying: boolean; message 'isPlaying';
    procedure setPointOfView(newValue: SCNNode); message 'setPointOfView:';
    function pointOfView: SCNNode; message 'pointOfView';
    function prepareObject_shouldAbortBlock (object_: id; block: OpaqueCBlock): boolean; message 'prepareObject:shouldAbortBlock:'; { available in 10_9, 8_0 }
    procedure prepareObjects_withCompletionHandler (objects: NSArray; completionHandler: OpaqueCBlock); message 'prepareObjects:withCompletionHandler:'; { available in 10_10, 8_0 }
    function projectPoint (point: SCNVector3): SCNVector3; message 'projectPoint:'; { available in 10_9, 8_0 }
    procedure setSceneTime(newValue: NSTimeInterval); message 'setSceneTime:';
    function sceneTime: NSTimeInterval; message 'sceneTime';
    procedure setShowsStatistics(newValue: boolean); message 'setShowsStatistics:';
    function showsStatistics: boolean; message 'showsStatistics';
    procedure setTechnique(newValue: SCNTechnique); message 'setTechnique:';
    function technique: SCNTechnique; message 'technique';
    function unprojectPoint (point: SCNVector3): SCNVector3; message 'unprojectPoint:'; { available in 10_9, 8_0 }
  end;
{$endif}
