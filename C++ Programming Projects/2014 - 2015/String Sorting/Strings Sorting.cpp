#Engineer: Mohammad Hijazi
#Create Date: 02/13/2014
#Project Name: Strings Sorting


#include <iostream>
#include <set>
#include <algorithm>

using namespace std;
void print(const string& item)
{
    cout<< endl << item ;
}

int main()
{
    set<string> sortedItems;
    int size;
    cout<< "How many names you want to sort : ";
    cin>>size;
    for(int i = 1; i <= size; ++i)
    {
        string name;
        cout << i << ". ";
        cin >> name;

        sortedItems.insert(name);
    }
    cout<< "Sorted String -> ";
    for_each(sortedItems.begin(), sortedItems.end(), &print);
    return 0;
}
