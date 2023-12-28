#include<iostream>
#include<stdio.h>
int main(){
/*

creating a new file -
fopen() ;
 with atributes as "a"or "a+" or "w" or"w+"

opening an existing file - 
fscanf() ; fgets();

writing to a file -
 fprintf();fputs();

movint to a specific location in a file -- 
fseek(); rewind();

closing a file -- 
fclose();
*/
//////////////////////////////////////////////

//File pointer in C
/*
is a reference to a particular position in the opened file It is used 
in the file handling to perform all the file operations such as read, write, close,etc
FILE macro to declare file pointer variable-----> defined in <stdio.h>

*/

FILE* ptr;

//////open a file in C//////
FILE* fopen(const char *File_functions, const char* access_mode );
/*
file_name: name of the file when present in the same directory as the source file. Otherwise, full path.
access_mode: Specifies for what operation the file is being opened.

If the file is opened successfully, returns a file pointer to it.
If the file is not opened, then returns NULL.

*/

/////////// file openinng modes in C /////////////////////
/*
1>  r: Opens a file in read-only mode. The file must exist.
       Searches file. If the file is opened successfully fopen( ) loads it into memory and sets up a pointer
       that points to the first character in it. If the file cannot be opened fopen( ) returns NULL.

2>  w: Opens a file in write-only mode. If the file exists,
       then its contents are overwritten. If the file doesn’t exist, then a new file is created.

3> rb: Open for reading in binary mode. If the file does not exist, fopen( ) returns NULL.

4> wb: open for writing in text mode, if the file exist, its contents are overwritten
       if the file doesnt exist, a new file is created,
       it returns Null, if unable to open the file

5> a:  Searches File:  If the file is opened successfully fopen( ) loads it into memory 
       and sets up a pointer that points to the last character in it. It opens only in the append mode. 
       If the file doesn’t exist, a new file is created. Returns NULL, if unable to open the file.

6> r+: Opens a file in read/write mode. The file must exist.
       Searches file. It is opened successfully fopen( ) loads it into memory and sets up a pointer that points to the first character in it.
       Returns NULL, if unable to open the file.
 
7> ab:  Open for append in binary mode. Data is added to the end of the file. If the file does not exist, it will be created.


8> w+: Opens a file in read/write mode. If the file exists, then its contents are overwritten.
       If the file doesn’t exist, then a new file is created. Returns NULL, if unable to open the file.
       Searches file. If the file exists, its contents are overwritten. If the file doesn’t exist a new file is created. Returns NULL,
       if unable to open the file.

9> wb+: Open for reading and writing in binary mode. If the file exists, its contents are overwritten.
        If the file doesn’t exist, a new file is created. Returns NULL, if unable to open the file.
        Open for both reading and writing in binary mode. If the file exists, its contents are overwritten.
        If the file does not exist, it will be created.


10> rb+: Open for both reading and writing in binary mode. If the file does not exist, fopen( ) returns NULL.

11> ab+: Open for both reading and appending in binary mode. If the file does not exist, it will be created.

12> a+:  	Searches file. If the file is opened successfully fopen( ) loads it into memory and sets up a pointer 
            that points to the last character in it. It opens the file in both reading and append mode.
            If the file doesn’t exist, a new file is created. Returns NULL, if unable to open the file.
*/

   
       
  

 



}