#pragma once
// pharmacy item
#include <iostream>
using namespace std;
class pharmacyItem
{
protected:
    enum pkgType
    {
        box,
        tape,
        ampoule
    };

private:
    string Name;
    double cost;
    int quant;
    pkgType pkg;


public:
    pharmacyItem(string n, double c, int q, pkgType type_val)
    {
        Name = n;
        cost = c;
        quant = q;
        pkg = type_val;
    }
    void set_cos(double new_cost)
    {
        cost = new_cost;
    }
    double get_cost() {
        if (pkg == box) {
            return cost;
        }
        else if (pkg == tape || pkg == ampoule) {
            return cost / quant;
        }

    }
    double increase_Qty(double new_quant)
    {
        return quant += new_quant;
    }
    void set_Qty(double quan)
    {
        quant = quan;
    }
    int get_Qty()
    {
        return quant;
    }
};