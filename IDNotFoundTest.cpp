/*
* IDNotFoundTest.cpp
* by Pedro Garate on 10/28/2014
* Description: Test file for IDNotFound.cpp
*/

#include "IDnotFound.h"
#include <iostream>
#include <exception>

using namespace std;

int main()
{
	// Sample code to test the getProductID function
	int productIds[] = { 4, 5, 8, 10, 13, -1 };
	string products[] = { "computer", "flash drive", "mouse", "printer", "camera", "pencil" };

	//using separate try-catch blocks to avoid mid-program interruption.
	try
	{
		cout << "\"mouse\"\t\t -- Product ID: ";
		cout << getProductID(productIds, products, 6, "mouse") << endl;
	}
	catch (exception & e)
	{
		cerr << e.what() << endl;
	}

	try // testing the use of -1 as a product ID
	{
		cout << "\"pencil\"\t -- Product ID: ";
		cout << getProductID(productIds, products, 6, "pencil") << endl;
	}
	catch (exception & e)
	{
		cerr << e.what() << endl;
	}

	try
	{
		cout << "\"camera\"\t -- Product ID: ";
		cout << getProductID(productIds, products, 6, "camera") << endl;
	}
	catch (exception & e)
	{
		cerr << e.what() << endl;
	}

	try // testing "not found"
	{
		cout << "\"car\"\t\t -- Product ID: ";
		cout << getProductID(productIds, products, 6, "car") << endl;
	}
	catch (exception & e)
	{
		cerr << e.what() << endl;
	}

	try
	{
		cout << "\"flash drive\"\t -- Product ID: ";
		cout << getProductID(productIds, products, 6, "flash drive") << endl;
	}
	catch (exception & e)
	{
		cerr << e.what() << endl;
	}

	try
	{
		cout << "\"printer\"\t -- Product ID: ";
		cout << getProductID(productIds, products, 6, "printer") << endl;
	}
	catch (exception & e)
	{
		cerr << e.what() << endl;
	}

	return EXIT_SUCCESS;
}// end of main()
