#include <iostream>
#include <Windows.h>
using namespace std;
int main()
{
	double xa,xb,ya,yb,l1,l2,s;
	SetConsoleCP(1251);
SetConsoleOutputCP(1251);
 setlocale(LC_ALL, "rus");
 cout<<"������� ���������� ���� �����"<<endl;
 cin>> xa>>ya>>xb>>yb;
 l1 = abs(ya-yb);
 l2 = abs(xa - xb);
 s = l1*l2;
 cout<<"������� �������������� �����"<<" "<<s<<endl;
 system ("pause");
 return 0;
}
