#include<stdio.h>
#include<string.h>



int main(){
char ch [50] ,count=0,k=0;

printf("enter  your E-mail");
gets(ch);
 int b=strlen(ch);
 printf("%d",b);

for( int i=0;ch[i]!='\0';i++){
    if(ch[i]='@'){
        count++;
    }
   if(strlen(ch)>=6){
    if (ch[0]>='A' || ch[0]<='Z')
    { if(count==1){
        if(ch[b-3]=='.'^ch[b-2]=='.'){
            if(ch[i]==' '){
                k=1;
            }if(k==1){
                printf("wrong Email 5");
            }else{
                printf("Right E-email");
            }
        }else{
            printf("wrong E-mail  4");
            break;
        }
    }else{
        printf(" wrong E-mail 3");
        break;
    }   
    }else{
        printf("wrong EMail 2");
        break;
    }
   }else{
    printf("wrong Email 1");
    break;
   }
}











}