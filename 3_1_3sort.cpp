//シェイカーソートp124




#include <stdio.h>
#include <iostream>

using namespace std;


#define N 8

int main(void){
    int a[]={80,40,35,12,88,1,56,33};
    int left,right,shift,t;
    left=0;right=N-1;
    while(left<right){
        for(int i = left; i < right; i++)
        {
            if(a[i]>a[i+1]){
                t=a[i];
                a[i]=a[i+1];
                a[i+1]=t;
                shift=i;
            }
        }
        right=shift;

        for(int i = right; i > left; i--)
        {
            if(a[i]<a[i-1]){
                t=a[i];a[i]=a[i-1];a[i-1]=t;
                shift=i;
            }
        }
        left=shift;
        
    }

    for(int i = 0; i < N; i++)
    {
        cout << a[i] <<" ";
    }
    

}