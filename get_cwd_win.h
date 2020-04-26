//
// Created by GPC-463 on 26/04/2020.
//
#ifndef FILE_OPS_TEST_GET_CWD_WIN_H
#define FILE_OPS_TEST_GET_CWD_WIN_H

// crt_getcwd.c
// Compile with: cl /W4 crt_getcwd.c
// This program places the name of the current directory in the
// buffer array, then displays the name of the current directory
// on the screen. Passing NULL as the buffer forces getcwd to allocate
// memory for the path, which allows the code to support file paths
// longer than _MAX_PATH, which are supported by NTFS.

#include <direct.h> // _getcwd
#include <stdlib.h> // free, perror
#include <stdio.h>  // printf
#include <string.h> // strlen


extern int GET_CWD( void )
{
    char* buffer;

    // Get the current working directory:
    if ( (buffer = _getcwd( NULL, 0 )) == NULL )
        perror( "_getcwd error" );
    else
    {
        printf( "%s \nLength: %zu\n", buffer, strlen(buffer) );
        free(buffer);
    }
}


#endif //FILE_OPS_TEST_GET_CWD_WIN_H
