## Install Qt6

# Option1: Using Online Installer (Webassembly_EMCC + Desktop_GCC)

```sh
wget https://download.qt.io/archive/online_installers/4.5/qt-unified-linux-x64-4.5.1-online.run
chmod +x qt-unified-linux-x64-4.5.1-online.run
```

## Option2: Using Debian Repo (Desktop_GCC)

* https://packages.debian.org/en/source/bookworm/misc/
  * https://packages.debian.org/de/source/bookworm/qt6-declarative

```sh
sudo apt-get install \
qtcreator \
qt6-base-dev \
qt6-declarative-dev \
qml6-module-qt-labs-animation \
qml6-module-qt-labs-folderlistmodel \
qml6-module-qt-labs-platform \
qml6-module-qt-labs-qmlmodels \
qml6-module-qt-labs-settings \
qml6-module-qt-labs-sharedimage \
qml6-module-qt-labs-wavefrontmesh \
qml6-module-qtcore \
qml6-module-qtqml \
qml6-module-qtqml-models \
qml6-module-qtqml-workerscript \
qml6-module-qtqml-xmllistmodel \
qml6-module-qtquick \
qml6-module-qtquick-controls \
qml6-module-qtquick-dialogs \
qml6-module-qtquick-layouts \
qml6-module-qtquick-localstorage \
qml6-module-qtquick-nativestyle \
qml6-module-qtquick-particles \
qml6-module-qtquick-shapes \
qml6-module-qtquick-templates \
qml6-module-qtquick-tooling \
qml6-module-qtquick-window \
qml6-module-qttest
```

## Option3: Using aqt  (Webassembly_EMCC + Desktop_GCC)

* https://github.com/jurplel/install-qt-action
* https://github.com/miurahr/aqtinstall
* https://aqtinstall.readthedocs.io/en/v3.1.1/cli.html
* https://github.com/miurahr/aqtinstall/issues/383
  * Using :- https://download.qt.io/online/qtsdkrepository
  * Better to use for tools :- https://download.qt.io/official_releases/
* https://ddalcino.github.io/aqt-list-server/
* QtCreator 9.0.1
  ```sh
  sudo apt install p7zip-full
  wget https://download.qt.io/official_releases/qtcreator/9.0/9.0.1/installer_source/linux_x64/qtcreator.7z
  mkdir /home/gitpod/Qt/Tools/QtCreator
  (cd /home/gitpod/Qt/Tools/QtCreator && 7za x ../qtcreator.7z)
  ```
