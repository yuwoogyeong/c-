#include<iostream>
#include <iomanip>
using namespace std;

int main()
{
	const int size = 5; 
	int numbers[size];
	int counts, counts2;
	counts = 0;
	counts2 = 0;

	for (int i = 0; i < size; i++) 
	{
		cout << "���ڸ� �Է����ּ���: ";
		cin >> numbers[i]; //for���� ���ؼ� �� �� ��ȣ(�ε���)�� �ο��ϰ� ���ڸ� �Է� ���� �� �ִ�. 
	}
	
	cout << endl;
	cout << "------ ��� -------" << endl;
	cout << "Ȧ�� : ";
	for (int i = 0; i < size; i++)
	{
		if (numbers[i] % 2 != 0) 
		{
			cout << setw(3) << numbers[i] ;//���� ���� �迭�� Ȧ���� ��쿡  ����� �س���. 
			counts = ++counts; //0�̴� counts�� ������ ������Ų��. 
		}
	}
	cout << endl;
	cout << "Ȧ���� �� " << counts << "�� �Դϴ�." << endl; //counts�� ����س���. 
	cout << endl;
	cout << "¦�� : ";
	for (int i = 0; i < size; i++)
	{
		if (numbers[i] % 2 == 0) //���� ���� �迭�� ¦�� �� ��쿡 ����� �Ѵ�. 
		{
			cout << setw(3) << numbers[i];
			counts2 = ++counts2; //����� �ɶ� counts2�� ������ ������Ų��. 
		}
	}
	cout << endl;
	cout << "¦���� �� " << counts2 << "�� �Դϴ�. " << endl;
}