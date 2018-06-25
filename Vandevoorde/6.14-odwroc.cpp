#include <string>
#include <algorithm>
#include <cstring>  // dla odwrosc_2

void odwroc (std::string &s) {
        std::reverse (s.begin(), s.end());
}

void odwrosc_2(char *s) {
        std::reverse(s, s + std::strlen(s) - 1);
}

void odwroc_3(char *s) {
        for (char *e = s + std::strlen(s) - 1; s < e; ++s, --e) {
                char pom = *s; // Zamień *s i *e
                *s = *e;
                *e = pom;
        }
}
