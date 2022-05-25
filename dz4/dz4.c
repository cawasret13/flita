#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "function.h"

#define MAX 1001

int main(){
  FILE *f1;
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
  i++;reb--;
  Show_gr(arr, reb,i,0);
  Delete(arr, i);
  Show_gr(arr, reb,i,1);
  return 0;
}
