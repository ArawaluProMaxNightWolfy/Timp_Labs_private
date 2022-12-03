#include <iostream>
#include <string>
#include "Header.h"
#include "modules.cpp"
using namespace std;

int main(){
    bool gameover = false;
    int key;                          //Запрос ключа
    cout << "Введите ключ: ";
    cin >> key;
    TablMapReplace perestanovka(key); //_________
    
    string symbol;
    string message;
    while(gameover != true) {
        cout << "Поменять ключ(k), Зашифровать сообщение(e), Расшифровать сообщение(d)" << endl;
        cin >> symbol;
        if (symbol == "k") {
            cout << "Введите ключ: ";
            cin >> key;
            TablMapReplace perestanovka(key);
        }
        if (symbol == "e") {
            cout << "Введите сообщение: ";
            cin >> message;
            cout << perestanovka.encrypt(message) << endl;
        }
        if (symbol == "d") {
            cout << "Введите сообщение: ";
            cin >> message;
            cout << perestanovka.decrypt(message) << endl;
        } 
        if (symbol != "k" and symbol != "e" and symbol != "d") {
            cout << "Хе-хе, думали, я не предусмотрел выход?" << endl;
            gameover = true;
        }
    }
    return 0;
}
