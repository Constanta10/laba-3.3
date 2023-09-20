#include <iostream>
#include <cmath>

using namespace std;
const double EXP = 2.7118281828459045;

int main() {
	setlocale(LC_ALL, "ru");
	int b,a = 2;
	double x;
	cout << "введите х:";
	cin >> x;
	if (x < 2) {
		double y = 1 + sqrt(a + abs(x));
		cout << "функция равна:" << y << endl;
	}
	if (x >= -1 && x <= 15) {
		double y = 2 + pow(a*x,2)+pow(EXP,2);
		cout << "функция равна:" << y << endl;
	}
	if (x >= 15) {
		double y = x*sqrt(1+ b*log(a*a*x));
		cout << "функция равна:" << y << endl;
	}
	return 0;
}