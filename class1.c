# include <stdio.h>

// format specifier ->> %d,%f,%c
/*int main (){
    int age = 22;
    printf("age is %d\n",age);
    char star ='*';
    printf ("asterik is %c\n",star);
    float pi = 3.14;
   printf ("value of c is %f\n",pi);
return 0;
}
*/
/* int main (){
   int age;
   printf("enter your age");
   scanf ("%d",&age);
   printf("age is : %d",age);
    return 0 ;

} */

// print sum of two inputs 
/*int main(){
    int a,b;
    printf("Enter a :");
    scanf("%d",& a);

    printf("Enter b :");
    scanf("%d",& b);

   int sum =a+b ;
   printf("sum of a and b is : %d",sum);
    return 0;
}
*/ // print area of square having side length provided by th user.

/*int main (){
  int side_lenth;
  printf(" side lenth : ");
  scanf("%d", &side_lenth);

  int area = (side_lenth)*(side_lenth);
  printf("area of square : %d",area);
    return 0;
}*/
 // To print area of a circle if radius of circle is provided by the user.
 
 /*int main () {
int radius;
printf ("Enter radius : ");
scanf ("%d",&radius);
float pi= 3.14;
float area = pi*radius*radius;
printf("area of circle : %f",area);
    return 0;
 }
 */

 // Valid / Invalid statement
 int main (){
     int a = 22;
     int b = a+2;
     int c = b-1;
     int d = 1,e;

     printf("%f",d);

     int oldAge = 14;
    //  int newAge = oldAge + years;
   int years = 2;
   int newAge = oldAge + years;
     
    int x,y,z;
      x=y=z=4;
    // int x=y=z=4; first declare variable then use it.(invalid statement)

    return 0;
 }
