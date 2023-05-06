#include <iostream>
#include <list>

using namespace std;

void display(list<int> &lst)
{
    list<int>::iterator it;
    for (it = lst.begin(); it != lst.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

int main()
{
    // 6 8 9
    list<int> list1; // List of 0 Length
    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(9);
    list1.push_back(12);
    display(list1);
    //Removing element from the list
    // list1.pop_front(); //This will print 7 1 9 12
    // list1.pop_back(); //This will print 5 7 1 9 
    // list1.remove(9);  //This will remove all the 9 from the given numbers

    //Sorting the list
    list1.sort();  // 1 5 7 9 12
    display(list1); 

    list<int> list2(3); // Empty list of size 7
    list<int>::iterator iter;
    iter = list2.begin(); // Reference of list first element
    *iter = 45;
    iter++;
    *iter = 6;
    iter++;
    *iter = 9;
    iter++;
    display(list2);
    // cout << *iter<<" ";
    // iter++;
    // cout << *iter<<" ";
    // iter++;
    // cout << *iter<<" ";
    // iter++;
    // cout << *iter<<" ";
    // iter++;
    // cout << *iter<<" ";
    // iter++;
    return 0;
}
