FROM gitpod/workspace-full-vnc:latest
RUN rm -rf $HOME/.xinitrc                 \
    && sudo sed -i.bkp -e 's|chmod 755 "$HOME/.xinitrc"|# chmod 755 "$HOME/.xinitrc"|g' /usr/bin/gp-vncsession