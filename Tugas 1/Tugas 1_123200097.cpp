#include <iostream>
using namespace std;
main ()
{
	char nama[30];
	int nim;
	float x,uts,uas;
	
	cout <<"Nama		: ";
	gets(nama);
	cout <<"NIM		: "; cin >>nim;
	cout <<endl;
	
	cout <<"Nilai UTS	: "; cin >>uts;
	cout <<"Nilai UAS	: "; cin >>uas;
	
	x = (uts+uas)/2;
	
	cout <<"\nSaya " <<nama <<" , ";
	cout <<"NIM " <<nim;
	cout <<" mendapatkan nilai rata-rata " <<x;
	cout <<" dari hasil nilai UTS dan nilai UAS \n";
	
	return 0;
}
	
