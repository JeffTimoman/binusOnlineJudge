#include <stdio.h>
#include <string.h>

int main(){
    int n;
    scanf("%d", &n);
    getchar();
    char kodeDosen[n+1][31];
    char namaDosen[n+1][31];
    char jenisKelaminDosen[n+1][31];
    int jumlahMahasiswa[n+1];

    char kodeMahasiswa[n+1][1000][31];
    char namaMahasiswa[n+1][1000][31];
    char jenisKelaminMahasiswa[n+1][1000][31];
    char namaAyah[n+1][1000][31];
    char namaIbu[n+1][1000][31];
    int jumlahSaudaraKandung[n+1][1000];

    for (int i = 0; i < n; i++){
        scanf("%s", kodeDosen[i]);
        getchar();
        scanf("%s", namaDosen[i]);
        getchar();
        scanf("%s", jenisKelaminDosen[i]);
        getchar();
        scanf("%d", &jumlahMahasiswa[i]);
        getchar();
        for (int j = 0; j < jumlahMahasiswa[i]; j++){
            scanf("%s", kodeMahasiswa[i][j]);
            getchar();
            scanf("%s", namaMahasiswa[i][j]);
            getchar();
            scanf("%s", jenisKelaminMahasiswa[i][j]);
            getchar();
            scanf("%s", namaAyah[i][j]);
            getchar();
            scanf("%s", namaIbu[i][j]);
            getchar();
            scanf("%d", &jumlahSaudaraKandung[i][j]);
            getchar();
        }
    }
    int k;
    scanf("%d", &k);
    printf("Kode Dosen: %s\nNama Dosen: %s\nGender Dosen: %s\nJumlah Mahasiswa: %d\n", kodeDosen[k-1], namaDosen[k-1], jenisKelaminDosen[k-1], jumlahMahasiswa[k-1]);

    for (int i = 0; i < jumlahMahasiswa[k-1]; i++){
        printf("Kode Mahasiswa: %s\nNama Mahasiswa: %s\nGender Mahasiswa: %s\nNama Ayah: %s\nNama Ibu: %s\nJumlah Saudara Kandung: %d\n", kodeMahasiswa[k-1][i], namaMahasiswa[k-1][i], jenisKelaminMahasiswa[k-1][i], namaAyah[k-1][i], namaIbu[k-1][i], jumlahSaudaraKandung[k-1][i]);
    }
    return 0;
}