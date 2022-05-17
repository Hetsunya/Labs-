#include <conio.h>
#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
int main() {
  char ch;
  _Bool inf = true;
  printf("Enter Insert for exit\n");
  do {
    ch = getchar();
    // system("cls");
    if (ch == 'Insert')
      goto exit;

    if (isalpha(ch) || isdigit(ch)) {
      printf("%d", ch);
      // continue;
    }
    printf("%c", ch);
    // isdigit(ch);
  } while (inf == true);

exit:
  return 0;
}
