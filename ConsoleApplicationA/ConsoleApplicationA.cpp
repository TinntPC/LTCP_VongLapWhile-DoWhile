#include <iostream>
using namespace std;
int	main() {
	int sodau, socuoi;
	cout << "Nhap so dau:";
	cin >> sodau;
	cout << "Nhap so cuoi:";
	cin >> socuoi;	
	cout << " VONG LAP WHILE\n";
	while (sodau <= socuoi) {
		cout << sodau << " ";
		sodau++;
	}
	cout << " VONG LAP DO WHILE\n";
	do {
		cout << sodau << " ";
		sodau++;
	} while (sodau <= socuoi);

	return 0;
}