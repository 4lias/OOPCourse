#include <iostream>
#include <string>

using namespace std;

int main()
{
    string x;
    //int y = 0;

    cout << "x = ";
    cin >> x;
    int y = stoi(x);
    do
    {
        cout << "press e to exit or y = ";
        cin >> x;

        if(x!="e")
        {
            y = y*stoi(x);
            cout << "x = " << y << endl; 
        }
    } while (x!="e");
    cout << "Exiting" << endl;

    return 0;
}