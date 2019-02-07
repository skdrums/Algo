//kihonsounyuhou
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <random>
using namespace std;

#define N 10

int main(void){

    random_device rnd;//非決定的な生成乱数
    mt19937 mt(rnd());//決定的な生成乱数
    int a[N], t;
    
    //乱数によるデータの入力
    for(int i = 0; i < N; i++)    a[i]=(mt()+1)%100;
    
    for(int i=1; i<N;i++){
        for(int j = i; j > 0; j--)
        {
            if(a[j]<a[j-1]){
                t=a[j];
                a[j]=a[j-1];
                a[j-1]=t;
            }
            else
                break;
    }
    
    for(int i = 0; i < N; i++)
    {
        printf("%5d",a[i]);
        
    }
    






    return 0;
}