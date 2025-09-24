#include<iostream>
using namespace std;

int main(){
int nilai;
cout<<"Masukan sebuah bilangan bulat:";
cin>>nilai;
	if (nilai >= 80 && nilai <= 100){
	cout<<"Nilai A"<<endl;
	}
	else if(nilai < 80 && nilai >= 60){
	cout<<"Nilai B"<<endl;
	}
	else if(nilai < 60 && nilai >= 40){
	cout<<"Nilai C"<<endl;
	}
	else if(nilai < 40 && nilai >= 20){
	cout<<"Nilai D"<<endl;
	}
	else if(nilai < 20){
		cout<<"Nilai E"<<endl;
	}
	else{
		cout<<"Tidak lulus atau nilai tidak valid"<<endl;
	}
return 0;
}
