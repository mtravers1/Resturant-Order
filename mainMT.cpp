#include <iostream>
#include "Drink.h"
#include "Food.h"
using namespace std;
int main(){
    Food item1=Food(1, "Dine-in", "Appetizer", "Fried Caramari", 1, 6.95);
   
    
    Food item2=Food(1, "Dine-In", "Entree", "Grilled Salmon", 2, 15.99);
    
    Drink item3 = Drink("Coke", 3, 1.95, 1, "Drink");
    
    cout<<"Billing Summary - "<<endl<<"Order Number: "<<item1.getOrderNumber()<<endl;
    cout<<"Order Type: "<<item1.getOrderType()<<endl;
    cout<<"Food Type: "<<item1.getfoodType()<<endl;
    cout<<"Food Name: "<<item1.getfoodName()<<endl;
    cout<<"Price: "<<item1.getprice()<<endl;
    cout<<"Quantity: "<<item1.getquantity()<<endl<<endl<<endl;
    cout<<"Order Number: "<<item2.getOrderNumber()<<endl;
    cout<<"Order Type: "<<item2.getOrderType()<<endl;
    cout<<"Food Type: "<<item2.getfoodType()<<endl;
    cout<<"Food Name: "<<item2.getfoodName()<<endl;
    cout<<"Price: " <<item2.getprice()<<endl;
    cout<<"Quantity: "<<item2.getquantity()<<endl<<endl<<endl;
	cout<<"Drink: "<<item3.getdrinkName()<<endl;
	cout<<"Drink Quantity: "<<item3.getquantityd()<<endl; 
	cout<<"Drink Price: "<<item3.getpriced()<<endl<<endl;
	cout<<"Total: "<<item1.subtotal()+item2.subtotal()+item3.subtotal()<<endl;
	


    



	
	return 0;
}





