## Before Starting Desktop
```sh
USER       PID %CPU %MEM    VSZ   RSS TTY      STAT START   TIME COMMAND
gitpod       1  0.1  0.0   2572  1740 ?        Ss   05:22   0:00 /bin/sh -c echo Container started trap "exit 0" 15  exec "$@" while sleep 1 & wait $!; do :; done -
gitpod     419  0.1  0.0   2572  1692 ?        Ss   05:22   0:00 /bin/sh
root       519  0.1  0.0   2572   924 ?        Ss   05:22   0:00 /bin/sh
gitpod     618  0.0  0.0   2572   880 ?        Ss   05:22   0:00 sh /home/gitpod/.vscode-remote/bin/97dec172d3256f8ca4bfb2143f3f76b503ca0534/server.sh --log trace --force-disable-user-env --server-data-dir /home/gitpod
gitpod     625 81.2  1.8 980612 150296 ?       Sl   05:22   0:08 /home/gitpod/.vscode-remote/bin/97dec172d3256f8ca4bfb2143f3f76b503ca0534/node /home/gitpod/.vscode-remote/bin/97dec172d3256f8ca4bfb2143f3f76b503ca0534/ou
gitpod     646  2.6  0.5 635300 47760 ?        Sl   05:22   0:00 /vscode/bin/linux-x64/97dec172d3256f8ca4bfb2143f3f76b503ca0534/node /vscode/bin/linux-x64/97dec172d3256f8ca4bfb2143f3f76b503ca0534/out/bootstrap-fork --t
gitpod     775 45.2  3.9 11641836 320384 ?     Sl   05:22   0:04 /vscode/bin/linux-x64/97dec172d3256f8ca4bfb2143f3f76b503ca0534/node /vscode/bin/linux-x64/97dec172d3256f8ca4bfb2143f3f76b503ca0534/out/bootstrap-fork --t
gitpod     786  1.4  0.5 703944 40860 ?        Sl   05:22   0:00 /vscode/bin/linux-x64/97dec172d3256f8ca4bfb2143f3f76b503ca0534/node /vscode/bin/linux-x64/97dec172d3256f8ca4bfb2143f3f76b503ca0534/out/bootstrap-fork --t
gitpod     800  0.1  0.0   2572  1784 ?        Ss   05:22   0:00 /bin/sh
root       870  0.2  0.0   2572   944 ?        Ss   05:22   0:00 /bin/sh
gitpod     938  0.3  0.0   8248  5220 pts/0    Ss   05:22   0:00 /usr/bin/bash --init-file /vscode/bin/linux-x64/97dec172d3256f8ca4bfb2143f3f76b503ca0534/out/vs/workbench/contrib/terminal/browser/media/shellIntegration
gitpod    1020  0.0  0.0   2480   900 ?        S    05:22   0:00 sleep 1
gitpod    1022  0.0  0.0   2572   928 ?        S    05:22   0:00 /bin/sh -c "/vscode/bin/linux-x64/97dec172d3256f8ca4bfb2143f3f76b503ca0534/out/vs/base/node/cpuUsage.sh" 938
gitpod    1023  0.0  0.0   3916  2808 ?        S    05:22   0:00 /bin/bash /vscode/bin/linux-x64/97dec172d3256f8ca4bfb2143f3f76b503ca0534/out/vs/base/node/cpuUsage.sh 938
gitpod    1026  0.0  0.0   2480   916 ?        S    05:22   0:00 sleep 1
gitpod    1027  1.7  0.0   2572  1708 ?        Ss   05:22   0:00 /bin/sh
root      1094  4.4  0.0   2572   912 ?        Ss   05:22   0:00 /bin/sh
gitpod    1218  0.0  0.0  11064  4488 pts/0    R+   05:22   0:00 ps -aux
```
```sh
gitpod /workspaces/dev-env-debian (main) $ ls -alh /tmp
drwxr-xrwt+ 4 root   root   4.0K Jan 27 10:20 .
drwxr-xr-x  1 root   root   4.0K Jan 27 06:55 ..
drwxr-xrw-+ 2 gitpod gitpod 4.0K Jan 27 10:20 codespaces_logs
drwxrwxrwx+ 3 root   root   4.0K Jan 27 08:29 editors
srwxr-xr--  1 gitpod gitpod    0 Jan 27 10:20 vscode-git-ca140a59dc.sock
srwxr-xr--  1 gitpod gitpod    0 Jan 27 10:20 vscode-ipc-06059ad5-6342-4000-bdf3-c1af5d0bb074.sock
srwxr-xr--  1 gitpod gitpod    0 Jan 27 10:20 vscode-ipc-92bc44c0-a95a-4e9e-9b57-53f7b95e8b18.sock
```

