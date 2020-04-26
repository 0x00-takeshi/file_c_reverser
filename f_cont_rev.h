//
// Created by takeshi on 26/04/2020.
//
#include <stdio.h>
#include <string.h>
#include <errno.h>

#ifndef FILE_OPS_TEST_F_CONT_REV_H
#define FILE_OPS_TEST_F_CONT_REV_H

extern int reverse(char *argv, char *argv2)
{
    //printf("\n%s\n", argv);return 1;
    if (!argv || !argv2)
    {
        printf("\n *argv SRC FILE, *argv2 DESTINATION\n");
        return 1;
    }

    FILE *ftr = fopen(argv, "r");
    FILE *ftw = fopen(argv2, "w+");

    printf("FILE TO R @ %p & FILE TO R PTR @ %p\n", ftr, &ftr);
    printf("FILE TO W @ %p & FILE TO W PTR @ %p\n", ftw, &ftw);

    if (!ftr || !ftw) // Exit if any is eq NULL
    {
        printf("Can't open the file.\n");
        return ENOENT;  //  No such file err code.
    }

    int w_len, index = 0, u_index = 0;
    char word[32], word_rev[32];
    char text[4096][32], text_rev[4096][32];

    while (fgets(word, sizeof(word), ftr)) {
        printf("ORIGINAL %i WORD IS : %s", u_index, word);
        for (int i = (int)strlen(word) - 1; i > 0; i--)
        {
            strncpy(word_rev, &word[i], 32);
            index++;
        }
        printf("REVERSED %i WORD IS : %s", u_index, word_rev);
        u_index++;
    }
    return 0;
}
#endif //FILE_OPS_TEST_F_CONT_REV_H

