/*
2. ü�߰� Ű�� �Է¹޾Ƽ� ü���� ������ ���ϴ� ���α׷��� ����� ������.
*/

#include <iostream>

using namespace std;

int main()
{
	float weight;
	float height;

	cout << "ü�� �Է� (kg) : ";
	cin >> weight;
	cout << endl;

	cout << "Ű �Է� (m) : ";
	cin >> height;
	cout << endl;

	float BMI = weight / (height * height);

	cout << "BMI :  " << BMI;
}