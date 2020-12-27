#include <iostream>
using namespace std;
int main(){
	int maks,min,n,i;
	int selmaks;
	
	float jumlah,rata;
	cout << "Masukkan banyak angka: "; cin >>n;
	
	
	int angka[n],sel[n];

	for (i=0; i<n; i ++) {
    cout << "Angka ke-" <<(i+1) <<": "; cin >> angka[i];
    jumlah += angka[i];
    }
    for(i=0; i<n-1; i++){
        sel[i] = angka[i+1] - angka[i];
        if(sel[i] < 0){
            sel[i] = -sel[i];
        }
    }
    selmaks = sel[0];
    maks = angka[0];
    min = angka[0];

    rata = jumlah/n;
    
    
    for(i=0; i<n; i++) {
		if (angka[i] > maks)  {
			maks = angka[i];
		} else if (angka[i] < min) {
			min = angka[i];
		} else {
			}
	}
	

	
	cout <<endl;
	cout <<endl;
	
	cout <<"_____Hasil_____" <<endl;
	cout <<"Deret\t\t: "  ;
	for(i = 0; i < n; i++) {
		cout <<angka[i]<<" ";
	}
	cout << "\nMaksimum\t: " << maks;
	cout << "\nMinimum\t\t: " << min;
	 for(i=0; i<n-1; i++){
        if(sel[i] > selmaks){
            selmaks = sel[i];
        }
    }
	cout<<"\nRata-rata\t: "<<rata;
	cout<<"\nSelisih Max\t: "<<selmaks;
}

