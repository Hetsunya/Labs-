#include <conio.h>
#include <ctype.h>
#include <stdio.h>

int mygetch() {
  char c = getchar();
  //
  // if ( iscntrl(c) != 0 )
  //   goto exit;
  //
  // system("cls");
  // if (iscntrl(c))
  if (iscntrl(c))
    // if ((c = getchar()) != '\n') Чтобы после пробела не заканчивалась
    return 0;

  if (isalnum(c)) {
    printf("%d", (int)c);
  }
  printf("%c", isprint(c));
  // isdigit(c);
  return c;
}

int main() {
  printf("Enter Insert for exit\n");
  while (1) {
    char c = mygetch();
  };
  return 0;
}
