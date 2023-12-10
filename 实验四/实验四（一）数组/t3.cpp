
#include<iostream>
using namespace std;

int main()
{
	

	bool arr[100];
		for (int i = 0; i < 100; i++)
		{
			arr[i] = true;
	
	
		}
	
		for (int i = 1; i < 100; i++)
		{
			for (int j = i; j <= 99; j = i + 1 + j)
			{
	
				if (arr[j] == true)
				{
					arr[j] = false;
	
				}
				else
				{
					arr[j] = true;
				}
			}
			for (int i = 0; i < 100; i++)
			{
				if (arr[i] == true)
				{
					cout << i + 1 << "  ";
				}
	
	
			}
	
	return 0;
}
























