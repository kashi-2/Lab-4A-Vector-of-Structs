#include <iostream>

using namespace std;

// Struct Definition
struct Color
{
    int red;
    int green;
    int blue;
};

int main()
{
    // Milestone 1
    Color testColor;

    testColor.red = 255;
    testColor.green = 128;
    testColor.blue = 64;

    // Output
    cout << "Color Values:" << endl;
    cout << "Red:   " << testColor.red << endl;
    cout << "Green: " << testColor.green << endl;
    cout << "Blue:  " << testColor.blue << endl;

    return 0;
}