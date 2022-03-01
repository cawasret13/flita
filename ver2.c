#include <stdio.h>

int main(void){ //главная функция, здесь мы задаем кол-во чисел, и сами числа
  int a;
  printf("Введите кол-во чисел: ");scanf("%d", &a);
  if(a == 0){
    printf("😥 не получится");
    return 0;
  }
  long arrNum[a];
  printf("\nВведите числа:\n");
  for(int e = 0;e<a;e++){
    printf("Число №%d ", e+1);scanf("%d", &arrNum[e]);
  }
  printf("-----------------------------------------\n");
  printf(" Результат | %d чисел\n", a);
  printf("-----------------------------------------\n");
  pod(arrNum, a);
}

int pod(long u[], int kol){ //считаем кол-во символов и отправляем число на перевод 
    int a,r,i,k,p;
    for(p=0;p<kol;p++){
      a = u[p];
      k = 0 ;r = 0;
      while (a!=0){
        a/=2;k++;  
      }
      res(k, u[p]);
    }
}

int res(int num,int oldRes){ //переводим число, переворачиваем и выводим результат 
  int resualt,i,j,fin,ol;
  ol = oldRes;
  int arr[num];
  i = 1;
  while (oldRes!=0){ 
    resualt = oldRes % 2;
    oldRes/=2;  
    arr[i] = resualt;
    i++;
  }
  fin =0;
  j = num;
  while(j!=0){
     fin = fin*10 + arr[j];
     j--;
  }
  if(ol<0){
    ol*=-1;
    fin*=-1;
  }
   printf("\n%d  👉  %d",ol,fin);
}