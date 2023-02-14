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
    * https://www.youtube.com/watch?v=A1Ka3AmNbuE
      * ![image](https://user-images.githubusercontent.com/123810119/218302006-6d6147db-c3d2-43f0-822a-1da931f231f8.png)
    * Emscripten is a toolchain for compiling to WebAssembly. It lets you run Qt on the web at near-native speed without browser plugins.
    * http://qtandeverything.blogspot.com/2021/01/qt-6-webassembly.html
    * https://itnext.io/developing-web-apps-using-qml-and-qt-for-webassembly-aa84453f2f61
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
      /usr/bin/cmake \
           --debug-output \
           -S Qt6QuickApp  \
           -B build-Qt6QuickApp-WebAssembly-Debug \
           -DCMAKE_BUILD_TYPE:STRING=Debug \
           -DCMAKE_PREFIX_PATH:PATH=$HOME/Qt/6.4.2/wasm_32 \
           -DCMAKE_C_COMPILER:FILEPATH=$HOME/emsdk/upstream/emscripten/emcc \
           -DCMAKE_CXX_COMPILER:FILEPATH=$HOME/emsdk/upstream/emscripten/em++  \
           -DCMAKE_TOOLCHAIN_FILE:FILEPATH=$HOME/Qt/6.4.2/wasm_32/lib/cmake/Qt6/qt.toolchain.cmake \
           -DCMAKE_CXX_FLAGS_INIT:STRING=-DQT_QML_DEBUG \
           -DQT_HOST_PATH:PATH=$HOME/Qt/6.4.2/gcc_64

      /usr/bin/cmake --build build-Qt6QuickApp-WebAssembly-Debug --target all
      
      # Running Applications
      $EMSDK/upstream/emscripten/emrun --browser=chrome build-Qt6QuickApp-WebAssembly-Debug/Qt6QuickApp.html
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

  * 
## Using Qt Quick Text QML Type
* https://doc.qt.io/qt-6/qml-qtquick-text.html
* [qml/QtQuick/plugins.qmltypes](./usr_lib_x86_64-linux-gnu_qt6_qml/QtQuick/plugins.qmltypes) => (file: "private/qquicktext_p.h" name: "QQuickText")
* Qt5
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

## Qt Sources

* https://github.com/qt/qt5/tree/6.4.2
  * qt3d
  * qt5compat
  * qtactiveqt
  * qtbase
    * Qt 6 concurrent module
    * Qt 6 core module
    * Qt 6 D-Bus module
    * Qt 6 GUI module
    * Qt 6 network module
    * Qt 6 OpenGL modul
    * Qt 6 OpenGL widgets module
    * Qt 6 print support module
    * Qt 6 SQL module
    * Qt 6 test module
    * Qt 6 widgets module
    * Qt 6 XML module
  * qtcanvas3d
  * qtcharts
  * qtcoap
  * qtconnectivity
  * qtdatavis3d
  * qtdeclarative
    * Qt 6 QML module
    * Qt 6 Animation QML module
    * Qt 6 FolderListModel QML module
    * Qt 6 Platform QML module
    * Qt 6 QML Models QML modul
    * Qt 6 Settings QML module
    * Qt 6 Shared Image Provider QML module
    * Qt 6 WavefrontMesh QML module
    * Qt 6 QML Core QML module
    * Qt 6 QtQml QML module
    * Qt 6 QtQml Models QML module
    * Qt 6 QtQml Workerscript QML module
    * Qt 6 QtQml XmlListModel QML module
    * Qt 6 Quick QML module
    * Qt 6 Quick Controls QML module
    * Qt 6 Quick Dialogs QML module
    * Qt 6 Quick Layouts QML module
    * Qt 6 Quick Local Storage QML module
    * Qt 6 Quick Native Style QML module
    * Qt 6 Quick Particle QML module
    * Qt 6 Quick Shapes QML module
    * Qt 6 Quick Templates QML module
    * Qt 6 Quick Tooling QML module
    * Qt 6 Quick Window QML module
    * Qt 6 Quick Test QML module
  * qtdoc
  * qtfeedback
  * qtgamepad
  * qthttpserver
  * qtimageformats
  * qtlanguageserver
  * qtlocation
  * qtlottie
  * qtmqtt
  * qtmultimedia
  * qtnetworkauth
  * qtopcua
  * qtpim
  * qtpositioning
  * qtqa
  * qtquick3d
  * qtquick3dphysics
  * qtquicktimeline
  * qtremoteobjects
  * qtrepotools
  * qtscxml
  * qtsensors
  * qtserialbus
  * qtserialport
  * qtshadertools
  * qtspeech
  * qtsvg
  * qtsystems
  * qttools
  * qttranslations
  * qtvirtualkeyboard
  * qtwayland
  * qtwebchannel
  * qtwebengine
  * qtwebglplugin
  * qtwebsockets
  * qtwebview
  * qtxmlpatterns

## Qt Library

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
        * **Qt QML WorkerScript**
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
    * Qt Bluetooth	All	Android, iOS, Linux, Boot to Qt, macOS and Windows	Provides access to Bluetooth hardware.
    * Qt Concurrent	All	All	Classes for writing multi-threaded programs without using low-level threading primitives.
    * Qt Help	All	All	Classes for integrating documentation into applications.
    * Qt Image Formats	All	All	Plugins for additional image formats: TIFF, MNG, TGA, WBMP.
    * Qt Multimedia	All	All*	A rich set of QML types and C++ classes to handle multimedia content. Also includes APIs to handle camera access.
    * Qt NFC	All	Android, iOS, macOS, Linux and Windows	Provides access to Near-Field communication (NFC) hardware. On desktop platforms NDEF access is only     * supported for Type 4 tags.
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
    * Qt Wayland Compositor	Linux	Linux and Boot to Qt targets.	Provides a framework to develop a Wayland compositor.
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




## Install Qt6 Webassembly + GCC

* https://github.com/jurplel/install-qt-action
* https://github.com/miurahr/aqtinstall
* https://aqtinstall.readthedocs.io/en/v3.1.1/cli.html
* https://ddalcino.github.io/aqt-list-server/
* ![image](https://user-images.githubusercontent.com/123810119/218302800-e5873c63-5349-49b8-9461-dc35741947cd.png)

```sh
python3 -m pip install setuptools wheel py7zr>=0.20.2 aqtinstall==3.1.1
python3 -m aqt install-qt      linux desktop 6.4.2 gcc_64 -m qtvirtualkeyboard --outputdir $PWD/Qt 
python3 -m aqt install-qt      linux desktop 6.4.2 wasm_32 -m qtvirtualkeyboard --outputdir $PWD/Qt
python3 -m aqt install-example linux desktop 6.4.2 --outputdir $PWD/Qt
python3 -m aqt install-tool    linux tools_qtcreator qt.tools.qtcreator --outputdir $PWD/Qt
```

```sh
PATH=/workspaces/dev-env-debian/emsdk/node/14.18.2_64bit/bin:/workspaces/dev-env-debian/emsdk/upstream/emscripten:/workspaces/dev-env-debian/emsdk:/home/gitpod/.local/bin:/usr/games:/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/home/gitpod/QtNew/Tools/Ninja
QTDIR=/home/gitpod/QtNew/6.4.2/wasm_32


. /workspaces/dev-env-debian/emsdk/emsdk_env.sh
OR
export PATH=/workspaces/dev-env-debian/emsdk:/workspaces/dev-env-debian/emsdk/upstream/emscripten:/workspaces/dev-env-debian/emsdk/node/14.18.2_64bit/bin:/vscode/bin/linux-x64/441438abd1ac652551dbe4d408dfcec8a499b8bf/bin/remote-cli:/home/gitpod/.local/bin:/usr/games:/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin
export EMSDK=/workspaces/dev-env-debian/emsdk
export EMSDK_NODE=/workspaces/dev-env-debian/emsdk/node/14.18.2_64bit/bin/node

/usr/bin/cmake \
-S Qt6QuickApp \
-B build-Qt6QuickApp-WebAssembly_Qt_6_4_2-Debug1 \
-DCMAKE_GENERATOR:STRING=Ninja \
-DCMAKE_BUILD_TYPE:STRING=Debug \
-DCMAKE_PREFIX_PATH:PATH=/workspaces/dev-env-debian/QtTest/6.4.2/wasm_32 \
-DCMAKE_C_COMPILER:FILEPATH=/workspaces/dev-env-debian/emsdk/upstream/emscripten/emcc \
-DCMAKE_CXX_COMPILER:FILEPATH=/workspaces/dev-env-debian/emsdk/upstream/emscripten/em++ \
-DCMAKE_TOOLCHAIN_FILE:FILEPATH=/workspaces/dev-env-debian/QtTest/6.4.2/wasm_32/lib/cmake/Qt6/qt.toolchain.cmake \
-DCMAKE_CXX_FLAGS_INIT:STRING=-DQT_QML_DEBUG

-- Using Qt bundled ZLIB.
-- Found WrapZLIB: TRUE  
-- Performing Test HAVE_STDATOMIC
-- Performing Test HAVE_STDATOMIC - Success
-- Found WrapAtomic: TRUE  
-- Using Qt bundled PCRE2.
-- Found WrapPCRE2: TRUE  
-- Performing Test HAVE_GETTIME
-- Performing Test HAVE_GETTIME - Success
-- Found WrapRt: TRUE  
-- Found GLESv2: ON  
-- Performing Test HAVE_EGL
-- Performing Test HAVE_EGL - Success
-- Found EGL: /workspaces/dev-env-debian/emsdk/upstream/emscripten/cache/sysroot/include (found version "1.5") 
-- Using Qt bundled PNG.
-- Found WrapPNG: TRUE  
-- Using Qt bundled Harfbuzz.
-- Found WrapHarfbuzz: TRUE  
-- Using Qt bundled Freetype.
-- Found WrapFreetype: TRUE  
-- Using Qt bundled Jpeg.
-- Found WrapJpeg: TRUE  
-- Configuring done
-- Generating done
CMake Warning:
  Manually-specified variables were not used by the project:

    QT_QMAKE_EXECUTABLE


-- Build files have been written to: /workspaces/dev-env-debian/build-Qt6QuickApp-WebAssembly_Qt_6_4_2-Debug
Elapsed time: 00:07.
```

```sh
"/usr/bin/cmake" --build /workspaces/dev-env-debian/build-Qt6QuickApp-WebAssembly_Qt_6_4_2-Debug --target all

[1/6 6.2/sec] Automatic MOC and UIC for target Qt6QuickApp
[2/6 11.0/sec] Automatic RCC for qml.qrc
[3/6 8.4/sec] Building CXX object CMakeFiles/Qt6QuickApp.dir/Qt6QuickApp_autogen/mocs_compilation.cpp.o
[4/6 10.4/sec] Building CXX object CMakeFiles/Qt6QuickApp.dir/Qt6QuickApp_autogen/EWIEGA46WW/qrc_qml.cpp.o
[5/6 2.9/sec] Building CXX object CMakeFiles/Qt6QuickApp.dir/main.cpp.o
[6/6 1.6/sec] Linking CXX executable Qt6QuickApp.js
17:33:17: The process "/usr/bin/cmake" exited normally.
17:33:17: Elapsed time: 00:04.
```
```cmake
########################
# EXTERNAL cache entries
########################

//Path to a program.
CMAKE_ADDR2LINE:FILEPATH=/usr/bin/addr2line

//Emscripten ar
CMAKE_AR:FILEPATH=/workspaces/dev-env-debian/emsdk/upstream/emscripten/emar

//No help, variable specified on the command line.
CMAKE_BUILD_TYPE:STRING=Debug

//Path to the emulator for the target system.
CMAKE_CROSSCOMPILING_EMULATOR:FILEPATH=/workspaces/dev-env-debian/emsdk/node/14.18.2_64bit/bin/node

//CXX compiler
CMAKE_CXX_COMPILER:STRING=/workspaces/dev-env-debian/emsdk/upstream/emscripten/em++

//Emscripten ar
CMAKE_CXX_COMPILER_AR:FILEPATH=/workspaces/dev-env-debian/emsdk/upstream/emscripten/emar

//Emscripten ranlib
CMAKE_CXX_COMPILER_RANLIB:FILEPATH=/workspaces/dev-env-debian/emsdk/upstream/emscripten/emranlib

//Flags used by the CXX compiler during all build types.
CMAKE_CXX_FLAGS:STRING=-DQT_QML_DEBUG

//Flags used by the CXX compiler during DEBUG builds.
CMAKE_CXX_FLAGS_DEBUG:STRING=-g

//No help, variable specified on the command line.
CMAKE_CXX_FLAGS_INIT:STRING=-DQT_QML_DEBUG

//Flags used by the CXX compiler during MINSIZEREL builds.
CMAKE_CXX_FLAGS_MINSIZEREL:STRING=-Os -DNDEBUG

//Flags used by the CXX compiler during RELEASE builds.
CMAKE_CXX_FLAGS_RELEASE:STRING=-O3 -DNDEBUG

//Flags used by the CXX compiler during RELWITHDEBINFO builds.
CMAKE_CXX_FLAGS_RELWITHDEBINFO:STRING=-O2 -g -DNDEBUG

//No help, variable specified on the command line.
CMAKE_C_COMPILER:FILEPATH=/workspaces/dev-env-debian/emsdk/upstream/emscripten/emcc

//Emscripten ar
CMAKE_C_COMPILER_AR:FILEPATH=/workspaces/dev-env-debian/emsdk/upstream/emscripten/emar

//Emscripten ranlib
CMAKE_C_COMPILER_RANLIB:FILEPATH=/workspaces/dev-env-debian/emsdk/upstream/emscripten/emranlib

//Path to a program.
CMAKE_DLLTOOL:FILEPATH=CMAKE_DLLTOOL-NOTFOUND

//Flags used by the linker during all build types.
CMAKE_EXE_LINKER_FLAGS:STRING=

//Flags used by the linker during DEBUG builds.
CMAKE_EXE_LINKER_FLAGS_DEBUG:STRING=

//Flags used by the linker during MINSIZEREL builds.
CMAKE_EXE_LINKER_FLAGS_MINSIZEREL:STRING=

//Flags used by the linker during RELEASE builds.
CMAKE_EXE_LINKER_FLAGS_RELEASE:STRING=

//Flags used by the linker during RELWITHDEBINFO builds.
CMAKE_EXE_LINKER_FLAGS_RELWITHDEBINFO:STRING=

//Enable/Disable output of compile commands during generation.
CMAKE_EXPORT_COMPILE_COMMANDS:BOOL=

//Value Computed by CMake.
CMAKE_FIND_PACKAGE_REDIRECTS_DIR:STATIC=/workspaces/dev-env-debian/build-Qt6QuickApp-WebAssembly_Qt_6_4_2-Debug/CMakeFiles/pkgRedirects

//No help, variable specified on the command line.
CMAKE_GENERATOR:STRING=Ninja

//User executables (bin)
CMAKE_INSTALL_BINDIR:PATH=bin

//Read-only architecture-independent data (DATAROOTDIR)
CMAKE_INSTALL_DATADIR:PATH=

//Read-only architecture-independent data root (share)
CMAKE_INSTALL_DATAROOTDIR:PATH=share

//Documentation root (DATAROOTDIR/doc/PROJECT_NAME)
CMAKE_INSTALL_DOCDIR:PATH=

//C header files (include)
CMAKE_INSTALL_INCLUDEDIR:PATH=include

//Info documentation (DATAROOTDIR/info)
CMAKE_INSTALL_INFODIR:PATH=

//Object code libraries (lib)
CMAKE_INSTALL_LIBDIR:PATH=lib

//Program executables (libexec)
CMAKE_INSTALL_LIBEXECDIR:PATH=libexec

//Locale-dependent data (DATAROOTDIR/locale)
CMAKE_INSTALL_LOCALEDIR:PATH=

//Modifiable single-machine data (var)
CMAKE_INSTALL_LOCALSTATEDIR:PATH=var

//Man documentation (DATAROOTDIR/man)
CMAKE_INSTALL_MANDIR:PATH=

//C header files for non-gcc (/usr/include)
CMAKE_INSTALL_OLDINCLUDEDIR:PATH=/usr/include

//Install path prefix, prepended onto install directories.
CMAKE_INSTALL_PREFIX:PATH=/workspaces/dev-env-debian/emsdk/upstream/emscripten/cache/sysroot

//Run-time variable data (LOCALSTATEDIR/run)
CMAKE_INSTALL_RUNSTATEDIR:PATH=

//System admin executables (sbin)
CMAKE_INSTALL_SBINDIR:PATH=sbin

//Modifiable architecture-independent data (com)
CMAKE_INSTALL_SHAREDSTATEDIR:PATH=com

//Read-only single-machine data (etc)
CMAKE_INSTALL_SYSCONFDIR:PATH=etc

//Path to a program.
CMAKE_LINKER:FILEPATH=/usr/bin/ld

//Program used to build from build.ninja files.
CMAKE_MAKE_PROGRAM:FILEPATH=/usr/bin/ninja

//Flags used by the linker during the creation of modules during
// all build types.
CMAKE_MODULE_LINKER_FLAGS:STRING=

//Flags used by the linker during the creation of modules during
// DEBUG builds.
CMAKE_MODULE_LINKER_FLAGS_DEBUG:STRING=

//Flags used by the linker during the creation of modules during
// MINSIZEREL builds.
CMAKE_MODULE_LINKER_FLAGS_MINSIZEREL:STRING=

//Flags used by the linker during the creation of modules during
// RELEASE builds.
CMAKE_MODULE_LINKER_FLAGS_RELEASE:STRING=

//Flags used by the linker during the creation of modules during
// RELWITHDEBINFO builds.
CMAKE_MODULE_LINKER_FLAGS_RELWITHDEBINFO:STRING=

//Path to a program.
CMAKE_NM:FILEPATH=/usr/bin/nm

//Path to a program.
CMAKE_OBJCOPY:FILEPATH=/usr/bin/objcopy

//Path to a program.
CMAKE_OBJDUMP:FILEPATH=/usr/bin/objdump

//No help, variable specified on the command line.
CMAKE_PREFIX_PATH:PATH=/home/gitpod/QtNew/6.4.2/wasm_32

//Value Computed by CMake
CMAKE_PROJECT_DESCRIPTION:STATIC=

//Value Computed by CMake
CMAKE_PROJECT_HOMEPAGE_URL:STATIC=

//Value Computed by CMake
CMAKE_PROJECT_NAME:STATIC=Qt6QuickApp

//Value Computed by CMake
CMAKE_PROJECT_VERSION:STATIC=0.1

//Value Computed by CMake
CMAKE_PROJECT_VERSION_MAJOR:STATIC=0

//Value Computed by CMake
CMAKE_PROJECT_VERSION_MINOR:STATIC=1

//Value Computed by CMake
CMAKE_PROJECT_VERSION_PATCH:STATIC=

//Value Computed by CMake
CMAKE_PROJECT_VERSION_TWEAK:STATIC=

//Emscripten ranlib
CMAKE_RANLIB:FILEPATH=/workspaces/dev-env-debian/emsdk/upstream/emscripten/emranlib

//Path to a program.
CMAKE_READELF:FILEPATH=/usr/bin/readelf

//Flags used by the linker during the creation of shared libraries
// during all build types.
CMAKE_SHARED_LINKER_FLAGS:STRING=

//Flags used by the linker during the creation of shared libraries
// during DEBUG builds.
CMAKE_SHARED_LINKER_FLAGS_DEBUG:STRING=

//Flags used by the linker during the creation of shared libraries
// during MINSIZEREL builds.
CMAKE_SHARED_LINKER_FLAGS_MINSIZEREL:STRING=

//Flags used by the linker during the creation of shared libraries
// during RELEASE builds.
CMAKE_SHARED_LINKER_FLAGS_RELEASE:STRING=

//Flags used by the linker during the creation of shared libraries
// during RELWITHDEBINFO builds.
CMAKE_SHARED_LINKER_FLAGS_RELWITHDEBINFO:STRING=

//If set, runtime paths are not added when installing shared libraries,
// but are added when building.
CMAKE_SKIP_INSTALL_RPATH:BOOL=NO

//If set, runtime paths are not added when using shared libraries.
CMAKE_SKIP_RPATH:BOOL=NO

//Flags used by the linker during the creation of static libraries
// during all build types.
CMAKE_STATIC_LINKER_FLAGS:STRING=

//Flags used by the linker during the creation of static libraries
// during DEBUG builds.
CMAKE_STATIC_LINKER_FLAGS_DEBUG:STRING=

//Flags used by the linker during the creation of static libraries
// during MINSIZEREL builds.
CMAKE_STATIC_LINKER_FLAGS_MINSIZEREL:STRING=

//Flags used by the linker during the creation of static libraries
// during RELEASE builds.
CMAKE_STATIC_LINKER_FLAGS_RELEASE:STRING=

//Flags used by the linker during the creation of static libraries
// during RELWITHDEBINFO builds.
CMAKE_STATIC_LINKER_FLAGS_RELWITHDEBINFO:STRING=

//Path to a program.
CMAKE_STRIP:FILEPATH=/usr/bin/strip

//The CMake toolchain file
CMAKE_TOOLCHAIN_FILE:FILEPATH=/home/gitpod/QtNew/6.4.2/wasm_32/lib/cmake/Qt6/qt.toolchain.cmake

//If this value is on, makefiles will be generated without the
// .SILENT directive, and all commands will be echoed to the console
// during the make.  This is useful for debugging only. With Visual
// Studio IDE projects all commands are done without /nologo.
CMAKE_VERBOSE_MAKEFILE:BOOL=FALSE

//Path to a file.
EGL_INCLUDE_DIR:PATH=/workspaces/dev-env-debian/emsdk/upstream/emscripten/cache/sysroot/include

//Path to a library.
EGL_LIBRARY:FILEPATH=EGL_LIBRARY-NOTFOUND

//If true, we are targeting Emscripten output.
EMSCRIPTEN:BOOL=1

//Force C/C++ compiler
EMSCRIPTEN_FORCE_COMPILERS:BOOL=ON

//If set, static library targets generate LLVM bitcode files (.bc).
// If disabled (default), UNIX ar archives (.a) are generated.
EMSCRIPTEN_GENERATE_BITCODE_STATIC_LIBRARIES:BOOL=OFF

//Path to a library.
LIBRT:FILEPATH=LIBRT-NOTFOUND

//Path to a program.
NODE_JS_EXECUTABLE:FILEPATH=/workspaces/dev-env-debian/emsdk/node/14.18.2_64bit/bin/node

//Arguments to supply to pkg-config
PKG_CONFIG_ARGN:STRING=

//pkg-config executable
PKG_CONFIG_EXECUTABLE:FILEPATH=/usr/bin/pkg-config

//Additional directories where find(Qt6 ...) host Qt components
// are searched
QT_ADDITIONAL_HOST_PACKAGES_PREFIX_PATH:STRING=

//Additional directories where find(Qt6 ...) components are searched
QT_ADDITIONAL_PACKAGES_PREFIX_PATH:STRING=

//The directory containing a CMake configuration file for QT.
QT_DIR:PATH=/home/gitpod/QtNew/6.4.2/wasm_32/lib/cmake/Qt6

QT_HOST_PATH:PATH=/home/gitpod/QtNew/6.4.2/gcc_64

QT_HOST_PATH_CMAKE_DIR:PATH=/home/gitpod/QtNew/6.4.2/gcc_64/lib/cmake

//No help, variable specified on the command line.
QT_QMAKE_EXECUTABLE:FILEPATH=/home/gitpod/QtNew/6.4.2/wasm_32/bin/qmake

//The directory containing a CMake configuration file for Qt6BundledFreetype.
Qt6BundledFreetype_DIR:PATH=/home/gitpod/QtNew/6.4.2/wasm_32/lib/cmake/Qt6BundledFreetype

//The directory containing a CMake configuration file for Qt6BundledHarfbuzz.
Qt6BundledHarfbuzz_DIR:PATH=/home/gitpod/QtNew/6.4.2/wasm_32/lib/cmake/Qt6BundledHarfbuzz

//The directory containing a CMake configuration file for Qt6BundledLibjpeg.
Qt6BundledLibjpeg_DIR:PATH=/home/gitpod/QtNew/6.4.2/wasm_32/lib/cmake/Qt6BundledLibjpeg

//The directory containing a CMake configuration file for Qt6BundledLibpng.
Qt6BundledLibpng_DIR:PATH=/home/gitpod/QtNew/6.4.2/wasm_32/lib/cmake/Qt6BundledLibpng

//The directory containing a CMake configuration file for Qt6BundledPcre2.
Qt6BundledPcre2_DIR:PATH=/home/gitpod/QtNew/6.4.2/wasm_32/lib/cmake/Qt6BundledPcre2

//The directory containing a CMake configuration file for Qt6BundledZLIB.
Qt6BundledZLIB_DIR:PATH=/home/gitpod/QtNew/6.4.2/wasm_32/lib/cmake/Qt6BundledZLIB

//The directory containing a CMake configuration file for Qt6CoreTools.
Qt6CoreTools_DIR:PATH=/home/gitpod/QtNew/6.4.2/gcc_64/lib/cmake/Qt6CoreTools

//The directory containing a CMake configuration file for Qt6Core.
Qt6Core_DIR:PATH=/home/gitpod/QtNew/6.4.2/wasm_32/lib/cmake/Qt6Core

//The directory containing a CMake configuration file for Qt6GuiTools.
Qt6GuiTools_DIR:PATH=/home/gitpod/QtNew/6.4.2/gcc_64/lib/cmake/Qt6GuiTools

//The directory containing a CMake configuration file for Qt6Gui.
Qt6Gui_DIR:PATH=/home/gitpod/QtNew/6.4.2/wasm_32/lib/cmake/Qt6Gui

//The directory containing a CMake configuration file for Qt6HostInfo.
Qt6HostInfo_DIR:PATH=/home/gitpod/QtNew/6.4.2/gcc_64/lib/cmake/Qt6HostInfo

//The directory containing a CMake configuration file for Qt6LabsAnimation.
Qt6LabsAnimation_DIR:PATH=/home/gitpod/QtNew/6.4.2/wasm_32/lib/cmake/Qt6LabsAnimation

//The directory containing a CMake configuration file for Qt6LabsFolderListModel.
Qt6LabsFolderListModel_DIR:PATH=/home/gitpod/QtNew/6.4.2/wasm_32/lib/cmake/Qt6LabsFolderListModel

//The directory containing a CMake configuration file for Qt6LabsQmlModels.
Qt6LabsQmlModels_DIR:PATH=/home/gitpod/QtNew/6.4.2/wasm_32/lib/cmake/Qt6LabsQmlModels

//The directory containing a CMake configuration file for Qt6LabsSettings.
Qt6LabsSettings_DIR:PATH=/home/gitpod/QtNew/6.4.2/wasm_32/lib/cmake/Qt6LabsSettings

//The directory containing a CMake configuration file for Qt6LabsWavefrontMesh.
Qt6LabsWavefrontMesh_DIR:PATH=/home/gitpod/QtNew/6.4.2/wasm_32/lib/cmake/Qt6LabsWavefrontMesh

//The directory containing a CMake configuration file for Qt6Network.
Qt6Network_DIR:PATH=/home/gitpod/QtNew/6.4.2/wasm_32/lib/cmake/Qt6Network

//The directory containing a CMake configuration file for Qt6OpenGL.
Qt6OpenGL_DIR:PATH=/home/gitpod/QtNew/6.4.2/wasm_32/lib/cmake/Qt6OpenGL

//The directory containing a CMake configuration file for Qt6QmlCompilerPlusPrivate.
Qt6QmlCompilerPlusPrivate_DIR:PATH=Qt6QmlCompilerPlusPrivate_DIR-NOTFOUND

//The directory containing a CMake configuration file for Qt6QmlCore.
Qt6QmlCore_DIR:PATH=/home/gitpod/QtNew/6.4.2/wasm_32/lib/cmake/Qt6QmlCore

//The directory containing a CMake configuration file for Qt6QmlIntegration.
Qt6QmlIntegration_DIR:PATH=/home/gitpod/QtNew/6.4.2/wasm_32/lib/cmake/Qt6QmlIntegration

//The directory containing a CMake configuration file for Qt6QmlLocalStorage.
Qt6QmlLocalStorage_DIR:PATH=/home/gitpod/QtNew/6.4.2/wasm_32/lib/cmake/Qt6QmlLocalStorage

//The directory containing a CMake configuration file for Qt6QmlModels.
Qt6QmlModels_DIR:PATH=/home/gitpod/QtNew/6.4.2/wasm_32/lib/cmake/Qt6QmlModels

//The directory containing a CMake configuration file for Qt6QmlTools.
Qt6QmlTools_DIR:PATH=/home/gitpod/QtNew/6.4.2/gcc_64/lib/cmake/Qt6QmlTools

//The directory containing a CMake configuration file for Qt6Qml.
Qt6Qml_DIR:PATH=/home/gitpod/QtNew/6.4.2/wasm_32/lib/cmake/Qt6Qml

//Value Computed by CMake
Qt6QuickApp_BINARY_DIR:STATIC=/workspaces/dev-env-debian/build-Qt6QuickApp-WebAssembly_Qt_6_4_2-Debug

//Value Computed by CMake
Qt6QuickApp_IS_TOP_LEVEL:STATIC=ON

//Value Computed by CMake
Qt6QuickApp_SOURCE_DIR:STATIC=/workspaces/dev-env-debian/Qt6QuickApp

//The directory containing a CMake configuration file for Qt6QuickControls2Impl.
Qt6QuickControls2Impl_DIR:PATH=/home/gitpod/QtNew/6.4.2/wasm_32/lib/cmake/Qt6QuickControls2Impl

//The directory containing a CMake configuration file for Qt6QuickControls2.
Qt6QuickControls2_DIR:PATH=/home/gitpod/QtNew/6.4.2/wasm_32/lib/cmake/Qt6QuickControls2

//The directory containing a CMake configuration file for Qt6QuickControlsTestUtilsPrivate.
Qt6QuickControlsTestUtilsPrivate_DIR:PATH=/home/gitpod/QtNew/6.4.2/wasm_32/lib/cmake/Qt6QuickControlsTestUtilsPrivate

//The directory containing a CMake configuration file for Qt6QuickDialogs2QuickImpl.
Qt6QuickDialogs2QuickImpl_DIR:PATH=/home/gitpod/QtNew/6.4.2/wasm_32/lib/cmake/Qt6QuickDialogs2QuickImpl

//The directory containing a CMake configuration file for Qt6QuickDialogs2Utils.
Qt6QuickDialogs2Utils_DIR:PATH=/home/gitpod/QtNew/6.4.2/wasm_32/lib/cmake/Qt6QuickDialogs2Utils

//The directory containing a CMake configuration file for Qt6QuickDialogs2.
Qt6QuickDialogs2_DIR:PATH=/home/gitpod/QtNew/6.4.2/wasm_32/lib/cmake/Qt6QuickDialogs2

//The directory containing a CMake configuration file for Qt6QuickLayouts.
Qt6QuickLayouts_DIR:PATH=/home/gitpod/QtNew/6.4.2/wasm_32/lib/cmake/Qt6QuickLayouts

//The directory containing a CMake configuration file for Qt6QuickParticlesPrivate.
Qt6QuickParticlesPrivate_DIR:PATH=/home/gitpod/QtNew/6.4.2/wasm_32/lib/cmake/Qt6QuickParticlesPrivate

//The directory containing a CMake configuration file for Qt6QuickShapesPrivate.
Qt6QuickShapesPrivate_DIR:PATH=/home/gitpod/QtNew/6.4.2/wasm_32/lib/cmake/Qt6QuickShapesPrivate

//The directory containing a CMake configuration file for Qt6QuickTemplates2.
Qt6QuickTemplates2_DIR:PATH=/home/gitpod/QtNew/6.4.2/wasm_32/lib/cmake/Qt6QuickTemplates2

//The directory containing a CMake configuration file for Qt6QuickTestUtilsPrivate.
Qt6QuickTestUtilsPrivate_DIR:PATH=/home/gitpod/QtNew/6.4.2/wasm_32/lib/cmake/Qt6QuickTestUtilsPrivate

//The directory containing a CMake configuration file for Qt6QuickTest.
Qt6QuickTest_DIR:PATH=/home/gitpod/QtNew/6.4.2/wasm_32/lib/cmake/Qt6QuickTest

//The directory containing a CMake configuration file for Qt6Quick.
Qt6Quick_DIR:PATH=/home/gitpod/QtNew/6.4.2/wasm_32/lib/cmake/Qt6Quick

//The directory containing a CMake configuration file for Qt6Sql.
Qt6Sql_DIR:PATH=/home/gitpod/QtNew/6.4.2/wasm_32/lib/cmake/Qt6Sql

//The directory containing a CMake configuration file for Qt6Svg.
Qt6Svg_DIR:PATH=/home/gitpod/QtNew/6.4.2/wasm_32/lib/cmake/Qt6Svg

//The directory containing a CMake configuration file for Qt6Test.
Qt6Test_DIR:PATH=/home/gitpod/QtNew/6.4.2/wasm_32/lib/cmake/Qt6Test

//The directory containing a CMake configuration file for Qt6WidgetsTools.
Qt6WidgetsTools_DIR:PATH=/home/gitpod/QtNew/6.4.2/gcc_64/lib/cmake/Qt6WidgetsTools

//The directory containing a CMake configuration file for Qt6Widgets.
Qt6Widgets_DIR:PATH=/home/gitpod/QtNew/6.4.2/wasm_32/lib/cmake/Qt6Widgets

//The directory containing a CMake configuration file for Qt6ZlibPrivate.
Qt6ZlibPrivate_DIR:PATH=/home/gitpod/QtNew/6.4.2/wasm_32/lib/cmake/Qt6ZlibPrivate

//The directory containing a CMake configuration file for Qt6.
Qt6_DIR:PATH=/home/gitpod/QtNew/6.4.2/wasm_32/lib/cmake/Qt6


########################
# INTERNAL cache entries
########################

//ADVANCED property for variable: CMAKE_ADDR2LINE
CMAKE_ADDR2LINE-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_AR
CMAKE_AR-ADVANCED:INTERNAL=1
//This is the directory where this CMakeCache.txt was created
CMAKE_CACHEFILE_DIR:INTERNAL=/workspaces/dev-env-debian/build-Qt6QuickApp-WebAssembly_Qt_6_4_2-Debug
//Major version of cmake used to create the current loaded cache
CMAKE_CACHE_MAJOR_VERSION:INTERNAL=3
//Minor version of cmake used to create the current loaded cache
CMAKE_CACHE_MINOR_VERSION:INTERNAL=25
//Patch version of cmake used to create the current loaded cache
CMAKE_CACHE_PATCH_VERSION:INTERNAL=1
//Path to CMake executable.
CMAKE_COMMAND:INTERNAL=/usr/bin/cmake
//Path to cpack program executable.
CMAKE_CPACK_COMMAND:INTERNAL=/usr/bin/cpack
//Path to ctest program executable.
CMAKE_CTEST_COMMAND:INTERNAL=/usr/bin/ctest
//ADVANCED property for variable: CMAKE_CXX_COMPILER
CMAKE_CXX_COMPILER-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_CXX_COMPILER_AR
CMAKE_CXX_COMPILER_AR-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_CXX_COMPILER_RANLIB
CMAKE_CXX_COMPILER_RANLIB-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_CXX_FLAGS
CMAKE_CXX_FLAGS-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_CXX_FLAGS_DEBUG
CMAKE_CXX_FLAGS_DEBUG-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_CXX_FLAGS_MINSIZEREL
CMAKE_CXX_FLAGS_MINSIZEREL-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_CXX_FLAGS_RELEASE
CMAKE_CXX_FLAGS_RELEASE-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_CXX_FLAGS_RELWITHDEBINFO
CMAKE_CXX_FLAGS_RELWITHDEBINFO-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_DLLTOOL
CMAKE_DLLTOOL-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_EXE_LINKER_FLAGS
CMAKE_EXE_LINKER_FLAGS-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_EXE_LINKER_FLAGS_DEBUG
CMAKE_EXE_LINKER_FLAGS_DEBUG-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_EXE_LINKER_FLAGS_MINSIZEREL
CMAKE_EXE_LINKER_FLAGS_MINSIZEREL-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_EXE_LINKER_FLAGS_RELEASE
CMAKE_EXE_LINKER_FLAGS_RELEASE-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_EXE_LINKER_FLAGS_RELWITHDEBINFO
CMAKE_EXE_LINKER_FLAGS_RELWITHDEBINFO-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_EXPORT_COMPILE_COMMANDS
CMAKE_EXPORT_COMPILE_COMMANDS-ADVANCED:INTERNAL=1
//Generator instance identifier.
CMAKE_GENERATOR_INSTANCE:INTERNAL=
//Name of generator platform.
CMAKE_GENERATOR_PLATFORM:INTERNAL=
//Name of generator toolset.
CMAKE_GENERATOR_TOOLSET:INTERNAL=
//Source directory with the top level CMakeLists.txt file for this
// project
CMAKE_HOME_DIRECTORY:INTERNAL=/workspaces/dev-env-debian/Qt6QuickApp
//ADVANCED property for variable: CMAKE_INSTALL_BINDIR
CMAKE_INSTALL_BINDIR-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_INSTALL_DATADIR
CMAKE_INSTALL_DATADIR-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_INSTALL_DATAROOTDIR
CMAKE_INSTALL_DATAROOTDIR-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_INSTALL_DOCDIR
CMAKE_INSTALL_DOCDIR-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_INSTALL_INCLUDEDIR
CMAKE_INSTALL_INCLUDEDIR-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_INSTALL_INFODIR
CMAKE_INSTALL_INFODIR-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_INSTALL_LIBDIR
CMAKE_INSTALL_LIBDIR-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_INSTALL_LIBEXECDIR
CMAKE_INSTALL_LIBEXECDIR-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_INSTALL_LOCALEDIR
CMAKE_INSTALL_LOCALEDIR-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_INSTALL_LOCALSTATEDIR
CMAKE_INSTALL_LOCALSTATEDIR-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_INSTALL_MANDIR
CMAKE_INSTALL_MANDIR-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_INSTALL_OLDINCLUDEDIR
CMAKE_INSTALL_OLDINCLUDEDIR-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_INSTALL_RUNSTATEDIR
CMAKE_INSTALL_RUNSTATEDIR-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_INSTALL_SBINDIR
CMAKE_INSTALL_SBINDIR-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_INSTALL_SHAREDSTATEDIR
CMAKE_INSTALL_SHAREDSTATEDIR-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_INSTALL_SYSCONFDIR
CMAKE_INSTALL_SYSCONFDIR-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_LINKER
CMAKE_LINKER-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_MAKE_PROGRAM
CMAKE_MAKE_PROGRAM-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_MODULE_LINKER_FLAGS
CMAKE_MODULE_LINKER_FLAGS-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_MODULE_LINKER_FLAGS_DEBUG
CMAKE_MODULE_LINKER_FLAGS_DEBUG-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_MODULE_LINKER_FLAGS_MINSIZEREL
CMAKE_MODULE_LINKER_FLAGS_MINSIZEREL-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_MODULE_LINKER_FLAGS_RELEASE
CMAKE_MODULE_LINKER_FLAGS_RELEASE-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_MODULE_LINKER_FLAGS_RELWITHDEBINFO
CMAKE_MODULE_LINKER_FLAGS_RELWITHDEBINFO-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_NM
CMAKE_NM-ADVANCED:INTERNAL=1
//number of local generators
CMAKE_NUMBER_OF_MAKEFILES:INTERNAL=1
//ADVANCED property for variable: CMAKE_OBJCOPY
CMAKE_OBJCOPY-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_OBJDUMP
CMAKE_OBJDUMP-ADVANCED:INTERNAL=1
//Platform information initialized
CMAKE_PLATFORM_INFO_INITIALIZED:INTERNAL=1
//ADVANCED property for variable: CMAKE_RANLIB
CMAKE_RANLIB-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_READELF
CMAKE_READELF-ADVANCED:INTERNAL=1
//Path to CMake installation.
CMAKE_ROOT:INTERNAL=/usr/share/cmake-3.25
//ADVANCED property for variable: CMAKE_SHARED_LINKER_FLAGS
CMAKE_SHARED_LINKER_FLAGS-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_SHARED_LINKER_FLAGS_DEBUG
CMAKE_SHARED_LINKER_FLAGS_DEBUG-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_SHARED_LINKER_FLAGS_MINSIZEREL
CMAKE_SHARED_LINKER_FLAGS_MINSIZEREL-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_SHARED_LINKER_FLAGS_RELEASE
CMAKE_SHARED_LINKER_FLAGS_RELEASE-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_SHARED_LINKER_FLAGS_RELWITHDEBINFO
CMAKE_SHARED_LINKER_FLAGS_RELWITHDEBINFO-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_SKIP_INSTALL_RPATH
CMAKE_SKIP_INSTALL_RPATH-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_SKIP_RPATH
CMAKE_SKIP_RPATH-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_STATIC_LINKER_FLAGS
CMAKE_STATIC_LINKER_FLAGS-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_STATIC_LINKER_FLAGS_DEBUG
CMAKE_STATIC_LINKER_FLAGS_DEBUG-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_STATIC_LINKER_FLAGS_MINSIZEREL
CMAKE_STATIC_LINKER_FLAGS_MINSIZEREL-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_STATIC_LINKER_FLAGS_RELEASE
CMAKE_STATIC_LINKER_FLAGS_RELEASE-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_STATIC_LINKER_FLAGS_RELWITHDEBINFO
CMAKE_STATIC_LINKER_FLAGS_RELWITHDEBINFO-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_STRIP
CMAKE_STRIP-ADVANCED:INTERNAL=1
//uname command
CMAKE_UNAME:INTERNAL=/usr/bin/uname
//ADVANCED property for variable: CMAKE_VERBOSE_MAKEFILE
CMAKE_VERBOSE_MAKEFILE-ADVANCED:INTERNAL=1
//ADVANCED property for variable: EGL_INCLUDE_DIR
EGL_INCLUDE_DIR-ADVANCED:INTERNAL=1
//ADVANCED property for variable: EGL_LIBRARY
EGL_LIBRARY-ADVANCED:INTERNAL=1
//Details about finding EGL
FIND_PACKAGE_MESSAGE_DETAILS_EGL:INTERNAL=[/workspaces/dev-env-debian/emsdk/upstream/emscripten/cache/sysroot/include][1][v1.5()]
//Details about finding GLESv2
FIND_PACKAGE_MESSAGE_DETAILS_GLESv2:INTERNAL=[ON][v()]
//Details about finding WrapAtomic
FIND_PACKAGE_MESSAGE_DETAILS_WrapAtomic:INTERNAL=[1][v()]
//Details about finding WrapFreetype
FIND_PACKAGE_MESSAGE_DETAILS_WrapFreetype:INTERNAL=[ON][v()]
//Details about finding WrapHarfbuzz
FIND_PACKAGE_MESSAGE_DETAILS_WrapHarfbuzz:INTERNAL=[ON][v()]
//Details about finding WrapJpeg
FIND_PACKAGE_MESSAGE_DETAILS_WrapJpeg:INTERNAL=[ON][v()]
//Details about finding WrapPCRE2
FIND_PACKAGE_MESSAGE_DETAILS_WrapPCRE2:INTERNAL=[ON][v()]
//Details about finding WrapPNG
FIND_PACKAGE_MESSAGE_DETAILS_WrapPNG:INTERNAL=[ON][v()]
//Details about finding WrapRt
FIND_PACKAGE_MESSAGE_DETAILS_WrapRt:INTERNAL=[ON][v()]
//Details about finding WrapZLIB
FIND_PACKAGE_MESSAGE_DETAILS_WrapZLIB:INTERNAL=[ON][v()]
//ADVANCED property for variable: HAVE_EGL
HAVE_EGL-ADVANCED:INTERNAL=1
//Test HAVE_EGL
HAVE_EGL:INTERNAL=1
//Test HAVE_GETTIME
HAVE_GETTIME:INTERNAL=1
//Test HAVE_STDATOMIC
HAVE_STDATOMIC:INTERNAL=1
//ADVANCED property for variable: PKG_CONFIG_ARGN
PKG_CONFIG_ARGN-ADVANCED:INTERNAL=1
//ADVANCED property for variable: PKG_CONFIG_EXECUTABLE
PKG_CONFIG_EXECUTABLE-ADVANCED:INTERNAL=1
PKG_EGL_CFLAGS:INTERNAL=
PKG_EGL_CFLAGS_I:INTERNAL=
PKG_EGL_CFLAGS_OTHER:INTERNAL=
PKG_EGL_FOUND:INTERNAL=1
PKG_EGL_INCLUDEDIR:INTERNAL=
PKG_EGL_INCLUDE_DIRS:INTERNAL=
PKG_EGL_LDFLAGS:INTERNAL=
PKG_EGL_LDFLAGS_OTHER:INTERNAL=
PKG_EGL_LIBDIR:INTERNAL=
PKG_EGL_LIBRARIES:INTERNAL=
PKG_EGL_LIBRARY_DIRS:INTERNAL=
PKG_EGL_LIBS:INTERNAL=
PKG_EGL_LIBS_L:INTERNAL=
PKG_EGL_LIBS_OTHER:INTERNAL=
PKG_EGL_LIBS_PATHS:INTERNAL=
PKG_EGL_MODULE_NAME:INTERNAL=egl
PKG_EGL_PREFIX:INTERNAL=
PKG_EGL_STATIC_CFLAGS:INTERNAL=
PKG_EGL_STATIC_CFLAGS_I:INTERNAL=
PKG_EGL_STATIC_CFLAGS_OTHER:INTERNAL=
PKG_EGL_STATIC_INCLUDE_DIRS:INTERNAL=
PKG_EGL_STATIC_LDFLAGS:INTERNAL=
PKG_EGL_STATIC_LDFLAGS_OTHER:INTERNAL=
PKG_EGL_STATIC_LIBDIR:INTERNAL=
PKG_EGL_STATIC_LIBRARIES:INTERNAL=
PKG_EGL_STATIC_LIBRARY_DIRS:INTERNAL=
PKG_EGL_STATIC_LIBS:INTERNAL=
PKG_EGL_STATIC_LIBS_L:INTERNAL=
PKG_EGL_STATIC_LIBS_OTHER:INTERNAL=
PKG_EGL_STATIC_LIBS_PATHS:INTERNAL=
PKG_EGL_VERSION:INTERNAL=10.2.2
PKG_EGL_egl_INCLUDEDIR:INTERNAL=
PKG_EGL_egl_LIBDIR:INTERNAL=
PKG_EGL_egl_PREFIX:INTERNAL=
PKG_EGL_egl_VERSION:INTERNAL=
//Qt feature: abstractbutton (from target Qt6::Widgets)
QT_FEATURE_abstractbutton:INTERNAL=ON
//Qt feature: abstractslider (from target Qt6::Widgets)
QT_FEATURE_abstractslider:INTERNAL=ON
//Qt feature: accessibility (from target Qt6::Gui)
QT_FEATURE_accessibility:INTERNAL=ON
//Qt feature: accessibility_atspi_bridge (from target Qt6::Gui)
QT_FEATURE_accessibility_atspi_bridge:INTERNAL=OFF
//Qt feature: action (from target Qt6::Gui)
QT_FEATURE_action:INTERNAL=ON
//Qt feature: aesni (from target Qt6::Core)
QT_FEATURE_aesni:INTERNAL=OFF
//Qt feature: alloca (from target Qt6::Core)
QT_FEATURE_alloca:INTERNAL=ON
//Qt feature: alloca_h (from target Qt6::Core)
QT_FEATURE_alloca_h:INTERNAL=ON
//Qt feature: alloca_malloc_h (from target Qt6::Core)
QT_FEATURE_alloca_malloc_h:INTERNAL=OFF
//Qt feature: android_style_assets (from target Qt6::Core)
QT_FEATURE_android_style_assets:INTERNAL=OFF
//Qt feature: animation (from target Qt6::Core)
QT_FEATURE_animation:INTERNAL=ON
//Qt feature: appstore_compliant (from target Qt6::Core)
QT_FEATURE_appstore_compliant:INTERNAL=OFF
//Qt feature: arm_crc32 (from target Qt6::Core)
QT_FEATURE_arm_crc32:INTERNAL=OFF
//Qt feature: arm_crypto (from target Qt6::Core)
QT_FEATURE_arm_crypto:INTERNAL=OFF
//Qt feature: avx (from target Qt6::Core)
QT_FEATURE_avx:INTERNAL=OFF
//Qt feature: avx2 (from target Qt6::Core)
QT_FEATURE_avx2:INTERNAL=OFF
//Qt feature: avx512bw (from target Qt6::Core)
QT_FEATURE_avx512bw:INTERNAL=OFF
//Qt feature: avx512cd (from target Qt6::Core)
QT_FEATURE_avx512cd:INTERNAL=OFF
//Qt feature: avx512dq (from target Qt6::Core)
QT_FEATURE_avx512dq:INTERNAL=OFF
//Qt feature: avx512er (from target Qt6::Core)
QT_FEATURE_avx512er:INTERNAL=OFF
//Qt feature: avx512f (from target Qt6::Core)
QT_FEATURE_avx512f:INTERNAL=OFF
//Qt feature: avx512ifma (from target Qt6::Core)
QT_FEATURE_avx512ifma:INTERNAL=OFF
//Qt feature: avx512pf (from target Qt6::Core)
QT_FEATURE_avx512pf:INTERNAL=OFF
//Qt feature: avx512vbmi (from target Qt6::Core)
QT_FEATURE_avx512vbmi:INTERNAL=OFF
//Qt feature: avx512vbmi2 (from target Qt6::Core)
QT_FEATURE_avx512vbmi2:INTERNAL=OFF
//Qt feature: avx512vl (from target Qt6::Core)
QT_FEATURE_avx512vl:INTERNAL=OFF
//Qt feature: backtrace (from target Qt6::Core)
QT_FEATURE_backtrace:INTERNAL=OFF
//Qt feature: brotli (from target Qt6::Network)
QT_FEATURE_brotli:INTERNAL=OFF
//Qt feature: buttongroup (from target Qt6::Widgets)
QT_FEATURE_buttongroup:INTERNAL=ON
//Qt feature: c11 (from target Qt6::Core)
QT_FEATURE_c11:INTERNAL=ON
//Qt feature: c99 (from target Qt6::Core)
QT_FEATURE_c99:INTERNAL=ON
//Qt feature: calendarwidget (from target Qt6::Widgets)
QT_FEATURE_calendarwidget:INTERNAL=ON
//Qt feature: cborstreamreader (from target Qt6::Core)
QT_FEATURE_cborstreamreader:INTERNAL=ON
//Qt feature: cborstreamwriter (from target Qt6::Core)
QT_FEATURE_cborstreamwriter:INTERNAL=ON
//Qt feature: checkbox (from target Qt6::Widgets)
QT_FEATURE_checkbox:INTERNAL=ON
//Qt feature: clipboard (from target Qt6::Gui)
QT_FEATURE_clipboard:INTERNAL=ON
//Qt feature: clock_gettime (from target Qt6::Core)
QT_FEATURE_clock_gettime:INTERNAL=ON
//Qt feature: clock_monotonic (from target Qt6::Core)
QT_FEATURE_clock_monotonic:INTERNAL=ON
//Qt feature: colordialog (from target Qt6::Widgets)
QT_FEATURE_colordialog:INTERNAL=ON
//Qt feature: colornames (from target Qt6::Gui)
QT_FEATURE_colornames:INTERNAL=ON
//Qt feature: columnview (from target Qt6::Widgets)
QT_FEATURE_columnview:INTERNAL=ON
//Qt feature: combobox (from target Qt6::Widgets)
QT_FEATURE_combobox:INTERNAL=ON
//Qt feature: commandlineparser (from target Qt6::Core)
QT_FEATURE_commandlineparser:INTERNAL=ON
//Qt feature: commandlinkbutton (from target Qt6::Widgets)
QT_FEATURE_commandlinkbutton:INTERNAL=ON
//Qt feature: completer (from target Qt6::Widgets)
QT_FEATURE_completer:INTERNAL=ON
//Qt feature: concatenatetablesproxymodel (from target Qt6::Core)
QT_FEATURE_concatenatetablesproxymodel:INTERNAL=ON
//Qt feature: concurrent (from target Qt6::Core)
QT_FEATURE_concurrent:INTERNAL=OFF
//Qt feature: contextmenu (from target Qt6::Widgets)
QT_FEATURE_contextmenu:INTERNAL=ON
//Qt feature: cpp_winrt (from target Qt6::Core)
QT_FEATURE_cpp_winrt:INTERNAL=OFF
//Qt feature: cross_compile (from target Qt6::Core)
QT_FEATURE_cross_compile:INTERNAL=ON
//Qt feature: cssparser (from target Qt6::Gui)
QT_FEATURE_cssparser:INTERNAL=ON
//Qt feature: cursor (from target Qt6::Gui)
QT_FEATURE_cursor:INTERNAL=ON
//Qt feature: cxx11 (from target Qt6::Core)
QT_FEATURE_cxx11:INTERNAL=ON
//Qt feature: cxx11_future (from target Qt6::Core)
QT_FEATURE_cxx11_future:INTERNAL=ON
//Qt feature: cxx14 (from target Qt6::Core)
QT_FEATURE_cxx14:INTERNAL=ON
//Qt feature: cxx17 (from target Qt6::Core)
QT_FEATURE_cxx17:INTERNAL=ON
//Qt feature: cxx17_filesystem (from target Qt6::Core)
QT_FEATURE_cxx17_filesystem:INTERNAL=ON
//Qt feature: cxx1z (from target Qt6::Core)
QT_FEATURE_cxx1z:INTERNAL=ON
//Qt feature: cxx20 (from target Qt6::Core)
QT_FEATURE_cxx20:INTERNAL=OFF
//Qt feature: cxx2a (from target Qt6::Core)
QT_FEATURE_cxx2a:INTERNAL=OFF
//Qt feature: cxx2b (from target Qt6::Core)
QT_FEATURE_cxx2b:INTERNAL=OFF
//Qt feature: datawidgetmapper (from target Qt6::Widgets)
QT_FEATURE_datawidgetmapper:INTERNAL=ON
//Qt feature: datestring (from target Qt6::Core)
QT_FEATURE_datestring:INTERNAL=ON
//Qt feature: datetimeedit (from target Qt6::Widgets)
QT_FEATURE_datetimeedit:INTERNAL=ON
//Qt feature: datetimeparser (from target Qt6::Core)
QT_FEATURE_datetimeparser:INTERNAL=ON
//Qt feature: dbus (from target Qt6::Core)
QT_FEATURE_dbus:INTERNAL=OFF
//Qt feature: dbus_linked (from target Qt6::Core)
QT_FEATURE_dbus_linked:INTERNAL=OFF
//Qt feature: debug (from target Qt6::Core)
QT_FEATURE_debug:INTERNAL=OFF
//Qt feature: debug_and_release (from target Qt6::Core)
QT_FEATURE_debug_and_release:INTERNAL=OFF
//Qt feature: desktopservices (from target Qt6::Gui)
QT_FEATURE_desktopservices:INTERNAL=ON
//Qt feature: developer_build (from target Qt6::Core)
QT_FEATURE_developer_build:INTERNAL=OFF
//Qt feature: dial (from target Qt6::Widgets)
QT_FEATURE_dial:INTERNAL=ON
//Qt feature: dialog (from target Qt6::Widgets)
QT_FEATURE_dialog:INTERNAL=ON
//Qt feature: dialogbuttonbox (from target Qt6::Widgets)
QT_FEATURE_dialogbuttonbox:INTERNAL=ON
//Qt feature: direct2d (from target Qt6::Gui)
QT_FEATURE_direct2d:INTERNAL=OFF
//Qt feature: direct2d1_1 (from target Qt6::Gui)
QT_FEATURE_direct2d1_1:INTERNAL=OFF
//Qt feature: directfb (from target Qt6::Gui)
QT_FEATURE_directfb:INTERNAL=OFF
//Qt feature: directwrite (from target Qt6::Gui)
QT_FEATURE_directwrite:INTERNAL=OFF
//Qt feature: directwrite3 (from target Qt6::Gui)
QT_FEATURE_directwrite3:INTERNAL=OFF
//Qt feature: dladdr (from target Qt6::Core)
QT_FEATURE_dladdr:INTERNAL=ON
//Qt feature: dlopen (from target Qt6::Core)
QT_FEATURE_dlopen:INTERNAL=ON
//Qt feature: dnslookup (from target Qt6::Network)
QT_FEATURE_dnslookup:INTERNAL=ON
//Qt feature: dockwidget (from target Qt6::Widgets)
QT_FEATURE_dockwidget:INTERNAL=ON
//Qt feature: doubleconversion (from target Qt6::Core)
QT_FEATURE_doubleconversion:INTERNAL=ON
//Qt feature: draganddrop (from target Qt6::Gui)
QT_FEATURE_draganddrop:INTERNAL=ON
//Qt feature: drm_atomic (from target Qt6::Gui)
QT_FEATURE_drm_atomic:INTERNAL=OFF
//Qt feature: dtls (from target Qt6::Network)
QT_FEATURE_dtls:INTERNAL=OFF
//Qt feature: dynamicgl (from target Qt6::Gui)
QT_FEATURE_dynamicgl:INTERNAL=OFF
//Qt feature: easingcurve (from target Qt6::Core)
QT_FEATURE_easingcurve:INTERNAL=ON
//Qt feature: effects (from target Qt6::Widgets)
QT_FEATURE_effects:INTERNAL=ON
//Qt feature: egl (from target Qt6::Gui)
QT_FEATURE_egl:INTERNAL=ON
//Qt feature: egl_x11 (from target Qt6::Gui)
QT_FEATURE_egl_x11:INTERNAL=OFF
//Qt feature: eglfs (from target Qt6::Gui)
QT_FEATURE_eglfs:INTERNAL=OFF
//Qt feature: eglfs_brcm (from target Qt6::Gui)
QT_FEATURE_eglfs_brcm:INTERNAL=OFF
//Qt feature: eglfs_egldevice (from target Qt6::Gui)
QT_FEATURE_eglfs_egldevice:INTERNAL=OFF
//Qt feature: eglfs_gbm (from target Qt6::Gui)
QT_FEATURE_eglfs_gbm:INTERNAL=OFF
//Qt feature: eglfs_mali (from target Qt6::Gui)
QT_FEATURE_eglfs_mali:INTERNAL=OFF
//Qt feature: eglfs_openwfd (from target Qt6::Gui)
QT_FEATURE_eglfs_openwfd:INTERNAL=OFF
//Qt feature: eglfs_rcar (from target Qt6::Gui)
QT_FEATURE_eglfs_rcar:INTERNAL=OFF
//Qt feature: eglfs_viv (from target Qt6::Gui)
QT_FEATURE_eglfs_viv:INTERNAL=OFF
//Qt feature: eglfs_viv_wl (from target Qt6::Gui)
QT_FEATURE_eglfs_viv_wl:INTERNAL=OFF
//Qt feature: eglfs_vsp2 (from target Qt6::Gui)
QT_FEATURE_eglfs_vsp2:INTERNAL=OFF
//Qt feature: eglfs_x11 (from target Qt6::Gui)
QT_FEATURE_eglfs_x11:INTERNAL=OFF
//Qt feature: errormessage (from target Qt6::Widgets)
QT_FEATURE_errormessage:INTERNAL=ON
//Qt feature: etw (from target Qt6::Core)
QT_FEATURE_etw:INTERNAL=OFF
//Qt feature: evdev (from target Qt6::Gui)
QT_FEATURE_evdev:INTERNAL=OFF
//Qt feature: eventfd (from target Qt6::Core)
QT_FEATURE_eventfd:INTERNAL=OFF
//Qt feature: f16c (from target Qt6::Core)
QT_FEATURE_f16c:INTERNAL=OFF
//Qt feature: filedialog (from target Qt6::Widgets)
QT_FEATURE_filedialog:INTERNAL=ON
//Qt feature: filesystemiterator (from target Qt6::Core)
QT_FEATURE_filesystemiterator:INTERNAL=ON
//Qt feature: filesystemmodel (from target Qt6::Gui)
QT_FEATURE_filesystemmodel:INTERNAL=ON
//Qt feature: filesystemwatcher (from target Qt6::Core)
QT_FEATURE_filesystemwatcher:INTERNAL=ON
//Qt feature: fontcombobox (from target Qt6::Widgets)
QT_FEATURE_fontcombobox:INTERNAL=ON
//Qt feature: fontconfig (from target Qt6::Gui)
QT_FEATURE_fontconfig:INTERNAL=OFF
//Qt feature: fontdialog (from target Qt6::Widgets)
QT_FEATURE_fontdialog:INTERNAL=ON
//Qt feature: force_asserts (from target Qt6::Core)
QT_FEATURE_force_asserts:INTERNAL=OFF
//Qt feature: forkfd_pidfd (from target Qt6::Core)
QT_FEATURE_forkfd_pidfd:INTERNAL=OFF
//Qt feature: formlayout (from target Qt6::Widgets)
QT_FEATURE_formlayout:INTERNAL=ON
//Qt feature: framework (from target Qt6::Core)
QT_FEATURE_framework:INTERNAL=OFF
//Qt feature: freetype (from target Qt6::Gui)
QT_FEATURE_freetype:INTERNAL=ON
//Qt feature: fscompleter (from target Qt6::Widgets)
QT_FEATURE_fscompleter:INTERNAL=ON
//Qt feature: futimens (from target Qt6::Core)
QT_FEATURE_futimens:INTERNAL=ON
//Qt feature: futimes (from target Qt6::Core)
QT_FEATURE_futimes:INTERNAL=OFF
//Qt feature: future (from target Qt6::Core)
QT_FEATURE_future:INTERNAL=OFF
//Qt feature: gc_binaries (from target Qt6::Core)
QT_FEATURE_gc_binaries:INTERNAL=ON
//Qt feature: gestures (from target Qt6::Core)
QT_FEATURE_gestures:INTERNAL=ON
//Qt feature: getauxval (from target Qt6::Core)
QT_FEATURE_getauxval:INTERNAL=OFF
//Qt feature: getentropy (from target Qt6::Core)
QT_FEATURE_getentropy:INTERNAL=ON
//Qt feature: getifaddrs (from target Qt6::Network)
QT_FEATURE_getifaddrs:INTERNAL=OFF
//Qt feature: gif (from target Qt6::Gui)
QT_FEATURE_gif:INTERNAL=ON
//Qt feature: glib (from target Qt6::Core)
QT_FEATURE_glib:INTERNAL=OFF
//Qt feature: glibc (from target Qt6::Core)
QT_FEATURE_glibc:INTERNAL=OFF
//Qt feature: graphicseffect (from target Qt6::Widgets)
QT_FEATURE_graphicseffect:INTERNAL=ON
//Qt feature: graphicsview (from target Qt6::Widgets)
QT_FEATURE_graphicsview:INTERNAL=ON
//Qt feature: groupbox (from target Qt6::Widgets)
QT_FEATURE_groupbox:INTERNAL=ON
//Qt feature: gssapi (from target Qt6::Network)
QT_FEATURE_gssapi:INTERNAL=OFF
//Qt feature: gtk3 (from target Qt6::Widgets)
QT_FEATURE_gtk3:INTERNAL=OFF
//Qt feature: gui (from target Qt6::Core)
QT_FEATURE_gui:INTERNAL=ON
//Qt feature: harfbuzz (from target Qt6::Gui)
QT_FEATURE_harfbuzz:INTERNAL=ON
//Qt feature: highdpiscaling (from target Qt6::Gui)
QT_FEATURE_highdpiscaling:INTERNAL=ON
//Qt feature: hijricalendar (from target Qt6::Core)
QT_FEATURE_hijricalendar:INTERNAL=ON
//Qt feature: http (from target Qt6::Network)
QT_FEATURE_http:INTERNAL=OFF
//Qt feature: ico (from target Qt6::Gui)
QT_FEATURE_ico:INTERNAL=ON
//Qt feature: icu (from target Qt6::Core)
QT_FEATURE_icu:INTERNAL=OFF
//Qt feature: identityproxymodel (from target Qt6::Core)
QT_FEATURE_identityproxymodel:INTERNAL=ON
//Qt feature: ifr_index (from target Qt6::Network)
QT_FEATURE_ifr_index:INTERNAL=OFF
//Qt feature: im (from target Qt6::Gui)
QT_FEATURE_im:INTERNAL=ON
//Qt feature: image_heuristic_mask (from target Qt6::Gui)
QT_FEATURE_image_heuristic_mask:INTERNAL=ON
//Qt feature: image_text (from target Qt6::Gui)
QT_FEATURE_image_text:INTERNAL=ON
//Qt feature: imageformat_bmp (from target Qt6::Gui)
QT_FEATURE_imageformat_bmp:INTERNAL=ON
//Qt feature: imageformat_jpeg (from target Qt6::Gui)
QT_FEATURE_imageformat_jpeg:INTERNAL=ON
//Qt feature: imageformat_png (from target Qt6::Gui)
QT_FEATURE_imageformat_png:INTERNAL=ON
//Qt feature: imageformat_ppm (from target Qt6::Gui)
QT_FEATURE_imageformat_ppm:INTERNAL=ON
//Qt feature: imageformat_xbm (from target Qt6::Gui)
QT_FEATURE_imageformat_xbm:INTERNAL=ON
//Qt feature: imageformat_xpm (from target Qt6::Gui)
QT_FEATURE_imageformat_xpm:INTERNAL=ON
//Qt feature: imageformatplugin (from target Qt6::Gui)
QT_FEATURE_imageformatplugin:INTERNAL=ON
//Qt feature: imageio_text_loading (from target Qt6::Gui)
QT_FEATURE_imageio_text_loading:INTERNAL=ON
//Qt feature: inotify (from target Qt6::Core)
QT_FEATURE_inotify:INTERNAL=OFF
//Qt feature: inputdialog (from target Qt6::Widgets)
QT_FEATURE_inputdialog:INTERNAL=ON
//Qt feature: integrityfb (from target Qt6::Gui)
QT_FEATURE_integrityfb:INTERNAL=OFF
//Qt feature: integrityhid (from target Qt6::Gui)
QT_FEATURE_integrityhid:INTERNAL=OFF
//Qt feature: intelcet (from target Qt6::Core)
QT_FEATURE_intelcet:INTERNAL=OFF
//Qt feature: ipv6ifname (from target Qt6::Network)
QT_FEATURE_ipv6ifname:INTERNAL=OFF
//Qt feature: islamiccivilcalendar (from target Qt6::Core)
QT_FEATURE_islamiccivilcalendar:INTERNAL=ON
//Qt feature: itemmodel (from target Qt6::Core)
QT_FEATURE_itemmodel:INTERNAL=ON
//Qt feature: itemmodeltester (from target Qt6::Test)
QT_FEATURE_itemmodeltester:INTERNAL=ON
//Qt feature: itemviews (from target Qt6::Widgets)
QT_FEATURE_itemviews:INTERNAL=ON
//Qt feature: jalalicalendar (from target Qt6::Core)
QT_FEATURE_jalalicalendar:INTERNAL=ON
//Qt feature: journald (from target Qt6::Core)
QT_FEATURE_journald:INTERNAL=OFF
//Qt feature: jpeg (from target Qt6::Gui)
QT_FEATURE_jpeg:INTERNAL=ON
//Qt feature: keysequenceedit (from target Qt6::Widgets)
QT_FEATURE_keysequenceedit:INTERNAL=ON
//Qt feature: kms (from target Qt6::Gui)
QT_FEATURE_kms:INTERNAL=OFF
//Qt feature: label (from target Qt6::Widgets)
QT_FEATURE_label:INTERNAL=ON
//Qt feature: largefile (from target Qt6::Core)
QT_FEATURE_largefile:INTERNAL=ON
//Qt feature: lcdnumber (from target Qt6::Widgets)
QT_FEATURE_lcdnumber:INTERNAL=ON
//Qt feature: libinput (from target Qt6::Gui)
QT_FEATURE_libinput:INTERNAL=OFF
//Qt feature: libinput_axis_api (from target Qt6::Gui)
QT_FEATURE_libinput_axis_api:INTERNAL=OFF
//Qt feature: libinput_hires_wheel_support (from target Qt6::Gui)
QT_FEATURE_libinput_hires_wheel_support:INTERNAL=OFF
//Qt feature: libproxy (from target Qt6::Network)
QT_FEATURE_libproxy:INTERNAL=OFF
//Qt feature: library (from target Qt6::Core)
QT_FEATURE_library:INTERNAL=ON
//Qt feature: libudev (from target Qt6::Core)
QT_FEATURE_libudev:INTERNAL=OFF
//Qt feature: lineedit (from target Qt6::Widgets)
QT_FEATURE_lineedit:INTERNAL=ON
//Qt feature: linkat (from target Qt6::Core)
QT_FEATURE_linkat:INTERNAL=OFF
//Qt feature: linux_netlink (from target Qt6::Network)
QT_FEATURE_linux_netlink:INTERNAL=OFF
//Qt feature: linuxfb (from target Qt6::Gui)
QT_FEATURE_linuxfb:INTERNAL=OFF
//Qt feature: listview (from target Qt6::Widgets)
QT_FEATURE_listview:INTERNAL=ON
//Qt feature: listwidget (from target Qt6::Widgets)
QT_FEATURE_listwidget:INTERNAL=ON
//Qt feature: localserver (from target Qt6::Network)
QT_FEATURE_localserver:INTERNAL=ON
//Qt feature: lttng (from target Qt6::Core)
QT_FEATURE_lttng:INTERNAL=OFF
//Qt feature: mainwindow (from target Qt6::Widgets)
QT_FEATURE_mainwindow:INTERNAL=ON
//Qt feature: mdiarea (from target Qt6::Widgets)
QT_FEATURE_mdiarea:INTERNAL=ON
//Qt feature: menu (from target Qt6::Widgets)
QT_FEATURE_menu:INTERNAL=ON
//Qt feature: menubar (from target Qt6::Widgets)
QT_FEATURE_menubar:INTERNAL=ON
//Qt feature: messagebox (from target Qt6::Widgets)
QT_FEATURE_messagebox:INTERNAL=ON
//Qt feature: mimetype (from target Qt6::Core)
QT_FEATURE_mimetype:INTERNAL=ON
//Qt feature: mimetype_database (from target Qt6::Core)
QT_FEATURE_mimetype_database:INTERNAL=ON
//Qt feature: mips_dsp (from target Qt6::Core)
QT_FEATURE_mips_dsp:INTERNAL=OFF
//Qt feature: mips_dspr2 (from target Qt6::Core)
QT_FEATURE_mips_dspr2:INTERNAL=OFF
//Qt feature: movie (from target Qt6::Gui)
QT_FEATURE_movie:INTERNAL=ON
//Qt feature: mtdev (from target Qt6::Gui)
QT_FEATURE_mtdev:INTERNAL=OFF
//Qt feature: multiprocess (from target Qt6::Gui)
QT_FEATURE_multiprocess:INTERNAL=ON
//Qt feature: neon (from target Qt6::Core)
QT_FEATURE_neon:INTERNAL=OFF
//Qt feature: network (from target Qt6::Core)
QT_FEATURE_network:INTERNAL=ON
//Qt feature: networkdiskcache (from target Qt6::Network)
QT_FEATURE_networkdiskcache:INTERNAL=ON
//Qt feature: networkinterface (from target Qt6::Network)
QT_FEATURE_networkinterface:INTERNAL=OFF
//Qt feature: networklistmanager (from target Qt6::Network)
QT_FEATURE_networklistmanager:INTERNAL=OFF
//Qt feature: networkproxy (from target Qt6::Network)
QT_FEATURE_networkproxy:INTERNAL=ON
//Qt feature: no_direct_extern_access (from target Qt6::Core)
QT_FEATURE_no_direct_extern_access:INTERNAL=OFF
//Qt feature: no_pkg_config (from target Qt6::Core)
QT_FEATURE_no_pkg_config:INTERNAL=ON
//Qt feature: no_prefix (from target Qt6::Core)
QT_FEATURE_no_prefix:INTERNAL=OFF
//Qt feature: ocsp (from target Qt6::Network)
QT_FEATURE_ocsp:INTERNAL=OFF
//Qt feature: opengl (from target Qt6::Gui)
QT_FEATURE_opengl:INTERNAL=ON
//Qt feature: opengles2 (from target Qt6::Gui)
QT_FEATURE_opengles2:INTERNAL=ON
//Qt feature: opengles3 (from target Qt6::Gui)
QT_FEATURE_opengles3:INTERNAL=ON
//Qt feature: opengles31 (from target Qt6::Gui)
QT_FEATURE_opengles31:INTERNAL=OFF
//Qt feature: opengles32 (from target Qt6::Gui)
QT_FEATURE_opengles32:INTERNAL=OFF
//Qt feature: openssl (from target Qt6::Network)
QT_FEATURE_openssl:INTERNAL=OFF
//Qt feature: openssl_linked (from target Qt6::Network)
QT_FEATURE_openssl_linked:INTERNAL=OFF
//Qt feature: opensslv11 (from target Qt6::Network)
QT_FEATURE_opensslv11:INTERNAL=OFF
//Qt feature: openvg (from target Qt6::Gui)
QT_FEATURE_openvg:INTERNAL=OFF
//Qt feature: pcre2 (from target Qt6::Core)
QT_FEATURE_pcre2:INTERNAL=ON
//Qt feature: pdf (from target Qt6::Gui)
QT_FEATURE_pdf:INTERNAL=ON
//Qt feature: picture (from target Qt6::Gui)
QT_FEATURE_picture:INTERNAL=ON
//Qt feature: pkg_config (from target Qt6::Core)
QT_FEATURE_pkg_config:INTERNAL=OFF
//Qt feature: plugin_manifest (from target Qt6::Core)
QT_FEATURE_plugin_manifest:INTERNAL=ON
//Qt feature: png (from target Qt6::Gui)
QT_FEATURE_png:INTERNAL=ON
//Qt feature: poll_poll (from target Qt6::Core)
QT_FEATURE_poll_poll:INTERNAL=ON
//Qt feature: poll_pollts (from target Qt6::Core)
QT_FEATURE_poll_pollts:INTERNAL=OFF
//Qt feature: poll_ppoll (from target Qt6::Core)
QT_FEATURE_poll_ppoll:INTERNAL=OFF
//Qt feature: poll_select (from target Qt6::Core)
QT_FEATURE_poll_select:INTERNAL=OFF
//Qt feature: posix_fallocate (from target Qt6::Core)
QT_FEATURE_posix_fallocate:INTERNAL=ON
//Qt feature: printsupport (from target Qt6::Core)
QT_FEATURE_printsupport:INTERNAL=ON
//Qt feature: private_tests (from target Qt6::Core)
QT_FEATURE_private_tests:INTERNAL=OFF
//Qt feature: process (from target Qt6::Core)
QT_FEATURE_process:INTERNAL=OFF
//Qt feature: processenvironment (from target Qt6::Core)
QT_FEATURE_processenvironment:INTERNAL=ON
//Qt feature: progressbar (from target Qt6::Widgets)
QT_FEATURE_progressbar:INTERNAL=ON
//Qt feature: progressdialog (from target Qt6::Widgets)
QT_FEATURE_progressdialog:INTERNAL=ON
//Qt feature: proxymodel (from target Qt6::Core)
QT_FEATURE_proxymodel:INTERNAL=ON
//Qt feature: publicsuffix_qt (from target Qt6::Network)
QT_FEATURE_publicsuffix_qt:INTERNAL=ON
//Qt feature: publicsuffix_system (from target Qt6::Network)
QT_FEATURE_publicsuffix_system:INTERNAL=OFF
//Qt feature: pushbutton (from target Qt6::Widgets)
QT_FEATURE_pushbutton:INTERNAL=ON
//Qt feature: qml_animation (from target Qt6::Qml)
QT_FEATURE_qml_animation:INTERNAL=ON
//Qt feature: qml_debug (from target Qt6::Qml)
QT_FEATURE_qml_debug:INTERNAL=ON
//Qt feature: qml_delegate_model (from target Qt6::QmlModels)
QT_FEATURE_qml_delegate_model:INTERNAL=ON
//Qt feature: qml_devtools (from target Qt6::Qml)
QT_FEATURE_qml_devtools:INTERNAL=ON
//Qt feature: qml_itemmodel (from target Qt6::Qml)
QT_FEATURE_qml_itemmodel:INTERNAL=ON
//Qt feature: qml_jit (from target Qt6::Qml)
QT_FEATURE_qml_jit:INTERNAL=OFF
//Qt feature: qml_list_model (from target Qt6::QmlModels)
QT_FEATURE_qml_list_model:INTERNAL=ON
//Qt feature: qml_locale (from target Qt6::Qml)
QT_FEATURE_qml_locale:INTERNAL=ON
//Qt feature: qml_network (from target Qt6::Qml)
QT_FEATURE_qml_network:INTERNAL=ON
//Qt feature: qml_object_model (from target Qt6::QmlModels)
QT_FEATURE_qml_object_model:INTERNAL=ON
//Qt feature: qml_preview (from target Qt6::Qml)
QT_FEATURE_qml_preview:INTERNAL=OFF
//Qt feature: qml_profiler (from target Qt6::Qml)
QT_FEATURE_qml_profiler:INTERNAL=ON
//Qt feature: qml_python (from target Qt6::Qml)
QT_FEATURE_qml_python:INTERNAL=ON
//Qt feature: qml_table_model (from target Qt6::QmlModels)
QT_FEATURE_qml_table_model:INTERNAL=ON
//Qt feature: qml_worker_script (from target Qt6::Qml)
QT_FEATURE_qml_worker_script:INTERNAL=OFF
//Qt feature: qml_xml_http_request (from target Qt6::Qml)
QT_FEATURE_qml_xml_http_request:INTERNAL=ON
//Qt feature: qml_xmllistmodel (from target Qt6::Qml)
QT_FEATURE_qml_xmllistmodel:INTERNAL=OFF
//Qt feature: qqnx_imf (from target Qt6::Gui)
QT_FEATURE_qqnx_imf:INTERNAL=OFF
//Qt feature: qqnx_pps (from target Qt6::Core)
QT_FEATURE_qqnx_pps:INTERNAL=OFF
//Qt feature: quick_animatedimage (from target Qt6::Quick)
QT_FEATURE_quick_animatedimage:INTERNAL=ON
//Qt feature: quick_canvas (from target Qt6::Quick)
QT_FEATURE_quick_canvas:INTERNAL=ON
//Qt feature: quick_designer (from target Qt6::Quick)
QT_FEATURE_quick_designer:INTERNAL=ON
//Qt feature: quick_draganddrop (from target Qt6::Quick)
QT_FEATURE_quick_draganddrop:INTERNAL=ON
//Qt feature: quick_flipable (from target Qt6::Quick)
QT_FEATURE_quick_flipable:INTERNAL=ON
//Qt feature: quick_gridview (from target Qt6::Quick)
QT_FEATURE_quick_gridview:INTERNAL=ON
//Qt feature: quick_itemview (from target Qt6::Quick)
QT_FEATURE_quick_itemview:INTERNAL=ON
//Qt feature: quick_listview (from target Qt6::Quick)
QT_FEATURE_quick_listview:INTERNAL=ON
//Qt feature: quick_particles (from target Qt6::Quick)
QT_FEATURE_quick_particles:INTERNAL=ON
//Qt feature: quick_path (from target Qt6::Quick)
QT_FEATURE_quick_path:INTERNAL=ON
//Qt feature: quick_pathview (from target Qt6::Quick)
QT_FEATURE_quick_pathview:INTERNAL=ON
//Qt feature: quick_positioners (from target Qt6::Quick)
QT_FEATURE_quick_positioners:INTERNAL=ON
//Qt feature: quick_repeater (from target Qt6::Quick)
QT_FEATURE_quick_repeater:INTERNAL=ON
//Qt feature: quick_shadereffect (from target Qt6::Quick)
QT_FEATURE_quick_shadereffect:INTERNAL=ON
//Qt feature: quick_sprite (from target Qt6::Quick)
QT_FEATURE_quick_sprite:INTERNAL=ON
//Qt feature: quick_tableview (from target Qt6::Quick)
QT_FEATURE_quick_tableview:INTERNAL=ON
//Qt feature: quick_treeview (from target Qt6::Quick)
QT_FEATURE_quick_treeview:INTERNAL=ON
//Qt feature: quick_viewtransitions (from target Qt6::Quick)
QT_FEATURE_quick_viewtransitions:INTERNAL=ON
//Qt feature: quickcontrols2_basic (from target Qt6::QuickControls2)
QT_FEATURE_quickcontrols2_basic:INTERNAL=ON
//Qt feature: quickcontrols2_fusion (from target Qt6::QuickControls2)
QT_FEATURE_quickcontrols2_fusion:INTERNAL=ON
//Qt feature: quickcontrols2_imagine (from target Qt6::QuickControls2)
QT_FEATURE_quickcontrols2_imagine:INTERNAL=ON
//Qt feature: quickcontrols2_ios (from target Qt6::QuickControls2)
QT_FEATURE_quickcontrols2_ios:INTERNAL=ON
//Qt feature: quickcontrols2_macos (from target Qt6::QuickControls2)
QT_FEATURE_quickcontrols2_macos:INTERNAL=ON
//Qt feature: quickcontrols2_material (from target Qt6::QuickControls2)
QT_FEATURE_quickcontrols2_material:INTERNAL=ON
//Qt feature: quickcontrols2_universal (from target Qt6::QuickControls2)
QT_FEATURE_quickcontrols2_universal:INTERNAL=ON
//Qt feature: quickcontrols2_windows (from target Qt6::QuickControls2)
QT_FEATURE_quickcontrols2_windows:INTERNAL=ON
//Qt feature: quicktemplates2_calendar (from target Qt6::QuickTemplates2)
QT_FEATURE_quicktemplates2_calendar:INTERNAL=ON
//Qt feature: quicktemplates2_hover (from target Qt6::QuickTemplates2)
QT_FEATURE_quicktemplates2_hover:INTERNAL=ON
//Qt feature: quicktemplates2_multitouch (from target Qt6::QuickTemplates2)
QT_FEATURE_quicktemplates2_multitouch:INTERNAL=ON
//Qt feature: radiobutton (from target Qt6::Widgets)
QT_FEATURE_radiobutton:INTERNAL=ON
//Qt feature: raster_64bit (from target Qt6::Gui)
QT_FEATURE_raster_64bit:INTERNAL=ON
//Qt feature: raster_fp (from target Qt6::Gui)
QT_FEATURE_raster_fp:INTERNAL=ON
//Qt feature: rdrnd (from target Qt6::Core)
QT_FEATURE_rdrnd:INTERNAL=OFF
//Qt feature: rdseed (from target Qt6::Core)
QT_FEATURE_rdseed:INTERNAL=OFF
//Qt feature: reduce_exports (from target Qt6::Core)
QT_FEATURE_reduce_exports:INTERNAL=ON
//Qt feature: reduce_relocations (from target Qt6::Core)
QT_FEATURE_reduce_relocations:INTERNAL=OFF
//Qt feature: regularexpression (from target Qt6::Core)
QT_FEATURE_regularexpression:INTERNAL=ON
//Qt feature: relocatable (from target Qt6::Core)
QT_FEATURE_relocatable:INTERNAL=OFF
//Qt feature: renameat2 (from target Qt6::Core)
QT_FEATURE_renameat2:INTERNAL=OFF
//Qt feature: resizehandler (from target Qt6::Widgets)
QT_FEATURE_resizehandler:INTERNAL=ON
//Qt feature: rpath (from target Qt6::Core)
QT_FEATURE_rpath:INTERNAL=OFF
//Qt feature: rubberband (from target Qt6::Widgets)
QT_FEATURE_rubberband:INTERNAL=ON
//Qt feature: schannel (from target Qt6::Network)
QT_FEATURE_schannel:INTERNAL=OFF
//Qt feature: scrollarea (from target Qt6::Widgets)
QT_FEATURE_scrollarea:INTERNAL=ON
//Qt feature: scrollbar (from target Qt6::Widgets)
QT_FEATURE_scrollbar:INTERNAL=ON
//Qt feature: scroller (from target Qt6::Widgets)
QT_FEATURE_scroller:INTERNAL=ON
//Qt feature: sctp (from target Qt6::Network)
QT_FEATURE_sctp:INTERNAL=OFF
//Qt feature: securetransport (from target Qt6::Network)
QT_FEATURE_securetransport:INTERNAL=OFF
//Qt feature: separate_debug_info (from target Qt6::Core)
QT_FEATURE_separate_debug_info:INTERNAL=OFF
//Qt feature: sessionmanager (from target Qt6::Gui)
QT_FEATURE_sessionmanager:INTERNAL=ON
//Qt feature: settings (from target Qt6::Core)
QT_FEATURE_settings:INTERNAL=ON
//Qt feature: sha3_fast (from target Qt6::Core)
QT_FEATURE_sha3_fast:INTERNAL=ON
//Qt feature: shani (from target Qt6::Core)
QT_FEATURE_shani:INTERNAL=OFF
//Qt feature: shared (from target Qt6::Core)
QT_FEATURE_shared:INTERNAL=OFF
//Qt feature: sharedmemory (from target Qt6::Core)
QT_FEATURE_sharedmemory:INTERNAL=OFF
//Qt feature: shortcut (from target Qt6::Core)
QT_FEATURE_shortcut:INTERNAL=ON
//Qt feature: signaling_nan (from target Qt6::Core)
QT_FEATURE_signaling_nan:INTERNAL=ON
//Qt feature: simulator_and_device (from target Qt6::Core)
QT_FEATURE_simulator_and_device:INTERNAL=OFF
//Qt feature: sizegrip (from target Qt6::Widgets)
QT_FEATURE_sizegrip:INTERNAL=ON
//Qt feature: slider (from target Qt6::Widgets)
QT_FEATURE_slider:INTERNAL=ON
//Qt feature: slog2 (from target Qt6::Core)
QT_FEATURE_slog2:INTERNAL=OFF
//Qt feature: socks5 (from target Qt6::Network)
QT_FEATURE_socks5:INTERNAL=ON
//Qt feature: sortfilterproxymodel (from target Qt6::Core)
QT_FEATURE_sortfilterproxymodel:INTERNAL=ON
//Qt feature: spinbox (from target Qt6::Widgets)
QT_FEATURE_spinbox:INTERNAL=ON
//Qt feature: splashscreen (from target Qt6::Widgets)
QT_FEATURE_splashscreen:INTERNAL=ON
//Qt feature: splitter (from target Qt6::Widgets)
QT_FEATURE_splitter:INTERNAL=ON
//Qt feature: sql (from target Qt6::Core)
QT_FEATURE_sql:INTERNAL=ON
//Qt feature: sqlmodel (from target Qt6::Sql)
QT_FEATURE_sqlmodel:INTERNAL=ON
//Qt feature: sse2 (from target Qt6::Core)
QT_FEATURE_sse2:INTERNAL=OFF
//Qt feature: sse3 (from target Qt6::Core)
QT_FEATURE_sse3:INTERNAL=OFF
//Qt feature: sse4_1 (from target Qt6::Core)
QT_FEATURE_sse4_1:INTERNAL=OFF
//Qt feature: sse4_2 (from target Qt6::Core)
QT_FEATURE_sse4_2:INTERNAL=OFF
//Qt feature: ssl (from target Qt6::Network)
QT_FEATURE_ssl:INTERNAL=OFF
//Qt feature: sspi (from target Qt6::Network)
QT_FEATURE_sspi:INTERNAL=OFF
//Qt feature: ssse3 (from target Qt6::Core)
QT_FEATURE_ssse3:INTERNAL=OFF
//Qt feature: stack_protector_strong (from target Qt6::Core)
QT_FEATURE_stack_protector_strong:INTERNAL=OFF
//Qt feature: stackedwidget (from target Qt6::Widgets)
QT_FEATURE_stackedwidget:INTERNAL=ON
//Qt feature: standarditemmodel (from target Qt6::Gui)
QT_FEATURE_standarditemmodel:INTERNAL=ON
//Qt feature: static (from target Qt6::Core)
QT_FEATURE_static:INTERNAL=ON
//Qt feature: statusbar (from target Qt6::Widgets)
QT_FEATURE_statusbar:INTERNAL=ON
//Qt feature: statustip (from target Qt6::Widgets)
QT_FEATURE_statustip:INTERNAL=ON
//Qt feature: statx (from target Qt6::Core)
QT_FEATURE_statx:INTERNAL=OFF
//Qt feature: std_atomic64 (from target Qt6::Core)
QT_FEATURE_std_atomic64:INTERNAL=ON
//Qt feature: stdlib_libcpp (from target Qt6::Core)
QT_FEATURE_stdlib_libcpp:INTERNAL=OFF
//Qt feature: stringlistmodel (from target Qt6::Core)
QT_FEATURE_stringlistmodel:INTERNAL=ON
//Qt feature: style_android (from target Qt6::Widgets)
QT_FEATURE_style_android:INTERNAL=OFF
//Qt feature: style_fusion (from target Qt6::Widgets)
QT_FEATURE_style_fusion:INTERNAL=ON
//Qt feature: style_mac (from target Qt6::Widgets)
QT_FEATURE_style_mac:INTERNAL=OFF
//Qt feature: style_stylesheet (from target Qt6::Widgets)
QT_FEATURE_style_stylesheet:INTERNAL=ON
//Qt feature: style_windows (from target Qt6::Widgets)
QT_FEATURE_style_windows:INTERNAL=ON
//Qt feature: style_windowsvista (from target Qt6::Widgets)
QT_FEATURE_style_windowsvista:INTERNAL=OFF
//Qt feature: syntaxhighlighter (from target Qt6::Widgets)
QT_FEATURE_syntaxhighlighter:INTERNAL=ON
//Qt feature: syslog (from target Qt6::Core)
QT_FEATURE_syslog:INTERNAL=OFF
//Qt feature: system_doubleconversion (from target Qt6::Core)
QT_FEATURE_system_doubleconversion:INTERNAL=OFF
//Qt feature: system_freetype (from target Qt6::Gui)
QT_FEATURE_system_freetype:INTERNAL=OFF
//Qt feature: system_harfbuzz (from target Qt6::Gui)
QT_FEATURE_system_harfbuzz:INTERNAL=OFF
//Qt feature: system_jpeg (from target Qt6::Gui)
QT_FEATURE_system_jpeg:INTERNAL=OFF
//Qt feature: system_libb2 (from target Qt6::Core)
QT_FEATURE_system_libb2:INTERNAL=OFF
//Qt feature: system_pcre2 (from target Qt6::Core)
QT_FEATURE_system_pcre2:INTERNAL=OFF
//Qt feature: system_png (from target Qt6::Gui)
QT_FEATURE_system_png:INTERNAL=OFF
//Qt feature: system_proxies (from target Qt6::Network)
QT_FEATURE_system_proxies:INTERNAL=ON
//Qt feature: system_textmarkdownreader (from target Qt6::Gui)
QT_FEATURE_system_textmarkdownreader:INTERNAL=OFF
//Qt feature: system_xcb_xinput (from target Qt6::Gui)
QT_FEATURE_system_xcb_xinput:INTERNAL=OFF
//Qt feature: system_zlib (from target Qt6::Core)
QT_FEATURE_system_zlib:INTERNAL=OFF
//Qt feature: systemsemaphore (from target Qt6::Core)
QT_FEATURE_systemsemaphore:INTERNAL=OFF
//Qt feature: systemtrayicon (from target Qt6::Gui)
QT_FEATURE_systemtrayicon:INTERNAL=ON
//Qt feature: tabbar (from target Qt6::Widgets)
QT_FEATURE_tabbar:INTERNAL=ON
//Qt feature: tabletevent (from target Qt6::Gui)
QT_FEATURE_tabletevent:INTERNAL=ON
//Qt feature: tableview (from target Qt6::Widgets)
QT_FEATURE_tableview:INTERNAL=ON
//Qt feature: tablewidget (from target Qt6::Widgets)
QT_FEATURE_tablewidget:INTERNAL=ON
//Qt feature: tabwidget (from target Qt6::Widgets)
QT_FEATURE_tabwidget:INTERNAL=ON
//Qt feature: temporaryfile (from target Qt6::Core)
QT_FEATURE_temporaryfile:INTERNAL=ON
//Qt feature: testlib (from target Qt6::Core)
QT_FEATURE_testlib:INTERNAL=ON
//Qt feature: testlib_selfcover (from target Qt6::Test)
QT_FEATURE_testlib_selfcover:INTERNAL=OFF
//Qt feature: textbrowser (from target Qt6::Widgets)
QT_FEATURE_textbrowser:INTERNAL=ON
//Qt feature: textdate (from target Qt6::Core)
QT_FEATURE_textdate:INTERNAL=ON
//Qt feature: textedit (from target Qt6::Widgets)
QT_FEATURE_textedit:INTERNAL=ON
//Qt feature: texthtmlparser (from target Qt6::Gui)
QT_FEATURE_texthtmlparser:INTERNAL=ON
//Qt feature: textmarkdownreader (from target Qt6::Gui)
QT_FEATURE_textmarkdownreader:INTERNAL=ON
//Qt feature: textmarkdownwriter (from target Qt6::Gui)
QT_FEATURE_textmarkdownwriter:INTERNAL=ON
//Qt feature: textodfwriter (from target Qt6::Gui)
QT_FEATURE_textodfwriter:INTERNAL=ON
//Qt feature: thread (from target Qt6::Core)
QT_FEATURE_thread:INTERNAL=OFF
//Qt feature: timezone (from target Qt6::Core)
QT_FEATURE_timezone:INTERNAL=OFF
//Qt feature: toolbar (from target Qt6::Widgets)
QT_FEATURE_toolbar:INTERNAL=ON
//Qt feature: toolbox (from target Qt6::Widgets)
QT_FEATURE_toolbox:INTERNAL=ON
//Qt feature: toolbutton (from target Qt6::Widgets)
QT_FEATURE_toolbutton:INTERNAL=ON
//Qt feature: tooltip (from target Qt6::Widgets)
QT_FEATURE_tooltip:INTERNAL=ON
//Qt feature: topleveldomain (from target Qt6::Network)
QT_FEATURE_topleveldomain:INTERNAL=ON
//Qt feature: translation (from target Qt6::Core)
QT_FEATURE_translation:INTERNAL=ON
//Qt feature: transposeproxymodel (from target Qt6::Core)
QT_FEATURE_transposeproxymodel:INTERNAL=ON
//Qt feature: treeview (from target Qt6::Widgets)
QT_FEATURE_treeview:INTERNAL=ON
//Qt feature: treewidget (from target Qt6::Widgets)
QT_FEATURE_treewidget:INTERNAL=ON
//Qt feature: tslib (from target Qt6::Gui)
QT_FEATURE_tslib:INTERNAL=OFF
//Qt feature: tuiotouch (from target Qt6::Gui)
QT_FEATURE_tuiotouch:INTERNAL=ON
//Qt feature: udpsocket (from target Qt6::Network)
QT_FEATURE_udpsocket:INTERNAL=ON
//Qt feature: undocommand (from target Qt6::Gui)
QT_FEATURE_undocommand:INTERNAL=ON
//Qt feature: undogroup (from target Qt6::Gui)
QT_FEATURE_undogroup:INTERNAL=ON
//Qt feature: undostack (from target Qt6::Gui)
QT_FEATURE_undostack:INTERNAL=ON
//Qt feature: undoview (from target Qt6::Widgets)
QT_FEATURE_undoview:INTERNAL=ON
//Qt feature: use_bfd_linker (from target Qt6::Core)
QT_FEATURE_use_bfd_linker:INTERNAL=OFF
//Qt feature: use_gold_linker (from target Qt6::Core)
QT_FEATURE_use_gold_linker:INTERNAL=OFF
//Qt feature: use_lld_linker (from target Qt6::Core)
QT_FEATURE_use_lld_linker:INTERNAL=OFF
//Qt feature: use_mold_linker (from target Qt6::Core)
QT_FEATURE_use_mold_linker:INTERNAL=OFF
//Qt feature: vaes (from target Qt6::Core)
QT_FEATURE_vaes:INTERNAL=OFF
//Qt feature: valgrind (from target Qt6::Test)
QT_FEATURE_valgrind:INTERNAL=OFF
//Qt feature: validator (from target Qt6::Gui)
QT_FEATURE_validator:INTERNAL=ON
//Qt feature: vkgen (from target Qt6::Gui)
QT_FEATURE_vkgen:INTERNAL=ON
//Qt feature: vkkhrdisplay (from target Qt6::Gui)
QT_FEATURE_vkkhrdisplay:INTERNAL=OFF
//Qt feature: vnc (from target Qt6::Gui)
QT_FEATURE_vnc:INTERNAL=OFF
//Qt feature: vsp2 (from target Qt6::Gui)
QT_FEATURE_vsp2:INTERNAL=OFF
//Qt feature: vulkan (from target Qt6::Gui)
QT_FEATURE_vulkan:INTERNAL=OFF
//Qt feature: whatsthis (from target Qt6::Gui)
QT_FEATURE_whatsthis:INTERNAL=ON
//Qt feature: wheelevent (from target Qt6::Gui)
QT_FEATURE_wheelevent:INTERNAL=ON
//Qt feature: widgets (from target Qt6::Core)
QT_FEATURE_widgets:INTERNAL=ON
//Qt feature: widgettextcontrol (from target Qt6::Widgets)
QT_FEATURE_widgettextcontrol:INTERNAL=ON
//Qt feature: wizard (from target Qt6::Widgets)
QT_FEATURE_wizard:INTERNAL=ON
//Qt feature: xcb (from target Qt6::Gui)
QT_FEATURE_xcb:INTERNAL=OFF
//Qt feature: xcb_egl_plugin (from target Qt6::Gui)
QT_FEATURE_xcb_egl_plugin:INTERNAL=OFF
//Qt feature: xcb_glx (from target Qt6::Gui)
QT_FEATURE_xcb_glx:INTERNAL=OFF
//Qt feature: xcb_glx_plugin (from target Qt6::Gui)
QT_FEATURE_xcb_glx_plugin:INTERNAL=OFF
//Qt feature: xcb_native_painting (from target Qt6::Gui)
QT_FEATURE_xcb_native_painting:INTERNAL=OFF
//Qt feature: xcb_sm (from target Qt6::Gui)
QT_FEATURE_xcb_sm:INTERNAL=OFF
//Qt feature: xcb_xlib (from target Qt6::Gui)
QT_FEATURE_xcb_xlib:INTERNAL=OFF
//Qt feature: xkbcommon (from target Qt6::Gui)
QT_FEATURE_xkbcommon:INTERNAL=OFF
//Qt feature: xkbcommon_x11 (from target Qt6::Gui)
QT_FEATURE_xkbcommon_x11:INTERNAL=OFF
//Qt feature: xlib (from target Qt6::Gui)
QT_FEATURE_xlib:INTERNAL=OFF
//Qt feature: xml (from target Qt6::Core)
QT_FEATURE_xml:INTERNAL=ON
//Qt feature: xmlstream (from target Qt6::Core)
QT_FEATURE_xmlstream:INTERNAL=ON
//Qt feature: xmlstreamreader (from target Qt6::Core)
QT_FEATURE_xmlstreamreader:INTERNAL=ON
//Qt feature: xmlstreamwriter (from target Qt6::Core)
QT_FEATURE_xmlstreamwriter:INTERNAL=ON
//Qt feature: xrender (from target Qt6::Gui)
QT_FEATURE_xrender:INTERNAL=OFF
//Qt feature: zstd (from target Qt6::Core)
QT_FEATURE_zstd:INTERNAL=OFF
QT_USE_BUNDLED_BundledFreetype:INTERNAL=ON
QT_USE_BUNDLED_BundledHarfbuzz:INTERNAL=ON
QT_USE_BUNDLED_BundledLibjpeg:INTERNAL=ON
QT_USE_BUNDLED_BundledLibpng:INTERNAL=ON
QT_USE_BUNDLED_BundledPcre2:INTERNAL=ON
QT_USE_BUNDLED_BundledZLIB:INTERNAL=ON
//CMAKE_INSTALL_PREFIX during last run
_GNUInstallDirs_LAST_CMAKE_INSTALL_PREFIX:INTERNAL=/workspaces/dev-env-debian/emsdk/upstream/emscripten/cache/sysroot
__pkg_config_arguments_PKG_EGL:INTERNAL=QUIET;egl
__pkg_config_checked_PKG_EGL:INTERNAL=1
__qt_qml_macros_module_base_dir:INTERNAL=/home/gitpod/QtNew/6.4.2/wasm_32/lib/cmake/Qt6Qml
prefix_result:INTERNAL=
```
## Github Actions

* Github Runners
 * Default packages :- https://github.com/actions/runner-images/blob/ubuntu22/20230206.1/images/linux/Ubuntu2204-Readme.md
 * Add more packages from apt :- https://docs.github.com/en/actions/using-github-hosted-runners/customizing-github-hosted-runners

## deploy-aspnet-blazor-webassembly-to-github-pages

* https://swimburger.net/blog/dotnet/how-to-deploy-aspnet-blazor-webassembly-to-github-pages
* This was inspiration to deploy-qt6-webassembly-to-github-pages

## Create Github Pages Branch
* https://gist.github.com/ramnathv/2227408
* https://gist.github.com/matteodelucchi/f9dffd7967687d51cb5f577228fc6bd1
* https://jiafulow.github.io/blog/2020/07/09/create-gh-pages-branch-in-existing-repo/
* https://wahabshah.github.io/dev-env-debian/
```sh
git checkout --orphan gh-pages
# preview files to be deleted
git rm -rf --dry-run .
# actually delete the files
git rm -rf .
echo "My GitHub Page" > index.html
git add .
git commit -a -m "First pages commit"
git push origin gh-pages
``
