#include <iostream>
#include <Windows.h>
using namespace std;


double f(double h,double s){
    double salary;
    salary = h * s;
    return salary;
}


int main(){
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double h1,s1,h2,s2,h3,s3,h4,s4,h5,s5;

    cout << "������� ���-�� ������������ ����� � ��������� ������ 1 ��������� (����� ������): ";
    cin >> h1 >> s1;
    cout << "������� ���-�� ������������ ����� � ��������� ������ 2 ���������: ";
    cin >> h2 >> s2;
    cout << "������� ���-�� ������������ ����� � ��������� ������ 3 ���������: ";
    cin >> h3 >> s3;
    cout << "������� ���-�� ������������ ����� � ��������� ������ 4 ���������: ";
    cin >> h4 >> s4;
    cout << "������� ���-�� ������������ ����� � ��������� ������ 5 ���������: ";
    cin >> h5 >> s5;

    cout << "1 �������� ���������: " << f(h1,s1) << endl;
    cout << "2 �������� ���������: " << f(h2,s2) << endl;
    cout << "3 �������� ���������: " << f(h3,s3) << endl;
    cout << "4 �������� ���������: " << f(h4,s4) << endl;
    cout << "5 �������� ���������: " << f(h5,s5) << endl;

    cout << "������� �� � �������: " << (f(h1,s1)+f(h2,s2)+f(h3,s3)+f(h4,s4)+f(h5,s5))/5;

    return 0;
}
