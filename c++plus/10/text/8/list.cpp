#include<iostream>
#include"list.h"

List::List()
{
    index = 0;
}

void List::add_data(Item item)
{
    items[index++] = item;
}

bool List::is_empty()
{
    return index == 0;
}

bool List::is_full()
{
    return index == MAX;
}

void List::visit(void (*pf) (Item &))
{
    for(int i = 0; i < index; i++)
    {
        pf(items[i]);
    }
}
