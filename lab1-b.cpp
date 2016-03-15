#include <iostream>
using namespace std;

int main ()
{
	int num;
	cout << "請輸入一個正整數 : " << endl;
	cin >> num;
	while (num<1||num%1!=0)
		{
			cout << "輸入的非正整數，請再輸入一次" << endl;
			cin >> num;
		}
	cout << "結果為 : " << num << "  ";
	while (num!=1)
	{
		if (num%2==1)
			num = 3*num + 1;
		else
			num = num/2;
			cout << num << "  ";
	}
return 0;
}

