//Здесь без функций
#include <conio.h>
#include <malloc.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Заполнение
// void fill(int r, int c) {
//
//   srand(time(NULL));
//   for (int i = 0; i < r; i++)
//     for (int j = 0; j < c; j++) {
//       // *(a + r * c + j)= rand() % 10 - 1;
//       // Найди как правльно указать на элемент
//       *(a + (r * c) + (i + j)) = rand() % 10 - 0;
//     }
//   printf("matr v fill\n");
//   for (int i = 0; i < r; i++) {
//     for (int j = 0; j < c; j++)
//       //  printf("%4d", *(a + r * c + i) );
//       printf("%4d", *(a + r * c + i));
//
//     printf("\n");
//   }
//   printf("\n");
//   printf("\n");
//   printf("\n");
//   printf("\n");
//
//   // a - указатель на массив,
//   // r - количество столбцов,
//   // j - индекс строки,
//   // i - индекс столбца.
// }
//Вывод
// void output(int *a, int r, int c)
void output(int r, int c, int a[r][c]) {
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      // printf( "%4d", (int*)a++ );
      // printf("%4d ", *a);
      // printf("%4d ", *(a + i + j));
      // printf("%4d ", (*(a+i))[j]);
      printf("%4d ", a[i][j]);
    }
    printf("\n");
  }
}
//Сортировка
// void sort(int *a, int r, int c)
void sort(int r, int c, int a[r][c]) {
  int t;
  for (int i = 0; i < r; i++)
    for (int j = 0; j < r; j++)
      if (a[i][0] > a[j][0]) {
        // if ((a[i][0] || a[j][0]) > 100)
        //  printf("%d --- %d\n", i, j);
        for (int k = 0; k < r; k++) {
          int t = a[i][k];
          a[i][k] = a[j][k];
          a[j][k] = t;
        }
      }
}

int main() {
  srand(time(NULL));
  int r, c;
  printf("rows -> ");
  scanf("%d", &r);
  printf("columns -> ");
  scanf("%d", &c);
  int a[r][c];

  for (int i = 0; i < r; i++)
    for (int j = 0; j < c; j++)
      a[i][j] = rand() % 10 - 0;

  printf("Matrix before sorting:\n");
  output(r, c, a);
  sort(r, c, a);
  printf("Matrix after sorting:\n");
  output(r, c, a);
}
