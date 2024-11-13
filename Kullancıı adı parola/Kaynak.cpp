#include <iostream>
using namespace std;

int main() {

	
		string kul1 = "misirkafamustafa";
		string sif1 = "2794426223mM";

		string kul2;
		string sif2;

		cout << "Kullanici Adi Giriniz:" << endl;
		cin >> kul2;
		cout << "Sifre Giriniz:" << endl;
		cin >> sif2;

		if (kul2 == sif2) {

			cout << "Sifre ve Kullanici Adi Ayni Olamaz!!" << endl;

		}

		else if (kul1 == kul2 && sif1 == sif2) {

			cout << "Giris Yapildi:" << endl;

		}

		else if (kul1 == kul2 && sif1 != sif2) {
			cout << "Sifre Hatali !" << endl;

		
		}
		else if (kul1 != kul2 && sif1 == sif2) {

			cout << "Kullanici Adi Hatali !" << endl;
		}










	return 0;
}