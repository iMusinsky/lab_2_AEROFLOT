#include <iostream>
#include "AeroflotUI.h"

#include <fstream>

bool isVowel(char& ch){
    int vowel[] = {65, 69, 73, 79, 85, 89, 97, 101, 105, 111, 117, 121};

    for (int i = 0; i < 12; ++i) {
        if(ch == vowel[i])
            return true;
    }

    return false;
}

bool isSeparator(char& ch){
    char separator[] = {' ', '\t', '\n'};

    for (int i = 0; i < 3; ++i) {
        if(ch == separator[i])
            return true;
    }

    return false;
}

void reader(){
    char file_name[64];
    std::cout << "Enter file's name: ";
    std::cin >> file_name;

    std::ifstream in;
    in.open(file_name);

    //std::ifstream in;
    //in.open("text.txt");

    if (!in.is_open())
        throw "File doesn't exist";

    char ch;
    bool isWord = false;
    do {
        ch = in.get();

        if(isSeparator(ch)){
            isWord = false;
        }

        if(isVowel(ch) && !isWord){
            do {
                std::cout << ch;
                ch = in.get();
            } while (!isSeparator(ch) && !in.eof());
            std::cout << " ";
        }
        if(!isSeparator(ch)){
            isWord = true;
        }

    } while (!in.eof());



}

int main() {
    try {
        reader();
    }
    catch (const char* msg) {
        std::cout << msg << std::endl;
    }
    return 0;
}