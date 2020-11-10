#pragma once

#include "LinkedList.h"
#include "Disc.h"
#include "Track.h"

class DiscList {

private:
	
	LinkedList<Disc*>* discListPtr;

public:

	bool isEmpty() const;

	int getNumberOfDiscs() const;

	bool insertDisc(Disc* aDiscPtr);

	bool removeDisc(Disc* aDiscPtr);

	Disc* retrieveDisc(int number) const;

	int findDiscPosition(Disc* discPtr) const;
};