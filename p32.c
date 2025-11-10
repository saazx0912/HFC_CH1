#include <stdio.h>

int larger (int a , int b){
    if( a > b){
        return a;
    }
    return b;
}


int main(){

    puts("Too young to die; too beautiful to live");


    int greatest = larger(100 , 1000);
    printf("%i is the greatest!\n" , greatest);


    int x = 0;
    int y = 0;

    y = (x = 4);

    printf("y = %d , x = %d" ,y ,x);

    return 0;
}