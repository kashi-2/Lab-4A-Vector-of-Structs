#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <iomanip> 
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
    
    vector<Color> colors;
   
    srand(time(0));
    
    // random # n between 25 and 50
    int n = rand() % 26 + 25;

    //need to populate vector with n random color objects
    for (int i = 0; i < n; i++)
    {
        Color temp;
        
        temp.red = rand() % 256;
        temp.green = rand() % 256;
        temp.blue = rand() % 256;

         colors.push_back(temp);
    }
   
    //table header 
    cout << "\nGenerated " << n << " Colors\n\n";
   

   cout << left
        << setw(10) << "Index"
        << setw(10) << "Red"
        << setw(10) << "Green"
        << setw(10) << "Blue"
        << endl;

        cout << string(40, '-') << endl;
    //outputing vector contents in a table format
   for (int i = 0; i < colors.size(); i++)
   {
    cout << left 
    << setw(10) << i
    << setw(10) << colors[i].red
    << setw(10) << colors[i].green
    << setw(10) << colors[i].blue
    << endl;
   }

    return 0;
}