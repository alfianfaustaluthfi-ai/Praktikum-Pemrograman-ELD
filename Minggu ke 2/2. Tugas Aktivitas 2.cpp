#include<iostream>
using namespace std;

int main(){
	int nilai = 0;
	cout<<"Masukan sebuah bilangan bulat positif:";
	cin>>nilai;
	
	if (nilai < 1) {
		cout<<"user salah input"<<endl;
		} 
	else if (nilai%2 != 0 && nilai !=2) {
		cout<<"mungkin prima"<<endl;
		}
	else if (nilai==2){
		cout<<"2 adalah bilangan prima"<<endl;
	}
	else{
		cout<<nilai<<"bukan prima"<<endl;
	}
	return 0;
}
