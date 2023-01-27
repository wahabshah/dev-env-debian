# dev-env-debian


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

## After Starting Desktop
```sh
/usr/bin/vncserver -geometry 1920x1080 -SecurityTypes None :0
/opt/novnc/utils/novnc_proxy --vnc localhost:5900 --listen 6080
```


```sh
USER       PID %CPU %MEM    VSZ   RSS TTY      STAT START   TIME COMMAND
gitpod       1  0.0  0.0   2572  1740 ?        Ss   05:22   0:00 /bin/sh -c echo Container started trap "exit 0" 15  exec "$@" while sleep 1 & wait $!; do :; done -
gitpod     419  0.0  0.0   2572  1692 ?        Ss   05:22   0:00 /bin/sh
root       519  0.0  0.0   2572   924 ?        Ss   05:22   0:00 /bin/sh
gitpod     618  0.0  0.0   2572   880 ?        Ss   05:22   0:00 sh /home/gitpod/.vscode-remote/bin/97dec172d3256f8ca4bfb2143f3f76b503ca0534/server.sh --log trace --force-disable-user-env --server-data
gitpod     625  0.7  1.4 979876 118140 ?       Sl   05:22   0:13 /home/gitpod/.vscode-remote/bin/97dec172d3256f8ca4bfb2143f3f76b503ca0534/node /home/gitpod/.vscode-remote/bin/97dec172d3256f8ca4bfb2143f
gitpod     646  0.2  0.7 715752 59428 ?        Sl   05:22   0:05 /vscode/bin/linux-x64/97dec172d3256f8ca4bfb2143f3f76b503ca0534/node /vscode/bin/linux-x64/97dec172d3256f8ca4bfb2143f3f76b503ca0534/out/b
gitpod     775  3.4  3.2 11606092 261032 ?     Sl   05:22   1:03 /vscode/bin/linux-x64/97dec172d3256f8ca4bfb2143f3f76b503ca0534/node /vscode/bin/linux-x64/97dec172d3256f8ca4bfb2143f3f76b503ca0534/out/b
gitpod     786  0.0  0.5 835016 41068 ?        Sl   05:22   0:00 /vscode/bin/linux-x64/97dec172d3256f8ca4bfb2143f3f76b503ca0534/node /vscode/bin/linux-x64/97dec172d3256f8ca4bfb2143f3f76b503ca0534/out/b
gitpod     800  0.0  0.0   2572  1784 ?        Ss   05:22   0:00 /bin/sh
root       870  0.0  0.0   2572   944 ?        Ss   05:22   0:00 /bin/sh
gitpod    1027  0.0  0.0   2572  1708 ?        Ss   05:22   0:00 /bin/sh
root      1094  0.0  0.0   2572   912 ?        Ss   05:22   0:00 /bin/sh
gitpod    1325  0.0  0.5 589508 44180 ?        Sl   05:23   0:00 /vscode/bin/linux-x64/97dec172d3256f8ca4bfb2143f3f76b503ca0534/node /vscode/bin/linux-x64/97dec172d3256f8ca4bfb2143f3f76b503ca0534/exten
message+  2859  0.0  0.0   7892  2728 ?        Ss   05:25   0:00 /usr/bin/dbus-daemon --system
gitpod    9484  0.0  0.0   8384  5456 pts/0    Ss   05:41   0:00 /usr/bin/bash --init-file /vscode/bin/linux-x64/97dec172d3256f8ca4bfb2143f3f76b503ca0534/out/vs/workbench/contrib/terminal/browser/media
gitpod   13608  0.0  0.1  19148 12308 ?        Ss   05:50   0:00 /usr/bin/perl /usr/bin/vncserver -geometry 1920x1080 -SecurityTypes None :0
gitpod   13609  0.0  1.0 250368 86204 ?        Ss   05:50   0:00 /usr/bin/Xtigervnc :0 -localhost=1 -desktop codespaces-fb0a2d:0 (gitpod) -rfbport 5900 -SecurityTypes None -auth /home/gitpod/.Xauthorit
gitpod   13612  0.0  0.0   2572   884 ?        Ss   05:50   0:00 /bin/sh /etc/X11/Xtigervnc-session /etc/X11/tigervnc/Xsession
gitpod   13617  0.0  0.0   9728  4488 ?        S    05:50   0:00 tigervncconfig -iconic
gitpod   13618  0.0  0.9 470800 73612 ?        Sl   05:50   0:00 xfce4-session
gitpod   13746  0.0  0.0  10084  2004 ?        S    05:50   0:00 dbus-launch --autolaunch 85e2cf392fe2cb6006ba40f663d35ec2 --binary-syntax --close-stderr
gitpod   13747  0.0  0.0   7756   372 ?        Ss   05:50   0:00 /usr/bin/dbus-daemon --syslog-only --fork --print-pid 5 --print-address 7 --session
gitpod   13770  0.0  0.0  10084  2040 ?        S    05:50   0:00 /usr/bin/dbus-launch --exit-with-session --sh-syntax
gitpod   13771  0.0  0.0   7756  2320 ?        Ss   05:50   0:00 /usr/bin/dbus-daemon --syslog --fork --print-pid 5 --print-address 7 --session
gitpod   13783  0.0  0.0   7636   776 ?        Ss   05:50   0:00 /usr/bin/ssh-agent /etc/X11/tigervnc/Xsession
gitpod   13786  0.0  0.0  10084  2004 ?        S    05:50   0:00 dbus-launch --exit-with-session xfce4-session
gitpod   13787  0.0  0.0   7844  2548 ?        Ss   05:50   0:00 /usr/bin/dbus-daemon --syslog --fork --print-pid 5 --print-address 7 --session
gitpod   13791  0.0  0.0 233132  6384 ?        Sl   05:50   0:00 /usr/lib/x86_64-linux-gnu/xfce4/xfconf/xfconfd
polkitd  13797  0.0  0.0 234364  7796 ?        Sl   05:50   0:00 /usr/lib/polkit-1/polkitd --no-debug
gitpod   14469  0.0  0.0   7056  3404 pts/0    S+   05:52   0:00 bash /opt/novnc/utils/novnc_proxy --vnc localhost:5900 --listen 6080
gitpod   14477  1.3  0.4 207860 37160 pts/0    S+   05:52   0:00 python3 -m websockify --web /opt/novnc/utils/../ 6080 localhost:5900
gitpod   14676  0.0  0.3 207860 27148 pts/0    S+   05:52   0:00 python3 -m websockify --web /opt/novnc/utils/../ 6080 localhost:5900
gitpod   14897  0.0  0.0   8252  5068 pts/1    Ss   05:53   0:00 /usr/bin/bash --init-file /vscode/bin/linux-x64/97dec172d3256f8ca4bfb2143f3f76b503ca0534/out/vs/workbench/contrib/terminal/browser/media
gitpod   14970  0.0  0.0   2480   944 ?        S    05:53   0:00 sleep 1
gitpod   14974  0.0  0.0  11196  4444 pts/1    R+   05:53   0:00 ps -aux
```
