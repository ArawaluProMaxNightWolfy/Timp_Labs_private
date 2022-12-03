#pragma once
#include <iostream>
#include <string>
using namespace std;

//Ниже находится то, что надо поместить в header.h
class TablMapReplace
{
private:
    int main_key;
public:
    TablMapReplace(int a) {
        main_key = a;
    }
    string decrypt(string messageLocal);
    string encrypt(string messageLocal);
};
