#include <iostream>
using namespace std;


void f(double& h,double& s,double& p){
    double salary, nalog, total;
    salary = h * s * (1 + p / 100);
    nalog = salary * 0.13;
    total = salary - nalog;
    
    cout << "����� ������������ ����� ���������� " << salary << endl;
    cout << "���������� ����� ���������� " << nalog << endl;
    cout << "�����, ���������� �� ����, ���������� " << total << endl;
}


int main(){
    setlocale(0, "");
    double h, s, p;

    cout << "������� ���-�� ������������ �����: ";
    cin >> h ;
    cout << "������� ������ ��������� ������: ";
    cin >> s;
    cout << "������� % ������ ";
    cin >> p;
    f(h,s,p);

    return 0;
}
