#include <stdio.h>
#include <stdlib.h>

int main()
{
  FILE *f1, *f2;
  char arr[1001][1001], s;
  int i = 0, j = 0;
  f1 = fopen("matrix_of_incendence13.txt", "r");
  while (!feof(f1))
  {
    fscanf(f1, "%c", &s);
    if (s != ' ' && s != '\n')
    {
      arr[i][j] = s;
      j++;
      if (j == 20)
      {
        i++;
        j = 0;
      }
    }
  }
  char u;
  f2 = fopen("res.gv", "w");
  fprintf(f2, "graph grath {\n");
  for (int a = 0; a < 20; a++)
  {
    u = -1;
    for (int y = 0; y < 5; y++)
    {
      if (arr[y][a] != '0')
      {
        if (u == -1)
        {
          fprintf(f2, "%d", y + 1);
          printf("%d", y + 1);
          u = 0;
        }
        else
        {
          printf(" -- %d", y + 1);
          fprintf(f2, " -- %d", y + 1);
        }
      }
    }
    fprintf(f2, ";\n");
    printf(";\n");
  }
  fprintf(f2, "}");
  fclose(f2);
}