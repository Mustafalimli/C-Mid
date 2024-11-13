
#include <iostream>
using namespace std;

int main() {
	string islem;
	int a,b;
	cout << "Hesap Makinesi Programi"<< endl;


		cout << "1. İslem : Toplama"<< endl;
		cout << "2. İslem : Cikarma"<< endl;
		cout << "3. İslem : Carpma"<< endl;
		cout << "4. İslem : Bolme"<< endl;

		cout << "İslemi Girin:";
		cin >> islem;


		if (islem == "1") {
			cout << "a"<< endl;
			cin >> a;
			cout << "b"<< endl;
			cin >> b;
			cin << "Toplam: "<< a+b << endl ;
		}

		else if (islem == "2"){
				cout << "a"<< endl;
							cin >> "a";
							cout << "b"<< endl;
							cin >> "b";
							cin << "Cıkarma: "<< a-b << endl;
				}

		else if (islem == "3" ) {
				cout << "a"<< endl;
							cin >> a;
							cout << "b"<< endl;
							cin >> b;
							cin << "Carpma: "<< a*b << endl;
				}

		else if (islem ==  "4") {
				cout << "a"<< endl;
							cin >> a;
							cout << "b"<< endl;
							cin >> b;
							cin << "Bolme: "<< a/b << endl;
				}

		return 0;
}

