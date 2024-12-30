#include<stdio.h>
// Predict the output 1
/*
int main () {
    int j;
    printf("\n%d",j);
    while (j<=10){
    printf("\n%d",j);
    j=j+1;   // Due to no value of j is assigned . therefore , j takes garbage value only valid in c/c++ not in java. Random value is given.

    }
    // output = garbage value
    return 0;
}
*/
// predict the output 2
/* int main () {
    int i=1;
    while (i<=10);
    {
    printf("\n%d",i);
    i=i+1;  

    }
    return 0;
}
*/
//result = infinite times 1 as output are shown.

// predict the output 3

/* int main (){

    int x =1;
    while(x==1){
        x = x-1;
        printf("\n%d",x);
    }
    return 0;
}
*/
// predict the output 4
/*
int main (){
    int x=4,y,z;
    y=--x; // first decrement of x then use it and stored in y; x=3;y=3;
    z=x--;  // first use the value of x then decrement of x; z=3; x=2;
    printf("\n%d%d%d",x,y,z);
    
    return 0;

}
*/
// predict the output 5
/*
int main (){
    int x=4,y=3,z; 
    z=x-- -y; // z = (x=4)- (3)=0; x=3
    printf("\n%d%d%d",x,y,z);
    return 0;
}
*/

// predict the output 6
/* int main (){
   while('a'<'b')  // ASCII value of 'a' and 'b' is : 97 and 98;
   printf("\nmalayalam is a palindrome.");  // infinite loop
    return 0;
}
*/
//  predict the output 7
/* int main (){
   while('a'<'b')  // ASCII value of 'a' and 'b' is : 97 and 98;
   printf("\nmalayalam is a palindrome.");  // infinite loop
    return 0;
}
*/
//  predict the output 8
/* int main (){ 
    int i=10;
   while(i=20)
   printf("\n computer buffs !");  // infinite loop
    return 0;
}
*/
//  predict the output 9
/* int main (){ 
    int i;
   while(i=10){
   printf("\n%d",i);  // infinite loop
   i=i+1;
   }
    return 0;
}
*/
//  predict the output 10
  /* int main (){ 
    int x =4,y=0,z;
   while(x>=0){
    x--;
    y++;
    if(x==y) {
        continue;
    }
    else {
    printf("\n%d%d",x,y);
    }
  
   }
    return 0;
   }*/ 
  // predict the output 11
  int main (){
    int x=4,y=0,z;
    while (x>=0){
        if (x==y) {
            break;
        }
        else {
            printf("\n%d%d",x,y);
        }
        x--;
        y++;
    }



    return 0;
  }