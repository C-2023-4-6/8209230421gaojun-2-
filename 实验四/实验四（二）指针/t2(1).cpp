//#include<iostream>
//#include<cstring>
//using namespace std;
//
//int indexOf(char* s1, char* s2);
//int main()
//{
//	int size = 999;
//	char* s1 = new char[size];
//	char* s2 = new char[size];
//	cout << "Enter the first string : ";
//	cin.getline(s1, size);
//	cout << "Enter the second string: ";
//	cin.getline(s2, size);
//	cout << "indexOf(\"" << s1 << "\", \"" << s2 << "\") is " << indexOf(s1, s2) << endl;
//
//	return 0;
//}
//
//int indexOf(char* s1, char* s2)
//{
//	int a, b, index, j, k;
//	a = strlen(s1);
//	b = strlen(s2);
//	cout << a << endl;
//	bool* s3 = new bool[a];
//	for (int m = 0; m < a; m++)
//		s3[m] = false;
//	for (int i = 0; i < b; i++)      //����s2������ĸ
//	{
//		for (j = 0, k = i; (j < a) && (k < i + a); j++, k++)      //����s2���������
//			if (s1[j] == s2[k])
//			{
//				index = i;
//				s3[j] = true;
//			}
//		int h = 0;
//		for (int n = 0; n < a; n++)
//		{
//			if (s3[n] == false && i == b - 1)//���һ��ѭ��ʱi=b-a
//			{
//				return -1; break;
//			}
//			if (s3[n])
//				h++;
//		}
//		if (h == a)
//		{
//			return index;//���ʱ����һ��ѭ����
//		}
//	}
//
//}
//
//
//#include<iostream>
// 
// 
//using namespace std;
//int indexof( char* s1,  char* s2)
//{
//	int a, b;
//	a = strlen(s1);
//	b = strlen(s2);
//	bool* s3 = new bool(a);
//	for (int i = 0; i < a; i++)
//	{
//		s3[i] = false;
//	}
//	int m;
//	for ( int i = 0; i < b;  i++)
//	{
//		
//		for (int j = 0 , k=i; j < a; j++,k++)
//		{
//			if (s1[j] = s2[k])
//			{
//				s3[j] = true;
//				m=i;
//
//			}
//
//
//		}
//
//	}
//	int t = 0;
//	for (int i = 0; i < a; i++)
//	{
//		if (s3[i] == true)
//		{
//			t++;
//
//		}
//
//	}
//	if (t == a)
//	{
//
//		return m;
//
//
//	}
//	
//	else
//	{
//		return -1;
//
//	}
//
//}
//int main()
//{
//	int size = 999;
//	char* s1 = new char[size];
//	char* s2 = new char[size];
//	cout << "������s1��";
//	cin.getline(s1, size);
//	cout << "������s2��";
//	cin.getline(s2, size);
//	cout << indexof(s1, s2) << endl;
//
//	system("pause");
//	return 0;
//
//
//}