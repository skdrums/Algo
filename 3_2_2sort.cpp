//shell sort
#include <stdio.h>
#include <stdlib.h>
#include <random>
#include <iostream>
using namespace std;

#define N 10

int main(void){

    random_device rnd;
    mt19937 mt(rnd());
    int a[N],gap,t;
    gap=N/2;
    for(int i = 0; i < N; i++)
    {
        a[i]=mt()%100;
    }

    while(gap>0){
        for(int k = 0; k < gap; k++)
        {
            for(int i = k+gap; i < N; i+=gap)
            {
                for(int j = i-gap; j >=k; j-=gap)
                {
                    if(a[j]>a[j+gap]){
                        t=a[j]; a[j]=a[j+gap]; a[j+gap]=t;
                    }
                }
                
            }
            
        }
        
        gap/=2;
    }
    for(int i=0;i<N;i++){
        printf("%5d",a[i]);
    }






}