#include <iostream>
using namespace std ;
main ()
{
	int umura,umuri,umuran1,umuran2;
	int beban1,beban2,beban3,beban4;
	int biaya;
	
	cout <<"Umur Ayah	: "; cin >>umura;
	cout <<"Umur Ibu	: "; cin >>umuri;
	cout <<"Umur Anak 1	: "; cin >>umuran1;
	cout <<"Umur Anak 2	: "; cin >>umuran2;
	cout <<endl;
	
	if(umura <=12){
		beban1 = 15000;
	} else if(umura > 12 && umura <= 20){
		beban1 = 20000;
	} else if (umura > 20){
		beban1 = 30000;
	}
	
	if(umuri <= 12){
		beban2 = 15000;
	} else if(umuri > 12 && umuri <= 20){
		beban2 = 20000;
	} else if (umuri > 20) {
		beban2 = 30000;
	}
	
	if(umuran1 <= 12){
		beban3 = 15000;
	} else if(umuran1 > 12 && umuran1 <= 20){
		beban3 = 20000;
	} else if (umuran1 > 20){
		beban3 = 30000;
	}
	
	if(umuran2 <= 12){
		beban4 = 15000;
	} else if(umuran2 > 12 && umuran2 <= 20){
		beban4 = 20000;
	} else  if (umuran2 > 20){
		beban4 = 30000;
	}
	
	biaya = 30*(beban1+beban2+beban3+beban4);
	
	cout <<"Tagihan satu bulan adalah Rp " <<biaya <<endl;
	
	cin.get();
	return 0;
}
