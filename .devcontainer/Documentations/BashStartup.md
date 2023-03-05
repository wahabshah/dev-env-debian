
https://wiki.debian.org/EnvironmentVariables

##  login shell

* a local login on the Linux text console, without any graphical environment at all. 
* In this case, when you boot the computer, you eventually see a "login:" prompt.
* This prompt is produced by a program called `getty(8)` which runs on the tty (terminal) device.
* When you type a username, getty reads it and passes it to the program called `login(1)`. 
* login reads the password database and decides whether it needs to ask you for a password. 
* Once you've provided your password, it will read the `/etc/pam.d/login` file, which may tell it to read various other files such as /etc/environment
* login exec(2)s your login shell, bash.
* `/etc/profile` first. 
* Then it looks in your home directory for `~/.bash_profile`, and if it finds it, it reads that. 
* If it doesn't find `~/.bash_profile`, it looks for `~/.bash_login`, 
* and if it doesn't find that, it looks for `~/.profile`
* `source ~/.bashrc` is not being read in this situation
* You should therefore always have command `source ~/.bashrc` at the end of your `~/.bash_profile` in order to force it to be read by a **login shell**.

gitpod / $ exec bash --login
/etc/profile
/etc/bash.bashrc
~/.bash_profile
~/.profile
~/.bashrc
~/.bashrc.d/200-nix

/ide/out/vs/workbench/contrib/terminal/browser/media/shellIntegration-bash.sh


## Terminal windows in X (non-login shell)
If you start terminal / console window in graphical desktop environment it will be non-login terminal and it will read only the user's non-login start-up script. For Bash this is `~/.bashrc`.

/bin/bash --init-file /ide/out/vs/workbench/contrib/terminal/browser/media/shellIntegration-bash.sh

/etc/bash.bashrc
/ide/out/vs/workbench/contrib/terminal/browser/media/shellIntegration-bash.sh
~/.bashrc
~/.bashrc.d/200-nix

## startx from terminal
If you start X Window (the GUI) from a text console, your environment variables are already defined by your login shell, as explained above. However, the window manager may read the same files again (see below). This is usually not a problem, but you may get unexpected results, such as PATH having all entries listed twice.


https://askubuntu.com/questions/275965/how-to-list-all-variables-names-and-their-current-values
https://www.gnu.org/software/bash/manual/html_node/Bash-POSIX-Mode.html
* Shell variables
* Environmental variables

( set -o posix ; set )
sed 's:\x0:\n:g' /proc/$PID/environ

https://www.gnu.org/software/bash/manual/html_node/Bash-Variables.html
https://www.gnu.org/software/bash/manual/html_node/Bash-Startup-Files.html