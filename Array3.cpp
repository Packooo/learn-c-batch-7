#include <iostream>
using namespace std;

int main(){
	//membuat dan mengisi array
	int nilai[5] = {32, 42, 76, 32, 57};
	
	//mencetak isi array
	for (int i=0; i<=4; i++){
		cout << "Nilai ke-" <<i+1 <<": " <<nilai[i] <<endl;
	}
}