#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    // connecting out file with hout stream
    ofstream hout("sample60.txt");

    // // Creating a name string and filling it with the string entered by the user
    string name;
    cout << "Enter your name" << endl;
    cin >> name;

    // // Writing a string to the file
    hout << name << " is my name";

    // disconnecting our file
    hout.close();

    // connecting our file with hin stream
    ifstream hin("sample60.txt");

    // creating a content string variable and filling it with string present there in the text file
    string content;
    hin >> content;
    cout << "The content of this file is: " << content;
    
    // Disconnecting our file
    hin.close();

    return 0;
}