## After Starting Desktop

```sh
$ gp-vncsession 
mount: /dev/shm: permission denied.
info[gp-vncsession]: Failed to increase shmem
info[gp-vncsession]: * Starting system message bus dbus ...done.
info[gp-vncsession]: Starting tigerVNC server on port 5900
info[gp-vncsession]: Waiting for the desktop to be fully loaded ...
info[gp-vncsession]: Starting noVNC web client on port 6080
```

```sh
gitpod /workspaces/dev-env-debian (main) $ ls -alh /tmp
total 56K
drwxr-xrwt+ 8 root   root   4.0K Jan 27 10:22 .
drwxr-xr-x  1 root   root   4.0K Jan 27 06:55 ..
-rw-r--rw-  1 gitpod gitpod  617 Jan 27 10:22 bash.log
-rw-r--rw-  1 gitpod gitpod    5 Jan 27 10:22 bash.pid
drwxr-xrw-+ 2 gitpod gitpod 4.0K Jan 27 10:20 codespaces_logs
drwxrwxrwx+ 3 root   root   4.0K Jan 27 08:29 editors
drwxrwxrwt+ 2 gitpod gitpod 4.0K Jan 27 10:22 .ICE-unix
drwx------+ 2 gitpod gitpod 4.0K Jan 27 10:22 pulse-PKdhtXMmr18n
drwx------+ 2 gitpod gitpod 4.0K Jan 27 10:22 ssh-y8TpOHVXFjR7
-rw-r--rw-  1 gitpod gitpod  476 Jan 27 10:22 vncserver.log
-rw-r--rw-  1 gitpod gitpod    5 Jan 27 10:22 vncserver.pid
srwxr-xr--  1 gitpod gitpod    0 Jan 27 10:20 vscode-git-ca140a59dc.sock
srwxr-xr--  1 gitpod gitpod    0 Jan 27 10:20 vscode-ipc-06059ad5-6342-4000-bdf3-c1af5d0bb074.sock
srwxr-xr--  1 gitpod gitpod    0 Jan 27 10:20 vscode-ipc-92bc44c0-a95a-4e9e-9b57-53f7b95e8b18.sock
-r--r--r--  1 gitpod gitpod   11 Jan 27 10:22 .X0-lock
drwxrwxrwt+ 2 gitpod gitpod 4.0K Jan 27 10:22 .X11-unix
-rw-------  1 gitpod gitpod  450 Jan 27 10:22 .xfsm-ICE-5MNHZ1
```

