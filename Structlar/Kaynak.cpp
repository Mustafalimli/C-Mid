#include <iostream>
using namespace std;

struct Insan
{
	char ad[100];
	char soyad[100];
	int TC;
	int YAS;

};

Insan VeriGir() {
	Insan ogr;

	cout << "Ad:";
	cin >> ogr.ad;

	cout << endl;
	
	cout << "Soyad:";
	cin >> ogr.soyad;
	
	cout << endl;

	cout << "TC:";
	cin >> ogr.TC;

	cout << endl;

	cout << "Yas:";
	cin >> ogr.YAS;

	cout << endl;
	return ogr;
	}

int main() {

	Insan ogr1 = VeriGir();




	return 0;
}
