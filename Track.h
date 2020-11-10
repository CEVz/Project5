#pragma once

#include <string>

#include "Disc.h"
#include "DiscList.h"

class Track {

private:
	
	std::string name;
	
	std::string artist;
	
	std::string location;
	
	int playTime;
	
	int number;
	
	Track* discPtr;

	Track() = delete;

public:

	//Track(Disc* discPtr);
	
	void printTrack() const;
	
	bool isLessThan(Track* aTrackPtr) const;
	
	int getNumber() const;
	
	int getPlayTime() const;

	Track* getTrackFromUser();
};