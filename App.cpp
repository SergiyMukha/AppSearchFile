#include <iostream>
#include <string>
#include "SearchFile.h"

using std::cout; 
using std::cin;
using std::endl; 
using std::string;


int main(int argc, char** argv)
{
    SearchFile ff;
    if (argc > 2)
    {
        cout << "ERROR! Too much arguments." << endl;
        cout << "This application can be run with one argument or no arguments!" << endl;
        return 1;
    }
    else
    {
        if (argc == 1)
        {
            cout << "Please enter the name of the file to be found:" << endl;
            string str;
            cin >> str;
            ff.setFileName(str);
        }
        else
        {
            ff.setFileName(argv[1]);
        }
    }
    cout << "=========" << endl;
    cout << "Full Path:" << endl;
    cout << "=========" << endl;
    cout << ff.search_file() << endl;

    return 0;
}

