#include <iostream>
using namespace std;
int main(){
	float angka1,angka2,hasil;
	char operasi;
	cout<<endl<<"**Selamat Datang di Kalkulator Sederhana** \n\nKeterangan : \n\n-Tambah(+) \n-Kurang(-) \n-Kali(*) \n-Bagi(/)" <<endl<<endl<<endl;
	
	cout<<"Masukkan Angka Pertama : ";
	cin>>angka1;
	cout<<"Pilih Operator : ";
	cin>>operasi;
	cout<<"Masukkan Angka Kedua : ";
	cin>>angka2;
	cout<<endl<<"Hasil Perhitungan : ";
	cout<<angka1<<operasi<<angka2;
		
	if (operasi == '+') {
		hasil = angka1 + angka2;
		cout<<"=" <<hasil<<endl;
	} else if (operasi == '-') {
		hasil = angka1 - angka2;
		cout<<"=" <<hasil<<endl;
	} else if (operasi == '*') {
		hasil = angka1 * angka2;
		cout<<"=" <<hasil<<endl;
	} else if (operasi == '/') {
		hasil = angka1 / angka2;
		cout<<"=" <<hasil<<endl;
	} else {
		cout<<endl<<"---Operatornya salah nih---" ;
	}
		cout<<"=" <<hasil<<endl;
	cout<<endl<<endl;
	
	cout<<"--Terimakasih--";
	
	return 1;
	
}
