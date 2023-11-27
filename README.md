# Master's thesis tasks
Tasks and material for Master's thesis: Benefits of containerized development environments

## Requirements
 - Docker https://www.docker.com/get-started/
 - Visual Studio Code https://code.visualstudio.com/
 - Dev Containers extension https://marketplace.visualstudio.com/items?itemName=ms-vscode-remote.remote-containers
 
## Using Dev Containers

1. Install the required software. Open project folder in Visual Studio Code.

2. Open Command Palette by pressing ctr + shift + P or from menu bar: `View` -> `Command Palette`

3. On Command Palette, run following: `>Dev Containers: Reopen in Container`

4. Visual Studio Code opens in new window, with environment inside Dev Container.

5. Terminal inside Dev Container can be used by opening one from menu bar: `Terminal` -> `New Terminal`


### Build and executing

Build and execute commands need to be run on Dev Container terminal, see Using Dev Container step 5.

 - Build: `./build.sh`
 - Execute: `./conan/Master_thesis_tasks`