#include <stdio.h>
#include <iostream>

using namespace std;

int main(void){
    int a,b,m,n,k;

    cout<<"input two integers:";
    cin>>a>>b;

    if(a>b){
        m=a;
        n=b;
    }
    else{
        m=b;
        n=a;
    }
    do{
    k=m%n;
    m=n;
    n=k;
    }while(k!=0);

    cout<<"最大公約数は:"<<m<<endl;


    return 0;
}