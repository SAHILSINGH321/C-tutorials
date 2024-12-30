#include <stdio.h>
/* int main (){ 
for (int i =1;i<=3;i++){ // Outer loop for number of rows  -- >no  of lines
    for (int j=1;j<=5;j++){ ///Inner loop for number of columns -- >no of stars in each line
        printf("*");
    }
    printf("\n");
}
        return 0;
}*/
int main (){ 
    int n;
    printf("Enter the number of rows:"); // ctrl +I to github copilot 
    scanf("%d",&n);
    int m;
    printf("Enter the number of columns:"); // ctrl +I to github copilot
     scanf("%d",&m);
for (int i =1;i<=n;i++){ // Outer loop for number of rows  -- >no  of lines
    for (int j=1;j<=m;j++){ ///Inner loop for number of columns -- > no of stars in each line
        printf("* ");
    }
    printf("\n"); // after every line print a new line
}
        return 0;
}