#include <iostream>
using namespace std;

int main() {
    char packageType;
    string subscription, vege, proceed, item;
    double vegePrice = 0.0, totalItemPrice = 0.0, totalVegePrice = 0.0, totalPrice = 0.0, oneItemPrice = 0.0;
    int packageQuantity, itemQuantity;

    cout << "Welcome to Sunway XFarm\n";
    cout << "Would you like to subscribe to this product? (yes/no): ";
    cin >> subscription;

    if (subscription == "yes") {
        cout << "You have successfully subscribed." << endl;
    } else if (subscription == "no") {
        cout << "You have decided not to subscribe." << endl;
        return 1;
    } else {
        cout << "Invalid input for subscription." << endl;
        return 1;
    }

    cout << " [M] Monthly Growner\n";
    cout << " [A] Annual Growner\n";
    cout << "Please select the package Type: ";
    cin >> packageType;

    cout << "Please choose your preferred items by entering number: ";
    cin >> proceed;

    if ((packageType == 'M' || packageType == 'm') && proceed == "1") {
        // Monthly Growner 1 leafy
        // Min 0.75KG of leafy vegetables
        // Suitable for 2-3 pax household
        cout << "Monthly Growner 1 leafy" << endl;
        cout << "Min 0.75KG of leafy vegetables" << endl;
        cout << "Suitable for 2-3 pax household" << endl;
        cout << "Please choose one preferred item:" << endl;

        int vegeChoice;
        cout << " [1] for Salad Lettuces" << endl;
        cout << " [2] for Hearty Asian Greens" << endl;
        cout << " [3] for Salad & Asian Mix" << endl;
        cout << "Please select the item you want by entering the number: ";
        cin >> vegeChoice;

        switch (vegeChoice) {
            case 1:
                vege = "Salad Lettuces";
                vegePrice = 105;
                break;
            case 2:
                vege = "Hearty Asian Greens";
                vegePrice = 105;
                break;
            case 3:
                vege = "Salad & Asian Mix";
                vegePrice = 105;
                break;
            default:
                cout << "Invalid choice" << endl;
                return 1;
        }
    } else if ((packageType == 'M' || packageType == 'm') && proceed == "2") {
        // Monthly Growner 2 leafy
        // Min 1.5KG of leafy vegetables
        // Suitable for 4-6 pax household
        cout << "Monthly Growner 2 leafy" << endl;
        cout << "Min 1.5KG of leafy vegetables" << endl;
        cout << "Suitable for 4-6 pax household" << endl;
        cout << "Please choose one preferred item:" << endl;

        int vegeChoice;
        cout << " [1] for Salad Lettuces" << endl;
        cout << " [2] for Hearty Asian Greens" << endl;
        cout << " [3] for Salad & Asian Mix" << endl;
        cout << "Please select the item you want by entering the number: ";
        cin >> vegeChoice;

        switch (vegeChoice) {
            case 1:
                vege = "Salad Lettuces";
                vegePrice = 189;
                break;
            case 2:
                vege = "Hearty Asian Greens";
                vegePrice = 189;
                break;
            case 3:
                vege = "Salad & Asian Mix";
                vegePrice = 189;
                break;
            default:
                cout << "Invalid choice" << endl;
                return 1;
        }
    } else if ((packageType == 'M' || packageType == 'm') && proceed == "3") {
        // Monthly Growner 3 leafy
        // Min 2.2KG of leafy vegetables
        // Suitable for 7-10 pax household
        cout << "Monthly Growner 3 leafy" << endl;
        cout << "2.2KG of leafy vegetables" << endl;
        cout << "Suitable for 7-10 pax household" << endl;
        cout << "Please choose one preferred item:" << endl;

        int vegeChoice;
        cout << " [1] for Salad Lettuces" << endl;
        cout << " [2] for Hearty Asian Greens" << endl;
        cout << " [3] for Salad & Asian Mix" << endl;
        cout << "Please select the item you want by entering the number: ";
        cin >> vegeChoice;

        switch (vegeChoice) {
            case 1:
                vege = "Salad Lettuces";
                vegePrice = 270;
                break;
            case 2:
                vege = "Hearty Asian Greens";
                vegePrice = 270;
                break;
            case 3:
                vege = "Salad & Asian Mix";
                vegePrice = 270;
                break;
            default:
                cout << "Invalid choice" << endl;
                return 1;
        }
    } else if ((packageType == 'M' || packageType == 'm') && proceed == "4") {
        // Monthly Growner 1 Fruity
        // Min 1.7KG of fruity vegetables
        // Suitable for 2-3 pax household
        cout << "Monthly Growner 1 Fruity" << endl;
        cout << "Min 1.7KG of fruity vegetables" << endl;
        cout << "Suitable for 2-3 pax household" << endl;
        cout << "This package include :" << endl;
        cout << "a) Red/Yellow Capsicums" << endl;
        cout << "b) Tomatoes/Cherry Tomatoes" << endl;
        cout << "c) Green/Red Chilli" << endl;
        cout << "d) English/Cocktail Cucumber" << endl;
        cout << "Please enter proceed to continue (yes/no): ";
        cin >> proceed;

        if (proceed == "yes") {
            cout << "You have successfully confirmed to buy Monthly Growner 1 Fruity\n";
            vegePrice = 120;
        } else if (proceed == "no") {
            cout << "You have decided not to buy Monthly Growner 1 Fruity\n" << endl;
            return 1;
        } else {
            cout << "Invalid input for proceeding." << endl;
            return 1;
        }
    } else if ((packageType == 'M' || packageType == 'm') && proceed == "5") {
        // Monthly Growner 2 Fruity
        // Min 3.4KG of fruity vegetables
        // Suitable for 4-6 pax household
        cout << "Monthly Growner 2 Fruity" << endl;
        cout << "Min 3.4KG of fruity vegetables" << endl;
        cout << "Suitable for 4-6 pax household" << endl;
        cout << "This package include :" << endl;
        cout << "a) Red/Yellow Capsicums" << endl;
        cout << "b) Tomatoes/Cherry Tomatoes" << endl;
        cout << "c) Green/Red Chilli" << endl;
        cout << "d) English/Cocktail Cucumber" << endl;
        cout << "Please enter proceed to continue (yes/no): ";
        cin >> proceed;

        if (proceed == "yes") {
            cout << "You have successfully confirmed to buy Monthly Growner 2 Fruity\n";
            vegePrice = 240;
        } else if (proceed == "no") {
            cout << "You have decided not to buy Monthly Growner 2 Fruity\n" << endl;
            return 1;
        } else {
            cout << "Invalid input for proceeding." << endl;
            return 1;
        }
    } else if ((packageType == 'A' || packageType == 'a') && proceed == "1") {
        // Annual Growner 1 Leafy
        // Min 0.75KG of leafy vegetables
        // Suitable for 2-3 pax household
        cout << "Annual Growner 1 Leafy" << endl;
        cout << "Min 0.75KG of leafy vegetables" << endl;
        cout << "Suitable for 2-3 pax household" << endl;
        cout << "Please choose one preferred item:" << endl;

        int vegeChoice;
        cout << " [1] for Salad Lettuces" << endl;
        cout << " [2] for Hearty Asian Greens" << endl;
        cout << " [3] for Salad & Asian Mix" << endl;
        cout << "Please select the item you want by entering the number: ";
        cin >> vegeChoice;

        switch (vegeChoice) {
            case 1:
                vege = "Salad Lettuces";
                vegePrice = 1200;
                break;
            case 2:
                vege = "Hearty Asian Greens";
                vegePrice = 1200;
                break;
            case 3:
                vege = "Salad & Asian Mix";
                vegePrice = 1200;
                break;
            default:
                cout << "Invalid choice" << endl;
                return 1;
        }
    } else {
        cout << "Invalid input" << endl;
        return 1;
    }

    // Enter the package quantity
    cout << "Please enter the quantity of package you need: ";
    cin >> packageQuantity;

    // Additional item
    cout << "Would you like to buy additional items (yes/no): ";
    cin >> proceed;

    if (proceed == "yes") {
        cout << "You have chosen to buy additional items." << endl;

        int choose;
        cout << " [1] Farm Kit" << endl;
        cout << " [2] Compost Kit" << endl;
        cout << " [3] Microgreens Kit" << endl;
        cout << "Please enter the items you need by entering number: ";
        cin >> choose;

        switch (choose) {
            case 1:
                item = "Farm Kit";
                oneItemPrice = 19;
                cout << "This Package includes:" << endl;
                cout << "a) 1 packet Pak Choy seeds" << endl;
                cout << "b) 2 netpot holder rings" << endl;
                cout << "c) Clay pebbles" << endl;
                cout << "d) Netpot" << endl;
                cout << "e) 4 sponges" << endl;
                break;

            case 2:
                item = "Compost Kit";
                oneItemPrice = 49;
                cout << "This Package includes:" << endl;
                cout << "a) Compost bag" << endl;
                cout << "b) 1 pack of bokashi powder" << endl;
                cout << "c) 1 set of tools" << endl;
                break;

            case 3:
                item = "Microgreens Kit";
                oneItemPrice = 35;
                cout << "This Package includes:" << endl;
                cout << "a) 2 types of microgreen seeds" << endl;
                cout << "b) Peatmoss" << endl;
                cout << "c) Gardening tool" << endl;
                cout << "d) Grow Tray" << endl;
                cout << "e) Grow Guide" << endl;
                break;

            default:
                cout << "Invalid choice" << endl;
                return 1;
        }
    } else if (proceed == "no") {
        // If not buying additional items
        totalVegePrice = vegePrice * packageQuantity;
    } else {
        cout << "Invalid input for items." << endl;
        return 1;
    }

    if (proceed == "yes") {
        // Enter the item quantity
        cout << "Please enter the quantity of items you need: ";
        cin >> itemQuantity;
    }

    // Calculate the total price for vegetables
    totalVegePrice = vegePrice * packageQuantity;

    // Calculate the total price for items if applicable
    if (proceed == "yes") {
        totalItemPrice = oneItemPrice * itemQuantity;
    }

    // Calculate the grand total
    totalPrice = totalVegePrice + totalItemPrice;

    // Display the selected items and quantities
    cout << "You have selected " << packageQuantity << " package(s) of " << vege << " for RM " << totalVegePrice << endl;
    if (proceed == "yes") {
        cout << "You have selected " << itemQuantity << " item(s) of " << item << " for RM " << totalItemPrice << endl;
    }

    // Display the subtotal
    cout << "Subtotal: RM " << totalPrice << endl;

   return 0;
}
