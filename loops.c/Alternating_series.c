#include <stdio.h>
int main (){
   // WAP to print the sum of given series : 
   // 1 -2 + 3 -4 +5 -6 +7 . . . . upto n terms
   int n;
   printf("Enter Number: ");
   scanf("%d",&n);
   int negative =0;
   int positive = 0;
   for (int i =1; i<=n;i++){
    if (n%2==0) { 
        printf("%d ",-i);
         negative;
    }
    else {
         printf("%d",i);
    }
   }
   
   
   
    return 0;
}
