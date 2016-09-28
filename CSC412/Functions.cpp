#include <iostream>
using namespace std;


void showMenu(){

cout << "1. Search \n";
cout << "2. View Record \n";
cout << "3. Quit\n";

cout << " Please enter a selection: ";
}

int  output(int input) {

switch(input){

case 1: 
    cout << " \n Searching . . . \n";
    break;
case 2: 
    cout << "\n Viewing Record . . . \n";
    break;
case 3:
    cout << "\namespace Quiting . . . \n";
    break;
default: 
    cout << "\n Invalid character, Please try again! \n";

return input;

}


}

int main() {

showMenu();
int input;
cin >> input;

output(input);

return 0;
}




    
