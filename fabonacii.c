#include<stdio.h>
int fab(int num){


if (num==0){
 return 0;
}else if(num==1){
return 1;

}
else{return fab(num-1)+fab(num-2);}



}





int main(){



int num;
printf("enter num");
scanf("%d",&num);
int r=fab(num);
printf("%d",r);


}