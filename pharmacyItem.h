#pragma once
// pharmacy item
#include <iostream>
using namespace std;
class pharmacyItem
{
private:
    string Name;
    double cost;
    int quant;

protected:
    enum pkgType
    {
        box,
        tape,
        ampoule
    };

public:
    pharmacyItem(string n, double c, int q, pkgType type_val)
    {
        Name = n;
        cost = c;
        quant = q;
        type_val = box;
    }
    void set_cos(double new_cost)
    {
        cost = new_cost;
    }
    double get_cost()
    {
        return cost;
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