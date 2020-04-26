//
// Created by takeshi on 26/04/2020.
//

#ifndef FILE_OPS_TEST_GET_CWD_UNIX_H
#define FILE_OPS_TEST_GET_CWD_UNIX_H

#include <unistd.h>
#include <stdio.h>
#include <malloc.h>
#include <string.h>
#include <stddef.h>

extern int GET_CWD()
{
    char buffer[256];


    if (getcwd(buffer, sizeof(buffer)) == NULL)
    {   perror("GET CWD ERROR");    }

    else
    {
        printf("CWD : %s\nLEN : %zu\n", buffer, (size_t) strlen(buffer));
    }

    return 0;
}

#endif //FILE_OPS_TEST_GET_CWD_UNIX_H
