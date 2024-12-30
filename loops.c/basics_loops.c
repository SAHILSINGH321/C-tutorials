#include<stdio.h>
// DRY --> do not repeat yourself
int main () {
 int n;
 printf("Enter number :");
 scanf("%d",&n);
 // scope of variable -->for, if
for (int i=1;i<=n;i++){
    printf("Hello World\n");
}
// printf("%d",i);
    return 0;
}