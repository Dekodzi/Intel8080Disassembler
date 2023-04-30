#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <bitset>
#include <stdlib.h>
#include <limits>
#include <algorithm>
#include "translate.h"

int getAmountOfFiles();
void getFilesToConvert(std::string filesToConvert[], int amount);
std::string disassemble(std::string sourcefileName);
void convertFileToHex(std::string output[], char pack[], int length);
std::string convertBinaryToHex(std::string binaryString);
std::string mapBinaryToHex(std::string binaryByte);


int main() {
    int amount_of_files = getAmountOfFiles();
    std::string file_names[amount_of_files];
    getFilesToConvert(file_names, amount_of_files);
    std::ofstream output;
    output.open("out.txt");
    int offset = 0;
    std::string temp;
    for (int i = 0; i < amount_of_files; i++) {
        temp = disassemble(file_names[i]);
        output.write(temp.c_str(), temp.length());
    }
    output.close();
    return 0;
}

int getAmountOfFiles() {
    std::cout << "Say welcone to brand new Intel8080 decompiler. It can decompile binary files which are used to open many amazing apps on many devices with this obsolete CPU. Enter how many files you want to decompile. All of them will be decompiled into one *.txt file. ";
    int amount;
    bool is_correct = false;
    while (!(std::cin >> amount)) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
        std::cout << "Input is not a number. ";
    }
    return amount;
}

void getFilesToConvert(std::string filesToConvert[], int amount) {
    std::cout << "Make sure you have all of those files in catalog with this application. Now program will ask you to enter name of those files one by one WITH types of those files. E.g. \"invaders.g\"" << std::endl;
    for (int i = 0; i < amount; i++) {
        std::string temp;
        std::cin >> temp;
        std::ifstream test_file;
        test_file.open(temp);
        if (!test_file.good() && !test_file.is_open()) {
            std::cout << "An error has occured while cheching the file. Make sure it's correct file." << std::endl;
            i--;
        }
        else {
            filesToConvert[i] = temp;
        }
        test_file.close();
    }
}

std::string disassemble(std::string sourcefileName) {
    std::ifstream source;
    source.open("invaders.h");
    source.seekg(0, std::ios::end);
    int length = source.tellg();
    char input[length];
    source.seekg(0, std::ios::beg);
    source.read(input, length);
    std::string source_code[length];
    convertFileToHex(source_code, input, length);
    source.close();
    std::string output;
    int PC = 0;
    std::stringstream temp;
    while (PC < length) {
        output += matchHexWithOpcodes(source_code, PC) + "\n";
    }
    return output;
}

void convertFileToHex(std::string output[], char pack[], int length) {
    for (int i = 0; i < length; i++) {
        output[i] = convertBinaryToHex(std::bitset<8>(pack[i]).to_string());
    }
}

std::string convertBinaryToHex(std::string binaryString) {
    std::string output = "";
    std::string first_byte = binaryString.substr(0, binaryString.length()/2);
    std::string second_byte = binaryString.substr(binaryString.length()/2, binaryString.length());
    output += mapBinaryToHex(first_byte);
    output += mapBinaryToHex(second_byte);
    return output;
}

std::string mapBinaryToHex(std::string binaryByte) {
    std::string value;
    if (binaryByte == "0000") value = '0';
    else if (binaryByte == "0001") value = '1';
    else if (binaryByte == "0010") value = '2';
    else if (binaryByte == "0011") value = '3';
    else if (binaryByte == "0100") value = '4';
    else if (binaryByte == "0101") value = '5';
    else if (binaryByte == "0110") value = '6';
    else if (binaryByte == "0111") value = '7';
    else if (binaryByte == "1000") value = '8';
    else if (binaryByte == "1001") value = '9';
    else if (binaryByte == "1010") value = 'A';
    else if (binaryByte == "1011") value = 'B';
    else if (binaryByte == "1100") value = 'C';
    else if (binaryByte == "1101") value = 'D';
    else if (binaryByte == "1110") value = 'E';
    else if (binaryByte == "1111") value = 'F';
    return value;
}

