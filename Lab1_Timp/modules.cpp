#pragma once
#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

string crypt(int key, string message) {
    bool gameover = false;
    string chifr;
    
    while (!gameover) {
        key += key;
        for(int i=key-1; i<=key-key; i++) {
            if (message[i] = 0) {
                gameover = true;
                break;
            } else {
                chifr += message[i];
            }
        }
    }
    return chifr;
}
