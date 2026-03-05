#include <stdio.h>

int main() {
    int n;
    int i;
    int data[100]; // Array statis untuk menyimpan nilai
    int jumlah = 0;
    float rata_rata;
    int count_di_atas_rata = 0;
    int nilai_min = 101; // Inisialisasi dengan nilai di atas rentang 0-100
    int nilai_max = -1;  // Inisialisasi dengan nilai di bawah rentang 0-100
    int rentang;

    scanf("%d", &n);

    // Loop pertama: membaca input, menghitung total, serta mencari min dan max
    for (i = 0; i < n; i++) {
        scanf("%d", &data[i]);
        jumlah = jumlah + data[i];

        if (data[i] < nilai_min) {
            nilai_min = data[i];
        }
        if (data[i] > nilai_max) {
            nilai_max = data[i];
        }
    }

    rata_rata = (float)jumlah / n;

    // Loop kedua: menghitung mahasiswa yang nilainya >= rata-rata
    for (i = 0; i < n; i++) {
        if (data[i] >= rata_rata) {
            count_di_atas_rata = count_di_atas_rata + 1;
        }
    }

    rentang = nilai_max - nilai_min;

    // Menampilkan hasil sesuai format yang diminta
    printf("%d\n", jumlah);
    printf("%.2f\n", rata_rata);
    printf("%d\n", count_di_atas_rata);
    printf("%d\n", rentang); // Baris keempat: rentang nilai

    return 0;
}