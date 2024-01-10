#include<stdio.h>
#include<string.h>
int main(){
int i,l,j;
char arr[20],crr[20];

gets(arr);
 l=strlen(arr);
for ( i=0,j=l-1;arr[i];i++){
crr[i]=arr[j-i];
}
crr[l]='\0';

    puts(crr);
}

