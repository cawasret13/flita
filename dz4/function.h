#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
#define MAX 1001

int Show_gr(char arr[MAX][MAX], int reb, int i, int flag){
  FILE *f1;
  char u;
  f1 = fopen("res.gv", "w");
  fputs("graph Grath {\n", f1);
  for (int a = 0; a < i; a++){
    fprintf(f1, "\t%d;\n", a + 1);
  }
  for (int a = 0; a < reb; a++){
    u = -1;
    for (int y = 0; y < i; y++){
      if (arr[y][a] != '0'){
        if (u == -1){
          fprintf(f1, "\t%d", y + 1);
          u = 0;
        }
        else{
          fprintf(f1, " -- %d [label = \"%d\"];", y + 1, a + 1);
          fputc('\n', f1);
        }
      }
    }
  }
  if(flag==0){
     fputs("\tlabel = \"OLD\";\n", f1);
  }else{
     fputs("\tlabel = \"NEW\";\n", f1);
  }
  fputc('}', f1);
  fclose(f1);
  system("dot res.gv -Tpng -o g.png");
  system("g.png");
}



int Delete(char arr[MAX][MAX], int i){
 int del = 0;
 printf("Select edge: ");
 scanf("%d", &del);
 time_t start,end;
 start = time(NULL);
 del--;
 for (int a = 0; a < i; a++){
      arr[a][del] = '0';
  }
  end = time(NULL);
  printf("%f\n", difftime(end, start));
}
