FROM buildpack-deps:${VARIANT:-bookworm}

COPY install-packages upgrade-packages /usr/bin/

### base ###
RUN install-packages \
        zip \
        unzip \
        bash-completion \
        build-essential \
        ninja-build \
        htop \
        iputils-ping \
        jq \
        less \
        locales \
        man-db \
        nano \
        ripgrep \
        software-properties-common \
        sudo \
        stow \
        time \
        emacs-nox \
        vim \
        multitail \
        lsof \
        ssl-cert \
        fish \
        zsh \
    && echo "en_US.UTF-8 UTF-8" >> /etc/locale.gen \
    && locale-gen

ENV LANG=en_US.UTF-8

### Update and upgrade the base image ###
#RUN upgrade-packages

### Git ###
RUN install-packages git git-lfs

### Gitpod user ###
# '-l': see https://docs.docker.com/develop/develop-images/dockerfile_best-practices/#user
RUN useradd -l -u 33333 -G sudo -md /home/gitpod -s /bin/bash -p gitpod gitpod \
    # passwordless sudo for users in the 'sudo' group
    && sed -i.bkp -e 's/%sudo\s\+ALL=(ALL\(:ALL\)\?)\s\+ALL/%sudo ALL=NOPASSWD:ALL/g' /etc/sudoers \
    # To emulate the workspace-session behavior within dazzle build env
    && mkdir /workspace && chown -hR gitpod:gitpod /workspace

ENV HOME=/home/gitpod
WORKDIR $HOME
# custom Bash prompt
RUN { echo && echo "PS1='\[\033[01;32m\]\u\[\033[00m\] \[\033[01;34m\]\w\[\033[00m\]\$(__git_ps1 \" (%s)\") $ '" ; } >> .bashrc

COPY default.gitconfig /etc/gitconfig
COPY --chown=gitpod:gitpod default.gitconfig /home/gitpod/.gitconfig

# configure git-lfs
RUN git lfs install --system --skip-repo

### Gitpod user (2) ###
USER gitpod
# use sudo so that user does not get sudo usage info on (the first) login
RUN sudo echo "Running 'sudo' for Gitpod: success" && \
    # create .bashrc.d folder and source it in the bashrc
    mkdir -p /home/gitpod/.bashrc.d && \
    (echo; echo "for i in \$(ls -A \$HOME/.bashrc.d/); do source \$HOME/.bashrc.d/\$i; done"; echo) >> /home/gitpod/.bashrc && \
    # create a completions dir for gitpod user
    mkdir -p /home/gitpod/.local/share/bash-completion/completions

# Custom PATH additions
ENV PATH=$HOME/.local/bin:/usr/games:$PATH

###########DEP-CACERT-UPDATE################ 

USER gitpod

# Dazzle does not rebuild a layer until one of its lines are changed. Increase this counter to rebuild this layer.
ENV TRIGGER_REBUILD=1

RUN sudo apt-get install -y --only-upgrade ca-certificates

##########TOOL-DOCKER#############

USER root

# Dazzle does not rebuild a layer until one of its lines are changed. Increase this counter to rebuild this layer.
ENV TRIGGER_REBUILD=1

# https://docs.docker.com/engine/install/debian/
# Install Docker Engine
RUN apt-get update && export DEBIAN_FRONTEND=noninteractive \
    && apt-get -y install --no-install-recommends ca-certificates curl  gnupg  lsb-release \
    && curl -fsSL https://download.docker.com/linux/debian/gpg | sudo gpg --dearmor -o /usr/share/keyrings/docker-archive-keyring.gpg \
    && echo \
       "deb [arch=$(dpkg --print-architecture) signed-by=/usr/share/keyrings/docker-archive-keyring.gpg] https://download.docker.com/linux/debian \
       $(lsb_release -cs) stable" | sudo tee /etc/apt/sources.list.d/docker.list > /dev/null \
    && sudo apt-get update \
    && sudo apt-get install -y docker-ce docker-ce-cli containerd.io

