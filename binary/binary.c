#include "binary.h"
int res;
int convert(const char *input)
{     
      for(int i=0; i<(int)strlen(input); i++)
        {
          if (input[i]!='0'||input[i]!='1')
          {
              return INVALID;
          }
        res = (*input++ * pow(2,i));
        }
    return res;
   
}