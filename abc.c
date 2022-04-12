#include <stdio.h>
#include <string.h>
#include <stdlib.h>

main()
{
   char c[255],s[255];
   int i;
   printf("Enter number: ");
   gets(c);
   for(i=0;i<strlen(c);i++)
        s[i]=c[strlen(c)-i-1];
   i=atoi(s);
    printf("%d",i);
}
