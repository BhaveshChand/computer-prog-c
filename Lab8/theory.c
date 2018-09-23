void message(); //Function Declaration
#include<stdio.h>
int main()
{
printf("I am in function main()\n");
message(); /* Function message() is called in function main() */
printf("I return back from the function message()\n");
return 0;
}
void message() /* Function to print a message. It does not return anything and does not take any parameters as input*/
{
printf("I am in function message\n");
return;
}