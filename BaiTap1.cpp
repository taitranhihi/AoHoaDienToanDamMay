#include <stdio.h>

void printMultiplesOfSeven() {
    printf("Cac so nguyen co 2 chu so va la boi cua 7 la:\n");
    for (int i = 14; i < 100; i += 7) {
        printf("%d ", i);
    }
    printf("\n");
}

int main() {
    printMultiplesOfSeven();
    return 0;
}
