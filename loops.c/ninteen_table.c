#include<stdio.h>
// 19,39,57,76, . . etc.
/*int main (){
for (int i=1;i<=10;i++){ // (int i=19;i<=190;i++)
    printf("%d\n",19*i);
}
}
*/ // print table of n where n is an input given by the user. 
int main (){
    int n;
    printf("Enter number :");
    scanf("%d",&n);
for (int i=1;i<=10;i++){ // (int i=19;i<=190;i++)
    printf("%d\n",n*i);
}
}
