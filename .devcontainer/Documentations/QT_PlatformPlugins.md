### Qt Platform Plugins

* https://doc.qt.io/qt-6/embedded-linux.html
* https://doc.qt.io/qt-6/qpa.html
* https://s3.amazonaws.com/bizzabo.file.upload/8ZhfXU7lRlqkGcs9WVak_Make_your_Qt_UI_available_to_any_browser_in_5_easy_steps%20-%20Luca_Ottaviano.pdf

* `QPA plugins` are responsible for the actual rendering of the Qt application, most often on screen. There are plugins for Android, Windows, Linux (xcb being the default for X11) and Wayland, but also for more exotic platforms like Haiku, WinRT or Mir.
* All avalilable ones :-
  ```sh
  gitpod / (main) $ ls -alh /usr/lib/x86_64-linux-gnu/qt6/plugins/platforms/
  total 948K
  drwxr-xr-x  2 root root 4.0K Feb  5 07:26 .
  drwxr-xr-x 14 root root 4.0K Feb  5 07:26 ..
  -rw-r--r--  1 root root  19K Dec 30 15:58 libqeglfs.so
  -rw-r--r--  1 root root 369K Dec 30 15:58 libqlinuxfb.so
  -rw-r--r--  1 root root  43K Dec 30 15:58 libqminimalegl.so
  -rw-r--r--  1 root root  35K Dec 30 15:58 libqminimal.so
  -rw-r--r--  1 root root 107K Dec 30 15:58 libqoffscreen.so
  -rw-r--r--  1 root root 232K Dec 30 15:58 libqvkkhrdisplay.so
  -rw-r--r--  1 root root 108K Dec 30 15:58 libqvnc.so
  -rw-r--r--  1 root root  19K Dec 30 15:58 libqxcb.so
  ```
