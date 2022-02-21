#include <stdio.h>

int main(void) {
  int a,r,i,old,k,p;
  int u[10] = {1,2,3,4,5,6,50,8,9,10};
  for(p=0;p<=9;p++)
  {
    a = u[p];
    old = a;
    k =0 ;
    r = 0;
    while (a!=0){ a= a/2;   k++;  }
    res(k, old);
  }
}
int res(int num,int oldRes){
  int resualt, i,j,fin,q;
  q = oldRes;
  int arr[num];
  i = 1;
  while (oldRes!=0)
  { 
    resualt = oldRes % 2;
    oldRes= oldRes / 2;  
    arr[i] = resualt;
    i++;
  }
  fin =0;
  j = num;
  while(j!=0){
     fin = fin*10 + arr[j];
     j--;
  }
   printf("\n%d -> %d",q,fin);
}