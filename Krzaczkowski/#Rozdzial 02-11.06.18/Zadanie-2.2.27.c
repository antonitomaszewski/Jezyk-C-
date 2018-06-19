unsigned int f(unsigned int n, unsigned int m) {
        if (n == 0)
                return m;
        if (m == 0)
                return n;
        return f(n-1,m) + f(n,m-1) + f(n-1,m-1);
}
