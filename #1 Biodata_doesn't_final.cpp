/*hello and welcome to
program of my biodata*/

#include <iostream>
#include <unistd.h>
#include <windows.h>
#include <cstdio>

using namespace std;

//prototype
void dly();
void crdnt(int x,int y);
void space();
void Entrence();
void Loading();
void Greeting();
void FirstBiodata();
void LastBiodata();
void Closing();

//input prototype
int main (){
	system("color e");
	
	Entrence();
	system("cls");
	fflush(stdin);
	
	crdnt(50,15);
	Loading();
	sleep(2);
	system("cls");
	
	crdnt(35,4);
	Greeting();
	sleep(2);
	
	FirstBiodata();
	sleep(2);
	system("cls");
	fflush(stdin);
	
	LastBiodata();
	sleep(2);
	system("cls");
	 
	crdnt(50,15);
	Closing();
	sleep(2);
	system("cls");
	
	crdnt(45,15);
	cout<<"Thanks For seeing my Biodata!";
	sleep(3);
	
	cin.get();	
	return 0;
}

//prototype program
void dly(){
	int i=0;
	while(i < 9999999)i++;
}

void crdnt(int x,int y){
	COORD crd;
	crd.X=x;
	crd.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),crd);	
}

void space(){
	int x=15;
	for (int i=0; i < x; i++)printf("\n");
	
	int y=5;
	for (int i=0; i < y; i++)printf("\t");
}

void Entrence(){
	char Enter;
	do
	{
		
		space();
		string enter="Do You Want To Enter This Biodata? (Y/N) ";
		for (int i=0; i<enter.size(); i++){
			dly();
			cout<<enter[i];
		}
	
		cin >> Enter;
		
		
	}while((Enter=='N')||(Enter=='n'));
}

void Loading(){
	string loading="L O A D I N G ";
	for (int i=0; i <= loading.size(); i++){ 
		
		dly();
		cout<<loading[i];
	}
	for (int i=0; i <= 100; i++){
		crdnt(65,15);
		dly();
		cout<<i<<"%";
	}
}

void Greeting(){
	string greet="||-----Hello, Welcome To My Biodata!-----||";
	for (int i=0; i<=greet.size(); i++){
		dly();
		cout << greet[i];
	}
}

void FirstBiodata(){
	crdnt(35,8);
	string nama="Siapa Namamu ? ";
	for(int i=0; i<nama.size(); i++){
		dly();
		cout<<nama[i];
	}
	
	string inama;//variabelNama
	getline(cin,inama);
	crdnt(35,8);
	cout<<"<     Namamu adalah "<<inama<<"     >"<<endl;
	
	fflush(stdin);
	
	crdnt(35,10);
	string lahir="Kamu Kelahiran ? ";
	for(int i=0; i<lahir.size(); i++){
		dly();
		cout<<lahir[i];
	}
	
	string tempattanggal_lahir;//variabel Lahir
	getline(cin,tempattanggal_lahir);
	crdnt(35,10);
	cout<<"<     Kamu Lahir di "<<tempattanggal_lahir<<"     >"<<endl;
	
	fflush(stdin);
	
	crdnt(35,12);
	string alamat="Dimana Kamu Tinggal ? ";
	for(int i=0; i<alamat.size(); i++){
		dly();
		cout<<alamat[i];
	}
	
	string ialamat;//variabel Alamat
	getline(cin,ialamat);
	crdnt(35,12);
	cout<<"<     Kamu Tinggal di "<<ialamat<<"     >"<<endl;
	
	fflush(stdin);
	
	crdnt(35,14);
	string gender="Apa Gendermu ? (L/P)";
	for(int i=0; i<gender.size(); i++){
		dly();
		cout<<gender[i];
	}
	
	bool laki_laki;
	char igender;//variabel Alamat
	
	cin>>igender;
	
	if (igender == 'L' or igender == 'l')
		laki_laki = true;
	else
		laki_laki = false;
	
	crdnt(35,14);
	if (laki_laki)
		cout<<"<     Kamu Adalah Laki-Laki     >";
	else 
		cout<<"<     Kamu Adalah Perempuan     >";
	
	fflush(stdin);
	
	crdnt(35,16);
	string tb="Berapa Tinggimu ? ";
	for(int i=0; i<tb.size(); i++){
		dly();
		cout<<tb[i];
	}
	
	double tinggibadan;//variabel 
	cin>>tinggibadan;
	crdnt(35,16);
	cout<<"<     Tinggimu "<<tinggibadan<<" cm     >"<<""<<endl;
	
	fflush(stdin);
	
	crdnt(35,18);
	string bb="Berapa Berat Badanmu ? ";
	for(int i=0; i<bb.size(); i++){
		dly();
		cout<<bb[i];
	}
	
	float BeratBadan;//variabel 
	cin>>BeratBadan;
	crdnt(35,18);
	cout<<"<     Berat Badanmu "<<BeratBadan<<" kg     >"<<endl;
	
	fflush(stdin);
	
	crdnt(35,20);
	string golongan_darah_prompt="Apa Golongan Darahmu ? ";
	for(int i=0; i<golongan_darah_prompt.size(); i++){
		dly();
		cout<<golongan_darah_prompt[i];
	}
	
	char Golongan_Darah;//variabel 
	cin>>Golongan_Darah;
	crdnt(35,20);
	cout<<"<     Golongan Darahmu Adalah "<<Golongan_Darah<<"     >"<<endl;
	
	fflush(stdin);
	
	crdnt(35,22);
	string umur_prompt="Berapa umurmu ? ";
	for(int i=0; i<umur_prompt.size(); i++){
		dly();
		cout<<umur_prompt[i];
	}
	
	short umur;//variabel 
	cin>>umur;
	crdnt(35,22);
	cout<<"<     Umurmu adalah "<<umur<<" tahun"<<"     >"<<endl;
}

