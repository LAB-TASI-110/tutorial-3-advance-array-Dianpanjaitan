#include <stdio.h>

int main() {
    int n;
    int i;
    int data[100]; // Array statis untuk menyimpan nilai
    int jumlah = 0;
    float rata_rata;
    int count_di_atas_rata = 0;

    scanf("%d", &n);

    // Loop pertama: membaca input dan menghitung total
    for (i = 0; i < n; i++) {
        scanf("%d", &data[i]);
        jumlah = jumlah + data[i];
    }

    rata_rata = (float)jumlah / n;

    // Loop kedua: menghitung mahasiswa yang nilainya >= rata-rata
    for (i = 0; i < n; i++) {
        if (data[i] >= rata_rata) {
            count_di_atas_rata = count_di_atas_rata + 1;
        }
    }

    // Menampilkan hasil sesuai format yang diminta
    printf("%d\n", jumlah);
    printf("%.2f\n", rata_rata);
    printf("%d\n", count_di_atas_rata);

    return 0;
}