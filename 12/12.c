// Задания для самостоятельного выполнения
// Добавить в код своего варианта лабораторной работы №11 функции
// сохранения данных в файл перед
// завершением работы программы и их загрузки из файла при старте программы, для
// обеспечения хранения данных между запусками. Требования и ограничения
// Предусмотреть возможноть просмотра всего списка, добавления и удаления
// записей. Необходимые операции с записями реализовать в виде отдельных
// функций Написать программу, реализующую
// считывание данных с клавиатуры, их
// обработку и вывод на экран результатов
// запроса согласно вашему варианту. Требования и ограничения Предусмотреть
// возможноть просмотра всего списка, добавления и удаления записей. Необходимые
// операции с записями
// реализовать в виде отдельных функций .
// Междугородние автобусы. Номер автобуса, пункты и время отправления и
// прибытия. Получить данные об автобусах, следующих в заданный город.
#include <conio.h>
#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_SIZE 15

typedef struct buses bus;

struct buses {
  int number;           // номер автобуса
  char destination[15]; // пункт назначения
  float dep_time;       // departure time - время отбытия
  float arr_time;       // arrival time - время прибытия
} buses;
// struct buses bus[10];

int input(struct buses *, int);
void print(struct buses *, int, int);
int delet(struct buses *, int);
void find(struct buses *, int);
int save(char *filename, struct buses *p, int n);
int load(char *filename);

int main() {
  // FILE *f;
  // f = fopen("12.txt", "r");
  // if (!f)
  //   printf("File not existing");
  char c;
  char *filename = "12.dat";
  int k = MAX_SIZE;
  // struct buses bus[MAX_SIZE];
  struct buses bus[MAX_SIZE] = {1, "Surgut", 15.00, 23.40};
  int n = sizeof(bus) / sizeof(bus[0]);
a:
  while (1) {
    printf("\n1. Enter bus data.\n");
    printf("2. Display a list of buses.\n");
    printf("3. Delete bus data.\n");
    printf("4. Get data about buses going to a given city.\n");
    printf("5 to load the database from a file.\n");
    printf("6 to save the database to a file.\n");
    printf("7. Exit.\n");
    c = _getch();
    switch (c) {
    case '1':
      system("cls");
      k = input(bus, k);
      break;
    case '2':
      system("cls");
      print(bus, k, n);
      break;
    case '3':
      // system("cls");
      delet(bus, k);
      break;
    case '4':
      system("cls");
      find(bus, k);
      break;
    case '5':
      load(filename);
      goto a;
    case '6':
      save(filename, bus, n);
    case '7':
      // fclose(f);
      return 0;
      break;
    default:
      system("cls");
      printf("\nthe menu item is selected incorrectly!\n\n");
    }
  }
  return 0;
}
//Вывод информации о существующих
void print(struct buses *bus, int count, int n) {
  if (count) {
    for (int i = 0; i < count; i++) {
      if (bus[i].number <= 0)
        continue;
      printf(
          "[%d]Bus number: %d, Destination: %s, Departure time: %0.2f, Arrival "
          "time %0.2f\n",
          i + 1, bus[i].number, bus[i].destination, bus[i].dep_time,
          bus[i].arr_time);
    }
  } else {
    for (int i = 0; i < n; i++) {
      if (bus[i].number <= 0)
        continue;
      printf(
          "[%d]Bus number: %d, Destination: %s, Departure time: %0.2f, Arrival "
          "time %0.2f\n",
          i + 1, bus[i].number, bus[i].destination, bus[i].dep_time,
          bus[i].arr_time);
    }
  }
}
//Добавление
int input(struct buses *bus, int count) {
  if (!count) {
    do {
      printf("Enter the number of buses [1-100]: ");
      scanf("%d", &count);
    } while (count < 1 || count > 100);

    printf("\nEnter the bus data separated by a space - number, destination, "
           "Departure time, Arrival time \n");
    for (int i = 0; i < count; i++)
    {
    a:
      scanf("%d %s %f %f", &bus[i].number, bus[i].destination, &bus[i].dep_time,
            &bus[i].arr_time);
            if ( ((bus[i].arr_time || bus[i].dep_time ) < 0) || ((bus[i].arr_time || bus[i].dep_time) > 24.00) )
            {
              printf("Incorrect time");
              goto a;
            }
          }

  } else {
    for (int i = count; i > -1; i--)
      bus[i + 1] = bus[i];
    printf("\nEnter the bus data separated by a space - number, destination, Departure time, Arrival time \n");
    scanf("%d %s %f %f", &bus[0].number, bus[0].destination, &bus[0].dep_time,
          &bus[0].arr_time);
    count = count + 1;

    printf("\nEnter the bus data separated by a space - number,destination, Departure time, Arrival time \n");
    scanf("%d %s %f %f", &bus[count + 1].number, bus[count + 1].destination,
          &bus[count + 1].dep_time, &bus[count + 1].arr_time);
    count = count + 1;
  }
  return count;
}

