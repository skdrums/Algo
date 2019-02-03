//直接選択法p121

#include <stdio.h>
#include <iostream>

using namespace std;


#define N 8

int main(void){
    int a[]={80,40,35,12,88,1,56,33};
    int t;

     for(int i = 0; i < N-1; i++)
     {
        int min=a[i];
        int s=i;
        for(int j = i+1; j < N; j++)
        {
            if (a[j]<min) {
                min=a[j];
                s=j;
            }
            

        }
        t=a[i];
        a[i]=min;
        a[s]=t;
     }
     

     for(int i = 0; i < N; i++)
     {
         cout<<a[i]<<" ";
     }
     
    






}