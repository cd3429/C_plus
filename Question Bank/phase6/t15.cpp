/*

15. Calculate toal coast to apply a Solar Powered Panels
for your Home Rooftop. Apply all types of government aid
percentage to find reasonable coast.

*/

#include <iostream>

using namespace std;

int main()
{
    const double panelCost = 50000; // cost of one solar panel
    const double installationCost = 10000; // cost of installation per panel
    double totalPanels; // total number of panels required
    double totalCost; // total cost of installation
    double governmentAid = 0.3; // percentage of government aid

    // prompt the user for the total number of panels required
    cout << "Enter the total number of solar panels required: ";
    cin >> totalPanels;

    // calculate the total cost of installation
    totalCost = (panelCost * totalPanels) + (installationCost * totalPanels);
    
    // apply government aid
    totalCost -= totalCost * governmentAid;

    // display the total cost of installation after government aid
    cout << "Total cost of installing solar panels after government aid: " << totalCost << " INR" << endl;

    return 0;
}


