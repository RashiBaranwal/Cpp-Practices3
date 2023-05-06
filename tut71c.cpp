#include <iostream>
#include <vector>

using namespace std;
template <class T>
void display(vector<T> &v)
{
    cout << "Displaying this vector " << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
        // cout << v.at(i) << " ";
    }
    cout << endl;
}

int main()
{
    // ways to create a vector
    vector<int> vec1; // zero length integer vector
    int element, size = 5;
    // cout << "Enter the size of your vector " << endl;
    // cin >> size;
    // for (int i = 0; i < size; i++)
    // {
    //     cout << "Enter an element to add to this vector- ";
    //     cin >> element;
    //     vec1.push_back(element);
    // }
    // vec1.pop_back();
    // display(vec1);
    // vector<int>::iterator iter = vec1.begin();

    // // vec1.insert(iter+1,5, 566); //5 copies of 566 will be inserted
    // display(vec1);
    vector<char> vec2(4); // 4-element character vector
    // vector<char> vec3(vec2); // 4-element character vector from vec2
    vector<int> vec4(6, 13); // 6- element vector of 13's
    // vec2.push_back('5');
    display(vec4);

    return 0;
}