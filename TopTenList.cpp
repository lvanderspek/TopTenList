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
    for (int i = 1; i <= _list.size(); i++) {
        Hyperlink hl = get(i);
        printf("%d. <a href=\"%s\">%s</a>\n", i, hl.url.c_str(), hl.text.c_str());
    }
}

void TopTenList::display_backward() {
    for (int i = _list.size(); i; i--) {
        Hyperlink hl = get(i);
        printf("%d. <a href=\"%s\">%s</a>\n", i, hl.url.c_str(), hl.text.c_str());
    }
}
