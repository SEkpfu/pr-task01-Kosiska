#include <iostream>
using namespace std;

void vvod(double& h1,  double& s1, double& h2,  double& s2){
    cout << "Введите кол-во часов и ставку для 1 работника: ";
    cin >> h1 >> s1;
    cout << "Введите кол-во часов и ставку для 2 работника: ";
    cin >> h2 >> s2;
}

void f(double h1,  double s1, double h2,  double s2, double& salary1, double& salary2){
    salary1 = h1 * s1;
    salary2 = h2 * s2;
}


int main(){
    setlocale(0, "");
    double h1, s1, h2, s2, salary1, salary2;
    vvod(h1, s1, h2, s2);
    f(h1, s1, h2, s2, salary1, salary2);

    cout << "Заработал больше работник под номером " << (salary1 > salary2?"1":"2") << endl;
    cout << "Сумма, заработанная двумя работниками вместе, составляет " << salary1+salary2 << endl;

    return 0;
}
