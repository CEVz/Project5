#pragma once

#include <string>

class Disc {

private:

	std::string title;
	std::string artist;
	int year;
	std::string genre;
	int totalPlayTime;
	bool multiArtist;
	Linkedlist<Tracks*>* trackListPtr;

public:

	bool isEmpty() const;
	int getNumberOfTracks() const;
	bool insertTrack(Track* trackPtr);
	Track* retrieveTrackByNumber(int trackNumber) const;
	std::string getArtist() const;
	std::string getTitle() const;
	bool isMultiArtist() const;
	void printDisc() const;
	void addToTotalPlayTime(int time);
	bool isLessThan(Disc* aDiscPtr) const;
	bool isLessThanOrEqualTo(Disc* aDiscPtr) const;
	Disc* getDiscFromUser();


};