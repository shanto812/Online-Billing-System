#include <iostream>
#include <string>
using namespace std;

const int MAX_ITEMS = 100;

class OrderItem {
public:
    string itemName;
    int quantity;
    int price;
};

OrderItem orderDetails[MAX_ITEMS];
int orderCount = 0;

void displayOrderSummary();
int returntotalbill();
void deleteOrder();
void deleteItem();

int main() {
    int totalbill;
    totalbill = returntotalbill();

    cout << "Your total bill amount is : " << totalbill << " BDT" << endl;

    cout << "Thanks for your order." << endl;
}

void displayOrderSummary() {
    cout << "--------------- Your Order Summary ---------------" << endl;
    cout << "Item Name \t Quantity \t Bill Amount" << endl;
    cout << "---------------------------------------------------" << endl;
    for (int i = 0; i < orderCount; ++i) {
        cout << orderDetails[i].itemName << "\t\t" << orderDetails[i].quantity << "\t\t" << orderDetails[i].price << " BDT" << endl;
    }
    cout << "Total Bill Amount: " << endl;
}

int returntotalbill() {
    char c;
    char item;
    int vegitem, nonvegitem, quentity;
    int billamount = 0;
    char selectAgain;

    cout << "--------------- Welcome to Online Nub Canteen ---------------" << endl;
    cout << "--------------- Please Follow Instructions ---------------" << endl;
    cout << "Step 1: Please press s to start your order ." << endl;
    cout << "Step 2: You can order both veg items or no veg items ." << endl;
    cout << "Step 3: Please press a to select veg items ." << endl;
    cout << "Step 4: Please press b to select non-veg items." << endl;
    cout << "Step 5: You will get your final bill after your order ." << endl;
    cout << "Step 6: Press d to delete your order and start a new one." << endl;

start:
    cin >> c;
    if (c == 's' || c == 'S') {
    items:
        cout << "Please select your choice items" << endl;
        cout << "(a) Veg Items    (b) No Veg Items" << endl;
        cin >> item;
        if (item == 'a' || item == 'A') {
         vegitemlist:
            cout << "Please select 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 as per your choice." << endl;
            cout << "(1) Panta ilish: Price : BDT-120" << endl;
              cout << "(2) Vegetable Biryani - BDT 220" << endl;
               cout << "(3) Shobji Roast (Mixed Vegetable Curry) - BDT 180" << endl;
               cout << "(4) Vegetable Sweet Corn Soup - BDT 90" << endl;
               cout << "(5) Kachumber Salad (Cucumber, Tomato, Onion) - BDT 90" << endl;
               cout << "(6) Burger: Price : BDT-100" << endl;
               cout << "(7) Gajar Halwa (Carrot Pudding) - BDT 110" << endl; 
                cout << "(8) Vegetable Samosa (4 pieces) - BDT 70" << endl;
                 cout << "(9) Vegetable Spring Rolls (6 pieces) - BDT 100" << endl;
                  cout << "(10) Naan (Plain/Butter/Garlic) - BDT 50" << endl;
                
                

            cin >> vegitem;
            if (vegitem == 1) {
                cout << "Enter quantity: " << endl;
                cin >> quentity;
                billamount = billamount + quentity * 120;
                // Store order details
                orderDetails[orderCount++] = {"Panta Ilish", quentity, quentity * 120};
            }
            else if (vegitem == 2) {
                cout << "Enter quantity: " << endl;
                cin >> quentity;
                billamount = billamount + quentity * 220;
                // Store order details
                orderDetails[orderCount++] = {"Vegetable Biryani", quentity, quentity * 220};
            }
            else if (vegitem == 3) {
                cout << "Enter quantity: " << endl;
                cin >> quentity;
                billamount = billamount + quentity * 180;
                // Store order details
                orderDetails[orderCount++] = {"Shobji Roast (Mixed Vegetable Curry)", quentity, quentity * 180};
            }
            else if (vegitem == 4) {
                cout << "Enter quantity: " << endl;
                cin >> quentity;
                billamount = billamount + quentity * 90;
                // Store order details
                orderDetails[orderCount++] = {"Vegetable Sweet Corn Soup", quentity, quentity * 90};
            }
            else if (vegitem == 5) {
                cout << "Enter quantity: " << endl;
                cin >> quentity;
                billamount = billamount + quentity * 90;
                // Store order details
                orderDetails[orderCount++] = {"Kachumber Salad (Cucumber, Tomato, Onion)", quentity, quentity * 90};
            }
            else if (vegitem == 6) {
                cout << "Enter quantity: " << endl;
                cin >> quentity;
                billamount = billamount + quentity * 100;
                // Store order details
                orderDetails[orderCount++] = {"Burger", quentity, quentity * 100};
            }
            else if (vegitem == 7) {
                cout << "Enter quantity: " << endl;
                cin >> quentity;
                billamount = billamount + quentity * 110;
                // Store order details
                orderDetails[orderCount++] = {"Gajar Halwa (Carrot Pudding)", quentity, quentity * 110};
            }
            else if (vegitem == 8) {
                cout << "Enter quantity: " << endl;
                cin >> quentity;
                billamount = billamount + quentity * 70;
                // Store order details
                orderDetails[orderCount++] = {"Vegetable Samosa (4 pieces)", quentity, quentity * 70};
            }
            else if (vegitem == 9) {
                cout << "Enter quantity: " << endl;
                cin >> quentity;
                billamount = billamount + quentity * 100;
                // Store order details
                orderDetails[orderCount++] = {"Vegetable Spring Rolls (6 pieces)", quentity, quentity * 100};
            }
            else if (vegitem == 10) {
                cout << "Enter quantity: " << endl;
                cin >> quentity;
                billamount = billamount + quentity * 50;
                // Store order details
                orderDetails[orderCount++] = {"Naan (Plain/Butter/Garlic)", quentity, quentity * 50};
            }
            else {
                cout << "You have entered the wrong value, Please try again" << endl;
                goto vegitemlist;
            }
            cout << "Do you want to add more items? Press y or n" << endl;
            cin >> selectAgain;
            if (selectAgain == 'y' || selectAgain == 'Y') {
                goto items;
            }
        }
        else if (item == 'b' || item == 'B') {
            nonvegitemlist:
            cout << "Please select 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 as per your choice." << endl;
            cout << "(1) Butter chicken: Price : BDT-300" << endl;
            cout << "(2) Prawn curry: Price : BDT-250" << endl;
            cout << "(3) Chicken Reshmi Kebab - BDT 180" << endl;
            cout << "(4) Fish Fry - BDT 160" << endl;
            cout << "(5) Prawn Butterfly Fry - BDT 220" << endl;
            cout << "(6) Beef Shami Kebab - BDT 200" << endl;
            cout << "(7) Prawn Butterfly Fry - BDT 220" << endl;
            cout << "(8) Chicken Curry - BDT 280" << endl;
            cout << "(9) Kacchi Biryani - BDT 250" << endl;
            cout << "(10) Polao (Spiced Rice) - BDT 100" << endl;

            cin >> nonvegitem;
            if (nonvegitem == 1) {
                cout << "Enter quantity: " << endl;
                cin >> quentity;
                billamount = billamount + quentity * 300;
                // Store order details
                orderDetails[orderCount++] = {"Butter Chicken", quentity, quentity * 300};
            }
            else if (nonvegitem == 2) {
                cout << "Enter quantity: " << endl;
                cin >> quentity;
                billamount = billamount + quentity * 250;
                // Store order details
                orderDetails[orderCount++] = {"Prawn Curry", quentity, quentity * 250};
            }
            else if (nonvegitem == 3) {
                cout << "Enter quantity: " << endl;
                cin >> quentity;
                billamount = billamount + quentity * 180;
                // Store order details
                orderDetails[orderCount++] = {"Chicken Reshmi Kebab", quentity, quentity * 180};
            }
            else if (nonvegitem == 4) {
                cout << "Enter quantity: " << endl;
                cin >> quentity;
                billamount = billamount + quentity * 160;
                // Store order details
                orderDetails[orderCount++] = {"Fish Fry", quentity, quentity * 160};
            }
            else if (nonvegitem == 5) {
                cout << "Enter quantity: " << endl;
                cin >> quentity;
                billamount = billamount + quentity * 220;
                // Store order details
                orderDetails[orderCount++] = {"Prawn Butterfly Fry", quentity, quentity * 220};
            }
            else if (nonvegitem == 6) {
                cout << "Enter quantity: " << endl;
                cin >> quentity;
                billamount = billamount + quentity * 200;
                // Store order details
                orderDetails[orderCount++] = {"Beef Shami Kebab", quentity, quentity * 200};
            }
            else if (nonvegitem == 7) {
                cout << "Enter quantity: " << endl;
                cin >> quentity;
                billamount = billamount + quentity * 220;
                // Store order details
                orderDetails[orderCount++] = {"Prawn Butterfly Fry", quentity, quentity * 220};
            }
            else if (nonvegitem == 8) {
                cout << "Enter quantity: " << endl;
                cin >> quentity;
                billamount = billamount + quentity * 280;
                // Store order details
                orderDetails[orderCount++] = {"Chicken Curry", quentity, quentity * 280};
            }
            else if (nonvegitem == 9) {
                cout << "Enter quantity: " << endl;
                cin >> quentity;
                billamount = billamount + quentity * 250;
                // Store order details
                orderDetails[orderCount++] = {"Kacchi Biryani", quentity, quentity * 250};
            }else if (nonvegitem == 10) {
                cout << "Enter quantity: " << endl;
                cin >> quentity;
                billamount = billamount + quentity * 100;
                // Store order details
                orderDetails[orderCount++] = {"Polao (Spiced Rice)", quentity, quentity * 100};
            }
            else {
                cout << "You have entered the wrong value, Please try again" << endl;
                goto nonvegitemlist;
            }
            cout << "Do you want to add more items? Press y or n" << endl;
            cin >> selectAgain;
            if (selectAgain == 'y' || selectAgain == 'Y') {
                goto items;
            }
        }

        else {
            cout << "You have entered the wrong value, Please try again" << endl;
            goto items;
        }
    } else {
            cout << "You have entered the wrong value, Please press s to start" << endl;
            goto start;
        }

    if (orderCount > 0) {
        displayOrderSummary();
        cout << "Total Bill Amount: " << billamount << " BDT" << endl;
        cout << "Do you want to delete your order? Press d for deletion, any other key to proceed" << endl;
        char choice;
        cin >> choice;
        if (choice == 'd' || choice == 'D') {
            deleteOrder();
            goto start;
        }
    }
    else {
        cout << "No order placed. Total bill is 0 BDT." << endl;
    }

    return billamount;
}

void deleteOrder() {
      cout << "Enter the item number you want to delete (1-" << orderCount << "): ";

    int itemNumber;
    cin >> itemNumber;

    if (itemNumber < 1 || itemNumber > orderCount) {
        cout << "Invalid item number." << endl;
        return;
    }

    cout << "Item '" << orderDetails[itemNumber - 1].itemName << "' deleted successfully." << endl;

    for (int i = itemNumber - 1; i < orderCount - 1; ++i) {
        orderDetails[i] = orderDetails[i + 1];
    }

    orderCount--;

    cout << "Updated order details:" << endl;
    displayOrderSummary();
}