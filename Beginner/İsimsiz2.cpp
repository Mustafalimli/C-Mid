#include <iostream>
using namespace std;

int main() {
	string islem;
	int a,b;
	cout << "Hesap Makinesi Programi"<< endl;


		cout << "1. �slem : Toplama"<< endl;
		cout << "2. �slem : Cikarma"<< endl;
		cout << "3. �slem : Carpma"<< endl;
		cout << "4. �slem : Bolme"<< endl;

		cout << "�slemi Girin:";
		cin >> islem;


		if (islem == "1") {
			cout << "a"<< endl;
			cin >> a;
			cout << "b"<< endl;
			cin >> b;
		}
		
		return 0;}
