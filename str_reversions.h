//
// Created by takeshi on 26/04/2020.
//

#ifndef FILE_OPS_TEST_STR_REVERSIONS_H
#define FILE_OPS_TEST_STR_REVERSIONS_H

#include <string.h>

extern void reverse_rec(char *str, size_t len)
{
    if (len <= 1) return;

    char tmp = str[0];
    str[0] = str[len-1];
    str[len-1] = tmp;
    reverse_rec(str+1, len-2);
}

#endif //FILE_OPS_TEST_STR_REVERSIONS_H
