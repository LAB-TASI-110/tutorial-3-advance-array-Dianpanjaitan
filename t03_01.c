#include <stdio.h>

int main() {
    int n;
    int i;
    int nilai;
    int jumlah = 0;
    float rata_rata;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &nilai);
        jumlah = jumlah + nilai;
    }

    rata_rata = (float)jumlah / n;

    printf("%d\n", jumlah);
    printf("%.2f\n", rata_rata);

    return 0;
}