#include<iostream>
using namespace std;

int main(){
    int nilai = 0;
    cout<<"Masukan sebuah bilangan bulat:";
    cin>>nilai;
    
    if (nilai < 0) {
        cout<<"negatif ";
    } 
    else if (nilai == 0) {
        cout<<"nol"<<endl;
        return 0;
    }
    else {
        cout<<"positif ";
    }
    
    if (nilai % 2 == 0){
        cout<<"genap"<<endl;
    }
    else {
        cout<<"ganjil"<<endl;
    }
    
    return 0;
}
