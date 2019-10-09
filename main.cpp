#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;


int main()
{
	SetConsoleCP(1251);
SetConsoleOutputCP(1251);
 setlocale(LC_ALL, "rus");
	double x1,y1,x2,y2,l;
	cout<<"Введите координаты двух векторов"<<endl;
	cin>>x1>>y1>>x2>>y2;
	l = sqrt(pow((x1-x2),2)+pow((y1-y2),2));
	cout<<"Расстояние между векторами равно "<<l<<endl;
	system("pause");
		return 0;
}



