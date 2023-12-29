#include "core/instrument.h"

Instrument::Instrument(std::string symbol)
{
    this->symbol = symbol;
}

Instrument::~Instrument()
{
}

std::string Instrument::get_symbol()
{
    return this->symbol;
}

void Instrument::insert_book(Order order, Side side)
{
    if (side == Side::Bid)
    {
        this->bids.emplace(order);
    }
    else
    {
        this->bids.emplace(order);
    }
}