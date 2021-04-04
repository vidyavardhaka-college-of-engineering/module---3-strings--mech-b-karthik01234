Complete the given program with string declaration/initialization & read/print the string
// Instructions:-
//1) Initially, declare a string with size
//2) read the input string from user 
//3) Finally, Print the input string obtained from user.

//Expected input & output:-
//Enter a String: Vidyavardhaka
//The input string is Vidyavardhaka

#include <stdio.h>
#include<string.h>
int main() 
{
char a[100];//Declare the string
printf("Enter a String: ");
gets(a);//read the string from user
printf("The input string is %s",a);//Print the string
return 0;
}
