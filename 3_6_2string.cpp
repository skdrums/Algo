//Boyer-Moore法
//文字列textから文字列keyの検索
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <random>
#include <string.h>
using namespace std;
#define N 256
int skip[N];
char *search(char *,char *);
void table(char *);

int main(void){
    static char text[]="This is a pen. That is a pencil.";
    char a[]="pen";
    char *p,*key;
    key=a;

    table(key);
    p=search(text,key);

    while(p!=NULL){
        cout<<p<<endl;
        p=search(p+strlen(key),key);
    }



}

void table(char *key){

    int n=strlen(key);

    for(int i=0;i<N;i++)
        skip[i]=n;
    for(int i=0;i<n-1;i++)
        skip[key[i]]=n-1-i;

}

char *search(char *text,char *key){
    
    int m,n;
    char *p;

    m=strlen(text);
    n=strlen(key);

    p=text+n-1;

    while(p<text+m){
        if(p[0]==key[n-1]){
            if(strncmp(p-n+1,key,n)==0)
                return p-n+1;
        }
        p+=skip[*p];
        // cout<<"p="<<p<<" *p="<<p[0]<<endl;conf
    }
    return NULL;




}