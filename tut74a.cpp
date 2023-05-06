#include <iostream>
#include<functional>
#include<algorithm>

using namespace std;

int main(){
    // Function Objects (Functor): Function wrapped in a class so that it is available like an object
    int arr[] = {1,73,4,12,54,7};
    sort(arr,arr+5); // 7 will remain same as there is only (arr+5) and 7 is the sixth element
    // sort(arr,arr+6,greater<int>());
    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}