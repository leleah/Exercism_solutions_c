#include "binary.h"
 int res=0;
int convert(const char *input)
{      
        for(int j=((int)strlen(input)-1); j>=0; j-- )
        {
            if (input[j]!='0' && input[j]!= '1')
          {
              return INVALID;
          }
            if(input[j]=='1'){

             res+=pow(2,j);   
            }  
        }
        
    return res;
   
}