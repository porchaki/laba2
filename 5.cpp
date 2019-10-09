#include <iostream>
#include <Windows.h>
#include <cmath>
using namespace std;
int main()
{
	double x1,x2,x3,y1,y2,y3,p,s,h;
	SetConsoleCP(1251);
SetConsoleOutputCP(1251);
 setlocale(LC_ALL, "rus");
 cout<<"¬ведите коорддинаты вершин треугольника"<<endl;
 cin>>x1>>y1>>x2>>y2>>x3>>y3;
 p = (sqrt((pow(abs(x1-x2),2)+pow(abs(y1-y2),2))))+(sqrt((pow(abs(x2-x3),2)+pow(abs(y2-y3),2))))+(sqrt((pow(abs(x3-x1),2)+pow(abs(y3-y1),2))));
 h = sqrt(pow(abs(x1-x2),2)+(pow(abs(y1-y2),2)));
 s = h*(sqrt((pow(abs(x3-x1),2)+pow(abs(y3-y1),2))));
 cout <<"p="<< p<<endl<<"s="<<s<<endl;
	 system("pause");
	 
	 return 0;
}



