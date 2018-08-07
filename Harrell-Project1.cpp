//  Retail_Assistant.cpp
//  Retail Sales Assistant Program
//  Programmer: Brett Harrell
//  Date: 2/2/17
//  Description:  This program calculates sales tax for a series of products.

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double cashDrawer = 500.00;
	int productID = 0;
	int quantity = 0;
	double price = 0.0;
	double subtotal = 0.0;
	double salesTax = 0.0;
	double totalSale = 0.0;
	int anotherSale = 1;
	double taxRate = 0.075;  // default tax rate

	// W e l c o m e  t o  W a l m a r t

	cout << "       W e l c o m e  t o  W a l m a r t" << endl;

	// Loop for repeat sales

	do {

		// Enter the first Product ID for the first sale (-1 to exit)
		cout << "Enter the first Product ID: " << endl;
		cin >> productID;


		// Main loop for each sale
		while (productID != -1)
		{
			if (productID >= 101 && productID <= 110)
			{
				cout << "Enter the quantity: " << endl;
				cin >> quantity;
			}

			// Switch statement to determine the price, and calculate sales tax, if any, for the item.
			switch (productID)
			{
			case 101:
				price = 65.00;
				taxRate = 0.075;
				break;
			case 102:
				price = 12.50;
				taxRate = 0.00;
				break;
			case 103:
				price = 24.50;
				taxRate = 0.00;
				break;
			case 104:
				price = 38.75;
				taxRate = 0.075;
				break;
			case 105:
				price = 17.80;
				taxRate = 0.075;
				break;
			case 106:
				price = 16.50;
				taxRate = 0.00;
				break;
			case 107:
				price = 42.85;
				taxRate = 0.075;
				break;
			case 108:
				price = 32.99;
				taxRate = 0.075;
				break;
			case 109:
				price = 28.75;
				taxRate = 0.075;
				break;
			case 110:
				price = 51.55;
				taxRate = 0.00;
				break;


			default:
				cout << "INVALID PRODUCT ID: PRODUCT ID NOT FOUND." << endl;
				price = 0.0;
				quantity = 0;
				taxRate = 0.0;

			}

			subtotal += price * quantity;
			salesTax += price * quantity * taxRate;
			totalSale = subtotal + salesTax;

			// Get next Product ID
			cout << "Enter the next Product ID: " << endl;
			cin >> productID;

		}
		// Print properly formatted output for each sale
		cout << "Subtotal: $" << fixed << setw(7) << setprecision(2) << subTotal << endl
			<< "	  Tax: $" << setw(7) << salesTax << endl
			<< "	Total: $" << setw(7) << totalSale << endl;


		// Add total sale to the cashdrawer
		cashDrawer += totalSale;

		// Reset for next sale
		subTotal = 0.0;
		salesTax = 0.0;
		totalSale = 0.0;

		// Another sale?

		cout << "Is there another sale?" << endl;
		cin >> anotherSale;
	} while (anotherSale == 1);

	// Display how much is in the cash drawer at the end
	cout << "The total in the cash drawer is: " << cashDrawer << endl;

}