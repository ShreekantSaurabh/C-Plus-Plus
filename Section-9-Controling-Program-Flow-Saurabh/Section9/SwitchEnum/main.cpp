// Section 9
// Switch with enumeration

#include <iostream>

using namespace std;

int main() {
    
    enum Direction {left, right, up, down};
    
    Direction heading{right};
     //int InputHeading {};
    
    //cout<< "Choose any direction you want to go (left, right, up, down) : ";
    //cin>>InputHeading ;
    //heading = static_cast<Direction>(InputHeading);
    
    switch (heading) {
        case left:
            cout << "Going left" << endl;
            break;
        case right:
            cout << "Going right" << endl; 
            break;
        default:
            cout << "OK" << endl;
    }
    
    cout <<  endl;
    return 0;
}

