#include <cstdint>
#include <cstdlib>

#pragma once

struct Order
{
public:
    Order();

    uint32_t id;
    double price;

    bool operator<(Order o);
    bool operator>(Order o);
};