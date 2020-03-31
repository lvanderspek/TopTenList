//Manages a list of top ten hyperlinks
#include <iostream>
#include <string>
#include "TopTenList.h"
#include "Hyperlink.h"

using std::string;
using std::endl;
using std::cout;

TopTenList::TopTenList()
{
    _list.resize(10);
}

void TopTenList::set_at(int index, Hyperlink link)
{
    _list[index-1] = link;
}

Hyperlink TopTenList::get(int index)
{
    return _list[index-1];
}

void TopTenList::display_forward() {
    for (Hyperlink hl : _list) {
        cout << hl.text << ' ' << hl.url << endl;
    }
}

void TopTenList::display_backward() {
    for (int i = _list.size()-1; i >= 0; i--) {
        Hyperlink hl = _list[i];
        cout << hl.text << ' ' << hl.url << endl;
    }
}
