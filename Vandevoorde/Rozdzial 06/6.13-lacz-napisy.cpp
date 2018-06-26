#include <string>
#include <cstring>

using std::size_t;
using std::strcpy;
using std::strlen;

char* polacz(const char *a, const char *b) {
        size_t la = strlen(a);
        char *s = new char[la + strlen(b) + 1]; // +1 bo każdy napis musi się kończyć '\0'
        strcpy(s, a);       // s od komórki 0
        strcpy(s + la, b);  // w tym miejscu bierzemy jakby stringa od komórki la
        return s;
}

void polacz_2(const char *a, const char *b, char *to) {
        while ((*a) != '\0')
                *(to++) = *(a++);
        while ((*b) != '\0')
                *(to++) = *(b++);
        *to = '\0';
}
