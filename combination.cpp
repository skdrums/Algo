//漸化式
#include <stdio.h>
#include <iostream>
using namespace std;

int combi(int,int);


int main(void){

    int n;
    cout<<"nの値：";
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<i<<"C"<<j<<"="<<combi(i,j)<<" ";
        }
        cout<<endl;
    }




}


int combi(int n,int r){
    int p=1;

    for(int i=1;i<=r;i++){
        p=p*(n-i+1)/i;
    };
    return p;


}