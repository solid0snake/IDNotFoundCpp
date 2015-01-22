/*
* IDnotFound.h
* By Pedro Garate on 10/28/2014
* Description: This program uses two arrays, one to store products
*              and another to store product ID's. The function
*              getProductID takes as input the two arrays, the length
*              of the arrays, and a target product to search for. It
*              then loops through the product name array and if a
*              match is found it returns the corresponding product ID.
*/

#ifndef _ID_NOT_FOUND_H
#define _ID_NOT_FOUND_H

#include <string>

using namespace std;

class Exception_ID_Not_Found : public exception
{
public:
	virtual const char* what() const throw();
};// end Exception_ID_Not _Found

// return product ID if product is found, else throws exception.
int getProductID(int ids[], string names[], int numProducts, string target);

#endif
