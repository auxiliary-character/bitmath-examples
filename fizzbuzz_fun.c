#include <stdio.h>

int main(){
    char buf[4];
    char* arr[] = {
        buf,
        "Buzz",
        "Fizz",
        "Fizzbuzz",
    };
    for(unsigned int i=1; i<=100; ++i){
        sprintf(buf, "%u", i);
        puts(arr[!(i%5)|(!(i%3)<<1)]);
    }
    return 0;
}
