#include<stdio.h>
#include<string.h>

int main(){
    int k;

    char a[30]="RIDDHI";
    char b[30]="RIDDHI";
   k= strcmp(b,a);
    if(k==0)
    {
        printf("equal");
    }
    else{
        printf("not equal"); 
    }
     return 0;
}
