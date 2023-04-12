#include <iostream>
using namespace std;
  int main() {
    string pass, user, username, passward, choice;
    double money, current = 2000;
    cout << "Hello There! Welcome to the app" << endl;
    cout << "Create Your new account" << endl;
    cout << "Enter a username" << endl;
    cin >> user;
    cout << "Enter your Passward" << endl;
    cin >> pass;
    cout << "Confiramtion Page" << endl;
    cout << "Username" << endl;
    cin >> username;
    cout << "Passward" << endl;
    cin >> passward;
    while (username != user || passward != pass) {
      cout << "Wrong username or passward Please re-enter your details" << endl;
      cout << "Username" << endl;
      cin >> username;
      cout << "Passward" << endl;
      cin >> passward;
    }
    cout << "Welcome!! " << endl;
    cout << "" << endl;
    cout << "Currnet your balance is 2000 INR" << endl;
    cout << "Do you want to add money to balance" << endl;
    cin >> choice;
    if (choice == "yes") {
      cout << "Enter Your amount:" << endl;
      cin >> money;
      cout << "Your current balance is " << money + current << " INR" << endl;
    } else {
      cout << "Alright" << endl;
    }

    cout << "Do You want to order Food:" << endl;
    string option;
    cin >> option;

    if (option == "yes") {

      string foodtype[4] = {"Pizza", "Burger", "Pasta", "Sandwich"};
      double foodprice[4] = {400, 250, 100, 150};
      cout << "1." << foodtype[0] << "-" << foodprice[0] << " INR" << endl;
      cout << "2." << foodtype[1] << "-" << foodprice[1] << " INR" << endl;
      cout << "3." << foodtype[2] << "-" << foodprice[2] << " INR" << endl;
      cout << "4." << foodtype[3] << "-" << foodprice[3] << " INR" << endl;

      int option1;
      cout << "Enter a int number return before a specific food" << endl;
      cin >> option1;
      while (option1 > 4 || option1 < 1) {
        cout << "Wrong food selected" << endl;
        cout << "Please select your food again" << endl;
        cin >> option1;
      }
      if (option1 == 1) {
        cout << "You have ordered: " << foodtype[0] << endl;
        cout << "You have cost Rs. " << foodprice[0] << endl;
        cout << "You have " << money + current - foodprice[0] << " INR left"
             << endl;
      } else if (option1 == 2) {
        cout << "You have ordered: " << foodtype[1] << endl;
        cout << "You have cost Rs. " << foodprice[1] << endl;
        cout << "You have" << money + current - foodprice[1] << " INR left"
             << endl;
      } else if (option1 == 3) {
        cout << "You have ordered: " << foodtype[2] << endl;
        cout << "You have cost Rs. " << foodprice[2] << endl;
        cout << "You have" << money + current - foodprice[2] << " INR left"
             << endl;
      } else if (option1 == 4) {
        cout << "You have ordered: " << foodtype[3] << endl;
        cout << "You have cost Rs. " << foodprice[3] << endl;
        cout << "You have" << money + current - foodprice[3] << " INR left"
             << endl;
      }
    } else {
      cout << "Alright! Have a good day" << endl;
    }

    cout << "Thanks for using our app" << endl;
    return 0;
  }
