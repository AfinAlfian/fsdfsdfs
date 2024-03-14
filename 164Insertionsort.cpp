#include <iostream>							
using namespace std;

int arr[20];															//Membuat Array dengan panjang data 20
int n;																	//Membuat Variabel inputan n

void input() {															//Prosedur untuk input
	while (true) {
		cout << "Masukkan Jumlah Data pada Array : ";					//Membuat inputan jumlah elemen array
		cin >> n;														//Memanggil variabel inputan n

		if (n <= 20)													//Membuat kondisi n tidak lebih dari 20
			break;
		else {
			cout << "\nArray yang anda masukkan maksimal 20 elemen.\n";	//Menampilkan Pesan jika data lebih dari 20
		}
	}
	cout << endl;														//Membuat jarak per baris program
	cout << "=====================" << endl;							//Membuat tampilan susunan data elemen array
	cout << "Masukkan Elemen Array" << endl;
	cout << "=====================" << endl;

	for (int i = 0; i < n; i++) {										//Looping dengan i dimulai dari 0 hingga n-1
		cout << "Data ke-" << (i + 1) << ": ";							//Output ke layar
		cin >> arr[i];													//Input dari pengguna
	}
}

