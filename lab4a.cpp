#include <iostream>
#include <vector>

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
    // Milestone 2
    vector<Color> colors;
   
    //below is the color object
    Color testColor;
    testColor.red = 100;
    testColor.green = 150;
    testColor.blue = 200;

    colors.push_back(testColor);

    // Output vector stuff below change
    cout << "Vector contains the following color:\n"; 
    cout << "Red:   " << colors[0].red << endl;
    cout << "Green: " << colors[0].green << endl;
    cout << "Blue:  " << colors[0].blue << endl;

    return 0;
}