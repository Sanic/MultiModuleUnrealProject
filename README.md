# MultiModuleUnrealProject
A prototype to use multiple game modules in a Unreal Game project.

This project illustrates how multiple modules can be used to distribute functionality across different modules. 
It does so by having two modules, called MyProject and StuffServant.
MyProject is the main game module, that holds your primary actors, etc.
StuffServant is a module that shall provide some functionality and should therefore be included by other modules.

Important aspects / general advice: 
- Set the Dependencies correctly in your build.cs file to use modules
- In the module that will be used by other modules, use YOURMODULENAME_API on any function or class that shall be used by other modules. This will make the particular function or class linkable by other modules. Otherwise, you might be able to include and compile against other modules, but keep getting link errors.
- When using C, you might have to do some extra work, since the UBT might ignore your .c Files. You can try to rename your .c files to .cpp files. Please make sure to append YOURMODULENAME_API on any C function you want to export.

Please note that no start content or anything else is in this repo. Only the code and build files.

The code has been tested on Unreal 4.14.2 and Windows.
