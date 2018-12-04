#include <iostream>

using namespace std;  //no need to write std::cout and std::cin

/**********************************************************
We can also use only what we need (instead of using namespace std;)
using std::cout;
using std::cin;
using std::endl;
***********************************************************/


int main()
{
    int favorite_number;
    cout << "Enter your favorite number between 1 and 100 : ";
    cin >> favorite_number;
    cout << "Amazing ! That's my favorite number too !" << "\n";
    cout << "No really ! " <<favorite_number<< " is my favorite number too !" << endl;
    return 0;
}
