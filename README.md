# Master's thesis tasks
Tasks and material for Master's thesis: Benefits of containerized development environments

## Requirements
 - Docker https://www.docker.com/get-started/
 - Visual Studio Code https://code.visualstudio.com/
 - Dev Containers extension https://marketplace.visualstudio.com/items?itemName=ms-vscode-remote.remote-containers
 
## Using Dev Containers

Install the required software. Open project folder in Visual Studio Code.

Open [Command Palette](https://code.visualstudio.com/docs/getstarted/userinterface#_command-palette): `View` -> `Command Palette`

On Command Palette, run following: `>Dev Containers: Reopen in Container`

Visual Studio Code opens in new window, with environment inside Dev Container.

Terminal inside Dev Container can be used by opening one inside Visual Studio Code: `Terminal` -> `New Terminal`


### Build and executing

 - Build: `./build.sh`
 - Execute: `./conan/Master_thesis_tasks`