
#include "f_cont_rev.h"
#ifdef _WINDOWS
#include "get_cwd_win.h"
#endif
volatile char __author__[] = { 'T', 'A', 'K', 'E', 'S', 'H', 'I' };



int main()
{
    //  D E B U G :
    printf("\n%s\n", __author__);

    if (_WIN32) { win_CWD(); };
    reverse("_DICT.txt", "_DICT_cp.txt");
    return 0;
}
