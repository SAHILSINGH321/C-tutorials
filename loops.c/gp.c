#include <stdio.h>
// display this gp --> 3,12,48 ... upto n terms 
// method 1
/*int main (){
int n ;
printf("Enter Number: ");
scanf("%d",&n);
int a = 3;
for (int i=1;i<=n;i++){
printf("%d ",a);
 a = a*4;
}
return 0;
}
*/


// Display this AP 100 , 97 , 94 , 91 . . . . upto all positive  terms.
// method 1
/*
int main (){
int n =34;
int a = 100;
for (int i=1;i<=n;i++){ // an = 100 + 3*(n-1) =3n+97;
printf("%d ",a);
a = a-3; 
}
return 0;
}
*/

//  Method 2 ap method
/*
int main () {
for (int i=100;i>=0;i=i-3) {   
// an = 100 + (-3)*(n-1) =-3n+103/ an =0 --> -3n+103 > 0 ==> n>100/3 > 33.33 = approx 34
printf("%d ",i);

}
return 0;
}*/
// 
 //  display the gp : 100 , 50 ,25 , .. .. .. upto n terms.

 int main (){
float  n ;
printf("Enter Number: ");
scanf("%d",&n);
int a =100;
for (int i =1;i<=n;i++) {
    printf("%d",a);
    a = a / 2;
}

 }
 // loop ke andar jo bhi daalo wo sb repeat hota hai
 /* for (){
 line 1 // jitni baar loop chlega utni baar line 1 repeat hogi.
 line 2 // jitni baar loop chlega utni baar line 2 repeat hogi.
 
 }
 */
 