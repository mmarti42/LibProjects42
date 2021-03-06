# My_C_Libraries

## Description

During the execution of the projects in school 42(school 21 Moscow) I had to write the libraries with various functions, so I managed to put together a good collection. Not all functions inside this library are written perfectly, but I tried to make them sufficient to perform specific tasks. My libraries for projects in school 42 in language C:
* libft - library contains the required functions that I had to write for the first project at school 42, as well as the functions that I added during training and other projects.
* libdir - library contains functions to get information about different types of files.
* libfifo -library contains functions for working with a queue.
* libdar - library contains functions for working with a two-dimensional char array(pointer).
* libhash - library contains functions for working with a hashtable.
* libstack - library contains functions for working with a stack.
* libstr - library contains functions for manipulation with string(pointer to char).

## Compilation
* `make` - Complete compilation of all libraries.
* `make libft` - Compilation libft.
* `make libdir`- Compilation libdir.
* `make libfifo`- Compilation libfifo.
* `make libdar` - Compilation libdar.
* `make libhash` - Compilation libhash.
* `make libstack` - Compilation libstack.
* `make libstr` - Compilation libstr.
* `make clean` - cleaning libraries directories(removing objects directory without library in every library directory).
* `make fclean` - full cleaning libraries directories(removing objects directory with library in every library directory).
* `make re` - removing all intermediate files and after that libraries compilation.

## Usage

You should add flags at compile time `-L path_to_library_directory -lprefix`. The prefix is the name of the library without a word lib.
