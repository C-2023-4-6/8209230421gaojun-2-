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
//	for (int i = 0; i < b ; i++)      //控制s2的首字母
//	{
//		for (j = 0, k = i; (j < a)/* && (k < i + a)*/; j++, k++)      //控制s2的总输出数
//			if (s1[j] == s2[k])
//			{
//				index = i;
//				s3[j] = true;
//			}
//		int h = 0;
//		for (int n = 0; n < a; n++)
//		{
//			if (s3[n] == false && i == b -1)//最后一次循环时i=b-a
//			{
//				return -1; break;
//			}
//			if (s3[n])
//				h++;
//		}
//		if (h == a)
//		{
//			return index;//输出时并不一定循环完
//		}
//	}
//
//}
//
//
///*for (int m = 0; m < a; m++)
//	s3[m] = false;
//
//for (int i = 0; i < a; i++)
//{
//	for (int j = 0; j < b; j++)
//	{
//		if (s1[i] == s2[j])
//		{
//			index = i;
//			s3[i] = true;
//
//
//		}
//
//
//
//
//
//	}
//
//
//
//
//
//
//}
//int h = 0;
//
//
//for (int n = 0; n < a; n++)
//{
//	if (s3[n] == false)
//	{
//		return -1;
//
//	}
//	if (s3[n])
//	{
//		h++;
//
//	}
//}
//if (h == a)
//{
//
//	return index;
//}*/