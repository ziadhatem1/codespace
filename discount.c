#include <stdio.h>
#include <cs50.h>

int discount( int x ){

    int y = x-(15 % 100);
    return y;
}

int main (void){

    int z = discount(get_int("x:"));
    printf("%i\n", z);




}