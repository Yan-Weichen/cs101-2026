#include <stdio.h>

int multi(int i, int j) {
    if (j == 1) {
        printf("%d*%d=%d ", i, j, i*j);
        return 0;
    }
    else {
        multi(i, j-1);
        printf("%d*%d=%d ", i, j, i*j);
    }
    return 0;
}

int table(int i) {
    if (i == 1) {
        multi(i, 9);
        printf("\n");
        return 0;
    }
    else {
        table(i-1);
        multi(i, 9);
        printf("\n");
    }
    return 0;
}

int main() {
    table(9);
    return 0;
}
