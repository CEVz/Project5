#pragma once

#include "DiscList.h"

bool DiscList::isEmpty() const {

	return !itemCount;

}

int DiscList::getNumberOfDiscs() const {

	return itemCount;

}

bool DiscList::insertDisc(Disc* aDiscPtr) {


	

}

bool DiscList::removeDisc(Disc* aDiscPtr) {

	return 0;

}

Disc* DiscList::retrieveDisc(int number) const {

	return discListPtr;

}

int DiscList::findDiscPosition(Disc* discPtr) const {

	return 0;

}