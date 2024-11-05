#include <iostream>

using namespace std;

class dikdortgen
{
public:
	int yukseklik;
	int genislik;
	int alan;

	void VeriGir()
	{
		cout << "Yukseklik Gir:";
		cin >> yukseklik;
			cout << "Genislik Gir:";
			cin >> genislik;
	
	}

	void alanbul()
	{

		alan = genislik * yukseklik;
		
		cout << "Diktorgenin Alani: " << alan << endl;

	}

};

int main() {

	class dikdortgen d1;
	
	d1.VeriGir();
	d1.alanbul();


	return 0;
}