#include <assert.h>
#include <cstddef>  // Dla std::size_t

std::size_t strlen(char const *s) {
        assert(s);
        std::size_t len = 0;
        while(s[len])
                ++len;
        return len;
}

void strcpy(char *d, const char *s) {
        assert(s && d);
        do {
                *(d++) = *s;
        } while (*(s++));
}

enum CStringOrder { FirstBeforeSecond = -1, Same = 0, SecondBeforeFirst = 1};

CStringOrder strcmp(const char *first, const char *second) {
        assert(first && second);
        unsigned const char *f = (unsigned const char*) (first);
        unsigned const char *s = (unsigned const char*) (second);

        do {
                if ((*f) < (*s))
                        return FirstBeforeSecond;
                else
                if ((*s) < (*f))
                        return SecondBeforeFirst;
        } while (*(s++) && *(f++));
        assert ((*(s-1) == 0) && (*(f-1) == 0));
        return Same;
}
