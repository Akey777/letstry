#include<stdio.h>
#include<string.h>
int main(){
int count=0,cons=0;
char ch[40];
gets(ch);
//check how much vowel and consonent present in this string
for(int i=0;ch[i];i++){
    if(ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u'){
        count++;

    }else{
        cons++;
    }
}
printf("vowel in string is :%d ",count);
printf("consonent  in string is :%d ",cons);



}