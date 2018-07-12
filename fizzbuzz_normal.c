#include <stdio.h>
#include <stdbool.h>

int main(){
    for(unsigned int i=1; i<=100; ++i){
        bool div_3 = i % 3 == 0;
        bool div_5 = i % 5 == 0;
        if(div_3 && div_5){
            puts("Fizzbuzz");
        }
        else if(div_3){
            puts("Fizz");
        }
        else if(div_5){
            puts("Buzz");
        }
        else{
            printf("%u\n", i);
        }
    }
    return 0;
}
