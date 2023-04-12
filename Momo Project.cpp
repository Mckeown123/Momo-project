#include <iostream>
#include <string>
using namespace std;

int main() 
{
    const int Defaultpin = 0000;
    int entries = 0;
    int select;
    string reference;
    int pin;
    int new_pin;
    string Mobilenumber;
    float amount;
    long int balance = 1000;
    
    cout << "Main Menu" << endl;
    cout << "1. Send Money" << endl;
    cout << "2. Reset Momo Pin" << endl;
    cout << "3. Check Mobile Money Balance" << endl;
    cout << "4. Account Details" << endl;
    cout << "5. Authenticate" << endl;
    cout<<"Enter your choice"<<endl;
    cin >> select;
    
    if (select == 1) 
    {
        do {
            cout << "Enter a 10 digit Mobile number" << endl;
            cin >> Mobilenumber;
            
            if (Mobilenumber.length() == 10) {
                cout << "Enter Amount To Send" << endl;
                cin >> amount;
                cout << "Send " << amount << " to " << Mobilenumber << endl;
                cout << "Enter Reference" << endl;
                cin >> reference;
                
                do {
                    cout << "Enter your Pin:" << endl;
                    cin >> pin;
                    entries++;
                    if (pin != Defaultpin) {
                        cout << "Invalid PIN. Re-enter PIN" << endl;
                    }
                } while (pin != Defaultpin && entries < 3);
                
                if (pin == Defaultpin) {
                    cout << "Payment of " << amount << " has been made to " << Mobilenumber << endl;
                }
            } else {
                cout << "Invalid Number" << endl;
            }
            
        } while (Mobilenumber.length() != 10);
    } else if(select == 2) {
        cout << "Enter old Pin: " << endl;
        cin >> pin;
        if(pin == Defaultpin) {
            do {
                cout << "Enter New Pin (4 digits): " << endl;
                cin >> new_pin;
                if (new_pin < 1000 || new_pin > 9999) {
                    cout << "Invalid PIN. Re-enter PIN" << endl;
                }
            } while (new_pin < 1000 || new_pin > 9999);
            cout << "PIN reset successful" << endl;
        } else {
            cout << "Invalid PIN. PIN reset failed." << endl;
        }
    }
    else if (select == 3) {
        do {
            cout << "Enter your Momo Pin: " << endl;
            cin >> pin;
            entries++;
            if (pin != Defaultpin) {
                cout << "Invalid PIN. Re-enter PIN: " << endl;
            }
        } while (pin != Defaultpin && entries < 3);
        
        if (pin == Defaultpin) {
            cout << "Current Balance: " << balance << endl;
        } else {
            cout << "Invalid PIN" << endl;
        }
    } else if (select == 4) 
    {
        cout << "1. Name" << endl;
        cout << "2. Next of Kin" << endl;
        cin >> select;
        if (select == 1) 
        { cout<<"Mckeown Ofori Ahenkora"<<endl;
        
        } 
        else if (select == 2)
		{
			cout<<"Morris kwadwo Ahenkora"<<endl;
		}
	}
	else if (select == 5) {
    do {
        cout << "Enter PIN: ";
        cin >> pin;
        entries++;
        if (pin != Defaultpin) {
            cout << "Invalid PIN. Re-enter PIN" << endl;
        } else {
            cout << "Authentication successful!" << endl;
        }
    } while (pin != Defaultpin && entries < 3);
}
return 0;
}			

#18270103


