#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int *)b - *(int *)a);
}

int main() {
    int n, i;
    scanf("%d", &n);
    int warriors[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &warriors[i]);
    }
    qsort(warriors, n, sizeof(int), compare);
    for (i = 0; i < n; i++) {
        printf("%d\n", warriors[i]);
    }
    return 0;
}


