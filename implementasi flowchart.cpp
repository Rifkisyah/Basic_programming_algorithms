#include <iostream>
#include <stdlib.h>
using namespace std;

main(){
	int no,jabatan,status,tunjangan,jumlahlembur,jumlahuanglembur,gaji,total;
	string nama;
	
	cout<<"no : ";
	cin>>no ;
	cout<<"nama : ";
	cin>>nama ;
	cout<<"1)operator\n2)manajer\npilih antara 1/2 : ";
	cin>>jabatan ;
	
	if (jabatan ==1){
		gaji = 2000000;
	}else if(jabatan == 2){
		gaji = 3500000;
	}else exit(0);
	
	cout<<"status\n1)lajang\n2)nikah\n3)dah ada anak : ";
	cin>>status ;
	
	if (status ==1){
		tunjangan = 0.05 * gaji;
	}else if(status == 2){
		tunjangan = 0.10 * gaji;
	}else if(status == 3){
		tunjangan = 0.15 * gaji;
	}
	else exit(0);
	
	cout<<"jumlah jam lembur : ";
	cin>>jumlahlembur ;
	
	if (jumlahlembur <= 20){
		jumlahuanglembur = 0.025 * gaji * jumlahlembur;
	}else{
		jumlahlembur = 20;
		jumlahuanglembur = 0.025 * gaji * jumlahlembur;
	}
	cout << "no : "<<no<<endl;
	cout << "nama : "<< nama<<endl;
	cout << "jabatan : "<<jabatan<<endl;
	cout << "status : "<<status<<endl;
	cout << "gaji : "<<gaji<<endl;
	cout << "tunjangan : "<<tunjangan<<endl;
	cout << "jumlah uang lembur : "<<jumlahuanglembur<<endl;
	
	total = gaji+tunjangan+jumlahuanglembur;
	
	cout << "total : "<<total;
}
