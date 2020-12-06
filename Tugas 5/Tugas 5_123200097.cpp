#include <iostream>
using namespace std;
int main () {
	int panjang,lebar,tinggi;
	int pil;
	
	cout <<"-----Gambar Bangun Datar-----\n";
	cout <<"1. Kotak bolong\n";
	cout <<"2. Segitiga\n";
	cout <<"Pilih : "; cin >>pil;
	cout <<endl;
	
	switch (pil) {
		case 1 :
		cout <<"Panjang\t: "; cin>>panjang;
		cout <<"Lebar\t: "; cin>>lebar;
		for (int a=1; a<=panjang; a++) {
			cout <<" ";
			for (int b=1; b<=lebar; b++) {
				if (a==1 || a==panjang || b==1 || b==lebar) {
					cout <<"*";
				} else {
					cout <<" ";
				}
			}
			cout <<endl;
		}
		break;
		case 2 :
		cout <<"Tinggi\t: "; cin>>tinggi;
		for (int c=1; c<=tinggi; c++) {
			int x=1;
			int y=c;
			cout <<" ";
			for (int d=1; d<=c; d++) {
				cout <<y <<" ";
				y = y+(tinggi-x);
				x++;
			}
			cout <<endl;
		}
		break;
	}
	
	return 0;
}
