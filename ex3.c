

#include <stdio.h>
 
int main(int argc,char*argv[])
{
    unsigned int a[100];
    int i=0;
    unsigned int c=a[1];
   
    for (i=1; i< argc-1; i++)
    {
         if (c<a[i])
         {
             c=a[i];
            }
    }
     
    printf("Min parameter is%d\n", c);
    return 0;
}