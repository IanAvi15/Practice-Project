#include <stdio.h>
#include <stdbool.h>

int main() {
 // variable = a reusable container for storing a value   
 // behaves as if it were the value it contains

 int age = 33;
 int year = 1992;
 int quantity = 1;
 float gpa = 3.5;
 float price = 19.99;
 float temperature = 98.6;
 double pi = 3.1213445656;
 char grade = 'A';
 char symbol = '!';
 char currency = '$';
 char name[] = "Ian Aviles";
 char food[] = "Pizza";
 char email[] = "gg123@hotmail.com";
 // bool are true or fales. true is 1 false is 0. You have to include the header file.
 bool isOnline = true;
 bool isStudent = true;
 bool forSale = false; 


 printf("You are %d years old\n", age);
 printf("You were born in %d\n", year);
printf ("You have ordered %d x items\n", quantity);
printf("your gpa is %.1f\n", gpa);
printf("The price is $%.2f\n", price);
printf("The temp is %.1f F\n", temperature);
printf("The value of pi is %.15lf\n", pi);
printf("Your grade is %c\n", grade);
printf("Your favorite symbol is %c\n", symbol);
printf("Your US currency is %c\n", currency);
printf("My name is %s\n", name);
printf("My fav food is %s\n", food);
printf("My email is %s\n", email);
printf("%d\n", isOnline);

if(isOnline){
    printf("You are online\n");
}
    else{
    printf("You are offline\n");
}

if(isStudent){
    printf("You are a student\n");
}
else{
    printf("You are NOT a student\n");
}

if(forSale){
    printf("This item is for sale\n");
}
else{
    printf("That item is NOT for sale\n");
}


 return 0;
}
   