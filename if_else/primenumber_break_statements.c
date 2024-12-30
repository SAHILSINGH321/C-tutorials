#include<stdio.h>

/*int main (){
 // WAP (write a program ) tp check if a number is prime or not.
  int n;
  printf("Enter a number: ");
    scanf("%d",&n);
    // for n=25
    for (int i=2;i<=n-1;i++){
        if (n%i==0){  // i is a factor of n;
             printf("The given number is composite number. ");
        }
    }
        return 0;
     }
  */


     // if we take input as 12 --> factors of 12 are 1,2,3,4,,6,12. but for checking the composite number 
    // we has to only find out 3 factors of that number in which two are known; one is number itself and other is 1;
    // therefore, only one should be find for being a composite number. therefore, if we knows at begining of loop; 
    // then , we should break the statement there because its increase the time complexity and space.
     // now, the use of break statement comes;

 
// WAP (write a program ) tp check if a number is prime or not.

int main (){
int n;
printf("Enter a number: ");
scanf("%d",&n);
   int a = 0;
for (int i=2;i<=n-1;i++){
if (n%i==0){  // i is a factor of n;
printf("The given number is composite number. ");
  a=1;
break;

      }
    }
    if(n==1){
        printf("The given number is neither composite nor prime. ");
    }
    else if (a==0) {
        printf("The given number is prime number. ");
    }
     return 0;
     }


