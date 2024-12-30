#include <stdio.h>
//  print this pattern:
// * * * * 
// * * *
// * *
// * upto n rows

// method 1
/*
int main () {
int n;
printf("Enter the number of rows: ");
scanf("%d",&n);
for (int i=1;i<=n;i++) {
    for (int j=n-i+1;j>=1;j--){
    printf("* ");
    }
    printf("\n");
} 
return 0;
}
*/


// method 2
 /* int main () {
 int n;
 printf("Enter the number of rows: ");
scanf("%d",&n);
for (int i=1;i<=n;i++) {    
   for (int j=1;j<=n+1-i;j++){ // n+1-i is the number of stars Iterating in each row
    printf("* ");
    }
    printf("\n");
} 
return 0;
}
*/
// method 3
int main () {
 int n;
 printf("Enter the number of rows: ");
scanf("%d",&n);
int a=n;
for (int i=1;i<=n;i++) {    
   for (int j=1;j<=n+1-i;j++){ // n+1-i is the number of stars Iterating in each row
    printf("* ");
    }
    a--;
    printf("\n");
} 
return 0;
}
