unsigned int silnia (unsigned int n) {
        if (n <= 1)
                return 1;
        else
                return silnia (n - 1) * n;
}
