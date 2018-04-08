#include<iostream>
using namespace std;
//deklarasi
int main(){
int angka,jumlah,total;
char nama[25];
char email[40];
char alamat[60];

//input
cout<<"==================================="<<endl;
cout<<"Software Pembelian Tiket Kereta Api"<<endl;
cout<<"==================================="<<endl;
cout<<"==================================="<<endl;
cout<<"Data Pemesan"<<endl;
cout<<"==================================="<<endl;
cout<<"Masukan Nama Pemesan :"<<endl;
cin>>nama;
cout<<"\nMasukan Email :"<<endl;
cin>>email;
cout<<"\nMasukan alamat:"<<endl;
cin>>alamat;
cout<<"************************************"<<endl;
cout<<"\nPilih Kelas Kereta"<<endl;
cout<<"1. Ekonomi"<<endl;
cout<<"2. Bisnis"<<endl;
cout<<"3. Eksekutif"<<endl;
cout<<"Masukan Nomor Kelas Kereta"<<endl;
cin>>angka;

//proses
switch(angka){
case 1:
		cout<<"Ekonomi harga 80.000"<<endl;
		cout<<"masukan jumlah kursi yang di pesan :"<<endl;
		cin >> jumlah;
		total = jumlah * 80000;
		cout<<"Total Harga :"<<endl;
		cout <<total;
		cout<<"\n\n==================================="<<endl;
		cout<<"Data yang sudah di pesan:"<<endl;
		cout<<"==================================="<<endl;
		cout<<"\nNama Pemesan :"<<endl;
		cout<<nama;
		cout<<"\nEmail Pemesan :"<<endl;
		cout<<email;
		cout<<"\nAlamat Pemesan :"<<endl;
		cout<<alamat;
		cout<<"\nJumlah kursi yang dipesan :"<<endl;
		cout<<jumlah;
		cout<<"\nkelas kereta yang dipesan :"<<endl;
		cout<<"Ekonomi"<<endl;
		break;
	
case 2:
		cout<<"Bisnis Harga Rp.150.000"<<endl;
		cout<<"masukan jumlah kursi yang di pesan :"<<endl;
		cin >> jumlah;
		total =jumlah * 150000;
		cout<<"Total Harga :"<<endl;
		cout <<total;
		cout<<"\n\n==================================="<<endl;
		cout<<"Data yang sudah di pesan:"<<endl;
		cout<<"==================================="<<endl;
		cout<<"\nNama Pemesan :"<<endl;
		cout<<nama;
		cout<<"\nEmail Pemesan :"<<endl;
		cout<<email;
		cout<<"\nAlamat Pemesan :"<<endl;
		cout<<alamat;
		cout<<"\nJumlah kursi yang dipesan :"<<endl;
		cout<<jumlah;
		cout<<"\nkelas kereta yang dipesan :"<<endl;
		cout<<"Bisnis"<<endl;
		break;
	
case 3:
		cout<<"Eksekutif Harga Rp.200.000"<<endl;
		cout<<"masukan jumlah kursi yang di pesan :"<<endl;
		cin>>jumlah;
		total=jumlah*200000;
		cout<<"Total Harga:"<<endl;
		cout<<total;
		cout<<"\n\n==================================="<<endl;
		cout<<"Data yang sudah di pesan:"<<endl;
		cout<<"==================================="<<endl;
		cout<<"\nNama Pemesan :"<<endl;
		cout<<nama;
		cout<<"\nEmail Pemesan :"<<endl;
		cout<<email;
		cout<<"\nAlamat Pemesan :"<<endl;
		cout<<alamat;
		cout<<"\nJumlah kursi yang dipesan :"<<endl;
		cout<<jumlah;
		cout<<"\nkelas kereta yang dipesan :"<<endl;
		cout<<"Eksekutif"<<endl;
		cout<<"\n==================================="<<endl;
		
		break;
	
default:
		cout<<"error"<<endl;
		break;
	
}

return 0;
system ("paused");
}
