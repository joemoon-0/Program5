#include "Media.h"

Media::Media() {
	uniqueID = "";
	name = "";
	runningTime = 0;
}


Media::Media(std::string uniqueID, std::string name, int runningTime) {
	this->uniqueID = uniqueID;
	this->name = name;
	this->runningTime = runningTime;
}


void Media::setUniqueID(std::string uniqueID) {
	this->uniqueID = uniqueID;
}


void Media::setName(std::string name) {
	this->name = name;
}


void Media::setRunningTime(int runningTime) {
	this->runningTime = runningTime;
}


std::string Media::getUniqueID() const {
	return uniqueID;
}


std::string Media::getName() const {
	return name;
}


int Media::getRunningTime() const {
	return runningTime;
}


bool Media::ReadData(std::istream& in) {
	std::string readID;
	std::string readName;
	int readRunningTime;
	
	getline(in, readID);
	getline(in, readName);
	in >> readRunningTime;

	setUniqueID(readID);
	setName(readName);
	setRunningTime(readRunningTime);

	return true;
}


bool Media::WriteData(std::ostream& out) {
	out << uniqueID << std::endl;
	out << name << std::endl;
	out << runningTime << std::endl;
	return true;
}