RUN curl -o /usr/bin/slirp4netns -fsSL https://github.com/rootless-containers/slirp4netns/releases/download/v1.1.12/slirp4netns-$(uname -m) \
    && chmod +x /usr/bin/slirp4netns

RUN curl -o /usr/local/bin/docker-compose -fsSL https://github.com/docker/compose/releases/download/v2.4.1/docker-compose-linux-$(uname -m) \
    && chmod +x /usr/local/bin/docker-compose && mkdir -p /usr/local/lib/docker/cli-plugins && \
    ln -s /usr/local/bin/docker-compose /usr/local/lib/docker/cli-plugins/docker-compose

# https://github.com/wagoodman/dive
RUN curl -o /tmp/dive.deb -fsSL https://github.com/wagoodman/dive/releases/download/v0.10.0/dive_0.10.0_linux_amd64.deb \
    && apt install /tmp/dive.deb \
    && rm /tmp/dive.deb

USER gitpod

###############TOOL-TAILSCALE##########

USER root

# Dazzle does not rebuild a layer until one of its lines are changed. Increase this counter to rebuild this layer.
ENV TRIGGER_REBUILD=2

RUN curl -fsSL https://pkgs.tailscale.com/stable/debian/"$(lsb_release -cs)".gpg | sudo apt-key add - \
    && curl -fsSL https://pkgs.tailscale.com/stable/debian/"$(lsb_release -cs)".list | sudo tee /etc/apt/sources.list.d/tailscale.list \
    && apt-get update \
    && apt-get install -y tailscale \
    && rm /etc/apt/sources.list.d/tailscale.list \
    && update-alternatives --set ip6tables /usr/sbin/ip6tables-nft


## "apt-key add" adds a PGP to a joint file which does not make it through dazzle.
## If we didn't remove the source list entry above, subsequent apt-get operations would break.

USER gitpod

###############C/C++##########
USER root


# Dazzle does not rebuild a layer until one of its lines are changed. Increase this counter to rebuild this layer.
ENV TRIGGER_REBUILD=1

# when bookworm is released then change to http://apt.llvm.org/bookworm/ llvm-toolchain-bookworm-15
RUN curl -fsSL https://apt.llvm.org/llvm-snapshot.gpg.key | sudo gpg --dearmor -o /usr/share/keyrings/llvm-archive-keyring.gpg \
    && echo "deb [signed-by=/usr/share/keyrings/llvm-archive-keyring.gpg] http://apt.llvm.org/unstable/ \
    llvm-toolchain-15 main" | sudo tee /etc/apt/sources.list.d/llvm.list > /dev/null \
    && apt update \
    && sudo install-packages \
        clang \
        clangd \
        clang-format \
        clang-tidy \
        gdb \
        lld

USER gitpod

###############CLOJURE##########
USER root

# Dazzle does not rebuild a layer until one of its lines are changed. Increase this counter to rebuild this layer.
ENV TRIGGER_REBUILD=1
RUN install-packages rlwrap
RUN curl https://download.clojure.org/install/linux-install-1.10.3.1029.sh -o /tmp/linux-install-1.10.3.1029.sh \
    && chmod +x /tmp/linux-install-1.10.3.1029.sh \
    && /tmp/linux-install-1.10.3.1029.sh \
    && rm /tmp/linux-install-1.10.3.1029.sh

USER gitpod

##############go:1.19.5##########
ARG GO_VERSION=1.19.5

USER gitpod

