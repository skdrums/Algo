#include <stdio.h>
#include <iostream>
using namespace std;
#define N 8

int main(void){

    int a[]={80,40,35,12,88,1,56,33};
    int s,t;

    for(int i = 0; i < N-1; i++)
    {
        for(int j = N-1; j > i; j--)
        {
            if(a[j]<a[j-1]){
                int s=j;
                a[j]=a[j-1];
                a[j-1]=a[s];
            }
        }
    }
    
    for(int i = 0; i < N; i++)
    {
        cout<<a[i]<<" ";
    }
    




}