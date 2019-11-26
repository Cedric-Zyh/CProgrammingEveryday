#include <stdio.h>

/*
练习函数调用。
*/

void hello_world(void) {
    printf("Hello, world!\n");
}
void three_hellos(void) {
    int counter;
    for (counter = 1; counter <= 3; counter++) {
        hello_world();
    }
}

int main() {
    three_hellos();
    system("pause");
    return 0;
}