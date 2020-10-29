#include <iostream>
using namespace std;
int main ()
{
	string username;
	int password;
	int pil;
	int harian,uts,uas;
	float nilai;
	
	cout <<"===============Login akun===============" <<endl;
	cout <<"Username\t	: "; cin >>username;
	cout <<"Password\t	: "; cin >>password;
	cout <<"========================================" <<endl;
	cout <<endl;
	
	if (username != "ishlaah" && password != 12345) {
		cout <<"Username dan Password anda salah!" <<endl;
		cout <<endl;
	} else if (username != "ishlaah" && password == 12345) {
		cout <<"Username dan Password anda salah!" <<endl;
		cout <<endl;
	} else if (username == "ishlaah" && password != 12345) {
		cout <<"Username dan Password anda salah!" <<endl;
		cout <<endl;
	} else if (username == "ishlaah" && password == 12345) {
		cout <<"Username dan Password anda benar" <<endl;
		cout <<endl;
		cout <<"Input Nilai Mata Kuliah " <<endl;
		cout <<"1. Algoritma dan Pemrograman" <<endl;
		cout <<"2. Kalkulus " <<endl;
		cout <<endl;
		cout <<"Masukkan Pilihan : "; cin >> pil;
		cout <<endl;
		if (pil == 1) {
			cout <<"Nilai Harian	: "; cin >> harian;
			cout <<"Nilai UTS	: "; cin >> uts;
			cout <<"Nilai UAS	: "; cin >> uas;
			cout <<endl;
			nilai = (harian+uts+uas)/3;
			if (nilai >= 80) {
				cout <<"Selamat anda LULUS Algoritma dan Pemrograman dengan nilai " <<nilai <<endl;
				} else {
					cout <<"Anda TIDAK LULUS Algoritma dan Pemrograman " <<endl;
				}
				
			} else if (pil == 2){
			cout <<"Nilai Harian	: "; cin >> harian;
			cout <<"Nilai UTS	: "; cin >> uts;
			cout <<"Nilai UAS	: "; cin >> uas;
			cout <<endl;
			nilai = (harian+uts+uas)/3;
			if (nilai >= 80) {
				cout <<"Selamat anda LULUS Kalkulus dengan nilai " <<nilai <<endl;
				} else {
					cout <<"Anda TIDAK LULUS Kalkulus " <<endl;
				}
			}
		}
		system ("pause");
		cin.get();
		return 0;
	}
			
