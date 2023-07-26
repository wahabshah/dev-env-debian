## Qt Libraries

* https://doc.qt.io/qt-6/qtmodules.html
  * Qt Essentials
    * **Qt Core** : Core non-graphical classes used by other modules.
    * **Qt D-Bus**	: Classes for inter-process communication over the D-Bus protocol.
    * **Qt GUI**	: Base classes for graphical user interface (GUI) components.
    * **Qt Network**	: Classes to make network programming easier and more portable.
    * **Qt QML**	: Classes for QML and JavaScript languages.
      * Qt QML QML Types
        * Binding Enables the arbitrary creation of property bindings
        * Component Encapsulates a QML component definition
        * Connections Describes generalized connections to signals
        * Date Provides date functions
        * Locale Provides locale specific properties and formatted data
        * LoggingCategory Defines a logging category in QML
        * Number Object provides represents a number value
        * Qt Provides a global object with useful enums and functions from Qt
        * QtObject A basic QML type
        * String Object represents a string value
        * Timer Triggers a handler at a specified interval
      * Qt QML Value Types
        * point : 
        * rect
        * size
      * Submodules 
        * **Qt QML Core**
          * Qt QML Core QML Types
            * Settings : Provides persistent platform-independent application settings
            * StandardPaths** : Provides access to the standard system paths
            * SystemInformation : Provides information about the system
        * **Qt QML Models** : This QML module contains types for defining data models in QML.
          * Qt QML Models QML Types 
            * DelegateModel : Encapsulates a model and delegate
            * DelegateModelGroup : Encapsulates a filtered set of visual data items
            * Instantiator : Dynamically creates objects
            * ItemSelectionModel : Instantiates a QItemSelectionModel to be used in conjunction with a QAbstractItemModel and any view supporting it
            * ListElement : Defines a data item in a ListModel
            * ListModel : Defines a free-form list data source
            * ObjectModel : Defines a set of items to be used as a model
            * Package : Specifies a collection of named items 
            * DelegateChoice : Encapsulates a delegate and when to use it
            * DelegateChooser : Allows a view to use different delegates for different types of items in the model
            * TableModel : Encapsulates a simple table model
            * TableModelColumn : Represents a column in a model
        * **Qt QML WorkerScript** : This QML module contains types for using worker scripts.
          * Qt QML WorkerScript QML Type
            * WorkerScript : Enables the use of threads in a Qt Quick application
        * **Qt QML XmlListModel**
    * **Qt Quick**	: A declarative framework for building highly dynamic applications with custom user interfaces.
      * Qt Quick QML Value Types
        * color : ARGB color value
        * font : Font value with the properties of QFont. The font type refers to a font value with the properties of QFont
        * matrix4x4 : A matrix4x4 type is a 4-row and 4-column matrix
        * point : 
        * quaternion : A quaternion type has scalar, x, y, and z attributes
        * rect
        * size
        * vector2d : A vector2d type has x and y attributes
        * vector3d : Value with x, y, and z attributes
        * vector4d : A vector4d type has x, y, z and w attributes
      * Qt Quick QML Types
        * Accessible : Enables accessibility of QML items
        * AnchorAnimation : Animates changes in anchor values
        * AnchorChanges : Specifies how to change the anchors of an item in a state
        * AnimatedImage : Plays animations stored as a series of images
        * AnimatedSprite : Draws a sprite animation
        * Animation : Is the base of all QML animations
        * AnimationController : Enables manual control of animations
        * Animator : Is the base of all QML animators
        * Application : Provides access to global application state properties shared by many QML components
        * Behavior : Defines a default animation for a property change
        * BorderImage : Paints a border based on an image
        * BorderImageMesh : Defines a mesh with vertices arranged like those of a BorderImage
        * Canvas : Provides a 2D canvas item enabling drawing via JavaScript
        * CanvasGradient : Provides an opaque CanvasGradient interface
        * CanvasImageData : Contains image pixel data in RGBA order
        * CanvasPixelArray : Provides ordered and indexed access to the components of each pixel in image data
        * ColorAnimation : Animates changes in color values
        * ColorGroup : Set of colors by roles
        * Column : Positions its children in a column
        * Context2D : Provides 2D context for shapes on a Canvas item
        * DoubleValidator : Defines a validator for non-integer numbers
        * Drag : For specifying drag and drop events for moved Items
        * DragEvent : Provides information about a drag event
        * DragHandler : Handler for dragging
        * DropArea : For specifying drag and drop handling in an area
        * EnterKey : Provides a property to manipulate the appearance of Enter key on an on-screen keyboard
        * Flickable : Provides a surface that can be "flicked"
        * Flipable : Provides a surface that can be flipped
        * Flow : Positions its children side by side, wrapping as necessary
        * FocusScope : Explicitly creates a focus scope
        * FontLoader : Allows fonts to be loaded by URL
        * FontMetrics : Provides metrics for a given font
        * FrameAnimation : Triggers a handler at every animation frame update
        * GestureEvent : Parameter given with the gestureStarted signal
        * Gradient : Defines a gradient fill
        * GradientStop : Defines the color at a position in a Gradient
        * GraphicsInfo : Provides information about the scenegraph backend and the graphics API used by Qt Quick
        * Grid : Positions its children in grid formation
        * GridMesh : Defines a mesh with vertices arranged in a grid
        * GridView : For specifying a grid view of items provided by a model
        * HandlerPoint : An event point
        * HoverHandler : Handler for mouse and tablet hover
        * Image : Displays an image
        * IntValidator : Defines a validator for integer values
        * Item : A basic visual QML type
        * ItemGrabResult : Contains the results from a call to Item::grabToImage()
        * KeyEvent : Provides information about a key event
        * KeyNavigation : Supports key navigation by arrow keys
        * Keys : Provides key handling to Items
        * LayoutMirroring : Property used to mirror layout behavior
        * ListView : Provides a list view of items provided by a model
        * Loader : Allows dynamic loading of a subtree from a URL or Component
        * Matrix4x4 : Provides a way to apply a 4x4 tranformation matrix to an Item
        * MouseArea : Enables simple mouse handling
        * MouseEvent : Provides information about a mouse event
        * MultiPointHandler : Abstract handler for multi-point Pointer Events
        * MultiPointTouchArea : Enables handling of multiple touch points
        * NumberAnimation : Animates changes in qreal-type values
        * OpacityAnimator : Type animates the opacity of an Item
        * Palette : QQuickPalette class contains color groups for each QML item state
        * ParallelAnimation : Enables animations to be run in parallel
        * ParentAnimation : Animates changes in parent values
        * ParentChange : Specifies how to reparent an Item in a state change
        * Path : Defines a path for use by PathView and Shape
        * PathAngleArc : Defines an arc with the given radii and center
        * PathAnimation : Animates an item along a path
        * PathArc : Defines an arc with the given radius
        * PathAttribute : Specifies how to set an attribute at a given position in a Path
        * PathCubic : Defines a cubic Bezier curve with two control points
        * PathCurve : Defines a point on a Catmull-Rom curve
        * PathElement : The base path type
        * PathInterpolator : Specifies how to manually animate along a path
        * PathLine : Defines a straight line
        * PathMove : Moves the Path's position
        * PathMultiline : Defines a set of polylines through a list of lists of coordinates
        * PathPercent : Manipulates the way a path is interpreted
        * PathPolyline : Defines a polyline through a list of coordinates
        * PathQuad : Defines a quadratic Bezier curve with a control point
        * PathSvg : Defines a path using an SVG path data string
        * PathText : Defines a string in a specified font
        * PathView Lays out model-provided items on a path
        * PauseAnimation Provides a pause for an animation
        * PinchArea Enables simple pinch gesture handling
        * PinchEvent For specifying information about a pinch event
        * PinchHandler Handler for pinch gestures
        * PointHandler Handler for reacting to a single touchpoint
        * PointerDeviceHandler Abstract handler for pointer events with device-specific constraints
        * PointerHandler Abstract handler for pointer events
        * Positioner Provides attached properties that contain details on where an item exists in a positioner
        * PropertyAction Specifies immediate property changes during animation
        * PropertyAnimation Animates changes in property values
        * PropertyChanges Describes new property bindings or values for a state
        * Rectangle Paints a filled rectangle with an optional border
        * RegularExpressionValidator Provides a string validator
        * Repeater Instantiates a number of Item-based components using a provided model
        * Rotation Provides a way to rotate an Item
        * RotationAnimation Animates changes in rotation values
        * RotationAnimator Type animates the rotation of an Item
        * Row Positions its children in a row
        * Scale Provides a way to scale an Item
        * ScaleAnimator Type animates the scale factor of an Item
        * Screen Attached object provides information about the Screen an Item or Window is displayed on
        * ScriptAction Defines scripts to be run during an animation
        * SequentialAnimation Allows animations to be run sequentially
        * ShaderEffect Applies custom shaders to a rectangle 
        * ShaderEffectSource Renders a Qt Quick item into a texture and displays it
        * Shortcut Provides keyboard shortcuts 
        * SinglePointHandler Abstract handler for single-point Pointer Events
        * SmoothedAnimation Allows a property to smoothly track a value
        * SpringAnimation Allows a property to track a value in a spring-like motion
        * Sprite Specifies sprite animations
        * SpriteSequence Draws a sprite animation
        * State Defines configurations of objects and properties
        * StateChangeScript Specifies how to run a script in a state
        * StateGroup Provides built-in state support for non-Item types
        * SystemPalette Provides access to the Qt palettes
        * TableView Provides a table view of items to display data from a model
        * TapHandler Handler for taps and clicks
        * Text Specifies how to add formatted text to a scene
        * TextEdit Displays multiple lines of editable formatted text
        * TextInput Displays an editable line of text
        * TextMetrics Provides metrics for a given font and text
        * TouchPoint Describes a touch point in a MultiPointTouchArea
        * Transform For specifying advanced transformations on Items
        * Transition Defines animated transitions that occur on state changes
        * Translate Provides a way to move an Item without changing its x or y properties
        * TreeView Provides a tree view to display data from a QAbstractItemModel
        * UniformAnimator Type animates a uniform of a ShaderEffect
        * Vector3dAnimation Animates changes in QVector3d values
        * ViewTransition Specifies items under transition in a view
        * WheelEvent Provides information about a mouse wheel event
        * WheelHandler Handler for the mouse wheel
        * Window Creates a new top-level window
        * XAnimator Type animates the x position of an Item
        * YAnimator Type animates the y position of an Item
      * Submodules 
        * **Qt Quick Controls 2**	: Provides lightweight QML types for creating performant user interfaces for desktop, embedded, and mobile devices. These types employ a simple styling architecture and are very efficient.
        * **Qt Quick Dialogs**	: Types for creating and interacting with system dialogs from a Qt Quick application.
        * **Qt Quick Layouts** :	Layouts are items that are used to arrange Qt Quick 2 based items in the user interface.
        * **Qt Quick Local Storage** : a submodule containing a JavaScript interface for an SQLite database
        * **Qt Quick NativeStyle**
        * **Qt Particles** : provides a particle system for QML applications
        * **Qt Quick Shapes**
        * **Qt Quick Templates**        
        * **Qt Quick Test**	: A unit test framework for QML applications, where the test cases are written as JavaScript functions.
    * **Qt Test**	: Classes for unit testing Qt applications and libraries.
    * **Qt Widgets**	: Classes to extend Qt GUI with C++ widgets.
  * Qt Add-On
    * **Active Qt**	:  Classes for applications which use ActiveX and COM 
    * **Qt 3D**	: Functionality for near-realtime simulation systems with support for 2D and 3D rendering.
    * **Qt 5 Core Compatibility APIs** : Qt Core APIs that were in Qt 5 but not Qt 6.
    * **Qt Bluetooth** :	Provides access to Bluetooth hardware.
    * **Qt Concurrent** :	Classes for writing multi-threaded programs without using low-level threading primitives.
    * **Qt Help** : Classes for integrating documentation into applications.
    * **Qt Image Formats**	: Plugins for additional image formats: TIFF, MNG, TGA, WBMP.
    * **Qt Multimedia** :	A rich set of QML types and C++ classes to handle multimedia content. Also includes APIs to handle camera access.
    * **Qt NFC** : Provides access to Near-Field communication (NFC) hardware. On desktop platforms NDEF access is only     * supported for Type 4 tags.
    * Qt OPC UA	All	All (except QNX, WebAssembly)	Protocol for data modeling and exchange of data in industrial applications.
    * Qt OpenGL	All	All	C++ classes that make it easy to use OpenGL in Qt applications. A separate library of Qt OpenGL Widgets C++ Classes provides a widget for     * rendering OpenGL graphics.
    * Qt PDF	All	Windows, Linux, and macOS.	Classes and functions for rendering PDF documents.
    * Qt Positioning	All	Android, iOS, macOS, Linux and Windows	Provides access to position, satellite info and area monitoring classes.
    * Qt Print Support	All	All	Classes to make printing easier and more portable.
    * Qt Quick Widgets	All	All	Provides a C++ widget class for displaying a Qt Quick user interface.
    * Qt Remote Objects	All	All	Provides an easy to use mechanism for sharing a QObject's API (Properties/Signals/Slots) between processes or devices.
    * Qt SCXML	All	All	Provides classes and tools for creating state machines from SCXML files and embedding them in applications.
    * Qt Sensors	All	Android, iOS, and Windows	Provides access to sensor hardware.
    * Qt Serial Bus	All	Linux, Boot to Qt, macOS and Windows	Provides access to serial industrial bus interfaces. Currently, the module supports the CAN bus and     * Modbus protocols.
    * Qt Serial Port	All	Linux, Boot to Qt, macOS and Windows	Provides classes to interact with hardware and virtual serial ports.
    * Qt Spatial Audio	All	All	Provides support for spatial audio. Create sound scenes in 3D space containing different sound sources and room related properties     * such as reverb.
    * Qt SQL	All	All	Classes for database integration using SQL.
    * Qt State Machine	All	All	Provides classes for creating and executing state graphs.
    * Qt SVG	All	All	Classes for displaying the contents of SVG files. Supports a subset of the SVG 1.2 Tiny standard. A separate library of Qt SVG Widgets C++     * Classes provides support for rendering SVG files in a widget UI.
    * Qt TextToSpeech	All	All	Provides support for synthesizing speech from text and playing it as audio output.
    * Qt UI Tools	All	All	Classes for loading QWidget based forms created in Qt Designer dynamically, at runtime.
    * Qt WebChannel	All	All	Provides access to QObject or QML objects from HTML clients for seamless integration of Qt applications with HTML/JavaScript clients.
    * Qt WebEngine	All	Windows, Linux, and macOS.	Classes and functions for embedding web content in applications using the Chromium browser project.
    * Qt WebSockets	All	All	Provides WebSocket communication compliant with RFC 6455.
    * Qt WebView	All	Platforms with a native web engine.	Displays web content in a QML application by using APIs native to the platform, without the need to     * include a full web browser stack.
    * Qt XML	All	All	Handling of XML in a Document Object Model (DOM) API.
    * Qt Charts	All	All	UI Components for displaying visually pleasing charts, driven by static or dynamic data models.
    * Qt CoAP	All	All	Implements the client side of CoAP defined by RFC 7252.
    * Qt Data Visualization	All	All	UI Components for creating stunning 3D data visualizations.
    * Qt Lottie Animation	All	All	A QML API for rendering graphics and animations in JSON format, exported by the Bodymovin plugin for Adobe® After Effects.
    * Qt MQTT	All	All	Provides an implementation of the MQTT protocol specification.
    * Qt Network Authorization	All	All	Provides support for OAuth-based authorization to online services.
    * Qt Quick 3D	All	All	Provides a high-level API for creating 3D content or UIs based on Qt Quick.
    * Qt Quick Timeline	All	All	Enables keyframe-based animations and parameterization.
    * Qt Shader Tools	All	All	Provides tools for the cross-platform Qt shader pipeline. These enable processing graphics and compute shaders to make them usable for     * Qt Quick and other components in the Qt ecosystem.
    * **Qt Virtual Keyboard**	A framework for implementing different input methods as well as a QML virtual     * keyboard. Supports localized keyboard layouts and custom visual themes.
    * **Qt Wayland Compositor**	: Provides a framework to develop a Wayland compositor.
