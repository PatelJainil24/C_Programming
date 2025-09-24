#include <iostream>
using namespace std;

int main()
{

    
    while (true)
    {

        int num;
        cout << "Enter the number" << endl;
        cin >> num;
        if (num == 45)
        {

            cout << "You got the number" << endl;
            
            break;
        }
        else
        {
            cout << "try again" << endl;
        }
    }

    return 0;
}