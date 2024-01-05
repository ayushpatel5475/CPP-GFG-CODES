#include <iostream>
#include <tuple>

using namespace std;

int main()
{
    tuple<string, int, string> t = make_tuple("abc", 10, "xyz");
    cout << get<0>(t) << " " << get<1>(t) << " " << get<2>(t);
    get<0>(t) = "pqr";
    cout << "\n"
         << get<0>(t);

    tuple<char, int, int> t2('g', 20, 30);
    cout << tuple_size<decltype(t2)>::value << endl;
    char x;
    int y, z;

    tie(x, y, z) = t2;
    cout << x << " " << y << " " << z << endl;


auto t3=tuple_cat(t,t2);
cout<<get<0>(t3)<<" "<<get<2>(t3);

    return 0;
}