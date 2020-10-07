#ifndef ORDER_H
#define ORDER_H
#include <iostream>
#include <string>
using namespace std;

class Order{
	private:
		int orderNumber;
		string orderType;
		
	public:
	Order(){
		this->orderNumber=0;
		this->orderType="";
		
}
	
		
	Order(int orderNumber, string orderType)
	{
		this->orderNumber=orderNumber;
		this->orderType=orderType;
	}
	
	void setOrderNumber(int orderNumber)
	{
		this->orderNumber=orderNumber;
		
		
		}	
	int getOrderNumber(int orderNumber)
	{
		return this-> orderNumber;
	}
		
	void setOrderType(string orderType )
	{
		this->orderType=orderType;
		
	}
	string getOrderType(string orderType)
	{
		return this->orderType;
	}

	
	
		};
		#endif
