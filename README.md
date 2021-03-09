# WSL2 File Explorer Wrapper

## description
 
In wsl when you want to open a directory in the file explorer, you should use `explorer.exe \\home\\username\\projects\\` command becuase windows cannot understand linux standard path slashes. so this project is a wrapper between the linux commandline and windows file explorer that converts `/` to `\\`.
 
 ## How to compile and install
 
 ### step 1: make working directory
 ```
mkdir explorer-wrapper
cd explorer-wrapper
 ```
### step 2: clone the reposetory
```
git clone ...
```
### step 3: enter into the reposetory
```
cd wsl2-file-explorer-wrapper
```
### step 4: compile and install it to system
```
make
sudo make install
```
### step 5: enjoy it :)
```
explorer /home/
```

 ## How to uninstall
```
sudo make uninstall
```
