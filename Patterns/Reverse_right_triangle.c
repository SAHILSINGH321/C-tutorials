#include <stdio.h>
int main (){
int n;
printf("Enter the number of rows: ");
scanf("%d",&n);
// 1 2 3 4
// 1 2 3
// 1 2
// 1


for ( int i=1;i<=n;i++){
    for (int j=1;j<=n+1-i;j++){
        printf("%d ",j);
    }
    printf("\n");
}
    return 0;
}
