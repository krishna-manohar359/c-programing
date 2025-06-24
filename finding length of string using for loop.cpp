#include<stdio.h>
int main(){
char text[50];
int count=0;
printf("enter a string :");
scanf("%s",&text);
for(int i=0;text[i]!='\0';i++){
count++;
}
printf("length of string=%d",count);
}
