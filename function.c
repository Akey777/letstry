#include<stdio.h>
void australia(){
    printf("you are in australia\n");
return;
}
void  england(){
    printf("you are in england\n");
    australia();
    return;
}
void india (){
    printf("you are in india\n");
    england();
    return;
}


int main(){
    india();

return 0;
}