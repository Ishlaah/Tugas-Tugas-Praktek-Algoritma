#include <iostream>
using namespace std;

void Luas();
void Keliling(int &r);
int Volume(int r);

float phi=3.14;

int main () {
	int r,pil;
	char lagi;
	
	do { cout <<"Hitung Lingkaran==========\n";
	cout <<"1. Luas Lingkaran\n";
	cout <<"2. Keliling Lingkaran\n";
	cout <<"3. Volume Tabung\n";
	cout <<"Pilih : "; cin >>pil;
	cout <<endl;
	
	
	if (pil==1) {
		 Luas();
	} else if (pil==2) {
		Keliling(r);
	} else if (pil==3) {
		Volume(r);
	} else {
		cout <<"Input salah :(" <<endl;
	}
	
	cout <<endl;

	cout <<"Ulangi program? (y/n)"; cin >>lagi;
	cout <<endl;
		
	}
	
	while (lagi == 'Y' || lagi == 'y');
	cout <<"Program selesai, Terima kasih :)" <<endl;
	
	system("pause");
	return 0;
	
}


void Luas() {
	int r;
	float luas;
	cout <<"Jari - jari\t: "; cin >> r;
	
	luas = phi*r*r;
	
	cout <<"Luas Lingkaran adalah " <<luas <<endl;	
}

void Keliling(int &r) {
	float keliling;
	cout <<"Jari - jari\t: "; cin >> r;
	
	keliling = 2*phi*r;
	
	cout <<"Keliling Lingkaran adalah " <<keliling <<endl;	
}

int Volume(int r) {
	int t;
	float volume;
	cout <<"Jari - jari\t: "; cin >> r;
	cout <<"Tinggi\t\t: "; cin >> t;
	
	volume=phi*r*r*t;
	
	cout <<"Volume Tabung adalah " <<volume <<endl;	
	return (volume);
}
