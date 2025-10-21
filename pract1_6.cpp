#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

void vvod(double& h, double& s, string& fam){
    
    cout << "Ââåäèòå ôàìèëèþ ðàáîòíèêà: ";
    cin >> fam;
    cout << "Ââåäèòå êîë-âî îòðàáîòàííûõ ÷àñîâ è ñòàâêó: ";
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
    
    cout << "Äëÿ 1 ðàáîòíèêà: "<< endl;
    vvod(h1,s1,fam1);
    f(h1,s1,salary1,nalog1,total1);

    cout << "Äëÿ 2 ðàáîòíèêà: "<< endl;
    vvod(h2,s2,fam2);
    f(h2,s2,salary2,nalog2,total2);


    cout << "Ôàìèëèè òåõ, êòî ïîëó÷èë íà ðóêè ìåíüøå 1000 ðóá - ";
    if (total1 < 1000) {
        cout << fam1 << endl;
    }
    if (total2 < 1000) {
        cout << fam2 << endl;
    }
    cout << endl;


    cout << "Ðàáîòíèêè ñ íàëîãîì áîëåå 50 ðóáëåé (ïåðâàÿ è ïîñëåäíÿÿ áóêâà ôàìèëèè):" << endl;
    if (nalog1 > 50) {
        cout << fam1[0] << "-" << fam1[fam1.length() - 1] << endl;
    }
    if (nalog2 > 50) {
        cout << fam2[0] << "-" << fam2[fam2.length() - 1] << endl;
    }
    


    return 0;
}

