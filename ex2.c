#include<stdio.h>
#define MAX 50

int main()
{
    int a=0;
    int b=0;
    char s[MAX];
    char c;
    scanf("%[^\n]",s);
  
    while(s[a]!='\0'){
        a++;
    }
    a--;
    if(s[a]=='\n')
    a--;

    while(b<a){
        c=s[b];
        s[b]=s[a];
        s[a]=c;
        a--;
        b++;
    }
    printf("%s",s);
    return 0;
   }
    



