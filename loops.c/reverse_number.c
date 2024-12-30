
#include <stdio.h>
/* int main (){
int n;
printf("Enter a number: ");
scanf("%d",&n);

int lastDigit = 0; // ex: n=12345 ---> n%10 gives reminder as last digit of that number.
printf("The reverse number of a given number is: ");
while (n!=0){
   
    lastDigit = n%10;
    n = n/10;
    printf("%d",lastDigit);
    
}

    return 0;
}
*/
 // method 2
/*
int main (){
int n;
printf("Enter a number: ");
scanf("%d",&n);

int reversed = 0; // ex: n=12345 ---> n%10 gives reminder as last digit of that number.

while (n!=0 || n>0){
    reversed = reversed * 10;
    reversed = reversed + n%10;
    n = n/10;
   
}
printf("The reverse number of a given number is: %d",reversed);
    return 0;
}
*/
// WAP to print  the sum of a given number and its reverse .

int main (){
int n;
printf("Enter a number: ");
scanf("%d",&n);

int reversed = 0; // ex: n=12345 ---> n%10 gives reminder as last digit of that number.
int sum = n;
while (n!=0 || n>0){
    reversed = reversed * 10;
    reversed = reversed + n%10;
    n = n/10;
   
}
sum = sum + reversed;

printf("The Sum of a given number and its reverse is: %d",sum);
    return 0;
}