* Different QPA (Qt Platform Abstraction) plugin :-
  * `EGLFS` is a QPA (Qt Platform Abstraction) plugin for running Qt applications on top of EGL and OpenGL ES 2.0, without an actual windowing system like X11 or Wayland.
    * In addition to Qt Quick 2 and native OpenGL applications, EGLFS supports software-rendered windows, like QWidget, too.
  * `WebGL` is a QPA (Qt Platform Abstraction) plugin to stream an application directly to a website.
  * `VNC` is a QPA (Qt Platform Abstraction) plugin to expose the application over VNC.
    * https://www.qt.io/blog/commercial-add-on-qt-vnc-server => latest addition to qt6 to be able to mirror qt application to display and as vnc server
    * https://raymii.org/s/articles/Expose_any_QT_program_via_VNC.html
    * https://code.qt.io/cgit/qt/qtbase.git/tree/src/plugins/platforms/vnc/qvncintegration.cpp?h=dev
      ```sh
      ./Qt6QuickApp -platform vnc:port=5902
      Access to the [(server's hostname or IP address):5902] from a client computer with vnc client
      ```
  * `WebAssembly` is a QPA (Qt Platform Abstraction) plugin that lets you build Qt applications, which can be integrated into your web pages. 
    * It doesn’t require any client-side installations and reduces the server-side resource usage.
    * https://doc.qt.io/qt-6/wasm.html
    * https://www.youtube.com/watch?v=A1Ka3AmNbuE
      * ![image](https://user-images.githubusercontent.com/123810119/218302006-6d6147db-c3d2-43f0-822a-1da931f231f8.png)
    * Emscripten is a toolchain for compiling to WebAssembly. It lets you run Qt on the web at near-native speed without browser plugins.
    * http://qtandeverything.blogspot.com/2021/01/qt-6-webassembly.html
    * https://itnext.io/developing-web-apps-using-qml-and-qt-for-webassembly-aa84453f2f61
    * https://www.qt.io/blog/does-webassembly-matter-for-embedded-systems-makers
    * https://www.qt.io/blog/the-future-of-headless-embedded-devices
    * https://emscripten.org/docs/getting_started/downloads.html
      ```sh
      cd $HOME
      # Get the emsdk repo
      git clone https://github.com/emscripten-core/emsdk.git

      # Enter that directory
      cd emsdk
      # Download and install the latest SDK tools.
      ./emsdk install 3.1.14

      # Make the "latest" SDK "active" for the current user. (writes .emscripten file)
      ./emsdk activate 3.1.14

      # Activate PATH and other environment variables in the current terminal
      source ./emsdk_env.sh
      ```
      ```sh
      # Installing Qt with WebAssembly
      ```
      ![image](https://user-images.githubusercontent.com/8818025/217069540-4c0a71e2-fca6-42b5-8be3-a963e1288913.png)
      ```sh
      # OR Compile Qt with WebAssembly
      # Configure Qt as a cross-compile build for the wasm-emscripten platform
      . /workspaces/dev-env-debian/emsdk/emsdk_env.sh
      wget https://download.qt.io/official_releases/qt/6.4/6.4.2/single/qt-everywhere-src-6.4.2.tar.xz
      tar xf qt-everywhere-src-6.4.2.tar.xz
      mkdir qt6-build
      cd qt6-build
      ../qt-everywhere-src-6.4.2/configure -qt-host-path /usr -platform wasm-emscripten -developer-build  -- -DCMAKE_LIBRARY_PATH=x86_64-linux-gnu -DQT_HOST_PATH_CMAKE_DIR=/usr/lib/x86_64-linux-gnu/cmake -DQT_BUILD_TESTS_BY_DEFAULT=OFF -DQT_BUILD_EXAMPLES=OFF -DWARNINGS_ARE_ERRORS=OFF
      
      # Build the required modules:
      cmake --build ../qt-everywhere-src-6.4.2 -t qtbase -t qtdeclarative -t qtimageformats -t qtsvg --parallel
      ```
      ```sh
      cd $HOME
      python3 -m pip install setuptools wheel py7zr>=0.20.2 aqtinstall==3.1.1
      python3 -m aqt install-qt      linux desktop 6.4.2 gcc_64 -m qtvirtualkeyboard --outputdir $HOME/Qt 
      python3 -m aqt install-qt      linux desktop 6.4.2 wasm_32 -m qtvirtualkeyboard --outputdir $HOME/Qt
      python3 -m aqt install-example linux         6.4.2 --outputdir $HOME/Qt
      python3 -m aqt install-tool    linux desktop tools_qtcreator qt.tools.qtcreator --outputdir $HOME/Qt
      ```
      ```sh
      # Building Applications on the Command Line: Qt for WebAssembly supports building applications using qmake and make, or CMake with ninja or make.
      cd /workspaces/dev-env-debian/Qt6QuickApp
      mkdir build_wasm && cd build_wasm
      /home/gitpod/Qt/6.4.2/wasm_32/bin/qt-cmake ..
      # /workspaces/dev-env-debian/qt-everywhere-src-6.4.2/qtbase/bin/qt-cmake ..
      # /workspaces/dev-env-debian/qt-everywhere-src-6.4.2/qtbase/lib/cmake/Qt6/FindWrapZLIB.cmake
      # list(APPEND CMAKE_MODULE_PATH "/workspaces/dev-env-debian/qt-everywhere-src-6.4.2/qtbase/cmake") 
      cd /workspaces/dev-env-debian
      source /home/gitpod/emsdk/emsdk_env.sh
      /usr/bin/cmake \
           --debug-output \
           -S QtQuickTest  \
           -B build-QtQuickTest-WebAssembly-Debug \
           -DCMAKE_BUILD_TYPE:STRING=Debug \
           -DCMAKE_PREFIX_PATH:PATH=$HOME/Qt/6.4.2/wasm_32 \
           -DCMAKE_C_COMPILER:FILEPATH=$HOME/emsdk/upstream/emscripten/emcc \
           -DCMAKE_CXX_COMPILER:FILEPATH=$HOME/emsdk/upstream/emscripten/em++  \
           -DCMAKE_TOOLCHAIN_FILE:FILEPATH=$HOME/Qt/6.4.2/wasm_32/lib/cmake/Qt6/qt.toolchain.cmake \
           -DCMAKE_CXX_FLAGS_INIT:STRING=-DQT_QML_DEBUG \
           -DQT_HOST_PATH:PATH=$HOME/Qt/6.4.2/gcc_64

      /usr/bin/cmake --build build-QtQuickTest-WebAssembly-Debug --target all
      
      # Running Applications
      $EMSDK/upstream/emscripten/emrun --browser=chrome build-QtQuickTest-WebAssembly-Debug/QtQuickTest.html
      ```