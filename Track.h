#pragma once

#include <string>

class Track {

private:
	
	std::string name;
	
	std::string artist;
	
	std::string location;
	
	int playTime;
	
	int number;
	
	Disc* discPtr;

	Track() = delete;

public:

	Track(Disc* discPtr);
	
	void printTrack() const;
	
	bool isLessThan(Track* aTrackPtr) const;
	
	int getNumber() const;
	
	int getPlayTime() const;

	Track* getTrackFromUser();
};