#include<stdio.h>
int main (){

int a;
if (3+2%5){ //if(expression given ||any integer except 0 || any character) --> only works in c/ c++ not in java.
    printf("This works.\n");
}
if (a=10){
    printf("Even this works.\n");
}
if (-5){
    printf("Surpisingly,Even this works.\n");
}
if ('a'){
    printf("Surpisingly,Even this works.\n");
}
    return 0;
}