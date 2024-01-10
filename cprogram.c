#include<stdio.h>
#include<string.h>
int main(){
char strp[20],space=0,capital=0,digit=0,symbol=0;
printf("enter a str");
gets(strp);

for( int i=0;strp[i]!='\0';i++){


    if(strp[i]==' '){
        space+=1;

    }
    else if(strp[i]>='A'&& strp[i]<='Z'){
        capital+=1;
    }
     else if(strp[i]>='0' && strp[i]<='9'){
        digit+=1;

    }
    else if (strp[i]>='a'&& strp[i]<='z')
    {
    }else{
        symbol++;
    }
    
    
}

printf(" total space in the string :- %d\n",space);
printf(" total capital letter in the string :- %d\n",capital);
printf("total  digit in the sring:-%d\n",digit);
printf("total  spacial symbol in the sring:-%d\n",symbol);




}