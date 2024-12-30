#include<stdio.h>

  // Print this pattern :
 // A B C D 
 // A B C D
 // A B C D
//  A B C D 
// ASCII values - A=65, B=66, . . . .

/* int n;
printf("Enter the number of rows: ");
scanf("%d",&n);
for (int i=1;i<=n;i++) {
    int a=1;
    for (int j=1;j<=n;j++){
      int d = a+64; 
      char ch = (char)d; // typecasting of alphabets
      printf("%c ",ch);
      a++;
    }
printf("\n");
}
    return 0;
} */
 // A
 // A B
 // A B C
 // A B C D
 
 /* int n;
printf("Enter the number of rows: ");
scanf("%d",&n);
for (int i=1;i<=n;i++) {
    int a=1;
    for (int j=1;j<=i;j++){
      int d = a+64; 
      char ch = (char)d; // typecasting of alphabets
      printf("%c ",ch);
      a++;
    }
printf("\n");
}
    return 0;
}*/
 
 // print this pattrn :
 // 1 
 // A B 
 // 1 2 3
 // A B C D
 // 1 2 3 4 5
 
 
 int main () {
  int n;
printf("Enter the number of rows: ");
scanf("%d",&n);
for (int i=1;i<=n;i++) {
    int a=1;
    for (int j=1;j<=i;j++){
      int d = a+64; 
      if(i%2!=0){
        printf("%d ",j);
      }
      else {
        char ch = (char)d; // typecasting of alphabets
      printf("%c ",ch);
      }
      a++;
    }
printf("\n");
}
    return 0;
}
  