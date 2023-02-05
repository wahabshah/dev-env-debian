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

```sh
sudo apt-get install build-essential libgl1-mesa-dev qtcreator qt6-base-dev qt6-declarative-dev cmake qml6-module-qtquick-controls qml6-module-qtquick-window
```

```sh
rm -rf /tmp/.X* /tmp/.x /tmp/v* /tmp/dbus* /tmp/bash*     \
&& tigervncserver -cleanslate  || tigervncserver -kill    \
|| pkill -9 novnc_proxy || pgrep -f websockify | xargs kill > /dev/null
```

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
