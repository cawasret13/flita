#include <stdio.h>

int main(void){
  int a;
  printf("Введите кол-во чисел: ");
  scanf("%d", &a);
  int arrNum[a];
  printf("\nВведите числа:\n");
  for(int e = 0;e<a;e++){
   printf("Число №%d ", e+1);scanf("%d", &arrNum[e]);
  }
  printf("-----------------------------------------\n Результат | %d чисел\n-----------------------------------------\n", a);
  pod(arrNum, a);
}
int pod(int u[], int kol){
    int a,r,i,k,p;
  //int u[10] = {10,22,33,44,55,66,77,88,99,100};
  for(p=0;p<kol;p++){
    a = u[p];
    k =0 ;
    r = 0;
    while (a!=0){ a/=2;   k++;  }
    res(k, u[p]);
  }
}
int res(int num,int oldRes){
  int resualt, i,j,fin,q;
  q = oldRes;
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
   printf("| %d                 ->     %d\n",q,fin);
   printf("-----------------------------------------\n");
}