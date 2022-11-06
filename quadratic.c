#include<stdio.h>
#include<string.h>
#include <math.h>


int main(){
    //Initialises variables needed for calculations
   int a, b, c, ans, powr, discr, jojo, ans2;
   printf("input your a: ");
   scanf("%d", &a);
   printf("input your b: ");
   scanf("%d", &b);
   printf("input your c: ");
   scanf("%d", &c);
   
   jojo = pow(b,2) -(4*a*c);
   if(jojo < 0){
        printf("Your discriminant has a negative value, therefore cannot be computed");
   }else{
      discr = sqrt(pow(b,2) -(4*a*c));
      //saves roots in variables
      ans = (-b + discr)/(2*a);
      ans2 = (-b - discr)/(2*a);
        printf("Your roots are %d or %d", ans, ans2);
   }
  
    return 0;
}     
