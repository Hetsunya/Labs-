//Здесь без функций
#include <conio.h>
#include <malloc.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h> // Одна строка копируется
#include <time.h>

//Заполнение
// void fill(int *a[], int r, int c) {
//
//   srand(time(NULL));
//   for (int i = 0; i < r; i++)
//     for (int j = 0; j < c; j++) {
//       // *(a + r * c + j)= rand() % 10 - 1;
//       // Найди как правльно указать на элемент
//       *(a + (r * c) + (i + j)) = rand() % 10 - 0;
//     }
//   printf("matr v fill\r");
//   for (int i = 0; i < r; i++) {
//     for (int j = 0; j < c; j++)
//       //  printf("%4d", *(a + r * c + i) );
//       printf("%4d", *(a + r * c + i));
//
//     printf("\r");
//   }
//   printf("\r");
//   printf("\r");
//   printf("\r");
//   printf("\r");
//
//   // a - указатель на массив,
//   // r - количество столбцов,
//   // j - индекс строки,
//   // i - индекс столбца.
// }
//Вывод
void output(int **a, int r, int c) {
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      printf("%4d", *(a + (r * c) + (i + j)));
      // printf("%4d", *(a + i);
      // printf("element-->%d\r", x);
      // printf("%4d ", (*(a+i))[j]);
      printf("%d", a[i][j]);
    }
    printf("\r");
  }
}
//Сортировка
void sort(int **a, int r, int c) {
  for (int i = 0; i < c; i++)
    for (int j = 0; j < r; j++)
      // if (*(a + c * i + r) > *(a + c * j + r)) {
      //   printf("%d --- %d\r", i, j);
      //   for (int k = 0; k < r; k++) {
      //     int t = *(a + c * i);
      //     *(a + c * i) = *(a + c * j);
      //     *(a + c * j) = t;
      //   }
      for (int k = 0; k < r; k++)
        if (*(a + ((r * c) + i)) > *(a + ((r * c) + (j + k)))) {
          // if (a[i][0] > a[j][0]) {
          //  printf("%d --- %d\r", i, j);
          if (i == 0 || j == 0)
            continue;
          //   int t = (a + ((r * c) + i ));
          //   *(a + ((r * c) + i )) = *(a + ((r * c) + j ));
          //   *(a + ((r * c) + j )) = t;
          int t = a[i][0];
          a[i][0] = a[j][0];
          a[j][0] = t;
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
    for (int j = 0; j < c; j++) {
      // *(a + r * c + j)= rand() % 10 - 1;
      // Найди как правльно указать на элемент
      a[i][j] = rand() % 10 - 0;
    }
r = sizeof(a) / sizeof(a[0]);
 c = sizeof(a[0]) / sizeof(a[0][0]);

  // int *p = &a[0][0];
  int *pa = &a;
  // int **pa = &a[0][0];
  // int *p = &a;
  // int **pa = &p;
  //  fill(pa, r, c);
  printf("\r");
  printf("\r");
  printf("\r");
  printf("\r");
  printf("\r");
  // printf("Matrix before sorting:\r");
  // for (int i = 0; i < r * c; i++) {
  //     printf("%4d ", *(pa  + i));
  //     if(i % c == 0) printf("\r");
  //    //  printf("element-->%d\r", x);
  //     // printf("%d ", a[i][j]);
  // }

  output(pa, r, c);
  sort(pa, r, c);
  printf(" Matrix after sorting:\r");
  output(pa, r, c);
  // printf("Matrix before sorting:\r");
  // output(a[r][c], r, c);
  // sort(a[r][c], r, c);
  // printf(" Matrix after sorting:\r");
  // output(a[r][c], r, c);
}
