#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "function.h"

#define MAX 1001

int main(){
  time_t start, end;
  FILE *f1;
  int tm = 0;
  start = clock();
  for(int a =0;a<509;a++){
  char arr[MAX][MAX], s;
  int i = 0, j = 0, flag = 0, reb = 0;
  f1 = fopen("matrix_of_incendence13.txt", "r");
  while (!feof(f1)){
    s = fgetc(f1);
    if (s != ' '){
      arr[i][j] = s;
      j++;
      if (s == '\n'){
        if (flag == 0){
          reb = j;
          flag = 1;
        }
        i++;
        j = 0;
      }
    }
  }
  i++;
  reb--;
    int num = rand();
      Delete(arr, i , 452);
  }
  printf("time");
  start = clock() - start;
  printf("Time %lf",  (double)(start)/(double)(CLOCKS_PER_SEC));
  return 0;
}
