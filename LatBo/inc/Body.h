#pragma once
#include <vector>
#include "GridUtils.h"

// Markers may be of different types depending on the body
template <typename MarkerType>

/** Represents a general body **/
class Body
{

	// Default Constructor / Destructor //
public:
	Body(void)
	{
	};
	~Body(void)
	{
	};

	Body(GridObj* g)
	{
		this->_Owner = g;
	};

	// Protected Members //

protected:
	double spacing;						// Spacing of the markers in physical units
	std::vector<MarkerType> markers;	// Array of markers which make up the body
	bool closed_surface;				// Flag to specify whether or not it is a closed surface (for output)
	GridObj* _Owner;					// Pointer to owning grid
	

	// Methods //

	// Add marker to the body
	void addMarker(double x, double y, double z)
	{
		markers.emplace_back(x, y, z);	// Add a new marker object to the array
	}

};


#include <iostream>

using namespace std;





