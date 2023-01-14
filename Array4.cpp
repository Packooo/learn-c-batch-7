#include <iostream>
using namespace std;

int main(){
	//membuat dan mengisi array
	string buah[5] = {"A", "B", "C", "D", "E"};
	
	//mencetak isi array
	for (int i=0; i<=4; i++){
		cout << "Nilai ke-" <<i+1 <<": " <<buah[i] <<endl;
	}
}