#include<stdio.h>
#include<string.h>
int main(){
int i=0,l1,l2,j=0,al=0,count=0;
char a[300]="riddhi";
char b[300]="srivastava";
while(a[i]!='\0'){
    i++;
}
while(b[j]!='\0')
{
    a[i]=b[j];
    i++;
    j++;
}
a[i]='\0';
printf("\n concenated string is %s",a);
return 0;
}

