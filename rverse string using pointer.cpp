#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void swap(char*p1,char*p2){
char temp=*p1;
*p1=*p2;
*p2=temp;
}
int main(){
int l,i;
char *p1,*p2,s[100];
printf("enter any string:");
scanf("%s",&s);
 l = strlen(s),i;
p1=s;
p2= s + l - 1;
for(i=0;i<(l/2);i++){
	swap(p1,p2);
p1++;
p2--;
}
printf("reversed string:%s\n",s);
return 0;
}
