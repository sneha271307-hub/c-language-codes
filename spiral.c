#include <stdio.h>

int main() {
    int n;
    printf("Enter value of n: ");
    scanf("%d", &n);

    int a[n][n];

    int minr = 0, maxr = n - 1;
    int minc = 0, maxc = n - 1;
    int num = 1;
    int total = n * n;

    while (num <= total) {

        // fill top row
        for (int j = minc; j <= maxc && num <= total; j++) {
            a[minr][j] = num++;
        }
        minr++;

        // fill right column
        for (int i = minr; i <= maxr && num <= total; i++) {
            a[i][maxc] = num++;
        }
        maxc--;

        // fill bottom row
        for (int j = maxc; j >= minc && num <= total; j--) {
            a[maxr][j] = num++;
        }
        maxr--;

        // fill left column
        for (int i = maxr; i >= minr && num <= total; i--) {
            a[i][minc] = num++;
        }
        minc++;
    }

    // print matrix
    printf("\nSpiral Matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%3d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
