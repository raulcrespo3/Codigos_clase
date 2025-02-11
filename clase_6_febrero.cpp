#include <iostream>
#include <cmath>
#include <string> 
#include <vector>

using namespace std; 



 class Player
 {
    public:
    //atributes
string name{"Player"}; 
int age{0};
int experience{3};  

    //methods
void talk(string text_to_say){cout << name << " says " << text_to_say << endl;}
void year(int); 

};

class Account{
//atributes
public:
string name; 
double balance; 

//methodes
void deposit(double bal){balance += bal; cout << "In deposit"<< endl;}  
void withdraw(double bal){balance -= bal; cout << "In withdraw"<< endl;}

}; 

int main(){

Account raul_account; 
raul_account.name = "Raul's account"; 
raul_account.balance = 5000.0; 

raul_account.deposit(1000.0);  
raul_account.withdraw(500.0); 



Player raul; 
raul.name = "Raul"; 
raul.age = 21; 
raul.experience = 5; 
raul.talk("hi there"); 



return 0; 
}