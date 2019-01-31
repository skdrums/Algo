#include <stdio.h>
#include <iostream>

using namespace std;

int main(void){
    int a,b,m,n;


    cout<<"二つの整数を入力してください。"<<endl;
    cin>>a>>b;

    m=a;
    n=b;

    while(m!=n){
        if(m>n)m=m-n;
        else n=n-m;
    }


    cout<<"最大公約数は"<<m<<"です。";

    return 0;
}