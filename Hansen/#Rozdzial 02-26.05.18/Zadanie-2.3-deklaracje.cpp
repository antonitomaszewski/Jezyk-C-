wskaźnik do znaku:
char *pc;
char c; // znak
char *pc = &c;  // wskaźnik do znaku poprzez adres

tablica 10 liczb całkowitych:
int iv[10];
int iv[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

referencja do tablicy 10 liczb całkowitych:
int &riv[10];
int &riv[10] = iv;

wskaźnik do tablicy napisów:
char *(*psv)[4];
char *cv[4] = { "ab", "bc", "cd", "de" }; // tablica 4 napisów
char *(*psv)[4] = &cv;  // wskaźnik do tablicy 4 napisów

wskaźnik do tablicy napisów (opcja 2):
char ***psv;
char **ps - new char*[4];
char ***psv = &ps;  // wskaźnik do tablicy napisów
ps[0] = "as";
ps[1] = "df";
ps[2] = "gh";
ps[3] = "jk";

wskaźnik do wskaźnika do znaku:
char **ppc;
char *pc; // pointer to char -- wskaźnik do znaku
char **ppc = &pc; // pointer to pointer to char

stała całkowita:
const int maxint = 32767; // stała całkowita

wskaźnik do stałej całkowitej:
const int *pci = &maxint; // wskaźnik do stałej całkowitej

stała wskaźnikowa do liczby całkowitej:
int *const cpi;
int i = 10; // liczba całkowita
int *const cpi = &i;  // stała wskaźnikowa do liczby całkowitej
