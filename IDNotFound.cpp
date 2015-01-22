/*
* IDnotFound.cpp
* By Pedro Garate on 10/28/2014
* Description: This program uses two arrays, one to store products
*              and another to store product ID's. The function
*              getProductID takes as input the two arrays, the length
*              of the arrays, and a target product to search for. It
*              then loops through the product name array and if a
*              match is found it returns the corresponding product ID.
*/

#include "IDnotFound.h"
#include <string>

// Exception. ID not found
const char* Exception_ID_Not_Found::what() const throw()
{
	return "ID not found. Product not in the array.";
}// end Exception_ID_Not_Found

// get productID if product found
int getProductID(int ids[], string names[], int numProducts, string target)
{
	Exception_ID_Not_Found e_not_found;

	for (int i = 0; i < numProducts; i++)
	{
		if (names[i] == target)
			return ids[i]; // return ID
	}// end for
	throw e_not_found; // product not found
}// end of getProductID
