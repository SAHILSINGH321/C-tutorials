#include<stdio.h>
/*if () { Nested if_else
    if () {

    }
    else {

    }
}

*/
// Take positive integer input and tell if it is divisible by 5 and 3.
/*int main (){
 int n;
 printf("Enter a Number : ");
 scanf("%d",&n);
 if (n%5==0 ) {
    if(n%3==0) {
printf("It is divisible by 5 and 3.");
    }
    else {
        printf("It is not  divisible by 5 and 3.");
    }
 }
else {
    printf("It is not divisible by 5 and 3.");
}
    return 0;
}
*/
// Take positive integer input and tell if it divisible by 5 or 3 and not divisible by 15.
/*
 int main () {
 int n;
 printf("Enter  Number  : ");
 scanf("%d",&n);
 if (n%5==0 || n%3==0){
    if (n%15!=0){
        printf("It is divisible by 5 or 3 and not divisible by 15. ");
    }
    else {
        printf("It is not divisible by 15");
    }
 }
   else {
     printf("It is not divisible by 5 or 3. ");
    }
    return 0;
 }
 */

// Take 3 positive integers and print greatest of them by nested loops.
 
int main (){
    int a,b,c;
    printf("Enter a : ");
    scanf("%d",&a);
    printf("Enter b : ");
    scanf("%d",&b);
    printf("Enter c : ");
    scanf("%d",&c);

   if(a>b){ // b is lowest 
    if (a>c){ // a is greatest 
        printf("%d is greatest.",a);
    }
    else { // (a<c)
        printf("%d is greatest.",c);
    }
   }
else {    // b>a
    if(b>c){
        printf("%d is greatest.",b);
    }
    else {   // b<c
      printf("%d is greatest.",c);
    }
    }
    return 0;
}