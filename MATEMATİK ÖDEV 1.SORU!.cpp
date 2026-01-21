#include <iostream>
#include <cmath>

using namespace std;

int main() {
	
	double a, b, c;
	double delta, x1, x2;
	
	cout << "Ikinci Dereceden Denklem Koku Bulma Programi " << endl;
	cout << "Denklem: ax^2 + bx + c = 0" << endl;
	cout << "---------------------------------------------------" << endl;
	cout << "a katsayisini giriniz: ";
	cin >> a;
	
	while ( a ==0 ) {
		cout << "Hata: a katsayisi 0 olamaz! (0 olursa 2.dereceden denklem olmaz) " << endl;
		cout << "Lutfen a degerini tekrar giriniz: ";
		cin>> a;	
	}
	cout << " b katsayisi giriniz: ";
	cin >> b;
	
	 cout << "c katsayisini giriniz: ";
	 cin >> c;
	 
	 delta = (b*b) -  ( 4*a*c);
	 
	 cout << endl << "Diskriminant (Delta): " << delta << endl;
	 
	 if (delta < 0) {
	 	cout << "Sonuc: Delta < 0 oldugu icin denklemin gercek koku yoktur." << endl;
	 }
	 else if (delta ==0 ) {
	 	x1 = -b / ( 2*a );
	 	cout << "Sonuc: Delta = 0 oldugu icin denklemin gercek koku vardir." << endl;
	 	cout << " kok: x = " << x1 << endl;
	 }
	 else {
	 	x1 = (-b + sqrt(delta)) / (2*a);
	 	x2 = (-b -sqrt(delta)) / (2*a);
	 	
	 	cout << "Sonuc: Delta > 0 oldugu icin denklemin iki farkli gercek koku vardir." << endl;
	 	cout << " 1. kok: x1 = " << x1 << endl;
	 	cout << " 2. kok: x2 = " << x2 << endl;
	 }
	 return 0;
	 
	 

}
