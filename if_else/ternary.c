#include<stdio.h>
// ternary operator
/*int main (){
int n;
printf("Enter number :");
scanf("%d",&n);
// expression1 ? expression2 : expression 3
// enter a number and print if it is even or odd number.
 n%2==0 ?printf("Even number")  : printf("odd number");
    return 0;
}
*/
// enter a number and tell if it is a three digit number or not.
int main (){
    int n;
 printf("Enter number :");
 scanf("%d",&n);
 n>99 && n<1000 ? printf("Three digit number") : printf("It is not a three digit number.");
    return 0;
}