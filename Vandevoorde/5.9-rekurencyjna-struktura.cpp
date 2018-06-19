struct WezelListy {
        int wartosc_;
        WezelListy *nast_;
};

WezelListy koniec_listy = {0, &koniec_listy};
