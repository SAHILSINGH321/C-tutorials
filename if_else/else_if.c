#include<stdio.h>
// Take marks of a student and print grade according to the marks.
/* 91-100 -> Excellent 
   81-90 -> very good
   71-80 -> good
   61-70 -> can do better 
   51-60 -> average
   41-50 -> Below average
   <40 -> Fail
   */
/* int main () {
  int marks;
 printf("Enter marks :");
 scanf("%d",&marks);
 if(marks > 90 && marks < 101){
    printf("Excellent");
 }
 else if(marks > 80 && marks < 91){
    printf("very Good");
 }
 else if(marks > 70 && marks < 81){
    printf("Good");
 }
 else if(marks > 60 && marks < 71){
    printf("can do better");
 }
  else if(marks > 50 && marks < 61){
    printf("Average");
 }
  else if(marks > 40 && marks < 51){
    printf("Below average");
 }
  else  {
    printf("Fail");
 }

    return 0;

}*/


// Given three points (x1,y1) ,(x2,y2) and (x3,y3). write a program 
// to check if three points are lies on the straight line.
  /* int main (){
  double x1,x2,x3,y1,y2,y3;
  printf("Enter x1 :");
  scanf("%d",&x1);
   printf("Enter x2 :");
  scanf("%d",&x2);
   printf("Enter x3 :");
  scanf("%d",&x3);
   printf("Enter y1 :");
  scanf("%d",&y1);
   printf("Enter y2 :");
  scanf("%d",&y2);
   printf("Enter y3 :");
  scanf("%d",&y3);
   int m1 =(y2-y1)/(x2-x2);
    int m2 =(y3-y2)/(x3-x2);
if(m1==m2){
    printf("These three points are lies on the straight line. ");
}
else{
    printf("These three points are not lies on the straight line. ");
}
    return 0;
}
*/
// Given a point (x,y) , write a program to find out if it lies on x-axis, y-axis or origin (0,0).
int main (){
double x1,y1;
printf("Enter x1 : \n");
//scanf("%d",&x1);
printf("Enter y1 : \n");
// scanf("%d",&y1);
 scanf("%d %d", &x1 , &y1);

if(x1==0 && y1==0){
    printf("Point lies on origin.");
}
else if(y1==0){
    printf("Point lies on x-axis.");
}
 
else if(x1==0){
    printf("Point lies on y-axis.");
}
else {
    printf("Point lies between x-axis and y-axis.");
}
    return 0;
}

// else if -- > ya fir