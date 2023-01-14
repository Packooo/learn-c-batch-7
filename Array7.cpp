#include <iostream>
using namespace std;

int main(){
	int i, n, jumlah = 0, terkecil, terbesar;
	cout << "ïnput banyak nilai = ";
	cin >> n;
	int nilai[n]; //membuat array
	for(i=0; i<n; i++){
		cout <<"Input nilai ke " <<i+1 <<" = ";
		cin >> nilai[i];
		jumlah = jumlah + nilai[i];
		if (i==0){
			terkecil = nilai[0];
			terbesar = nilai[0];
		}
		if (nilai[i]<terkecil){
			terkecil = nilai[i];
		}
		if (nilai[i]>terbesar){
			terbesar = nilai[i];
		}
	}
	cout <<"\nData Nilai";
	for(i=0; i<n; i++){
		cout <<" " <<nilai[i];
	}
	
	cout <<"\nJumlah Nilainya Adalah = " <<jumlah;
	cout <<"\nNilai Terkecilnya Adalah = " <<terkecil;
	cout <<"\nNilai Terbesarnya adalah = " <<terbesar;
}