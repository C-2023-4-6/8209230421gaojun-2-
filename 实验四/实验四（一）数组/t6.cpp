//#include<iostream>
//using namespace std;
//const int num1 = 26;
//const int num2 = 99;
//void count(const char s[], int counts[])
//{
//
//	for(int i=0;i<num1;i++)
//	{
//		counts[i] = 0;
//	
//	}
//
//	for (int i = 0; i < num2; i++)
//	{
//		counts[s[i] - 'a']++;
//		counts[s[i] - 'A']++;
//	}
//}
//int main()
//{
//	char* s = new char[num2];
//	int* counts = new int[num1];
//	cout << "ÇëÊäÈë×ÖÄ¸´®£º" << endl;
//	cin.getline(s, num2);
//
//
//	count(s, counts);
//	for (int i = 0; i < num1; i++)
//	{
//		if (counts[i] != 0)
//		{
//			cout <<static_cast<char>(i+'a') << " " << ":" << " " << counts[i] << " " << "times" << endl;
//		}
//	}
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//	system("pause");
//	
//	return 0;
//
//
//
//}