void LastBiodata(){
	crdnt(35,8);
	string extras="||-----And this my collage & contacs-----||";
	for (int i=0; i<extras.size(); i++){
		dly();
		cout<<extras[i];
	}
	
	fflush(stdin);
	
	crdnt (35,12);
	string Kuliah_prompt="Kuliah Di mana ? ";
	for (int i=0; i<Kuliah_prompt.size(); i++){
		dly();
		cout<<Kuliah_prompt[i];
	}
	
	string kuliah;
	getline(cin, kuliah);
	crdnt (35,12);
	cout<<"<     Kamu Kuliah Di "<<kuliah<<"     >"<<endl;
	
	fflush(stdin);
	
	crdnt (35,14);
	string prodi_prompt="Program studi apa ? ";
	for (int i=0; i<prodi_prompt.size(); i++){
		dly();
		cout<<prodi_prompt[i];
	}
	
	string prodi;
	getline(cin, prodi);
	crdnt (35,14);
	cout<<"<     prodimu adalah "<<prodi<<"     >"<<endl;
	
	fflush(stdin);
	
	crdnt (35,16);
	string Npm_prompt="Berapa Npm mu ? ";
	for (int i=0; i<Npm_prompt.size(); i++){
		dly();
		cout<<Npm_prompt[i];
	}
	
	long long Npm;
	cin>>Npm;
	crdnt (35,16);
	cout<<"<     Npm mu adalah "<<Npm<<"     >"<<endl;
	
	fflush(stdin);
	
	crdnt (35,18);
	string kls_prompt="Informatika Kelas ? ";
	for (int i=0; i<kls_prompt.size(); i++){
		dly();
		cout<<kls_prompt[i];
	}
	
	char kls;
	cin>>kls;
	crdnt (35,18);
	cout<<"<     Kamu Informatika Kelas "<<kls<<"     >"<<endl;
	
	fflush(stdin);
	
	crdnt(35,20);
	string tahunMasuk_prompt="Tahun Berapa Masuk Kuliah ? ";
	for (int i=0; i<tahunMasuk_prompt.size(); i++){
		dly();
		cout<<tahunMasuk_prompt[i];
	}
	
	int TahunMasuk;
	cin>>TahunMasuk;
	crdnt(35,20);
	cout<<"<     Kamu Masuk Kuliah Tahun "<<TahunMasuk<<"     >"<<endl;
	
	crdnt (35,22);
	string nohp_prompt="Berapa Nomer Hpmu ? ";
	for (int i=0; i<nohp_prompt.size(); i++){
		dly();
		cout<<nohp_prompt[i];
	}
	
	long long nohp;
	cin>>nohp;
	crdnt (35,22);
	cout<<"<     Nomer Hp mu Adalah "<<nohp<<"     >"<<endl;
}

void Closing(){
	string loading="C L O S I N G ";
	for (int i=0; i <= loading.size(); i++){ 
		dly();
		cout<<loading[i];
	}
	for (int i=0; i <= 100; i++){
		crdnt(65,15);
		dly();
		cout<<i<<"%";
	}
}
