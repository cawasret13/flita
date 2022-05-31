#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ARR_MAX 1001


int select_motion();
int print_reb();
int del();
int file_save();
int draw_graph();

    int put_edges(char arr[ARR_MAX][ARR_MAX], int line, int ver)
    {
        time_t start, end;
        start = clock();
        printf("start\n");
        int ver1 = 3, ver2 = 1;
        for(int a =0;a<20000000;a++){
            for (int i = 0; i < ver; i++){
                
                if (arr[ver1][i] == '0'){
                    arr[ver1][i] = '1';
                    if (arr[ver2][i] == '0')             
                        arr[ver2][i] = '1';
                    break;
                }          
            }
        }
        start = clock() - start;
        printf("\nTime %lf",  (double)(start)/(double)(CLOCKS_PER_SEC));
        return 0;
    }