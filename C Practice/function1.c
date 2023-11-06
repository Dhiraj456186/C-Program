/*program to print hello and good bye by using function*/
#include<stdio.h>
// declaration
void printHello();
void printGoodbye();

int main() {
    printHello(); //function call
    printGoodbye();
    return 0;
}

// function definition
void printHello() {
    printf("Hello!\n");
}
void printGoodbye(){
    printf("Goodbye:\n");
}