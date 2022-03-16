#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *f1, *f2;
    char arr[1001][1001],s;
    int i = 0, j = 0;
    f1 = fopen("adjacency_matrix_94.txt", "r");
    while(!feof(f1)){
      fscanf(f1, "%c", &s);
      if(s!=' ' && s!='\n'){
        arr[i][j] = s;
        j++;
        if(j==5){
          i++;
          j = 0;
        }
      }
    }
  f2 = fopen("res.txt", "w");
  fprintf(f2, "graph grath {\n");
  for(int a =0;a<5;a++){
      for(int y =0;y<5;y++){
        if(arr[a][y]!='0'){
          printf("%d - %d\n",y+1,a+1);
          fprintf(f2, "  %d -- %d\n",a+1,y+1);
        }
      }
    printf("\n");
  }
  fprintf(f2, "}");
  fclose(f2);
}