#include <iostream>

using namespace std; 

struct Color
{
    int red;
    int green;
    int blue;
};

int main()
{
    Color testColor; 

    testColor.red = 255;
    testColor.green = 128;
    testColor.blue = 64;

    cout << "Color Values:" << endl;
    cout << "Red:   " << testColor.red << endl;
    cout << "Green: " << testColor.green << endl;
    cout << "Blue:  " << testColor.blue << endl;

    return 0;
}