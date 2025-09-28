#include "stringFinder.h"
#include <string>

int stringFinder(std::string str, char c, bool caseSensitive, int start) {
    for (int i=start;i<str.length();i++) {
        if (str[i] == c && caseSensitive) {
            return i;
        }
        if (tolower(str[i]) == tolower(c) && !caseSensitive) {
            return i;
        }
    }
    return -1;
}

int stringFinder(std::string str, std::string target, bool caseSensitive, int start) {
    for (int i=start;i<str.length();i++) {
        int j = 0;
        bool found = false;

        if (caseSensitive) {
            while (str[j+i] == target[j]) {
                if (j == target.length()-1) {
                    found = true;
                }
                j++;
            }
        }else {
            while (tolower(str[j+i]) == tolower(target[j])) {
                if (j == target.length()-1) {
                    found = true;
                }
                j++;
            }
        }

        if (found) {
            return i;
        }
    }
    return -1;
}