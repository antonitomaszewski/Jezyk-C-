typ char bez znaku:
typedef unsigned char uc;

stała typu char bez znaku:
typedef const unsigned char cuc;

wskaźnik do typu całkowitego:
typedef int *pi;

wskaźnik do wskaźnika do znaku:
typedef char **ppc;

wskaźnik do wektora znaków:
typedef char (*x)[][7];

wektor siedmiu wskaźników do liczb całkowitych:
typedef int *wsk[7];

wskaźnik do wektora siedmiu wskaźników do liczb całkowitych:
typedef int *((*wc7)[7]);

wektor ośmiu wektorów z siedmioma wskaźnikami do liczb całkowitych:
typedef int *w[8][7];