# Dazzle does not rebuild a layer until one of its lines are changed. Increase this counter to rebuild this layer.
ENV TRIGGER_REBUILD=1
ENV GO_VERSION=${GO_VERSION}
ENV GOPATH=$HOME/go-packages
ENV GOROOT=$HOME/go
ENV PATH=$GOROOT/bin:$GOPATH/bin:$PATH
RUN curl -fsSL https://dl.google.com/go/go$GO_VERSION.linux-amd64.tar.gz | tar xzs && \
# install VS Code Go tools for use with gopls as per https://github.com/golang/vscode-go/blob/master/docs/tools.md
# also https://github.com/golang/vscode-go/blob/27bbf42a1523cadb19fad21e0f9d7c316b625684/src/goTools.ts#L139
    go install -v github.com/uudashr/gopkgs/cmd/gopkgs@v2 && \
    go install -v github.com/ramya-rao-a/go-outline@latest && \
    go install -v github.com/cweill/gotests/gotests@latest && \
    go install -v github.com/fatih/gomodifytags@latest && \
    go install -v github.com/josharian/impl@latest && \
    go install -v github.com/haya14busa/goplay/cmd/goplay@latest && \
    go install -v github.com/go-delve/delve/cmd/dlv@latest && \
    go install -v github.com/golangci/golangci-lint/cmd/golangci-lint@latest && \
    go install -v golang.org/x/tools/gopls@latest && \
    go install -v honnef.co/go/tools/cmd/staticcheck@latest && \
    sudo rm -rf $GOPATH/src $GOPATH/pkg $HOME/.cache/go $HOME/.cache/go-build && \
    printf '%s\n' 'export GOPATH=/workspace/go' \
                  'export PATH=$GOPATH/bin:$PATH' > $HOME/.bashrc.d/300-go
##########java:11##########
ARG JAVA_VERSION=11.0.17.fx-zulu

USER gitpod

# Dazzle does not rebuild a layer until one of its lines are changed. Increase this counter to rebuild this layer.
ENV TRIGGER_REBUILD=1

RUN curl -fsSL "https://get.sdkman.io" | bash \
 && bash -c ". /home/gitpod/.sdkman/bin/sdkman-init.sh \
             && sed -i 's/sdkman_selfupdate_enable=true/sdkman_selfupdate_enable=false/g' /home/gitpod/.sdkman/etc/config \
             && sed -i 's/sdkman_selfupdate_feature=true/sdkman_selfupdate_feature=false/g' /home/gitpod/.sdkman/etc/config \
             && sdk install java ${JAVA_VERSION} \
             && sdk install java 17.0.5.fx-zulu \
             && sdk default java ${JAVA_VERSION} \
             && sdk install gradle \
             && sdk install maven \
             && sdk flush archives \
             && sdk flush temp \
             && mkdir /home/gitpod/.m2 \
             && printf '<settings>\n  <localRepository>/workspace/m2-repository/</localRepository>\n</settings>\n' > /home/gitpod/.m2/settings.xml \
             && echo 'export SDKMAN_DIR=\"/home/gitpod/.sdkman\"' >> /home/gitpod/.bashrc.d/99-java \
             && echo '[[ -s \"/home/gitpod/.sdkman/bin/sdkman-init.sh\" ]] && source \"/home/gitpod/.sdkman/bin/sdkman-init.sh\"' >> /home/gitpod/.bashrc.d/99-java"
# above, we are adding the sdkman init to .bashrc (executing sdkman-init.sh does that), because one is executed on interactive shells, the other for non-interactive shells (e.g. plugin-host)
ENV GRADLE_USER_HOME=/workspace/.gradle/


###############Nodejs##########
ARG NODE_VERSION=16.19.0

USER gitpod

# Dazzle does not rebuild a layer until one of its lines are changed. Increase this counter to rebuild this layer.
ENV TRIGGER_REBUILD=1
ENV NODE_VERSION=${NODE_VERSION}

ENV PNPM_HOME=/home/gitpod/.pnpm
ENV PATH=/home/gitpod/.nvm/versions/node/v${NODE_VERSION}/bin:/home/gitpod/.yarn/bin:${PNPM_HOME}:$PATH

