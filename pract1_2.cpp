#include <iostream>
using namespace std;


double summa(double h,double s,double p){
    double n;
    n = h * s * (1 + p / 100);
    return n;
}

double nalog(double sum){
    double s = sum * 0.13;
    return s;
}

double totl(double sum, double nal){
    double t = sum - nal;
    return t;
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

    double k = summa(h,s,p);
    double n = nalog(k);
    cout << "����� ������������ ����� ���������� " << k << endl;
    cout << "���������� ����� ���������� " << n << endl;
    cout << "�����, ���������� �� ����, ���������� " << totl(k, n) << endl;

    return 0;
}
