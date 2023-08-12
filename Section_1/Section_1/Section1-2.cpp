/*
2. 체중과 키를 입력받아서 체질량 지수를 구하는 프로그램을 만들어 보세요.
*/

#include <iostream>

using namespace std;

int main()
{
	float weight;
	float height;

	cout << "체중 입력 (kg) : ";
	cin >> weight;
	cout << endl;

	cout << "키 입력 (m) : ";
	cin >> height;
	cout << endl;

	float BMI = weight / (height * height);

	cout << "BMI :  " << BMI;
}