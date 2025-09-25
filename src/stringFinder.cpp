//
// Created by murta on 9/25/2025.
//
#include <string>

int stringFinder(std::string str, char c) {
    for (int i=0;i<str.length();i++) {
        if (str[i] == c) {
            return i;
        }
    }
    return -1;
}

int stringFinder(std::string str, std::string target) {
    for (int i=0;i<str.length();i++) {
        int j = 0;
        bool found = false;
        while (str[j+i] == target[j]) {
            if (j = target.length()-1) {
                found = true;
            }
            j++;
        }
        if (found) {
            return i;
        }
    }
    return -1;
}