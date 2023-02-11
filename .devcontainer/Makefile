#!/usr/bin/make -f

# https://salsa.debian.org/qt-kde-team/qt6/qt6-declarative/-/blob/master/debian/rules
# https://wiki.qt.io/Building_Qt_6_from_Git => https://code.qt.io/cgit/qt/qt5.git/tree/
# https://doc.qt.io/qt-6/configure-options.html
# https://doc.qt.io/qt-6/qt6-buildsystem.html

# Use already defined DEB_HOST_* variables.
include /usr/share/dpkg/architecture.mk

# DEB_HOST_MULTIARCH=x86_64-linux-gnu
# DEB_HOST_GNU_SYSTEM=linux-gnu
# DEB_BUILD_GNU_TYPE=x86_64-linux-gnu
# DEB_TARGET_ARCH_LIBC=gnu
# DEB_BUILD_ARCH_ENDIAN=little
# DEB_BUILD_GNU_SYSTEM=linux-gnu
# DEB_BUILD_ARCH_BITS=64
# VSCODE_GIT_ASKPASS_EXTRA_ARGS=
# DEB_HOST_ARCH=amd64
# DEB_TARGET_ARCH_ENDIAN=little
# PWD=/workspaces/dev-env-debian
# HOSTNAME=codespaces-b79435
# OLDPWD=/vscode/bin/linux-x64/e2816fe719a4026ffa1ee0189dc89bdfdbafb164
# DEB_HOST_ARCH_BITS=64
# LANG=en_US.UTF-8
# GITHUB_SERVER_URL=https://github.com
# GITHUB_API_URL=https://api.github.com
# MAKEFLAGS=
# DEB_TARGET_ARCH=amd64
# DEB_HOST_GNU_CPU=x86_64
# DEB_BUILD_ARCH_LIBC=gnu
# MFLAGS=
# GITHUB_USER=wahabshah
# DEB_TARGET_ARCH_BITS=64
# GIT_ASKPASS=/vscode/bin/linux-x64/441438abd1ac652551dbe4d408dfcec8a499b8bf/extensions/git/dist/askpass.sh
# ContainerVersion=12
# DEB_BUILD_ARCH_CPU=amd64
# SHELL_LOGGED_IN=true
# INTERNAL_VSCS_TARGET_URL=https://westeurope.online.visualstudio.com
# DEB_HOST_ARCH_OS=linux
# SHELL=/bin/bash
# GITHUB_TOKEN=ghu_5XyL2pXuUA6M7sofhCqYHBEn4Yh7gr0mlNZK
# SHLVL=2
# DEB_HOST_ARCH_CPU=amd64
# PATH=/vscode/bin/linux-x64/441438abd1ac652551dbe4d408dfcec8a499b8bf/bin/remote-cli:/home/gitpod/.local/bin:/usr/games:/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin
# DEB_BUILD_ARCH_ABI=base
# VSCODE_GIT_IPC_HANDLE=/tmp/vscode-git-943cfb2c67.sock
# VSCODE_GIT_ASKPASS_NODE=/vscode/bin/linux-x64/441438abd1ac652551dbe4d408dfcec8a499b8bf/node
# DEB_BUILD_ARCH=amd64
# VSCODE_GIT_ASKPASS_MAIN=/vscode/bin/linux-x64/441438abd1ac652551dbe4d408dfcec8a499b8bf/extensions/git/dist/askpass-main.js
# DEB_HOST_ARCH_LIBC=gnu
# TRIGGER_REBUILD=1
# CODESPACES=true
# TERM_PROGRAM=vscode
# DEB_TARGET_ARCH_CPU=amd64
# QTWEBENGINE_DISABLE_SANDBOX=1
# DEB_HOST_GNU_TYPE=x86_64-linux-gnu
# LS_COLORS=rs=0:di=01;34:ln=01;36:mh=00:pi=40;33:so=01;35:do=01;35:bd=40;33;01:cd=40;33;01:or=40;31;01:mi=00:su=37;41:sg=30;43:ca=00:tw=30;42:ow=34;42:st=37;44:ex=01;32:*.tar=01;31:*.tgz=01;31:*.arc=01;31:*.arj=01;31:*.taz=01;31:*.lha=01;31:*.lz4=01;31:*.lzh=01;31:*.lzma=01;31:*.tlz=01;31:*.txz=01;31:*.tzo=01;31:*.t7z=01;31:*.zip=01;31:*.z=01;31:*.dz=01;31:*.gz=01;31:*.lrz=01;31:*.lz=01;31:*.lzo=01;31:*.xz=01;31:*.zst=01;31:*.tzst=01;31:*.bz2=01;31:*.bz=01;31:*.tbz=01;31:*.tbz2=01;31:*.tz=01;31:*.deb=01;31:*.rpm=01;31:*.jar=01;31:*.war=01;31:*.ear=01;31:*.sar=01;31:*.rar=01;31:*.alz=01;31:*.ace=01;31:*.zoo=01;31:*.cpio=01;31:*.7z=01;31:*.rz=01;31:*.cab=01;31:*.wim=01;31:*.swm=01;31:*.dwm=01;31:*.esd=01;31:*.avif=01;35:*.jpg=01;35:*.jpeg=01;35:*.mjpg=01;35:*.mjpeg=01;35:*.gif=01;35:*.bmp=01;35:*.pbm=01;35:*.pgm=01;35:*.ppm=01;35:*.tga=01;35:*.xbm=01;35:*.xpm=01;35:*.tif=01;35:*.tiff=01;35:*.png=01;35:*.svg=01;35:*.svgz=01;35:*.mng=01;35:*.pcx=01;35:*.mov=01;35:*.mpg=01;35:*.mpeg=01;35:*.m2v=01;35:*.mkv=01;35:*.webm=01;35:*.webp=01;35:*.ogm=01;35:*.mp4=01;35:*.m4v=01;35:*.mp4v=01;35:*.vob=01;35:*.qt=01;35:*.nuv=01;35:*.wmv=01;35:*.asf=01;35:*.rm=01;35:*.rmvb=01;35:*.flc=01;35:*.avi=01;35:*.fli=01;35:*.flv=01;35:*.gl=01;35:*.dl=01;35:*.xcf=01;35:*.xwd=01;35:*.yuv=01;35:*.cgm=01;35:*.emf=01;35:*.ogv=01;35:*.ogx=01;35:*.aac=00;36:*.au=00;36:*.flac=00;36:*.m4a=00;36:*.mid=00;36:*.midi=00;36:*.mka=00;36:*.mp3=00;36:*.mpc=00;36:*.ogg=00;36:*.ra=00;36:*.wav=00;36:*.oga=00;36:*.opus=00;36:*.spx=00;36:*.xspf=00;36:*~=00;90:*#=00;90:*.bak=00;90:*.old=00;90:*.orig=00;90:*.part=00;90:*.rej=00;90:*.swp=00;90:*.tmp=00;90:*.dpkg-dist=00;90:*.dpkg-old=00;90:*.ucf-dist=00;90:*.ucf-new=00;90:*.ucf-old=00;90:*.rpmnew=00;90:*.rpmorig=00;90:*.rpmsave=00;90:
# DEB_BUILD_ARCH_OS=linux
# BROWSER=/vscode/bin/linux-x64/441438abd1ac652551dbe4d408dfcec8a499b8bf/bin/helpers/browser.sh
# CODESPACE_VSCODE_FOLDER=/workspaces/dev-env-debian
# DEB_TARGET_MULTIARCH=x86_64-linux-gnu
# DEB_BUILD_GNU_CPU=x86_64
# DEB_TARGET_ARCH_OS=linux
# DISPLAY=:0
# DEB_HOST_ARCH_ABI=base
# DEB_BUILD_MULTIARCH=x86_64-linux-gnu
# DEB_TARGET_GNU_TYPE=x86_64-linux-gnu
# DEB_TARGET_ARCH_ABI=base
# _=/usr/bin/make
# MAKE_TERMOUT=/dev/pts/1
# CODESPACE_NAME=wahabshah-studious-spork-5jj5659r97h7p65
# COLORTERM=truecolor
# VSCODE_IPC_HOOK_CLI=/tmp/vscode-ipc-c5ba44cf-9350-4263-bb59-2b5eb39961ab.sock
# DEB_TARGET_GNU_CPU=x86_64
# CLOUDENV_ENVIRONMENT_ID=cddbcee5-5c52-4b0a-ad06-0e6bf1463c63
# GITHUB_REPOSITORY=wahabshah/dev-env-debian
# MAKE_TERMERR=/dev/pts/1
# HOME=/home/gitpod
# GITHUB_GRAPHQL_URL=https://api.github.com/graphql
# RepositoryName=dev-env-debian
# DEB_TARGET_GNU_SYSTEM=linux-gnu
# DEB_HOST_ARCH_ENDIAN=little
# TERM=xterm-256color
# GITHUB_CODESPACE_TOKEN=ACDI22PF5KLFRJ5LX3LTQRDD4YROFANCNFSM4ACYFXIQ
# GITHUB_CODESPACES_PORT_FORWARDING_DOMAIN=preview.app.github.dev
# TERM_PROGRAM_VERSION=1.75.1
# MAKELEVEL=1

