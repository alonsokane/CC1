#include <iostream>
#include <string>
#include <vector>

using namespace std;


int main() {


	//int x, contA = 0, contD = 0;
	//cout << "Cant Jue" << endl;
	//cin >> x;
	//string jue;
	//cin >> jue;
	//if (jue.size() != x) 
	//	cout << "no coinciden los tamanos" << endl;
	//else {
	//	for (int i = 0; i < 4; i++) {
	//		if (jue[i] == 'A')
	//			contA++;
	//		else if (jue[i] == 'D')
	//			contD++;
	//		else {
	//			cout << "Input Invalido" << endl;
	//			break;
	//		}
	//	}
	//}
	//cout << contA << " " << contD << endl;

	//if (contA == contD)
	//	cout << "friendship" << endl;
	//else if (contA > contD)
	//	cout << "Anton" << endl;
	//else
	//	cout << "Danik" << endl;


	//int n;
	//cin >> n;
	//for (int i = 1; i <= n-1; i++) {
	//	if (!(i % 2))
	//		cout << "I hate that ";
	//	else
	//		cout << "I love that ";
	//}
	//if (!(n % 2))
	//	cout << "I hate it" << endl;
	//else
	//	cout << "I love it" << endl;


	//int n, cont = 0,i=1,cubNiv=0,cubTota=0;
	//cin >> n;
	//if (n <1 || n>10000)
	//	cout << "no valido" << endl;
	//else {
	//while (cubTota < n) {
	//	cubNiv += i;
	//	cubTota += cubNiv;
	//	i++;
	//	cont++;
	//}
	//if(cubTota>n)
	//	cont--;
	//cout << "Levels: " << cont << endl;
	//}



	int n;
	cin >> n;
	int arr[100];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];

	}



	system("PAUSE");
}
