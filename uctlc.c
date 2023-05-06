#include <stdio.h>
#include <string.h>

int main()
{
    char s[1000];  
    int i;
    printf("\nEnter  the string : ");
    gets(s);
    for(i=0;s[i];i++)  
    {
        if(s[i]>=65 && s[i]<=90)
         s[i]+=32;
 	}
 	
     
    printf("string in lowercase ='%s'\n",s);
 
 
    return 0;
}