# sudo install-packages libqt6shadertools6-dev libmd4c-dev qt6-quick3d-dev qt6-tools-dev qt6-remoteobjects-dev qt6-scxml-dev libsm-dev libice-dev libssl-dev m4 automake bison flex
hello:
	. /workspaces/dev-env-debian/emsdk/emsdk_env.sh &&  printenv && ../qt-everywhere-src-6.4.2/configure -qt-host-path /usr -platform wasm-emscripten -developer-build -- -DCMAKE_LIBRARY_PATH=$(DEB_HOST_MULTIARCH) -DQT_HOST_PATH_CMAKE_DIR=/usr/lib/${DEB_BUILD_MULTIARCH}/cmake -DFEATURE_headersclean=OFF -DWARNINGS_ARE_ERRORS=OFF -DFEATURE_developer_build=ON -DQT_BUILD_EXAMPLES=OFF && cmake --build . -t qtbase -t qtdeclarative -t qtimageformats -t qtsvg --parallel
     #'/usr/bin/cmake' -DFEATURE_developer_build=ON -DFEATURE_headersclean=OFF -DWARNINGS_ARE_ERRORS=OFF -DQT_BUILD_EXAMPLES=OFF -DQT_BUILD_TESTS=OFF '-DQT_HOST_PATH=/usr' '-DQT_QMAKE_TARGET_MKSPEC=wasm-emscripten' -DQT_HOST_PATH_CMAKE_DIR=/usr/lib/${DEB_BUILD_MULTIARCH}/cmake -DCMAKE_LIBRARY_PATH=$(DEB_HOST_MULTIARCH) '-G' 'Ninja' '/workspaces/dev-env-debian/qt-everywhere-src-6.4.2'


#./configure -qt-host-path /usr -platform wasm-emscripten -prefix $(PWD)/qtbase -- -DCMAKE_LIBRARY_PATH=$(DEB_HOST_MULTIARCH) -DQT_HOST_PATH_CMAKE_DIR=/usr/lib/${DEB_BUILD_MULTIARCH}/cmake  -DFEATURE_developer_build=ON -DFEATURE_headersclean=OFF -DWARNINGS_ARE_ERRORS=OFF -DQT_BUILD_EXAMPLES=OFF
# cmake --build . -t qtbase -t qtdeclarative --parallel