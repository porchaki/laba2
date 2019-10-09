#include <iostream>
#include <Windows.h>
using namespace std;
int main()
{
	double xa,xb,ya,yb,l1,l2,s;
	SetConsoleCP(1251);
SetConsoleOutputCP(1251);
 setlocale(LC_ALL, "rus");
 cout<<"Введите координаты двух точек"<<endl;
 cin>> xa>>ya>>xb>>yb;
 l1 = abs(ya-yb);
 l2 = abs(xa - xb);
 s = l1*l2;
 cout<<"Площадь прямоугольника равна"<<" "<<s<<endl;
 system ("pause");
 return 0;
}
