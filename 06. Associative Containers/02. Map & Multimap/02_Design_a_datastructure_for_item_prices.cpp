#include <iostream>
#include <map>

using namespace std;

map<int, string> m;

void add(int price, string name)
{
    m[price] = name;
}

string find(int price)
{
    auto res = m.find(price);
    if (res == m.end())
        return " ";
    else
        return res->second;
}
void printSorted()
{
    for (auto x : m)
        cout << x.second << " " << x.first << endl;
}

void printGreaterSorted ( int price){
    auto it =m.upper_bound ( price);
    while ( it!=m.end()){
        cout<<it->second<<" "<<it->first<<endl;
        it++;
    }
}

void printSmallerSorted( int price){
    auto it1=m.lower_bound( price);
    for ( auto it2=m.begin(); it2!=it1;it2++)
            cout<< it2-> second<<" "<<it2->first<<endl;
}

//main function : 

int main()
{
    add(100, "ProductA");
    add(50, "ProductB");
    add(200, "ProductC");

    cout << "Sorted Products:" << endl;
    printSorted();

    int searchPrice = 50;
    string foundProduct = find(searchPrice);
    if (foundProduct != " ")
        cout << "Product found for price " << searchPrice << ": " << foundProduct << endl;
    else
        cout << "Product not found for price " << searchPrice << endl;

    int filterPrice = 100;
    cout << "Products with prices greater than " << filterPrice << ":" << endl;
    printGreaterSorted(filterPrice);

    cout << "Products with prices smaller than " << filterPrice << ":" << endl;
    printSmallerSorted(filterPrice);

    return 0;
}
