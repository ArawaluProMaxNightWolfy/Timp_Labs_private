#pragma once
#include <iostream>
#include <string>
using namespace std;

//Ниже находится то, что нужно поместить в modules.cpp
string TablMapReplace::decrypt(string messageLocal) {
    string message = messageLocal;
    int key = main_key;
    string shifr;
	for (int i = 0; i <= message.length(); i += key + 1) {
		int j = i + key;
		if (j > message.length() - 1) {
			j = message.length() - 1;
		}
		//Выше мы получили значения i(начала участка строки) и j(конца участка строки)
        for(j; j >= i; j--) {
            shifr.push_back(message[j]);
        }
		//Переставляем символы по индексам, добавляя в shifr
	}
	return shifr;
}
string TablMapReplace::encrypt(string messageLocal) {
    string message = messageLocal;
    int key = main_key;
    string shifr;
	for (int i = 0; i <= message.length(); i += key + 1) {
		int j = i + key;
		if (j > message.length() - 1) {
			j = message.length() - 1;
		}
		//Выше мы получили значения i(начала участка строки) и j(конца участка строки)
        for(j; j >= i; j--) {
            shifr.push_back(message[j]);
        }
		//Переставляем символы по индексам, добавляя в shifr
	}
	return shifr;
}
