#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;


    // for (int i = 0; i < 2; i++){
    //     cout << i+1 << " ��������: " << endl;
    //     vvod(h, s, fam);
    //     f(h, s, salary, nalog, total);
        
    //     cout << "h" << i+1 << " = " << h << endl;
    //     cout << "s" << i+1 << " = " << s << endl;
    //     cout << "fam" << i+1 << " = " << fam << endl;
    //     cout << "salary" << i+1 << " = " << salary << endl;
    //     cout << "nalog" << i+1 << " = " << nalog << endl;
    //     cout << "total" << i+1 << " = " << total << endl;
    // }


void vvod(double& h, double& s, string& fam){
    
    cout << "������� ������� ���������: ";
    cin >> fam;
    cout << "������� ���-�� ������������ ����� � ������: ";
    cin >> h >> s;
    cin.ignore();
}

void f(double h, double s,double& salary,double& nalog, double& total){
    
    salary = h * s;
    nalog = salary * 0.13;
    total = salary - nalog;
}


int main(){
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double h1, s1, h2, s2, salary1, salary2, nalog1, nalog2, total1, total2;
    string fam1, fam2, fam;
    
    cout << "��� 1 ���������: "<< endl;
    vvod(h1,s1,fam1);
    f(h1,s1,salary1,nalog1,total1);

    cout << "��� 2 ���������: "<< endl;
    vvod(h2,s2,fam2);
    f(h2,s2,salary2,nalog2,total2);


    cout << "������� ���, ��� ������� �� ���� ������ 1000 ��� - ";
    if (total1 < 1000) {
        cout << fam1 << endl;
    }
    if (total2 < 1000) {
        cout << fam2 << endl;
    }
    cout << endl;


    cout << "��������� � ������� ����� 50 ������ (������ � ��������� ����� �������):" << endl;
    if (nalog1 > 50) {
        cout << fam1[0] << "-" << fam1[fam1.length() - 1] << endl;
    }
    if (nalog2 > 50) {
        cout << fam2[0] << "-" << fam2[fam2.length() - 1] << endl;
    }
    


    return 0;
}
