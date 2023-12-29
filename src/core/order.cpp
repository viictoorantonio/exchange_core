#include "core/order.h"

Order::Order()
{
    this->id = rand();
}

bool Order::operator<(Order o) 
{
    return price < o.price;
}

bool Order::operator>(Order o)
{
    return price > o.price;
}