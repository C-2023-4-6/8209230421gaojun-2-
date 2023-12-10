//#include<iostream>
//using namespace std;
//int main()
//{
//	//即每次把最大的数排在后面
//	/*double arr[10] = { 4.3,5.6,4.1,7.6,6.9,9.2,3.4,6.7,5.3,7.8 };*/
//	double arr[10];
//	cout << "请输入十个数:"<<endl;
//	for (int i = 0; i < 10; i++)
//	{
//
//		cin >> arr[i];
//
//
//
//	}
//	//总共循环次数为元素个数-1
//	for (int i = 0; i < 10-1; i++)
//	{
//		//内层循环对比次数为元素个数-当前轮数-1
//		for (int j = 0; j < 10-1-i; j++)
//		{
//			if (arr[j] > arr[j+1])
//			{
//				double t = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = t;
//			}
//		}
//
//	}
//
//	for (int i = 0; i < 10; i++)
//	{
//
//
//		cout << arr[i] << " " << endl;
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
//	system("pause");
//	return 0;
//
//
//
//
//
//
//}