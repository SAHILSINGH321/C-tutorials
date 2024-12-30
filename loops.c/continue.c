#include<stdio.h>
/* int main (){
  int n;           // WAP to print odd numbers from 1 to 100.
  printf("Enter  Number: ");
  scanf("%d",&n);
   for(int i=1;i<=n;i++){
    if(i%2!=0){
        printf("%d ",i);
    }
   }
    return 0;
}
*/
/*
 int main (){
  int n;          
  printf("Enter  Number: ");
  scanf("%d",&n);
   for(int i=1;i<=n;i++){
    if(i%2==0){
       continue;  // skip karo loop ke uss round ko and next round start karo
    }
    printf("%d ",i);
   }
    return 0;
}
*/
 // HW : WAP to print even numbers from 1 to n numbers, using continue statement.

  int main (){
  int n;          
  printf("Enter  Number: ");
  scanf("%d",&n);
   for(int i=1;i<=n;i++){
    if(i%2!=0){
       continue;  // skip karo loop ke uss round ko and next round start karo
    }
    printf("%d ",i);
   }
    return 0;
}