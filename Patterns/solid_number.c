#include <stdio.h>
int main (){
  // Print this pattern :
    // 1 2 3 4 5
    // 1 2 3 4 5
    // 1 2 3 4 5
    // 1 2 3 4 5
    // 1 2 3 4 5

    int n;
    printf("Enter the number of rows:");
    scanf("%d",&n);
    int m;
    printf("Enter the number of columns:");
    scanf("%d",&m);
    for (int i=1;i<=n;i++){
        for  (int j=1;j<=m;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}