//逐次探索法
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
using namespace std;
#define N 10

int main(void){

    struct person{
        char name[20];
        int age;
    } a[]={"sora",22,"fujiko",22,"hiroki",23,
    "yoko",52,"shoto",27,"ryo",29,"yuki",29,
    "ramu",15,"mako",21,"bun",22};

    char key[20];
    int i;
    cout<<"search:\t";
    cin>>key;

    for(i = 0; i<N && strcmp(key,a[i].name)!=0; i++);

    if(i<N) cout<<a[i].name<<"'s age is "<<a[i].age<<endl;
    else cout<<"didn't find."<<endl;

}