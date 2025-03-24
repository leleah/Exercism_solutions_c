#include "dnd_character.h"
int ability(void)
{
    int sum=0;
    srand(time(NULL));
    for(int i =0;i <=6 ; i++)
    {
        for(int j =1;j<=6;j++)
        {
            int a = (rand() % 6) + 1;  
            int b = (rand() % 6) + 1;  
            int c = (rand() % 6) + 1;  
            int d = (rand() % 6) + 1; 
            if ((a>0) && (b>0) && (c>0) && (d>0))
            {
                if((a>b) && (c>b) && (d> b))
                {
                    sum = a+c+d;
                }
                else if ((b>a) && (c>a) && (d>a))
                {
                    sum = b+c+d;
                }
                else if ((a>c) && (b>c) && (d>c))
                {
                    sum =a+b+d;
                }
                else if ((a>d)&&(b>d)&&(c>d))
                {
                    sum = a+b+c;
                }
               
            } 
        }
    }
   return sum;
}
int modifier(int score)
{
    score=0;
    return score;
}
dnd_character_t ret;
dnd_character_t make_dnd_character(void)
{
    
    return ret;
}