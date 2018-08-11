#include <stdio.h>

int main(void)
{
    printf("the file is %s,\n"
            "the line is %d,\n"
            "the date is %s,\n"
            "the time is %s,\n"
            "the function is %s.\n",
            __FILE__, __LINE__, __DATE__, __TIME__, __FUNCTION__);

    return 0;

}