```sh
USER         PID %CPU %MEM    VSZ   RSS TTY      STAT START   TIME COMMAND
gitpod         1  0.0  0.0  12372  9416 pts/0    Ss   06:24   0:00 /bin/bash
message+     231  0.0  0.0   7032  3280 ?        Ss   06:24   0:00 /usr/bin/dbus-daemon --system
gitpod       247  0.2  0.1 212916 110892 ?       S    06:24   0:00 /usr/bin/Xtigervnc :0 -desktop 34c11d13cda8:0 (gitpod) -auth /home/gitpod/.Xauthority -geometry 1920x1080 -depth 24 -rfbwait 3
gitpod       252  0.0  0.0  17476  8508 ?        S    06:24   0:00 /usr/bin/perl /usr/bin/vncserver -geometry 1920x1080 -SecurityTypes None :0
gitpod       253  0.0  0.0   2616   536 ?        S    06:24   0:00 /bin/sh /etc/X11/Xvnc-session
gitpod       255  0.0  0.0 391568 59796 ?        Sl   06:24   0:00 xfce4-session
gitpod       330  0.0  0.0   7172  1984 ?        S    06:24   0:00 dbus-launch --autolaunch b5c7bb5fdfc044cea61ccc86a6fb88ea --binary-syntax --close-stderr
gitpod       331  0.0  0.0   6904  2560 ?        Ss   06:24   0:00 /usr/bin/dbus-daemon --syslog-only --fork --print-pid 5 --print-address 7 --session
gitpod       350  0.0  0.0   7172  1916 ?        S    06:24   0:00 /usr/bin/dbus-launch --exit-with-session --sh-syntax
gitpod       351  0.0  0.0   7120  3100 ?        Ss   06:24   0:00 /usr/bin/dbus-daemon --syslog --fork --print-pid 5 --print-address 8 --session
gitpod       358  0.0  0.0   6044   456 ?        Ss   06:24   0:00 /usr/bin/ssh-agent x-session-manager
gitpod       373  0.0  0.0 230240  5800 ?        Sl   06:24   0:00 /usr/lib/x86_64-linux-gnu/xfce4/xfconf/xfconfd
root         379  0.0  0.0 236856  9616 ?        Sl   06:24   0:00 /usr/lib/policykit-1/polkitd --no-debug
gitpod       386  0.0  0.0   7476   280 ?        Ss   06:24   0:00 /usr/bin/gpg-agent --sh --daemon --write-env-file /home/gitpod/.cache/gpg-agent-info
gitpod       387  0.1  0.0 236692 38196 ?        Sl   06:24   0:00 xfwm4
gitpod       397  0.0  0.0 224512 21080 ?        Ssl  06:24   0:00 xfsettingsd
gitpod       398  0.0  0.0 312932 41280 ?        Sl   06:24   0:00 xfce4-panel
gitpod       404  0.0  0.0 340908 24304 ?        Sl   06:24   0:00 Thunar --daemon
gitpod       415  0.1  0.0 321964 49136 ?        Sl   06:24   0:00 xfdesktop
gitpod       419  0.0  0.0 192224 23672 ?        Sl   06:24   0:00 /usr/lib/x86_64-linux-gnu/xfce4/panel/wrapper-2.0 /usr/lib/x86_64-linux-gnu/xfce4/panel/plugins/libsystray.so 6 16777224 systr
gitpod       421  0.0  0.0 307492 36440 ?        Sl   06:24   0:00 /usr/lib/x86_64-linux-gnu/xfce4/panel/wrapper-2.0 /usr/lib/x86_64-linux-gnu/xfce4/panel/plugins/libpulseaudio-plugin.so 8 1677
gitpod       424  0.0  0.0   7112  3464 ?        S    06:24   0:00 /bin/bash /opt/novnc/utils/novnc_proxy --vnc localhost:5900 --listen 6080
gitpod       429  0.0  0.0 194316 26532 ?        Sl   06:24   0:00 /usr/lib/x86_64-linux-gnu/xfce4/panel/wrapper-2.0 /usr/lib/x86_64-linux-gnu/xfce4/panel/plugins/libactions.so 14 16777226 acti
gitpod       459  0.0  0.0  24864 19212 ?        S    06:24   0:00 /home/gitpod/.pyenv/versions/3.8.16/bin/python3 -m websockify --web /opt/novnc/utils/../ 6080 localhost:5900
gitpod       515  0.0  0.0  26372 16352 ?        S    06:24   0:00 /home/gitpod/.pyenv/versions/3.8.16/bin/python3 -m websockify --web /opt/novnc/utils/../ 6080 localhost:5900
gitpod       526  0.0  0.0   8896  3364 pts/0    R+   06:29   0:00 ps -aux
```

`gp-vncsession` effectively runs :-
```sh
sudo service dbus start | xargs
/usr/bin/vncserver -geometry 1920x1080 -SecurityTypes None :0
/opt/novnc/utils/novnc_proxy --vnc localhost:5900 --listen 6080
```

