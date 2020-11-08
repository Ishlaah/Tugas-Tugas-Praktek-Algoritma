#include <iostream>
using namespace std;
int main ()
{
	int n, n_1, n_n;
	int m, m_1, m_n;
	int pil;
	char lagi;
	
	do { cout <<"Perkalian dan Perpangkatan========" <<endl;
		cout <<"1. Perkalian" <<endl;
		cout <<"2. Perpangkatan" <<endl;
		cout <<"Pilih : "; cin >>pil;
		
		switch (pil) {
			case 1:
			cout <<"Input angka N : "; cin >>n;
			cout <<"Input angka M : "; cin >>m;
			if (m>=0 && n>=0) {
				cout <<m;
				m_1 = m;
				for (int i = 1; i<n; i++) {
					cout <<" + " <<m;
					m_n = m_1 + m;
					m_1 = m_n;
				}
				cout <<" = " <<m_n <<endl;
			} else {
				cout <<"Hanya bisa menghitung angka positif" <<endl;
			}
			
			break;
			
			case 2:
			cout <<"Input angka N : "; cin >>n;
			cout <<"Input angka M : "; cin >>m;
			if (n>=0 && m>=0) {
				cout <<n;
				n_1 = n;
				for (int i = 1; i<m; i++) {
					cout <<" * " <<n;
					n_n = n_1 + n;
					n_1 = n_n;
				}
				cout <<" = " <<n_n <<endl;
			} else {
				cout <<"Hanya bisa menghitung angka positif" <<endl;
			}
			
			break;
		}
		cout <<"Ingin menghitung angka lagi (Y/T) : "; cin>>lagi;
	}
	while (lagi == 'Y' || lagi == 'y');
	cout <<"Terima kasih telah menghitung angka" <<endl;
	
	system ("pause");
	cin.get();
	cin.get();
	return 0;
}
