#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ofstream out;
    out.open("sample60.txt");
    out << "This is me\n";
    out << "This is me also\n";
    out << "This is also me\n";
    out << "This is also me\n";
    out.close();

    ifstream in;
    string st, st2;
    in.open("sample60b.txt");

    // in >> st >> st2;
    // cout << st << st2;
    //Above two lines will only print initial two words 
    //from the file therefore we will use while loop to
    // print the entire sentence from the file

    while(in.eof()==0){
        //eog() --->end of file
        getline(in,st);
        cout<<st<<endl;
    }
    in.close();

    return 0;
}