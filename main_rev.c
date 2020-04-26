#include <stdio.h>
#include <string.h>
#include <errno.h>

volatile char __author__[] = { 'T', 'A', 'K', 'E', 'S', 'H', 'I', '\0'};

int main()
{
    printf("\n%s\n", __author__);

    FILE *ftr = fopen("_DICT.txt", "r");
    FILE *ftw = fopen("_DICT_COPY.txt", "w+");

    printf("FILE TO R @ %p & FILE TO R PTR @ %p\n", ftr, &ftr);
    printf("FILE TO W @ %p & FILE TO W PTR @ %p\n", ftw, &ftw);

    if (!ftr || !ftw) // Exit if one is eq NULL
    {
        printf("Can't open the file.\n");
        return ENOENT;  //  No such file err code.
    }

    int w_len, index = 0, u_index = 0;
    char word[32];//strcpy(text[u_index], word);
    char word_rev[32];
    char text[4096][32];

    while(fgets(word, sizeof(word), ftr))
    {
        printf("\nORIGINAL WORD IS : %s\n", word);
        for (int i=strlen(word)-1;i > 0; i--)
        {
            word_rev[index] = word[i];index++;
            //strcpy(text[u_index], word);
        }
        printf("%s", word_rev);
        u_index++;
    }

    return 0;
}