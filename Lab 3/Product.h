#ifndef PRODUCT_H
#define PRODUCT_H
using namespace std;

class Product {
	private: //Private data members
		string name;
		double price;
		int quantity;
	public: //Public Methods
		//Setters
		void setName(string n)
		{
			if (!n.empty()) {
				name = n; }
			else {
			    cout << "Invalid name. Name cannot be empty." << endl; }
		}
		void setPrice(double p)
		{
			if (p>0) { 
			    price = p; }
			else {
				cout << "Invalid price. Price cannot be zero or less than zero." << endl; } 
		}
		void setQuantity(int q) 
		{
			if (q>=0) {
				quantity = q; }
		    else {
		    	cout << "Invalid quantity. Quantity cannot be negative." << endl; }
		}
		//Getters
		string getName() {
			return name; }
		double getPrice() {
		    return price; }
		int getQuantity() {
		    return quantity; }
};
#endif
