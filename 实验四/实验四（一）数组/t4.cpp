//#include<iostream>
//#include<string>
//using namespace std;
////void merge(const int list1[], int size1, const int list2[], int size2, int list3[]);
//
//struct t {
//
//
//
//};
//
//
//
//
//int main()
//{
//	int size1, size2;
//	cout << "ÇëÊäÈësize1£º" ;
//	cin >> size1;
//	int* list1 = new int[size1];
//	for (int i = 0; i < size1; i++)
//	{
//		cin >> list1[i];
//
//	}
//	cout << "ÇëÊäÈësize2£º" ;
//	cin >> size2;
//	int* list2=new int[size2];
//	for (int i = 0; i < size2; i++)
//	{
//		cin >> list2[i];
//
//	}
//	int size3 = size1 + size2;
//	int* list3 = new int[size3];
//
//	/*merge(list1, size1, list2, size2, list3);*/
//	for (int i = 0; i < size1; i++)
//	{
//		list3[i] = list1[i];
//	}
//
//	for (int i = 0; i < size2; i++)
//	{
//
//		list3[size1 + i] = list2[ i];
//	}
//
//	for (int i = 0; i < size3 - 1; i++)
//	{
//		for (int j = 0; j < size3 - 1 - i; j++)
//		{
//			if (list3[j] > list3[j + 1])
//			{
//
//				int t = list3[j];
//				list3[j] = list3[j + 1];
//				list3[j + 1] = t;
//
//			}
//
//
//
//		}
//
//
//	}
//
//	for (int i = 0; i < size3; i++)
//	{
//
//		cout << list3[i] << " ";
//
//
//	}
//	cout << endl;
//	for (int i = 0; i < size1; i++)
//	{
//
//		cout << list1[i] << " ";
//
//
//	}
//	cout << endl;
//
//	for (int i = 0; i < size2; i++)
//	{
//
//		cout << list2[i] << " ";
//
//
//	}
//	cout << endl;
//	delete[]list1, list2, list3;
//
//	system("pause");
//	return 0;
//
//
//}