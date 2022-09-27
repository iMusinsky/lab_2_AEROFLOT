//
// Created by UserPC on 9/27/2022.
//

#ifndef TP_2_LAB_2_FILE_LINE_H
#define TP_2_LAB_2_FILE_LINE_H

#include <fstream>
#include <iostream>

class Reader {
private:
    char file_name[64];
    char password[64];

public:
    Reader();
    ~Reader() = default;

private:
    bool isSeparator(char& ch) noexcept;
    bool isVowel(char& ch) noexcept;

};


#endif //TP_2_LAB_2_FILE_LINE_H
