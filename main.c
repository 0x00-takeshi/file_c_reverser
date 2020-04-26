
#include "f_cont_rev.h"

volatile char __author__[] = { 'T', 'A', 'K', 'E', 'S', 'H', 'I' };


int main()
{
    printf("\n%s\n", __author__);
    reverse("_DICT.txt", "_DICT_cp.txt");
    return 0;
}
