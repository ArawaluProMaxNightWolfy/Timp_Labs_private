#include <iostream>
#include "modAlphaCipher.h"
using namespace std;
void check(const wstring& Text, const wstring& key)
{
    wstring cipherText;
    wstring decryptedText;
    modAlphaCipher cipher(key);
    cipherText = cipher.encrypt(Text);
    decryptedText = cipher.decrypt(cipherText);
    wcout<<"key="<<key<<endl;
    wcout<<Text<<endl;
    wcout<<cipherText<<endl;
    wcout<<decryptedText<<endl;
    if (Text == decryptedText)
        wcout<<"Ok\n";
    else
        wcout<<"Err\n";
}
int main(int argc, char **argv)
{
    std::locale loc("ru_RU.UTF-8");
    std::locale::global(loc); // установка глобальной локали
    check(L"ЗЕЛЕНАЯЗЕЛЕНЬЗЕЛЕНИТЗЕЛЕНУЮЗЕЛЕНЬ",L"СИМПЛ");
    check(L"ЗЕЛЕНАЯЗЕЛЕНЬЗЕЛЕНИТЗЕЛЕНУЮЗЕЛЕНЬ",L"ПРИМЕР");
    check(L"ЗЕЛЕНАЯЗЕЛЕНЬЗЕЛЕНИТЗЕЛЕНУЮЗЕЛЕНЬ",L"АПЧХИ");
    return 0;
}
