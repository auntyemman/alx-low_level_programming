# Static vs Dynamic
The concept of a library is powerful because it allows an end user to link functions via their object file’s during either run-time or compile time — this differs depending on the type of library you create.

**Static library** is a collection of object files, while **dynamic** or **shared library** is a collection of functions compiled and stored in an executable with purpose of being linked by other programs at run-time.

**Dynamic libraries** provide a means to use code that can be loaded anywhere in the memory. Once loaded, the library code can be used by any number of programs. This way the size of programs using dynamic library and the memory footprint can be kept low as a lot of code is kept common in form of a shared library.

# How to create the dynamic library
first of all the C files will be converted to object files with command 
```gcc -fPIC -c *.c```

As you have noticed, this time we created the object files with the **-fPIC** flag. This flag stands for ***Position Independent Code***, a characteristic required by shared libraries.

On the next step we will create the library named

```gcc -shared -Wl,-soname,libtools.so -o libtools.so *.o```

The **-shared** key tells the compiler to produce a shared object which can then be linked with other objects to form an executable. **-Wl** flag passes an options to linker with following format **-Wl,options**, in case of our example it sets the name of library, as it will be passed to the linker.

# How to use a dynamic library
Because of its purpose, our library has to be shared dynamically during the linking with other programs, and to make it happen, we have add a path to the library to the **LD_LIBRARY_PATH** environment variable:

```export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH```
