#include<stdio.h>
void checklies_on(int ,int);

int main(){
int x,y ;
printf("enter num");
scanf("%d",&x);
printf("enter second num");
scanf("%d",&y);

checklies_on(x,y);

}

void checklies_on(int x ,int y){
    if(x>=0&&y==0){
        printf("lies on x axis");
    }else if (x==0&&y>=0){
        printf("lies on y axis");
    }else{
        printf("origan");
    }

}