RUN curl -fsSL https://raw.githubusercontent.com/nvm-sh/nvm/v0.39.0/install.sh | PROFILE=/dev/null bash \
    && bash -c ". .nvm/nvm.sh \
        && nvm install v${NODE_VERSION} \
        && nvm alias default v${NODE_VERSION} \
        && npm install -g typescript yarn pnpm node-gyp" \
    && echo ". ~/.nvm/nvm-lazy.sh"  >> /home/gitpod/.bashrc.d/50-node
# above, we are adding the lazy nvm init to .bashrc, because one is executed on interactive shells, the other for non-interactive shells (e.g. plugin-host)
COPY --chown=gitpod:gitpod nvm-lazy.sh /home/gitpod/.nvm/nvm-lazy.sh



###############python:3.8################
ARG PYTHON_VERSION=3.8.16

USER gitpod
# Dazzle does not rebuild a layer until one of its lines are changed. Increase this counter to rebuild this layer.
ENV TRIGGER_REBUILD=1

ENV PATH=$HOME/.pyenv/bin:$HOME/.pyenv/shims:$PATH
ENV PIPENV_VENV_IN_PROJECT=true
ENV PYENV_ROOT="$HOME/.pyenv"

RUN sudo install-packages \
	# Install python compiling dependencies for pyenv
	python3-pip make build-essential libssl-dev zlib1g-dev \
	libbz2-dev libreadline-dev libsqlite3-dev wget curl llvm \
	libncursesw5-dev xz-utils tk-dev libxml2-dev libxmlsec1-dev libffi-dev liblzma-dev \
	# Install PYENV
	&& git clone https://github.com/pyenv/pyenv.git ~/.pyenv \
	&& git -C ~/.pyenv checkout ff93c58babd813066bf2d64d004a5cee33c0f27b \
	&& pyenv install ${PYTHON_VERSION} \
	&& pyenv global ${PYTHON_VERSION} \
	&& for exec in global; do printf '%s\n' 'source "$HOME/.gp_pyenv.d/userbase.bash"' >> "$PYENV_ROOT/libexec/pyenv-$exec"; done \
	# Install additional python packages
	&& python3 -m pip install --no-cache-dir --upgrade pip \
	&& pip install --no-cache-dir --upgrade \
	setuptools wheel virtualenv pipenv pylint rope flake8 \
	mypy autopep8 pep8 pylama pydocstyle bandit notebook \
	twine
# Install poetry
RUN if echo $PYTHON_VERSION | grep -q "3.6.*"; then \
		curl -sSL https://install.python-poetry.org | POETRY_VERSION=1.1.15 python; \
    else \
		curl -sSL https://install.python-poetry.org | python; \
	fi
