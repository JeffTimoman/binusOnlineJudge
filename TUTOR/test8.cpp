//Mobil --> Merk, Tahun, Kecepatan, Jenis bensin, Irit
#include <bits/stdc++.h>
struct Mobil{
	char merk[100];
	int tahun;
	int akselerasi;
	char jenis_bensin[100];
	bool irit_tidakIrit;
};

Mobil mobil1[100];//Mobil --> mobil1 --> merk, tahun, akselerasi, jenis_benis, irit tidak irit
//mobil1[0] --> merk, tahun, akselerasi, jenis
//mobil1[1] --> merk, tahun .. 
//mobil1[2] --> merk, tahun ..
int main(){
	strcpy(mobil1[0].merk, "Samsung");
	mobil1[0].tahun = 2003;
	mobil1[0].akselerasi = 8;
	printf("%d", mobil1[0].akselerasi);
}
