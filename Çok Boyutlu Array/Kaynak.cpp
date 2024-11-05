#include <iostream>
using namespace std;
int main() {
	int i,j;
	int matris[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			cout << matris[i][j] << " ";

//			cout << "I ve J " << i << ":" << j << endl;
		}
		cout << endl;
	}
	







	return 0;
}