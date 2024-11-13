#include <iostream>
using namespace std;

int main() {
	string islem;
	int a,b;
	cout << "Hesap Makinesi Programi"<< endl;


		cout << "1. Ýslem : Toplama"<< endl;
		cout << "2. Ýslem : Cikarma"<< endl;
		cout << "3. Ýslem : Carpma"<< endl;
		cout << "4. Ýslem : Bolme"<< endl;

		cout << "Ýslemi Girin:";
		cin >> islem;


		if (islem == "1") {
			cout << "a"<< endl;
			cin >> a;
			cout << "b"<< endl;
			cin >> b;
		}
		
		return 0;}
