/*

15. A new OLED Smart TV as a gift from a businessman with emmersive 32)62 inch size is arrived 
at occasion of Dashera in the house of Mayer. Now Mayer has to decide that how much of 
minimum wall area (width x hight) will be required to fit that new TV so that even after applying that TV, 
10 inch of margin still available around TV. Help Mayer to identify the solution by using C++. 


*/

#include <iostream>
using namespace std;

int main() {
    const int TV_WIDTH = 32; 
    const int TV_HEIGHT = 62;
    const int MARGIN = 10;   

  
    int wallWidth = TV_WIDTH + (2 * MARGIN);

   
    int wallHeight = TV_HEIGHT + (2 * MARGIN);


    cout << "Minimum wall area required: " << wallWidth << " x " << wallHeight << " inches" << endl;

    return 0;
}

