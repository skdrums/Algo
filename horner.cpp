//漸化式horner法
#include <stdio.h>
#include <iostream>
using namespace std;
#define N 4
double fn(double,double *);

int main(void){

    double a[]={1,2,3,4,5};
    for(double x=1;x<6;x++){
        cout<<"fn("<<x<<")="<<fn(x,a)<<endl;
        printf("fn(%f)=%f\n",x,fn(x,a));
    }

}

double fn(double x,double a[]){
    double p;
    p=a[N];
    for(int i=N-1;i>=0;i--){
        p=p*x+a[i];
    }

    return p;
}