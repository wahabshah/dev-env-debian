## Gammaray

* Requirements
  ```sh
  sudo apt libkf5syntaxhighlighting-dev qt6-base-private-dev qt6-declarative-private-dev lldb
  ```
* https://sources.debian.org/src/gammaray/2.11.3-2/
* https://sources.debian.org/src/gammaray/2.11.3-2/debian/control/ => showing 7 packages
* https://packages.debian.org/source/bookworm/gammaray => showing same 7 packages
  * gammaray : Tool for examining the internals of Qt application
  * gammaray-dev : GammaRay plugin development files
  * gammaray-plugin-bluetooth : QtBluetooth type support for GammaRay
  * gammaray-plugin-kjobtracker : KJob tracker plugin for GammaRay
  * gammaray-plugin-positioning : Qt5Positioning type support for GammaRay
  * gammaray-plugin-quickinspector : GammaRay plugin for inspecting QtQuick2 applications
  * gammaray-plugin-waylandinspector : Wayland compositor inspector plugin for GammaRay

## Build & Install

  ```sh
  git clone https://github.com/KDAB/GammaRay.git
  cd GammaRay
  mkdir build
  cd build
  cmake -DGAMMARAY_QT6_BUILD=true -DCMAKE_INSTALL_PREFIX=/workspaces/dev-env-debian/GammaRay-6.4.2 ..
  make
  make install
  ```

  ## Using Qt Quick Text QML Type
* https://doc.qt.io/qt-6/qml-qtquick-text.html
* [qml/QtQuick/plugins.qmltypes](../usr_lib_x86_64-linux-gnu_qt6_qml/QtQuick/plugins.qmltypes) => (file: "private/qquicktext_p.h" name: "QQuickText")
  * ![image](https://github.com/wahabshah/dev-env-debian/assets/8818025/dcd3afb8-a8cc-4bd2-9fb7-34ce3c27f38d)
* Qt5
  * path
    ```sh
    /opt/Qt5.10.1/5.10.1/gcc_64/include/QtQuick/5.10.1/QtQuick/private/qquicktext_p.h
    ```
  * https://codebrowser.dev/qt5/qtdeclarative/src/quick/items/qquicktext_p.h.html (QQuickText)
  * https://codebrowser.dev/qt5/qtdeclarative/src/quick/items/qquickimplicitsizeitem_p.h.html#QQuickImplicitSizeItem
  * https://codebrowser.dev/qt5/qtdeclarative/src/quick/items/qquicktextinterface_p.h
  * https://codebrowser.dev/qt5/qtdeclarative/src/quick/items/qquickitem.h.html#97
* Qt6
  * https://github.com/qt/qtdeclarative/blob/6.4.2/src/quick/items/qquicktext_p.h#L27
  * https://github.com/qt/qtdeclarative/blob/6.4.2/src/quick/items/qquickimplicitsizeitem_p.h#L24
  * https://github.com/qt/qtdeclarative/blob/6.4.2/src/quick/items/qquicktextinterface_p.h
  * https://github.com/qt/qtdeclarative/blob/6.4.2/src/quick/items/qquickitem.h#L63
* https://codebrowser.dev/data/symbol.html?root=../qt5&ref=QQuickText#graph 
  * ![image](https://user-images.githubusercontent.com/8818025/217579299-00aa5442-c9ca-4a30-8108-263b73ef3b9c.png)