//Удаление
int delet(struct buses *bus, int count) {
  if (count) {
    int i, num;

    printf("Type index number of the bus you want to delete: ");
    scanf("%d", &num);

    for (i = num; i < count + 1; ++i)
      bus[i - 1] = bus[i];

    --count;
    if (count == 0) {
      printf("The array is empty!\n");
      count = 0;
    }
  } else {
    system("cls");
    printf("The array is empty!\n");
  }
  return count;
}
//Поиск
void find(struct buses *bus, int count) {
  char c[15];
  int temp = 0;
  printf("Enter city\n");
  scanf("%s", c);
  for (int i = 0; i < count; i++) {
    // if (bus[i].destination == c)
    if (!strcmp(bus[i].destination, c)) {
      printf("[%d]Bus number: %d, Destination: %s, Departure time: %0.2f, "
             "Arrival "
             "time %0.2f\n",
             i + 1, bus[i].number, bus[i].destination, bus[i].dep_time,
             bus[i].arr_time);
      temp = temp + 1;
    }
  }
  if (!temp)
    printf("There are no flights to this city\n ");
}

// запись структуры в файл
int save(char *filename, struct buses *st, int n) {

  FILE *fp;
  char *c;

  // число записываемых байтов
  int size = n * sizeof(struct buses);

  if ((fp = fopen(filename, "wb")) == NULL)
    perror("Error occured while opening file");

  // записываем количество структур
  c = (char *)&n;
  for (int i = 0; i < sizeof(int); i++) {
    putc(*c++, fp);
  }

  // посимвольно записываем в файл все структуры
  c = (char *)st;
  for (int i = 0; i < size; i++) {
    putc(*c, fp);
    c++;
  }
  fclose(fp);
}
// загрузка из файла структуры
int load(char *filename) {
  FILE *fp;
  char *c;
  int m = sizeof(int);
  int n, i;

  // выделяем память для количества данных
  int *pti = (int *)malloc(m);

  if ((fp = fopen(filename, "r")) == NULL) {
    perror("Error occured while opening file");
  }

  // считываем количество структур
  c = (char *)pti;
  while (m > 0) {
    i = getc(fp);
    if (i == EOF)
      break;
    *c = i;
    c++;
    m--;
  }
  //получаем число элементов
  n = *pti;

  // выделяем память для считанного массива структур
  struct buses *ptr = (struct buses *)malloc(n * sizeof(struct buses));
  c = (char *)ptr;
  // после записи считываем посимвольно из файла
  while ((i = getc(fp)) != EOF) {
    *c = i;
    c++;
  }

  // перебор загруженных элементов и вывод на консоль
  printf("\n%d bus in the file stored\n\n", n);

  free(pti);
  free(ptr);
  fclose(fp);
  return n;
}
// }
// int load(char *filename) {
//   FILE *fp;
//   size_t lines_count = 0;
//   char line[10];
//
//   fp = fopen(filename, "r");
//   if (NULL == fp)
//     return 0;
//
//   while (fgets(line, 10, fp) != NULL) {
//     if (0 == is_empty(line)) {
//       fclose(fp);
//       return 0;
//     }
//     lines_count++;
//   }
//   fclose(fp);
// }