RUN sudo rm -rf /tmp/*

COPY --chown=gitpod:gitpod pyenv.d $HOME/.gp_pyenv.d
COPY --chown=gitpod:gitpod userbase.bash $HOME/.gp_pyenv.d
COPY --chown=gitpod:gitpod python_hook.bash $HOME/.bashrc.d/60-python
COPY --chown=gitpod:gitpod avoid_userbase_hook.bash $HOME/.pyenv/pyenv.d/exec


# lang-ruby:3.1

#######lang-rust#####
USER gitpod

# Dazzle does not rebuild a layer until one of its lines are changed. Increase this counter to rebuild this layer.
ENV TRIGGER_REBUILD=4

ENV PATH=$HOME/.cargo/bin:$PATH

RUN curl -fsSL https://sh.rustup.rs | sh -s -- -y --profile minimal --no-modify-path --default-toolchain stable \
        -c rls rust-analysis rust-src rustfmt clippy \
    && for cmp in rustup cargo; do rustup completions bash "$cmp" > "$HOME/.local/share/bash-completion/completions/$cmp"; done \
    && printf '%s\n'    'export CARGO_HOME=/workspace/.cargo' \
                        'mkdir -m 0755 -p "$CARGO_HOME/bin" 2>/dev/null' \
                        'export PATH=$CARGO_HOME/bin:$PATH' \
                        'test ! -e "$CARGO_HOME/bin/rustup" && mv "$(command -v rustup)" "$CARGO_HOME/bin"' > $HOME/.bashrc.d/80-rust \
    && cargo install cargo-watch cargo-edit cargo-workspaces \
    && rm -rf "$HOME/.cargo/registry" # This registry cache is now useless as we change the CARGO_HOME path to `/workspace`
    
# tool-brew
# tool-nginx
# tool-nix:2.11.0


#########TOOL-CHROME#####################

USER root

# Dazzle does not rebuild a layer until one of its lines are changed. Increase this counter to rebuild this layer.
ENV TRIGGER_REBUILD=1

# chrome and basic render font
# google-chrome
# misc deps for electron and puppeteer to run
RUN cd /tmp && glink="https://dl.google.com/linux/direct/google-chrome-stable_current_amd64.deb" \
	&& wget -q "$glink" \
	&& install-packages libasound2-dev libgtk-3-dev libnss3-dev \
	fonts-noto fonts-noto-cjk ./"${glink##*/}" \
	\
	# OLD: && ln -srf /usr/bin/chromium /usr/bin/google-chrome
	# OLD: To make ungoogled_chromium discoverable by tools like flutter
	&& ln -srf /usr/bin/google-chrome /usr/bin/chromium \
	\
	# Extra chrome tweaks
	## Disables welcome screen
	&& t="$HOME/.config/google-chrome/First Run" && sudo -u gitpod mkdir -p "${t%/*}" && sudo -u gitpod touch "$t" \
	## Disables default browser prompt
	&& t="/etc/opt/chrome/policies/managed/managed_policies.json" && mkdir -p "${t%/*}" && printf '{ "%s": %s }\n' DefaultBrowserSettingEnabled false > "$t"

# For Qt WebEngine on docker
ENV QTWEBENGINE_DISABLE_SANDBOX 1

USER gitpod

########TOOL-VNC#########################

# Dazzle does not rebuild a layer until one of its lines are changed. Increase this counter to rebuild this layer.
ENV TRIGGER_REBUILD=1

USER root

# Install Desktop-ENV, tools
RUN install-packages \
	tigervnc-standalone-server tigervnc-xorg-extension \
	dbus dbus-x11 gnome-keyring xfce4 xfce4-terminal \
	xdg-utils x11-xserver-utils pip

# Install novnc and numpy module for it
RUN git clone --depth 1 https://github.com/novnc/noVNC.git /opt/novnc \
	&& git clone --depth 1 https://github.com/novnc/websockify /opt/novnc/utils/websockify \
	&& find /opt/novnc -type d -name '.git' -exec rm -rf '{}' +
    # removing temporarily due to https://groups.google.com/g/linux.debian.bugs.dist/c/L5yn5hwxVBU 
	#&& sudo -H pip3 install numpy 
COPY novnc-index.html /opt/novnc/index.html

# Add VNC startup script
COPY gp-vncsession /usr/bin/
RUN chmod 0755 "$(which gp-vncsession)" \
	&& printf '%s\n' 'export DISPLAY=:0' \
	'gp-vncsession' >> "$HOME/.bashrc"

USER gitpod


#######TOOL-DOTNET#########
USER gitpod
# Dazzle does not rebuild a layer until one of its lines are changed. Increase this counter to rebuild this layer.
ENV TRIGGER_REBUILD=1

# Install .NET SDK (Current channel)
# Source: https://docs.microsoft.com/dotnet/core/install/linux-scripted-manual#scripted-install
RUN mkdir -p /home/gitpod/dotnet && curl -fsSL https://dot.net/v1/dotnet-install.sh | bash /dev/stdin --version 7.0.100 --install-dir /home/gitpod/dotnet
ENV DOTNET_ROOT=/home/gitpod/dotnet
ENV PATH=/home/gitpod/dotnet:$PATH

