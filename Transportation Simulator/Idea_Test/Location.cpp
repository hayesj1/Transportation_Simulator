#include "Location.h"

void Location::addLocation(string newName, Location newLocation) { distFromHub = 0; locations.insert(pair<string, Location>(newName, newLocation)); }

int Location::getDisFromHub() { return distFromHub; }
Location Location::getLocation(string name) { Locations::iterator it = locations.find(name); return it->second; }

void Location::setDistFromHub(int dist) { distFromHub = dist; }
void Location::setsize(Sizes newSize) { size = newSize; }
Location::Location() {
	size = local;
	distFromHub = 0;
	addLocation("Default Location", *this);
}
Location::~Location() {}