#include <stdio.h>
/* int main (){
int n;
printf("Enter a number: ");
scanf("%d",&n);
int sum = 0;
int lastDigit =0; // ex: n=12345 ---> n%10 gives reminder as last digit of that number.
while (n!=0){
   
    lastDigit = n%10;
   sum=sum+lastDigit;
    n = n/10;
}
printf("The sum of digits are: %d",sum);

    return 0;
}
*/
// WAP to print the sum of even numbers of a given number.
/* int main (){
int n;
printf("Enter a number: ");
scanf("%d",&n);
int sum = 0;
int lastDigit =0; // ex: n=12345 ---> n%10 gives reminder as last digit of that number.
while (n!=0){
   
    lastDigit = n%10;
    n = n/10;
    if (lastDigit%2==0){
        sum = sum +lastDigit;
    }

}
 printf("The sum of even digits are: %d",sum);
    return 0;
}

*/
// WAP to print the sum of odd numbers of a given number.
int main (){
int n;
printf("Enter a number: ");
scanf("%d",&n);
int sum = 0;
int lastDigit =0; // ex: n=12345 ---> n%10 gives reminder as last digit of that number.
while (n!=0){
   
    lastDigit = n%10;
    n = n/10;
    if (lastDigit%2!=0){
        sum = sum +lastDigit;
    }

}
 printf("The sum of odd digits are: %d",sum);
    return 0;
}