* ![image](https://user-images.githubusercontent.com/123810119/218302800-e5873c63-5349-49b8-9461-dc35741947cd.png)
* Openssl 1.1.1-4
  ```sh
  wget https://download.qt.io/online/qtsdkrepository/linux_x64/desktop/tools_openssl_x64/qt.tools.openssl.gcc_64/1.1.1-4openssl-1.1.1d_prebuild_rhel7_6.7z
  ```

```sh
python3 -m pip install setuptools wheel py7zr>=0.20.2 aqtinstall==3.1.1
```
```sh
python3 -m aqt list-qt         linux desktop --archives 6.4.2 gcc_64
icu qtbase qtdeclarative qtsvg qttools qttranslations qtwayland

python3 -m aqt list-qt         linux desktop --long-modules 6.4.2 gcc_64
    Module Name                      Display Name                  Release Date   Download Size   Installed Size
================================================================================================================
debug_info            Desktop gcc 64-bit Debug Information Files   2022-12-13     1.1G            5.5G          
qt3d                  Qt 3D Module for gcc 64-bit                  2022-12-13     2.7M            15.4M         
qt5compat             Qt 5 Compatibility Module for gcc 64-bit     2022-12-13     406.9K          1.7M          
qtcharts              Qt Charts for gcc 64-bit                     2022-12-13     659.2K          4.2M          
qtconnectivity        Qt Connectivity for gcc 64-bit               2022-12-13     431.3K          1.8M          
qtdatavis3d           Qt Data Visualization for gcc 64-bit         2022-12-13     546.3K          3.0M          
qthttpserver          Qt HTTP Server for gcc 64-bit                2022-12-13     57.9K           230.3K        
qtimageformats        Qt Image Formats for gcc 64-bit              2022-12-13     353.6K          1.1M          
qtlanguageserver      Qt language Server for gcc 64-bit            2022-12-13     300.5K          1.6M          
qtlottie              Qt Lottie Animation for gcc 64-bit           2022-12-13     118.5K          485.6K        
qtmultimedia          Qt Multimedia for gcc 64-bit                 2022-12-13     11.3M           113.6M        
qtnetworkauth         Qt Network Authorization for gcc 64-bit      2022-12-13     67.5K           301.0K        
qtpdf                 Qt PDF for gcc 64-bit                        2022-12-13     2.2M            5.7M          
qtpositioning         Qt Positioning for gcc 64-bit                2022-12-13     327.2K          1.6M          
qtquick3d             Qt Quick 3D for gcc 64-bit                   2022-12-13     14.9M           133.8M        
qtquick3dphysics      Quick: 3D Physics for gcc 64-bit             2022-12-13     40.3M           369.1M        
qtquicktimeline       Qt Quick Timeline for gcc 64-bit             2022-12-13     40.5K           208.6K        
qtremoteobjects       Qt Remote Objects for gcc 64-bit             2022-12-13     406.9K          1.7M          
qtscxml               Qt State Machine for gcc 64-bit              2022-12-13     417.5K          2.1M          
qtsensors             Qt Sensors for gcc 64-bit                    2022-12-13     163.2K          1.1M          
qtserialbus           Qt SerialBus for gcc 64-bit                  2022-12-13     188.1K          865.2K        
qtserialport          Qt SerialPort for gcc 64-bit                 2022-12-13     45.8K           183.3K        
qtshadertools         Qt Shader Tools for gcc 64-bit               2022-12-13     1.2M            4.2M          
qtspeech              Qt Speech for gcc 64-bit                     2022-12-13     62.0K           333.1K        
qtvirtualkeyboard     Qt Virtual Keyboard for gcc 64-bit           2022-12-13     2.1M            5.3M          
qtwaylandcompositor   Qt Wayland Compositor for gcc 64-bit         2022-12-13     575.0K          3.9M          
qtwebchannel          Qt WebChannel for gcc 64-bit                 2022-12-13     99.4K           367.4K        
qtwebengine           Qt WebEngine for Desktop gcc 64-bit          2022-12-13     65.9M           206.8M        
qtwebsockets          Qt WebSockets for gcc 64-bit                 2022-12-13     81.4K           364.1K        
qtwebview             Qt WebView for gcc 64-bit                    2022-12-13     55.0K           354.3K

python3 -m aqt list-tool linux desktop -l
tools_telemetry_preview
tools_telemetry_gui
tools_telemetry
tools_qtdesignstudio_preview
tools_qtdesignstudio_generation2_preview
tools_qtdesignstudio_generation2
tools_qtdesignstudio
tools_qtcreator_preview
tools_qtcreator_gui
tools_qtcreator
tools_qt3dstudio_runtime_preview
tools_qt3dstudio_runtime_240
tools_qt3dstudio_runtime_230
tools_qt3dstudio_runtime_220
tools_qt3dstudio_preview
tools_qt3dstudio_openglruntime_preview
tools_qt3dstudio_openglruntime_280_5151
tools_qt3dstudio_openglruntime_280
tools_qt3dstudio_openglruntime_270_5150
tools_qt3dstudio_openglruntime_270
tools_qt3dstudio_openglruntime_260
tools_qt3dstudio_openglruntime_250
tools_qt3dstudio_openglruntime_240
tools_qt3dstudio
tools_openssl_x64
tools_openssl_src
tools_ninja
tools_maintenance_update_reminder
tools_maintenance_early_access
tools_maintenance
tools_ifw
tools_generic
tools_conan
tools_cmake

python3 -m aqt list-doc linux 6.4.2
qdoc qmake qt5 qtassistant qtcmake qtconcurrent qtcore qtdbus qtdesigner qtdistancefieldgenerator qtdoc qtgui qthelp qtlabsplatform qtlinguist qtnetwork qtopengl qtplatformintegration qtprintsupport qtqml qtqmlcore qtqmlmodels qtqmltest qtqmlworkerscript qtqmlxmllistmodel qtquick qtquickcontrols qtquickdialogs qtsql qtsvg qttestlib qtuitools qtwaylandcompositor qtwidgets qtxml

python3 -m aqt list-example linux 6.4.2
qtbase qtdeclarative qtdoc qtsvg qttools qtwayland

python3 -m aqt list-example -m linux 6.4.2
qt3d qt5compat qtactiveqt qtcharts qtconnectivity qtdatavis3d qthttpserver qtmultimedia qtnetworkauth qtpositioning qtquick3d qtquick3dphysics qtremoteobjects qtscxml qtsensors qtserialbus qtserialport qtspeech qtvirtualkeyboard qtwebchannel qtwebengine qtwebsockets qtwebview

python3 -m aqt list-tool linux desktop tools_qtcreator_gui -l


python3 -m aqt list-tool linux desktop tools_maintenance -l
Tool Variant Name           Version          Release Date      Display Name                                                        Description                                                 
================================================================================================================================================================================================
qt.tools.maintenance   4.5.1-0-202212071053   2022-12-07     Qt Maintenance Tool   The tool to maintain and update the existing installation, located in the root directory of the installation.

python3 -m aqt list-qt         linux desktop --long-modules 6.4.2 wasm_32
   Module Name                    Display Name                  Release Date   Download Size   Installed Size
=============================================================================================================
qt5compat           Qt 5 Compatibility Module for WebAssembly   2022-12-13     669.5K          2.6M          
qtcharts            Qt Charts for WebAssembly                   2022-12-13     765.1K          7.2M          
qtdatavis3d         Qt Data Visualization for WebAssembly       2022-12-13     588.7K          4.6M          
qthttpserver        Qt HTTP Server for WebAssembly              2022-12-13     53.8K           259.2K        
qtimageformats      Qt ImageFormats for WebAssembly             2022-12-13     292.9K          1.2M          
qtlottie            Qt Lottie Animation for WebAssembly         2022-12-13     153.4K          1004.5K       
qtmultimedia        Qt Multimedia for WebAssembly               2022-12-13     686.5K          4.5M          
qtquick3d           Qt Quick 3D for WebAssembly                 2022-12-13     2.4M            15.8M         
qtquick3dphysics    Quick: 3D Physics for WebAssembly           2022-12-13     1.6M            10.5M         
qtquicktimeline     Qt Quick Timeline for WebAssembly           2022-12-13     44.3K           273.5K        
qtscxml             Qt State Machines for WebAssembly           2022-12-13     366.7K          3.0M          
qtshadertools       Qt Shader Tools for WebAssembly             2022-12-13     1.2M            11.2M         
qtspeech            Qt Speech for WebAssembly                   2022-12-13     60.4K           447.3K        
qtvirtualkeyboard   Qt Virtual Keyboard for WebAssembly         2022-12-13     1.6M            5.2M          
qtwebchannel        Qt WebChannel for WebAssembly               2022-12-13     85.8K           478.0K        
qtwebsockets        Qt WebSockets for WebAssembly               2022-12-13     87.6K           499.1K        

python3 -m aqt list-qt         linux desktop --archives 6.4.2 wasm_32
qtbase qtdeclarative qtsvg qttools qttranslations
```
```sh
cd $HOME
python3 -m aqt install-tool    linux desktop tools_ifw qt.tools.ifw.45 --outputdir $PWD/Qt
python3 -m aqt install-tool    linux desktop tools_maintenance qt.tools.maintenance --outputdir $PWD/Qt
python3 -m aqt install-tool    linux desktop tools_qtcreator_gui qt.tools.qtcreator_gui --outputdir $PWD/Qt
python3 -m aqt install-doc     linux 6.4.2 --outputdir $PWD/Qt
python3 -m aqt install-example linux 6.4.2 --outputdir $PWD/Qt
python3 -m aqt install-qt      linux desktop 6.4.2 gcc_64  -m qtvirtualkeyboard --outputdir $PWD/Qt
python3 -m aqt install-qt      linux desktop 6.4.2 wasm_32 -m qtvirtualkeyboard --outputdir $PWD/Qt

p7zip-full
wget https://download.qt.io/online/qtsdkrepository/linux_x64/desktop/sdktool/qt.tools.qtcreator/9.0.1-0-202212150944qtcreator_sdktool.7z
7za e -y 9.0.1-0-202212150944qtcreator_sdktool.7z -o/home/gitpod/Test1
```