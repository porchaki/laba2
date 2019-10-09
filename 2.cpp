#include <iostream>
#include <Windows.h>
using namespace std;
int main()
{
	double a,b,c,ac,bc,l;
	SetConsoleCP(1251);
SetConsoleOutputCP(1251);
 setlocale(LC_ALL, "rus");
 cout<<"Введите координаты трех точек на числовой оси"<<endl;
 cin>> a>>b>>c;
 ac = abs(a-c);
 bc = abs(b-c);
 l = ac+bc;
 cout<<"Длина АС = "<<ac<<endl<<"Длина ВС = "<<bc<<endl<<"Сумма длин отрезков = "<<l<<endl;
 system ("pause");
 return 0;
}
