#pragma once
#include <vector>
#include <string>
class modAlphaCipher
{
private:
    int key; //ключ
public:
    modAlphaCipher()=delete; //запретим конструктор без параметров
    modAlphaCipher(const std::string& skey); //конструктор для установки ключа
    std::string encrypt(const std::string& text); //зашифрование
    std::string decrypt(const std::string& dctext);//расшифрование
};