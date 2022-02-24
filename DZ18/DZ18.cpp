#include<iostream>
using namespace std;

inline int average(int n, int m);
int maxnum(int num1, int num2, int num3);
float maxnum(float num1, float num2, float num3);
double maxnum(double num1, double num2, double num3);
template <typename T> T maxarr(T arr[], int length);

int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;

	//������ 1.
	cout << "������ 1.\n";
	cout << "������� ������ �����: ";
	cin >> n;
	cout << "������� ������ �����: ";
	cin >> m;
	cout << average(n, m) << endl;
	cout << average(10, 30) << endl;

	//������ 2.
	cout << "\n������ 2.\n";
	cout << maxnum(6, 9, 3) << endl;
	cout << maxnum(6.3, 9.4, 3.2) << endl;
	cout << maxnum(3.144896547, 6.321478569, 9.3154854659) << endl;

	//������ 3.
	cout << "\n������ 3.\n";
	int z3[5] = { 5, 6, 7, 2, 9 };
	cout << "����������� ������:\n[";
	for (int i = 0; i < 5; i++)
		cout << z3[i]<<", ";
	cout << "\b\b]\n";
	cout << maxarr(z3, 5) << endl;

	return 0;
}
//������ 1.
inline int average(int n, int m) {
	int sum = 0;
	sum = (n + m) / 2;
	return sum;
}
//������ 2.
int maxnum(int num1, int num2, int num3) {
	if (num1 > num2 && num1 > num3)
		return num1;
	if (num2 > num1 && num2 > num3)
		return num2;
	else
		return num3;
}

float maxnum(float num1, float num2, float num3) {
	if (num1 > num2 && num1 > num3)
		return num1;
	if (num2 > num1 && num2 > num3)
		return num2;
	else
		return num3;
}

double maxnum(double num1, double num2, double num3) {
	if (num1 > num2 && num1 > num3)
		return num1;
	if (num2 > num1 && num2 > num3)
		return num2;
	else
		return num3;
}

//������ 3.
template <typename T> T maxarr(T arr[], int length) {
	T max = arr[0];
	for (int i = 0; i < length; i++){
		if (arr[i] > max)
			T max = arr[i];
	}
	return max;
}

