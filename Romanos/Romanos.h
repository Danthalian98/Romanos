#include <iostream>
#include<algorithm>
using namespace std;

class Romanos{
public:
	Romanos();
	void Menu();
	void Convertidor();
    string romano;
    int opc;
    int temp;
    int arabigo;
private:

};
Romanos::Romanos(){
    opc = 0;
    temp = 0;
}
void Romanos::Menu() {
    do {
        system("cls");
        cout << "........Romano a arabigo by Zavala........" << endl;
        cout << "...............Intrucciones..............." << endl;
        cout << "1.-Introduzca numeros romanos validos, I, V, X, L, C, D, M" << endl;
        cout << "2.-Los numeros deben ser en mayusculas" << endl;
        cin >> romano;
        system("cls");

        Convertidor();

        cout << endl;
        cout << "Desea volver a utilizar el programa?" << endl;
        cout << "1.-Si :D" << endl;
        cout << "2.-No D:" << endl;
        cin >> opc;
    } while (opc == 1);
}
void Romanos::Convertidor() {
    arabigo = 0;
   string str(romano);
   string b[100];
   int i = 0;
   int t = 0;
    int length = str.size();
    for (int j = 1; j <= length; j++) {
        b[j] = (str[length - j]);
        i++;
    }
    for (int j = i; j >= 0; j--) {
        if (b[j] == "I")temp = 1;
        if (b[j] == "V")temp = 5;
        if (b[j] == "X")temp = 10;
        if (b[j] == "L")temp = 50;
        if (b[j] == "C")temp = 100;
        if (b[j] == "D")temp = 500;
        if (b[j] == "M")temp = 1000;
        
        if (t >= temp) {
            arabigo += temp;
        }
        else {
            arabigo += temp;
            arabigo -= (t * 2);
        }
        t = temp;
        temp = 0;
    }
    cout << "El numero en arabigo es:  " << arabigo << endl;
}
