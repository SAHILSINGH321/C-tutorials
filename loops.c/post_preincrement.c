#include<stdio.h>
int main (){
int x = 5;
printf("\n%d",x);
x++;
printf("\n%d",x);
++x;
printf("\n%d",x);
printf("\n%d",x++); // x++ means , use x then increment
printf("\n%d",++x); // ++x means , increment then use x
    return 0;
}