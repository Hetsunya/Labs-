#include <stdio.h>
<<<<<<< HEAD
int main() {
    int n, rev = 0, remainder;
    printf("Enter an integer: ");
    scanf("%d", &n);
    while (n != 0) {
        remainder = n % 10;
        rev = rev * 10 + remainder;
        n /= 10;
    }
    printf("Reversed number = %d", rev);
    return 0;
=======
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
>>>>>>> 62831cf65be56ca14830fce0af1ad3fe91f33919
}
