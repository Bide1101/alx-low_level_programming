File Input/Output (I/O) in C
File I/O is a fundamental aspect of programming that allows you to read, write data to and from files. In C, this functionality is provided by a set of functions defined in the stdio.h header file.

Before you can read from or write to a file, you need to open it using the fopen() function. This function takes two arguments: the name of the file to be opened and the mode in which it is to be opened. The mode can be one of the following

r - read mode
w - write mode
a - append mode
r+ - read and write mode
w+ - read and write mode (overwrites existing file)
a+ - read and write mode (appends to existing file).
