#include <iostream>
#include <Windows.h>
using namespace std;
int main()
{
	double a,b,c,ac,bc,l;
	SetConsoleCP(1251);
SetConsoleOutputCP(1251);
 setlocale(LC_ALL, "rus");
 cout<<"������� ���������� ���� ����� �� �������� ���"<<endl;
 cin>> a>>b>>c;
 ac = abs(a-c);
 bc = abs(b-c);
 l = ac+bc;
 cout<<"����� �� = "<<ac<<endl<<"����� �� = "<<bc<<endl<<"����� ���� �������� = "<<l<<endl;
 system ("pause");
 return 0;
}
