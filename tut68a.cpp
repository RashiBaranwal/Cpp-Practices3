#include <iostream>

using namespace std;

template <class T>

class Harry
{
public:
    T data;
    Harry(T a)
    {
        data = a;
    }
    void display();
};

template <class T>
void Harry<T>::display()
{
    cout << data;
}


int main()
{
    // Harry<float> h(5.7);
    // Harry<char> h('k');
    Harry<int> h(87);
    cout << h.data << endl;
    h.display();

    return 0;
}