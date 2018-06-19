double pot (double n, unsigned int m) {
        double p = 1;
        if (n == 0)
                return 0;
        for (int i = 1; i <= m; i++)
                p *= n;
        return p;
}

int pot_2 (int n, unsigned int m) {
        int p = 1;
        if (n == 0)
                return 0;
        for (int i = 1; i <= m; i++)
                p *= n;
        return p;
}

unsigned int pot_3 (unsigned int n, unsigned int m) {
        unsigned int p = 1;
        if (n == 0)
                return 0;
        for (int i = 1; i <= m; i++)
                p *= n;
        return p;
}
