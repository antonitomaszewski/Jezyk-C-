#include <iostream>
#include <algorithm>
#include <string>
#include <iterator>     // std::ostream_iterator

using std::copy;  // <copy>
using std::cout;  // <iostream>
using std::ostream_iterator; // <iterator>
using std::string;  // <string>

const int l_miesiecy = 12;

string miesiac[l_miesiecy] = {string("Styczeń"), string("Luty"), string("Marzec"), string("Kwiecień"), string("Maj"), string("Czerwiec"), string("Lipiec"), string("Sierpień"), string("Wrzesień"), string("Październik"), string("Listopad"), string("Grudzień")};

int main()
{
        // ostreambuf_iterator a = ;
        copy(&miesiac[0], &miesiac[0] + l_miesiecy, std::ostream_iterator<string>(cout, "\n"));
        return 0;
}
