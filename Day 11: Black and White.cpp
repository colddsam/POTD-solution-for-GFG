int X_axis[]{ -2, -1, 1, 2 };
    int Y_axis[]{ 1, 2, 2, 1 };
 
    long long ret = 0;
 
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            for (int k = 0; k < 4; ++k) {
                int x = i + X_axis[k], y = j + Y_axis[k];
 
                if (x >= 0 && x < m && y >= 0 && y < n)
                    ++ret;
            }
        }
    }
 
    long long Total = m * n;
    Total = Total * (Total - 1) / 2;
 
    long long getv=2 * (Total - ret);
    long long p=pow(10,9)+7;
    return getv%p;
