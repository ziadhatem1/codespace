#include <stdio.h>
#include <cs50.h>

int discount( int x ){

    int z = x - 15/100;
    return z;
}

int main (void){

    discount(get_int("x:"));
    printf("%i\n",x);


}