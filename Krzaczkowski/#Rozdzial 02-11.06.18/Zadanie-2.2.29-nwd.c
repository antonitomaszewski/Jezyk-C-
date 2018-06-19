unsigned int nwd(unsigned int n, unsigned int m) {
        if (n == m)
                return m;
        if (n > m)
                return nwd(n%m, m);
        else
                return nwd(m%n, n);
}