Effective processes which need to run for desktop:-
1. Start dbus
```sh
/usr/bin/dbus-daemon --system
```
2. Perl script for vncserver
* launching Xtigervnc /usr/bin/vncserver -> /etc/alternatives/vncserver -> /usr/bin/tigervncserver
* Xvnc-session (VNC startup script) /etc/X11/Xvnc-session after launching Xtigervnc (exec [/etc/X11/Xsession](https://manpages.ubuntu.com/manpages/bionic/man5/Xsession.5.html))
  * /etc/X11/Xsession
    * writes to $HOME/.xsession-errors
    * loops in folder /etc/X11/Xsession.d

        ```sh
        $ tree /etc/X11/
        /etc/X11/
        ├── app-defaults
        │   └── Xvidtune
        ├── rgb.txt
        ├── xkb
        ├── Xreset
        ├── Xreset.d
        │   └── README
        ├── Xresources
        │   └── x11-common
        ├── Xsession
        ├── Xsession.d
        │   ├── 20dbus_xdg-runtime
        │   ├── 20x11-common_process-args
        │   ├── 30x11-common_xresources
        │   ├── 35x11-common_xhost-local
        │   ├── 40x11-common_xsessionrc
        │   ├── 50x11-common_determine-startup
        │   ├── 55xfce4-session
        │   ├── 60x11-common_localhost
        │   ├── 60x11-common_xdg_path
        │   ├── 75dbus_dbus-launch
        │   ├── 90gpg-agent
        │   ├── 90x11-common_ssh-agent
        │   ├── 95dbus_update-activation-env
        │   └── 99x11-common_start
        ├── Xsession.options
        └── Xvnc-session
        ```
    * /usr/bin/x-session-manager -> /etc/alternatives/x-session-manager -> /usr/bin/startxfce4
    * xfce4-session https://github.com/xfce-mirror/xfce4-session/blob/xfce-4.16/settings/xfce4-session.xml
      * xfwm4
      * xfsettingsd
      * xfce4-panel
      * Thunar --daemon
      * xfdesktop
```sh
/usr/bin/perl /usr/bin/vncserver -geometry 1920x1080 -SecurityTypes None :0
/usr/bin/Xtigervnc :0 -desktop 34c11d13cda8:0 (gitpod) -auth /home/gitpod/.Xauthority -geometry 1920x1080 -depth 24 -rfbwait 30000 -rfbport 5900 -pn -localhost -SecurityTypes None
/bin/sh /etc/X11/Xvnc-session
xfce4-session
dbus-launch --autolaunch b5c7bb5fdfc044cea61ccc86a6fb88ea --binary-syntax --close-stderr
/usr/bin/dbus-daemon --syslog-only --fork --print-pid 5 --print-address 7 --session
/usr/bin/dbus-launch --exit-with-session --sh-syntax
/usr/bin/dbus-daemon --syslog --fork --print-pid 5 --print-address 8 --session
/usr/bin/ssh-agent x-session-manager
/usr/lib/x86_64-linux-gnu/xfce4/xfconf/xfconfd
/usr/lib/policykit-1/polkitd --no-debug
/usr/bin/gpg-agent --sh --daemon --write-env-file /home/gitpod/.cache/gpg-agent-info
xfwm4
xfsettingsd
xfce4-panel
Thunar --daemon
xfdesktop
/usr/lib/x86_64-linux-gnu/xfce4/panel/wrapper-2.0 /usr/lib/x86_64-linux-gnu/xfce4/panel/plugins/libsystray.so 6 16777224 systray Notification Area Area where notification icons appear
/usr/lib/x86_64-linux-gnu/xfce4/panel/wrapper-2.0 /usr/lib/x86_64-linux-gnu/xfce4/panel/plugins/libpulseaudio-plugin.so 8 16777225 pulseaudio PulseAudio Plugin Adjust the audio volume of the Pulse
/usr/lib/x86_64-linux-gnu/xfce4/panel/wrapper-2.0 /usr/lib/x86_64-linux-gnu/xfce4/panel/plugins/libactions.so 14 16777226 actions Action Buttons Log out, lock or other system actions
```
3. NoVNC 
```
/bin/bash /opt/novnc/utils/novnc_proxy --vnc localhost:5900 --listen 6080
/home/gitpod/.pyenv/versions/3.8.16/bin/python3 -m websockify --web /opt/novnc/utils/../ 6080 localhost:5900
/home/gitpod/.pyenv/versions/3.8.16/bin/python3 -m websockify --web /opt/novnc/utils/../ 6080 localhost:5900
```

![image](https://user-images.githubusercontent.com/8818025/215065804-4978ea06-37fe-4457-b2e1-aacb8352958c.png)

### Qt6 Installation 

* https://packages.debian.org/en/source/bookworm/misc/
  * https://packages.debian.org/de/source/bookworm/qt6-declarative

```sh
sudo apt-get install build-essential cmake libgl1-mesa-dev qtcreator qt6-base-dev qt6-declarative-dev \
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
qml6-module-qttest \
libxcb-xinerama0
```

```sh
rm -rf /tmp/.X* /tmp/.x /tmp/v* /tmp/dbus* /tmp/bash*     \
&& tigervncserver -cleanslate  || tigervncserver -kill    \
|| pkill -9 novnc_proxy || pgrep -f websockify | xargs kill > /dev/null
```

```sh
wget https://download.qt.io/archive/online_installers/4.5/qt-unified-linux-x64-4.5.1-online.run
```
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
    * Emscripten is a toolchain for compiling to WebAssembly. It lets you run Qt on the web at near-native speed without browser plugins.
    * http://qtandeverything.blogspot.com/2021/01/qt-6-webassembly.html
    * https://itnext.io/developing-web-apps-using-qml-and-qt-for-webassembly-aa84453f2f61
    * https://emscripten.org/docs/getting_started/downloads.html
      ```sh
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
      wget https://download.qt.io/official_releases/qt/6.4/6.4.2/single/qt-everywhere-src-6.4.2.tar.xz
      tar xf qt-everywhere-src-6.4.2.tar.xz
      cd qt-everywhere-src-6.4.2
      ./configure -qt-host-path /path/to/Qt -platform wasm-emscripten -prefix $PWD/qtbase
      
      # Build the required modules:
      cmake --build . -t qtbase -t qtdeclarative [-t another_module]
      OR
      cmake -DFEATURE_developer_build=ON -DFEATURE_headersclean=OFF -DWARNINGS_ARE_ERRORS=OFF -DQT_BUILD_EXAMPLES=OFF -DQT_BUILD_TESTS=OFF -DCMAKE_GENERATOR=Ninja -DQT_HOST_PATH=/development/platforms/desktop/qtbase -DCMAKE_TOOLCHAIN_FILE=/emsdk/upstream/emscripten/cmake/Modules/Platform/Emscripten.cmake /depot/qt/qt5/qtbase
      ```
      ```sh
      # Building Applications on the Command Line: Qt for WebAssembly supports building applications using qmake and make, or CMake with ninja or make.
      cd /workspaces/dev-env-debian/Qt6QuickApp
      mkdir build_wasm && cd build_wasm
      /home/gitpod/Qt/6.4.2/wasm_32/bin/qt-cmake ..
      cmake --build .
      
      # Running Applications
      $EMSDK/upstream/emscripten/emrun --browser=chrome Qt6QuickApp.html
      ```
## Gammaray

libkf5syntaxhighlighting-dev
qt6-base-private-dev
qt6-declarative-private-dev
lldb

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
* [qml/QtQuick/plugins.qmltypes](./usr_lib_x86_64-linux-gnu_qt6_qml/QtQuick/plugins.qmltypes) => (file: "private/qquicktext_p.h" name: "QQuickText")
* https://codebrowser.dev/qt5/qtdeclarative/src/quick/items/qquicktext_p.h.html (QQuickText)
  * https://codebrowser.dev/qt5/qtdeclarative/src/quick/items/qquickimplicitsizeitem_p.h.html#QQuickImplicitSizeItem
  * https://codebrowser.dev/qt5/qtdeclarative/src/quick/items/qquickitem.h.html#97
  * https://codebrowser.dev/data/symbol.html?root=../qt5&ref=QQuickText#graph 
* ![image](https://user-images.githubusercontent.com/8818025/217579299-00aa5442-c9ca-4a30-8108-263b73ef3b9c.png)

## Qt

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
        * **Qt Quick Controls**	: Provides lightweight QML types for creating performant user interfaces for desktop, embedded, and mobile devices. These types employ a simple styling architecture and are very efficient.
        * **Qt Quick Dialogs**	: Types for creating and interacting with system dialogs from a Qt Quick application.
        * **Qt Quick Layouts** :	Layouts are items that are used to arrange Qt Quick 2 based items in the user interface.
        * **Qt Quick Local Storage** : a submodule containing a JavaScript interface for an SQLite database
        * **Qt Particles** : provides a particle system for QML applications
        * **Qt Quick Test**	: A unit test framework for QML applications, where the test cases are written as JavaScript functions.
    * **Qt Test**	: Classes for unit testing Qt applications and libraries.
    * **Qt Widgets**	: Classes to extend Qt GUI with C++ widgets.
  * Qt Add-On
    * **Active Qt**	:  Classes for applications which use ActiveX and COM 
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


## Links
* http://www.umsl.edu/~eckerta/vnc_docs/xvnc.html
* https://www.abcdesktop.io/guiappsoddocker/
* https://www.server-world.info/en/note?os=Debian_11&p=desktop&f=8 => noVNC which is a VNC Client tool to connect to VNC server via Web Browser
  ```sh
  apt -y install novnc python3-websockify
  // Start X-Server
  openssl req -x509 -nodes -newkey rsa:3072 -keyout novnc.pem -out novnc.pem -days 3650
  websockify -D --web=/usr/share/novnc/ --cert=/home/debian/novnc.pem 6080 localhost:5901
  Access to the [https://(server's hostname or IP address):6080/vnc.html] from a client computer with web browser
  ```
