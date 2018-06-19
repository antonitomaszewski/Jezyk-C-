unsigned int pot(unsigned int n, unsigned int m = 2) {
        int p=1;
        if (n == 0)
                return 0;
        for (int i = 1; i <= m; i++)
                p*=n;
        return p;
}
