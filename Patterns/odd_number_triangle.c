#include<stdio.h>
// 1
// 1 3
// 1 3 5
// 1 3 5 7

/* int main (){
    int n;
    printf("Enter the number of rows:");
    scanf("%d",&n);
    int a=1;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=i+a;j++){
            if (j%2!=0){
                printf("%d ",j);
            }
        }
        printf("\n");
        a++;
    }
} */

// method 2
 int main (){
    int n;
    printf("Enter the number of rows:");
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        int a=1;  // In every iteration we assigned a=1;
        for (int j=1;j<=i;j++){
            printf("%d ",a);
            a+=2;
        }
        printf("\n");
    }
    return 0; 
 }