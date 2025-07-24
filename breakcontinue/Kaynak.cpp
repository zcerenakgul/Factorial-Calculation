# include <iostream>
using namespace std;

int main() {
	cout << "lutfen faktoriyeli alinacak sayiyi giriniz: " << endl;
	int sayi;
	cin >> sayi;
	if (sayi > 10) {

		cout << " bu faktoriyel hesabi cok buyuk hesaplanmasi zor olabilir" << endl;

	}
	else {
		int faktoriyel = 1;

		for (int i = 1; i <= sayi; i++) {
			faktoriyel *= i;


		}
		cout << "sayinin faktoriyeli" << " " << faktoriyel << endl;
	}

}
