//２分探索---データがソートされているときに有効な探索方法
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <random>
using namespace std;

#define N 10

int main(void){
    
    int a[]={2,3,7,11,31,50,55,70,77,80};
    int low,high,key,mid,flag=0;

    cout<<"Please enter key:";
    cin>>key;

    low=0;high=N-1;
    while(low<=high){
        mid=(low+high)/2;
        if (key==a[mid]) {
            cout<<key<<" is in number "<<mid<<endl;
            flag=1;
            break;
        }
        if(a[mid]<key) low=mid+1;
        else high=mid-1; 
    }

    if (flag!=1) {
        cout<<"Sorry. didn't find "<<key<<" in array."<<endl;
    }
    


















}