#include <iostream>

using namespace std;

enum class Colors
{
    BLACK,
    WHITE,
    RED,
    GREEN,
    BLUE,
};

void printColorName(Colors color)
{
    switch(color){
        case Colors::BLACK:
        cout << "BLACK" << endl;
        break;
        case Colors::WHITE:
        cout << "WHITE" << endl;
        break;
        case Colors::RED:
        cout << "RED" << endl;
        break;
        case Colors::GREEN:
        cout << "GREEN" << endl;
        break;
        case Colors::BLUE:
        cout << "BLUE" << endl;
        break;
        default:
        cout << "Undefined" << endl;
    }
    
}

int main()
{
    printColorName(Colors::RED);

    int x;
    cin >> x;

    switch(x)
    {
        case 0:
            cout << "Zero";
            // break;
        case 1:
            cout << "One";
            // break;
        case 2:
            cout << "Two";
            // break;
        default:
            cout << "Undefined";
    }

    cout << endl;

    return 0;
}