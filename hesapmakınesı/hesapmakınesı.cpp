

#include <iostream>

using namespace std;

int main()
{
	int sayi1, sayi2;
	cout << "iki deger giriniz" << endl;
	cin >> sayi1 >> sayi2;

	int toplam;
	toplam = sayi1 + sayi2;

	int fark;
	fark = sayi1 - sayi2;
	
	int carpim;
	carpim = sayi1 * sayi2;

	int bolum;
	bolum = sayi1 / sayi2;

	cout << sayi1 << "+" << sayi2 << "=" << toplam << endl;
	cout << sayi1 << "-" << sayi2 << "=" << fark << endl;
	cout << sayi1 << "*" << sayi2 << "=" << carpim << endl;
	cout << sayi1 << "/" << sayi2 << "=" << bolum << endl;




	return 0;
}

