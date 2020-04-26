

#ifdef _WIN32
#include "get_cwd_win.h";
#else
#define _WIN32 NULL
#define win_CWD NULL
#endif

#include "f_cont_rev.h"

volatile char __author__[] = { 'T', 'A', 'K', 'E', 'S', 'H', 'I' };
int main()
{
    //  D E B U G :
    printf("\n%s\n", __author__);

    if (_WIN32) { win_CWD(); };
    reverse("_DICT.txt", "_DICT_cp.txt");
    return 0;
}
