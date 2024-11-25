// Problem 1
void days2years(int &days, int &years) {
    years = days / 365;
    days = days % 365;
}

//Problem 2
double func(double *x, double *y) {
    *y = (11 * (*x) * (*x) * (*x)) / 3.0 + 5;
    return *y;
}

// Problem 3
int minsNewYear(int *hour, int *min) {
    return (23 - *hour) * 60 + (60 - *min);
}

//
double probability(int *A, int *B) {
    int wins = 0, total = 36;
    for (int dilya = 1; dilya <= 6; ++dilya) {
        for (int ali = 1; ali <= 6; ++ali) {
            for (int bek = 1; bek <= 6; ++bek) {
                if (dilya >= ali && dilya >= bek && (dilya > ali || dilya > bek)) {
                    wins++;
                }
            }
        }
    }
    return static_cast<double>(wins) / total;
}

// Problem 5
int presses(int *x) {
    int digit = *x % 10;
    int count = 0, length = 0;
    int temp = *x;

    while (temp > 0) {
        length++;
        temp /= 10;
    }
    for (int i = 1; i < digit; ++i) {
        count += i;
    }
    count += (digit * length);

    return count;
}