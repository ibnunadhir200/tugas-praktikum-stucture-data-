#include <iostream>
#include<string.h>
using namespace std;

int main() 
{
	do
	{
	system("cls");
	cout << "Pratikum mengubah teks \n\n";
	system("pause");
	system("cls");
	cout << "1. Tampilan huruf besar \n2.Tampilan huruf kecil \n\nPilihan: ";
	unsigned short int Pilih;
	cin >> Pilih;
		
		if (Pilih == 1) 
		{
			char teks[100];
			system("cls");
			cout << "Masukkan sembarang teks \t : ";
			cin >> teks;
			gets(teks);
			strupr(teks); 
			cout <<"\n\ntampilan huruf besar: " << endl << "teks\t: " << teks ;			
			cout << endl;
			system("pause");
		}
		else if (Pilih == 2) 
		{
			char teks[100];
			system("cls");
			cout << "Masukkan teks \t: " ; gets(teks) ;
			cin >> teks;
			strlwr(teks);
			cout << "\n\ntampilan huruf kecil: " << endl << "teks pertama\t: " ;
			cout << endl;
			gets;
			system("pause");
		}

		system("cls");
		int Ulangi;
		ulang:
		cout << "Keluar Program? \n1. Iya \n2. Tidak \n\nPilihan: ";
		cin >> Ulangi;
		switch (Ulangi)
		{
			case 1:
				return 0;
			case 2:
				return 0;
			default:
				cout << "Anda Salah Memasukkan Pilihan \n\n";
				goto ulang;
		} 
			
	} while (true);
}
