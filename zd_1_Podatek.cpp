#include <iostream>
using namespace std;

//	Calculate sum of n numbers

int main() {
	int a, x, p = 0;
	cout << endl;
	cout << "Podaj cene netto "<< endl;
    cin >> a;
    cout << "Podaj liczbe zakupionych sztuk towaru "<< endl;
	cin >> x ;
    cout << "Podaj wysokosc podatku VAT "<< endl;
    cin  >> p;

	cout << endl;
	cout << "Wartosc towaru netto  = " << a*x << endl;
	cout << "Wartosc towaru brutto  = " << a*x+(a*x*(float)p/100) << endl;
	cout << "Podatek VAT = " << (a*x*(float)p/100) << endl;
	cout << endl;
	return 0;
}
