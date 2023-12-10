#include<iostream>
using namespace std;
void sequence(char* a, int n)
{
	int b = strlen(a);
	for (int i = 0; i < b - 1; i++)
	{
		for (int j = 0; j < b - 1 - i; j++)
		{
			if (a[j] > a[j + 1])
			{
				int t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
		}
		}
	}
	for (int i = 0; i < b; i++)
	{

		cout << *(a+i)  ;
	}
}
int main()
{
	int n=999;
	/*cout << "请输入数组元素个数：";
	cin >> n;*/
	char* a = new char[n];
	cout << "请输入数组：";
	cin.getline(a,n);
	/*for (int i = 0; i < n; i++)
	{

		cin >> *(a + i);
	}*/
	sequence(a, n);


	delete[]a;




















	system("pause");
	return 0;


}