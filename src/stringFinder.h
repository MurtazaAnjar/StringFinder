#ifndef STRINGFINDER_H
#define STRINGFINDER_H

#include <string>

int stringFinder(std::string str, char c, bool caseSensitive = true, int start = 0);
int stringFinder(std::string str, std::string target, bool caseSensitive = true, int start = 0);

#endif //STRINGFINDER_H