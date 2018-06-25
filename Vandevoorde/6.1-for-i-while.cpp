for (i = 0; i < maks_dlugosc; i++)
        if (wiersz_we[i] == '?')
                licznik++;


i = 0;    // inicjowanie
while (i < maks_dlugosc) {
        if (wiersz_we[i] == '?')
                licznik++;
        i++;
}


// niech p jest wskaźnikiem do char
for (p = wiersz_we; p != wiersz_we + maks_dlugosc; ++p)
        if (*p == '?')
                ++licznik;
/* to jest tak jakby iść po komórkach pamięci i mieć wskaźnik na pewną komórkę K.
   następnie zwiększać ten wskaźnik p na K+1, K+2, ... , K+maks_dlugosc-1 i za każdym razem
   wyłuskiwać *p wartość w danej komórce na K+i-tym miejscu w pamięci, chyba */
