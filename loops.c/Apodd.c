#include<stdio.h>
/*
int main (){
    int n;
    printf("Enter number :"); // 1,3,5,,7, . . . . (2n-1)
    scanf("%d",&n); // an=1+(n-1)*2=(2n-1)
    for(int i=1;i<=2*n-1;i=i+2){
    printf("%d ",i);
    }
    return 0;
    }
*/
  // AP -- > 4,7,10,13,16,19, . . . ()
    /* int main (){
    int n;
    printf("Enter number :"); // 1,3,5,,7, . . . . (2n-1)
    scanf("%d",&n); // an=1+(n-1)*2=(2n-1)
    for(int i=4;i<=3*n+1;i=i+3){
    printf("%d ",i);
    }
    return 0;
    }
    */
 // optional method
/* int main (){
    int n;
    printf("Enter number : "); 
    scanf("%d",&n); 
    int a =4;
    for(int i=1;i<=n;i=i+1){
      // if we not using maths we can print with assumptions.
    printf("%d ",a);
    a=a+3;
    }
    return 0;
    }
*/
    // Display this GP - 1,2,4,,8,16,32, . . . . upto n terms.
    // an=ar^(n-1)

    
    int main (){
    int n;
    printf("Enter number : "); 
    scanf("%d",&n); 
    int a =1;
    for(int i=1;i<=n;i++){
    printf("%d ",a);
    a = a * 2;
    }
    return 0;
    } 

