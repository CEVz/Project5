#pragma once

#include "Disc.h"

bool Disc::isEmpty() const {

	return !itemCount;

}

int Disc::getNumberOfTracks() const{

	return itemCount;

}

bool Disc::inserTrack(Track* trackPtr) {

	return 0;

}

Track* Disc::retrieveTrackByNumber(int trackNumber) const {

	return trackNumber;

}

std::string Disc::getArtist() const {

	return artist;

}

