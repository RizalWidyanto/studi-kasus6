#include "../base.h"

void BaseProject::input(){
	cout<<"======================================="<<endl;
	cout<<"STUDI KASUS 6 : Penginputan SKS "<<endl;
	cout<<"======================================="<<endl;
	cout<<"Masukkan Banyak Mata Kuliah : ";cin>>bykA;
	cout<<"---------------------------------------"<<endl;
	for(i=0; i<bykA; i++){  
		cout<<"Masukkan Mata kuliah " <<i+1<<" : ";
		cin.ignore();  
		getline(cin, a[i]);	
		
		cout<<"Masukkan SKS : ";
		cin>>b[i];
		cout<<"---------------------------------------"<<endl;
	}
	cout<<"Masukkan Nama : ";
	cin.ignore();getline(cin, nama);
	
	cout<<"Masukkan NIM  : ";cin>>nim;
	cout<<"======================================="<<endl;
}

void BaseProject::output(){
	cout<<"======================================="<<endl;
	cout<<"Nama	: "<<nama<<endl;
	cout<<"NIM 	: "<<nim<<endl;
	cout<<"---------------------------------------"<<endl;
	cout<<"      Mata Kuliah         SKS"<<endl;
	cout<<"---------------------------------------"<<endl;
	for(i=0;i<bykA;i++){
		cout<<" ";
		cout<<setiosflags(ios::left)<<setw(25)<<a[i]<<" ";
		cout<<setiosflags(ios::left)<<setw(2)<<b[i]<<endl;
	}
	cout<<"---------------------------------------"<<endl;
	cout<<"              Jumlah SKS : "<<jumlah<<endl;
	cout<<"        Total Pembayaran : "<<total<<endl;
	cout<<"======================================="<<endl;
}

int main() {
  BaseProject base;
  base.input();
  base.output();
  return 0;
}

