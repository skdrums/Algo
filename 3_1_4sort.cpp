///ポインタによるソート

#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;

#define N 10

int main(void){
    struct man {
        char name[20];
        int age;
    } *t,*p[N],a[]={"sora",22,"fujiko",22,"hiroki",23,
    "yoko",52,"shoto",27,"ryo",29,"yuki",29,
    "ramu",15,"mako",21,"bun",22};


    char *min;

    for(int i=0;i<N;i++) p[i]=&a[i];
    for(int i = 0; i < N-1; i++)
    {
        min=p[i]->name;
        int s=i;
        for(int j = i+1; j < N; j++)
        {
            if(strcmp(p[j]->name,min)<0){
                min=p[j]->name;
                s=j;
            }
            
        }
        t=p[i];p[i]=p[s];p[s]=t;
    }
    
    for(int i = 0; i < N; i++)
    {
        cout<<p[i]->name<<" ";
    };
    cout<<endl;
    for(int i = 0; i < N; i++)
    {
         cout<<p[i]->age<<" ";
    };




}
