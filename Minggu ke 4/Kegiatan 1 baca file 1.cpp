#include<iostream>
#include<fstream>
using namespace std;
int main(){
	int data;
	ifstream file("data_input.txt");
	if(file){
		cout<<"file sukses dibuka!"<<endl;
		file>>data;
		file.close();
		cout<<"data yang dibaca dari file:"<<data;
		return 0;
	}else{
		cout<<"file gagal dibuka!"<<endl;
		return 1;
	}
}
