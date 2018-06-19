definicja :
char ch;
deklaracja:
extern char ch;

int licznik = 1;
extern int licznik;

char *char = "Antoni";
extern char *nazwisko;

struct complex {float re, im; };
struct complex;
complex *x;

struct druga;
struct pierwsza { druga *p2; };
struct druga { pierwsza *p2; };

complex cvar;
extern complex cvar;

// SQRT DEKLARACJA
extern complex sqrt(complex);
// SQRT DEFINICJA
#include <complex.h>
#include <math.h>
// określ pierwiastek z x + yi
complex sqrt(complex z)
{
        double x = real(z);
        double y = imag(z);
        // najprostszy przypadek : y == 0
        if (y == 0.0)
                if (x < 0.0)
                        return complex (0.0, sqrt(-x));
                else
                        return complex(sqrt(x), 0.0);
        if (x == 0.0)
                if (y < 0.0) {
                        double x = sqrt(-y / 2);
                        return complex(x,-x);
                } else {
                        double x = sqrt(y / 2);
                        return complex(x, x);
                }
        /* przekształć w układ biegunowy i wyciągnij pierwiastek

           r = (x**2 + y**2)**(1/2)
           theta = arctan(y / x)

           z**(1/2) = r**(1/2) * (cos(theta / 2) + i * sin(theta / 2))
         */
        double pierwiastek_r = sqrt(sqrt(x * x + y * y));
        double polowa_kata = atan2(y, x) / 2.0;
        return complex(pierwiastek_r * cos(polowa_kata), pierwiastek_r * sin(polowa_kata));
}

extern int numer_bledu;
int numer_bledu;

typedef complex punkt;

float real(complex *p) {
        return p->re;
};
extern float real(complex *p);

const double pi = 3.1415926374910984;
extern const double pi = 3.1415926374910984;  // mogę się do niej odwoływać w innym pliku
extern donst double pi;

struct uzytkownik;
struct uzytkownik { char *nazwisko, int uid, gid; };
