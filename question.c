#include <stdio.h>

int main() {
    int r;
    int total_chariots;
    scanf("%d", &r);
    total_chariots = (r * (r + 1)) / 2;
    printf("%d\n", total_chariots);
    return 0;
}

