#include<iostream>
using namespace std ;

int main (){
	int a, b;

// Nhap hai so nguy�n//
    cout << "Nhap so nguy�n thu nhat: ";
    cin >> a;
    cout << "Nhap so nguy�n thu hai: ";
    cin >> b;
//tinh tong v� trung b�nh//
  int tong=a+b;  
  float trung_binh= tong / 2  ;
// in man hinh //
  cout << "tong:"<<tong  << endl;
  cout <<"trung binh:"<< trung_binh<< endl;
 
return 0;  
}
