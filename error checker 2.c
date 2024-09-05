#include <stdio.h>
#define NO_ERR 0
#define ERR 1

int main() {
    int error = NO_ERR;
    int number;
    if(start_test()!= NO_ERR || scanf("%d", &number) != 1 || end_test() != NO_ERR){
        error = ERR;
        printf("n/a");
    }
    return error;
}