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
    int aliRoll = *A;
    int bekRoll = *B;
    double higherThanAli = (6.0 - aliRoll) / 6.0;
    double higherThanBek = (6.0 - bekRoll) / 6.0;

    double tieWithAli = 1.0 / 6.0;
    double tieWithBek = 1.0 / 6.0;
    double winHigher = higherThanAli * higherThanBek;
    double winTieAli = tieWithAli * higherThanBek;
    double winTieBek = tieWithBek * higherThanAli;
    double winTieBoth = tieWithAli * tieWithBek;
    return winHigher + winTieAli + winTieBek + winTieBoth;
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