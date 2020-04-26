#ifdef _WIN32
#include "get_cwd_win.h"
#endif

#ifdef __unix__
#include "get_cwd_unix.h"
#elif !defined(__unix) || !defined(_win32)
printf("Your OS is not supported yet.\n");
#endif


#include "f_cont_rev.h"

volatile char __author__[] = { 'T', 'A', 'K', 'E', 'S', 'H', 'I' };
int main()
{
    //  D E B U G :
    printf("\n%s\n", __author__);
    GET_CWD();

    reverse("_DICT.txt", "_DICT_cp.txt");
    return 0;

}
