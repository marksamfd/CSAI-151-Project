#include "Finance.h"
Finance::Finance(int d, int m, int y) : income(0), outcome(0) {
    date.day = d;
    date.month = m;
    date.year = y;
}

void Finance::addDonation(double cost, string type) {
    outcome = outcome + cost;
    //cout << "Added donation: " << cost << type << endl;
}

void Finance::addIncome(double cost, string type) {
    income = income + cost;
    //cout << "Added income: " << cost << type << endl;
}
