#include "hamming.h"
int compute(const char *lhs, const char *rhs)
{
    int flag=0;
    while (*lhs != 0 && *rhs!=0){
    if(*lhs != *rhs) 
    {
        flag++;
    }
        lhs++;
        rhs++;
    }

    return flag;
}