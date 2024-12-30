#include <stdio.h>
int main (){
// given the length and breadth of a rectangle, write a program to find  whether the area of a rectangle is greater than
// its perimeter.

int length ,breadth;
printf("Enter length : ");
scanf("%d",&length);
printf("Enter breadth : ");
scanf("%d",&breadth);
int area = length*breadth;
int perimeter = 2*(length+breadth);
if (area > perimeter) {
    printf("The area of a rectangle is greater than its perimeter.");
}
else if (area < perimeter){
    printf("The area of rectangle is not greater than its perimeter.");
}
else{
    printf("The area of rectangle is equal to its perimeter.");
}
    return 0;
}