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
		cout << "숫자를 입력해주세요: ";
		cin >> numbers[i]; //for문을 통해서 각 방 번호(인덱스)를 부여하고 숫자를 입력 받을 수 있다. 
	}
	
	cout << endl;
	cout << "------ 결과 -------" << endl;
	cout << "홀수 : ";
	for (int i = 0; i < size; i++)
	{
		if (numbers[i] % 2 != 0) 
		{
			cout << setw(3) << numbers[i] ;//만약 받은 배열이 홀수일 경우에  출력을 해낸다. 
			counts = ++counts; //0이던 counts를 후위로 증가시킨다. 
		}
	}
	cout << endl;
	cout << "홀수는 총 " << counts << "개 입니다." << endl; //counts를 출력해낸다. 
	cout << endl;
	cout << "짝수 : ";
	for (int i = 0; i < size; i++)
	{
		if (numbers[i] % 2 == 0) //만약 받은 배열이 짝수 일 경우에 출력을 한다. 
		{
			cout << setw(3) << numbers[i];
			counts2 = ++counts2; //출력이 될때 counts2를 후위로 증가시킨다. 
		}
	}
	cout << endl;
	cout << "짝수는 총 " << counts2 << "개 입니다. " << endl;
}