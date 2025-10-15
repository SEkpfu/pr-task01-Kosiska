#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

void vvod(double& h1, double& s1, double& h2,  double& s2, string& fam1, string& fam2){
    
    cout << "Введите фамилию первого работника: ";
    cin >> fam1;
    cout << "Введите кол-во отработанных часов и ставку для 1 работника: ";
    cin >> h1 >> s1;
    cin.ignore();
    
    cout << "Введите фамилию второго работника: ";
    cin >> fam2;
    cout << "Введите кол-во отработанных часов и ставку для 2 работника: ";
    cin >> h2 >> s2;

}

void f(double h1, double s1, double h2,  double s2,  double& salary1, double& salary2, double& nalog1, double& nalog2, double& total1, double& total2){
    
    salary1 = h1 * s1;
    salary2 = h2 * s2;

    nalog1 = salary1 * 0.13;
    total1 = salary1 - nalog1;

    nalog2 = salary2 * 0.13;
    total2 = salary2 - nalog1;
}


int main(){
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double h1, s1, h2, s2, salary1, salary2, nalog1, nalog2, total1, total2;
    string fam1, fam2;

    vvod(h1,s1,h2,s2,fam1,fam2);
    f(h1, s1, h2, s2 ,salary1, salary2, nalog1, nalog2, total1, total2);



    cout << "Фамилии тех, кто получил на руки меньше 1000 руб - ";
    if (total1 < 1000) {
        cout << fam1 << endl;
    }
    if (total2 < 1000) {
        cout << fam2 << endl;
    }
    cout << endl;


    cout << "Работники с налогом более 50 рублей (первая и последняя буква фамилии):" << endl;
    if (nalog1 > 50) {
        cout << fam1[0] << "-" << fam1[fam1.length() - 1] << endl;
    }
    if (nalog2 > 50) {
        cout << fam2[0] << "-" << fam2[fam2.length() - 1] << endl;
    }
    


    return 0;
}
