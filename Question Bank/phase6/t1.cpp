/*

1. Create an Add to Cart system for only Grocery Items such as: • Breads, Wheat, Milk, Soup, Frozen Foods, Cheese. 
Customer can buy these items in any quantity he/she wants. A customer can add/update/delete any item in any quantity whenever he/she wants. 
Give customer a final bill including all types of TAX on total price. Identify if a customer can pay bill or not with his/her available wallet amount. 

*/

#include <iostream>
#include <string>

using namespace std;

const int MAX_ITEMS = 10;

class GroceryCart {
private:
    string items[MAX_ITEMS];
    double prices[MAX_ITEMS];
    int quantities[MAX_ITEMS];
    double taxRate;
    int itemCount;
public:
    GroceryCart(double taxRate) {
        this->taxRate = taxRate;
        itemCount = 0;
    }

    void addItem(string itemName, double price, int quantity) {
        if (itemCount >= MAX_ITEMS) {
            cout << "Sorry, the cart is full. Cannot add more items." << endl;
            return;
        }

        items[itemCount] = itemName;
        prices[itemCount] = price;
        quantities[itemCount] = quantity;
        itemCount++;

        cout << "Added " << quantity << " " << itemName << "(s) to the cart." << endl;
    }

    void removeItem(string itemName, int quantity) {
        for (int i = 0; i < itemCount; i++) {
            if (items[i] == itemName) {
                if (quantities[i] >= quantity) {
                    quantities[i] -= quantity;
                    cout << "Removed " << quantity << " " << itemName << "(s) from the cart." << endl;
                }
                else {
                    cout << "Sorry, there are not enough " << itemName << "(s) in the cart to remove." << endl;
                }
                return;
            }
        }

        cout << "Sorry, " << itemName << " not found in the cart." << endl;
    }

    double calculateSubtotal() {
        double subtotal = 0;
        for (int i = 0; i < itemCount; i++) {
            subtotal += prices[i] * quantities[i];
        }
        return subtotal;
    }

    double calculateTax() {
        return calculateSubtotal() * taxRate;
    }

    double calculateTotal() {
        return calculateSubtotal() + calculateTax();
    }

    bool canPay(double walletAmount) {
        return walletAmount >= calculateTotal();
    }

    void generateBill() {
        cout << "Item\t\tPrice\tQuantity\tTotal" << endl;
        for (int i = 0; i < itemCount; i++) {
            cout << items[i] << "\t$" << prices[i] << "\t" << quantities[i] << "\t\t$" << prices[i] * quantities[i] << endl;
        }
        cout << "Subtotal: $" << calculateSubtotal() << endl;
        cout << "Tax: $" << calculateTax() << endl;
        cout << "Total: $" << calculateTotal() << endl;
    }
};

int main() {
    GroceryCart cart(0.08);

    cart.addItem("Bread", 2.99, 3);
    cart.addItem("Milk", 3.49, 2);
    cart.addItem("Cheese", 5.99, 1);

    cart.removeItem("Bread", 2);
    cart.removeItem("Soup", 1);

    cart.generateBill();

    double walletAmount1 = 20.0;
    if (cart.canPay(walletAmount1)) {
        cout << "You can pay the bill" << endl;
    }
    else {
        cout << "You cannot pay the bill" << endl;
    }

    cart.removeItem("Milk", 3);

    double walletAmount2 = 10.0;
    if (cart.canPay(walletAmount2)) {
        cout << "You can pay the bill" << endl;
    }
    else {
        cout << "You cannot pay the bill" << endl;
	}

cart.generateBill();

return 0;

}

