#include<Stdio.h>
int main(){
int a=6,b=7,*ptr1,*ptr2,sum;
ptr1=&a;
ptr2=&b;
sum=*ptr1+*ptr2;
printf("sum of two pointers =%d",sum);
}
