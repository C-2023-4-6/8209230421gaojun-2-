//#include<iostream>
//#include<math.h>
//using namespace std;
//int parseHex(const char* const hexString)
//{
//	int sum = 0;
//	int a = strlen(hexString);
//	for (int i = 0; i < a; i++)
//	{
//		if (hexString[i] >= 65)
//		{
//			sum = sum + (hexString[i] - 55)*pow(16,a-i-1);
//
//
//		}
//
//		else 
//		{
//			sum = sum + (hexString[i]-48)*pow(16,a-1-i);//此时hexString【i】输出的是ascll码，而0对应的ascll码为48(与运算相关则应该会转化为ascll码）
//
//		}
//		/*cout << hexString[i] << endl;*/
//	}
//
//	return sum;
//}
//int main() {
//
//	int size = 999;
//	char s[999];
//	cout << "请输入字符串" << endl;
//	cin.getline(s, 999);
//	cout << "该字符串对应的十进制数为：";
//	cout << parseHex(s);
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
//	return 0;
//
//
//}