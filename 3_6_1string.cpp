//string pattern matching(文字列の照合)
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

char *search(char *,char *);

int main(void){

    static char text[]="This is a pen. That is a pencil.",a[]="pen";
    char *p,*key;
    key=a;

    p=search(text,key);
    while(p!=NULL){
        cout<<p<<endl;
        p=search(p+strlen(key),key);
    }















}

char *search(char *text,char *key){
    int m,n;
    char *p;

    m=strlen(text);
    n=strlen(key);

    for(p=text;p<=text+m-n;p++){
        if(strncmp(p,key,n)==0)
            return p;
    }
    return NULL;

}