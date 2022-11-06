#include <stdio.h>
int main() {
   int i = 0;
   char name[50];
   char sname[50];
   //sets up a while loop
   while(i<10){
      //Accepts students names
   printf("\nStudent, please enter your name and surname: \n");
   scanf("%s %s", name, sname);
   printf("Hello %s %s.", name, sname);
   //Increments i
   i++;
   }
   


}