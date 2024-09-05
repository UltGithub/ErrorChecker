#include <stdio.h>
#define NO_ERR 0
#define ERR 1

int main() {
    int a;
    int stat_test();
    int error = NO_ERR;
    char ch = getchar();
    if ( ch == '\n' || ch == ' ' || ch == '\t') {
        error = ERR;
    } else { 
        ungetc(ch, stdin);
    }
    return error;
}

