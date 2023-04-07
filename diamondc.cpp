#include <iostream>
#include <string>
using namespace std;

class DiamondCompany {

    int comp_id;
    string comp_name;
    int comp_staff_quantity;
    double comp_revenue;
    int comp_import_raw_diamonds;
    int comp_export_diamonds;
    string comp_ceo;
		
		public:
		    DiamondCompanyb(int id, string name, int staff_quantity, double revenue, int import_raw_diamonds, int export_diamonds, string ceo) {
		        comp_id = id;
		        comp_name = name;
		        comp_staff_quantity = staff_quantity;
		        comp_revenue = revenue;
		        comp_import_raw_diamonds = import_raw_diamonds;
		        comp_export_diamonds = export_diamonds;
		        comp_ceo = ceo;
		    }
		
		    void display() {
		        cout << "Company ID: " << comp_id << endl;
		        cout << "Company Name: " << comp_name << endl;
		        cout << "Staff Quantity: " << comp_staff_quantity << endl;
		        cout << "Revenue: $" << comp_revenue << " per year" << endl;
		        cout << "Raw Diamonds Imported: " << comp_import_raw_diamonds << " per year" << endl;
		        cout << "Diamonds Exported: " << comp_export_diamonds << " per year" << endl;
		        cout << "CEO: " << comp_ceo << endl;
		    }
};


int main() {
	
    int n;
    cout << "Enter the number of Diamond Companies: ";
    cin >> n;

    DiamondCompany dc[n];

    for (int i = 0; i < n; i++) {
        int id, staff_quantity, import_raw_diamonds, export_diamonds;
        double revenue;
        string name, ceo;

        cout << endl << "Enter details for Company " << i+1 << ":" << endl;
        cout << "Company ID: ";
        cin >> id;
        cout << "Company Name: ";
        cin >> name;
        cout << "Staff Quantity: ";
        cin >> staff_quantity;
        cout << "Revenue (per year): $";
        cin >> revenue;
        cout << "Raw Diamonds Imported (per year): ";
        cin >> import_raw_diamonds;
        cout << "Diamonds Exported (per year): ";
        cin >> export_diamonds;
        cout << "CEO: ";
        cin >> ceo;

        dc[i].DiamondCompanyb(id, name, staff_quantity, revenue, import_raw_diamonds, export_diamonds, ceo);
        dc[i].display() ;
    }

    cout << endl << "Details of " << n << " Diamond Companies:" << endl;
    for (int i = 0; i < n; i++) {
        cout << endl << "Company " << i+1 << ":" << endl;
        dc[i].display();
    }

    return 0;
}

