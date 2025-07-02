#include <stdio.h>
#include<string.h>
int main() {
    char str[100];
    int end, start, i,l;
printf("Enter a sentence: ");
gets(str);
l=strlen(str);
end = l - 1;   	
printf("Reversed sentence: ");
while (end >= 0) {
while (end >= 0 && str[end] == ' ') {
end--;
}
if (end < 0)
break;
start = end;
while (start >= 0 && str[start] != ' ') {
start--;
}
for (i = start + 1; i <= end; i++) {
printf("%c", str[i]);
}
printf(" ");
end = start - 1;
}
return 0;}