# TODO(toru): Remove this hack when the kernel bug is resolved.
#             ref. https://github.com/gitpod-io/gitpod/issues/8901
RUN bash \
    && { echo 'if [ ! -z $GITPOD_REPO_ROOT ]; then'; \
        echo '\tCONTAINER_DIR=$(awk '\''{ print $6 }'\'' /proc/self/maps | grep ^\/run\/containerd | head -n 1 | cut -d '\''/'\'' -f 1-6)'; \
        echo '\tif [ ! -z $CONTAINER_DIR ]; then'; \
        echo '\t\t[[ ! -d $CONTAINER_DIR ]] && sudo mkdir -p $CONTAINER_DIR && sudo ln -s / $CONTAINER_DIR/rootfs'; \
        echo '\tfi'; \
        echo 'fi'; } >> /home/gitpod/.bashrc.d/110-dotnet
RUN chmod +x /home/gitpod/.bashrc.d/110-dotnet

#######EssentialTools-Boost1.81-Qt6-EMSDK##########

USER gitpod

RUN sudo install-packages                                                                                             \
    build-essential libgl1-mesa-dev libfontconfig1-dev libfreetype6-dev libx11-dev libx11-xcb-dev libxext-dev         \
    libxfixes-dev libxi-dev libxrender-dev libxcb1-dev libxcb-glx0-dev libxcb-keysyms1-dev libxcb-image0-dev          \
    libxcb-shm0-dev libxcb-icccm4-dev libxcb-sync-dev libxcb-xfixes0-dev libxcb-shape0-dev libxcb-randr0-dev          \
    libxcb-render-util0-dev libxcb-util-dev libxcb-xinerama0-dev libxcb-xkb-dev libxkbcommon-dev libxkbcommon-x11-dev \
    cmake ninja-build pkg-config liburing-dev gdb tree p7zip-full
RUN sudo install-packages libboost1.81-dev
RUN cd $HOME                                                                                                                                                              \
    && python3 -m pip install setuptools wheel py7zr>=0.20.2 aqtinstall==3.1.1                                                                                            \
    && python3 -m aqt install-tool    linux desktop tools_maintenance qt.tools.maintenance --outputdir $PWD/Qt                                                            \
    && python3 -m aqt install-tool    linux desktop tools_qtcreator qt.tools.qtcreator --outputdir $PWD/Qt                                                                \
    && python3 -m aqt install-tool    linux desktop tools_openssl_x64 --outputdir $PWD/Qt                                                                                 \
    && python3 -m aqt install-doc     linux 6.4.2 --outputdir $PWD/Qt                                                                                                     \
    && python3 -m aqt install-example linux 6.4.2 --outputdir $PWD/Qt                                                                                                     \
    && python3 -m aqt install-qt      linux desktop 6.4.2 gcc_64  -m qtvirtualkeyboard qtquicktimeline --outputdir $PWD/Qt                                                \
    && python3 -m aqt install-qt      linux desktop 6.4.2 wasm_32 -m qtvirtualkeyboard qtquicktimeline --outputdir $PWD/Qt                                                
    #\
    #&& sed -i 's/Exec=qtcreator/Exec=\/home\/gitpod\/Qt\/Tools\/QtCreator\/bin\/qtcreator/g' $HOME/Qt/Tools/QtCreator/share/applications/org.qt-project.qtcreator.desktop \
    #&& cp -r $PWD/Qt/Tools/QtCreator/share/* $HOME/.local/share/
COPY --chown=gitpod:gitpod Qt_DotConfig $HOME/.config/
RUN cd $HOME                                                             \
    && git clone https://github.com/emscripten-core/emsdk.git            \
    && cd emsdk                                                          \
    && ./emsdk install 3.1.14                                            \
    && ./emsdk activate 3.1.14
    # echo 'source "$HOME/emsdk/emsdk_env.sh"' >> $HOME/.bashrc
