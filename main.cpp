#include <iostream>
using namespace std; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
double kurAltin = 792.81;
double kur = 13.88;
double dolarSonuc,altinSonuc;
int main() {
	while (true) {
    cout<<"altin icin 1 dolar icin 2"<<endl;
	int anahtar;
	cin>>anahtar;
	switch (anahtar) {
	case 1 :
	
    double altinMiktari;
    cout<<"altin miktarinizi giriniz"<<endl;
    cin>>altinMiktari;
   altinSonuc =  altinMiktari * kurAltin;
    cout<<altinSonuc;
    cout<<"tl"<<endl;
    break;
    
	case 2 :
	
    double dolarMiktari;
    cout<<"dolar miktarinizi giriniz"<<endl;
    cin>>dolarMiktari;
    dolarSonuc =  dolarMiktari * kur;
    cout<<dolarSonuc;
    cout<<"tl"<<endl;
	break;	
	
	default:
	cout<<"hatali giris"<<endl;
	
	break;
	}
	
    
}
    
}
