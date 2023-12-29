#include <iostream>
#include "core/instrument.h"

int main()
{
    Instrument* asset = new Instrument("PETR4");

    for (int i=0; i < 100; i++)
    {
        Side side = i % 2 == 0 ? (Side::Bid) : (Side::Ask);

        Order* order = new Order();
        order->price = 10 + i;

        asset->insert_book(*order, side);
    }

    std::cout << asset->get_symbol() << std::endl;

    delete asset;
    return 0;
}