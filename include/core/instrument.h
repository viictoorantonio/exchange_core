#include <string>
#include <queue>
#include "order.h"

enum Side
{
    Bid,
    Ask
};

class Instrument 
{
private:
    uint32_t id;
    std::string symbol;

    std::priority_queue<Order> bids;
    std::priority_queue<Order> asks;

public:
    Instrument(std::string symbol);
    ~Instrument();

    std::string get_symbol();

    void insert_book(Order order, Side side);
};