* https://www.qt.io/hubfs/_website/QML%20Book/qt6book-with-frontpage.pdf
* https://doc.qt.io/qt-6/qtqml-typesystem-topic.html
  * `QML Value Types`: https://doc.qt.io/qt-6/qtqml-typesystem-valuetypes.html
    * The built-in value types supported natively in the QML language: https://doc.qt.io/qt-6/qtqml-typesystem-valuetypes.html#built-in-value-types-provided-by-the-qml-language
    * QML modules may extend the QML language with more value types: https://doc.qt.io/qt-6/qtqml-typesystem-valuetypes.html#value-types-provided-by-qml-modules
    * You may define your own value types as described in [Defining QML Types from C++](https://doc.qt.io/qt-6/qtqml-cppintegration-definetypes.html). In order to use types provided by a particular QML module, clients must import that module in their QML documents.
  * `Javascript Types`
  * `QML Object Types` :- https://doc.qt.io/qt-6/qtqml-typesystem-objecttypes.html
    * Defining QML Object Types from QML
      * Defining Object Types Through QML Documents
      * Defining Anonymous Types with Component
    * [Defining QML Types from C++](https://doc.qt.io/qt-6/qtqml-cppintegration-definetypes.html)

* This is a list of all QML types, including QML value types
  * https://doc.qt.io/qt-6/qmltypes.html
* This is a list of all QML value types
  * https://doc.qt.io/qt-6/qmlvaluetypes.html

* https://blog.felgo.com/cross-platform-app-development/avoid-cpp-models-qt
  * https://github.com/benlau/qsyncable

* https://doc.qt.io/qtcreator/quick-converting-ui-projects.html
