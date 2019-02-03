//モンテカルロ法

#include <stdio.h>
#include <iostream>
//#include <random>

using namespace std;

#define NUM 1000

double rnd(void);

int main(void){


    //<random>を使った[0,1]における一様乱数がなかったためコメントアウト。要調べ。
    // random_device rnd;
    // mt19937 mt(rnd());
    
    // double x,y,pai;
    // int i,in=0;

    // for(i=0;i<NUM;i++){
    //     x=(double)mt();y=(double)mt();
    //     if(x*x+y*y<=1) in++;
    // }
    
    // pai=(double)4*in/NUM;
    // cout<<pai<<endl;

    double x,y,pai;
    int in=0;

    for(int i=0; i < NUM; i++)
    {
        x=rnd();
        y=rnd();
        if(x*x+y*y<=1) in++;
    }
    
    pai=(double)4*in/NUM;
    cout<<pai<<endl;

    return 0;
}


double rnd(void){
    return rand()/(RAND_MAX+1.0);
}