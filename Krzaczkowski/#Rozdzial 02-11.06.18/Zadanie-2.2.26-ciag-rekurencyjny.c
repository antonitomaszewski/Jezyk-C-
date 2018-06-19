unsigned int ciag(unsigned int n) {
        if (n <= 2)
                return 1;
        else
                switch (n%3) {
                case 0: return ciag(n-1) + ciag(n-2);
                case 1: return 5 * ciag(n-1) + 4;
                case 2: return ciag(n-1);
                }
}
