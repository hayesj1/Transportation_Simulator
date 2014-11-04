#ifndef LOCATION_INCLUDED
#define LOCATION_INCLUDED
#define	MAX_DIST_FROM_HUB 1000

#include <unordered_map>
#include <string>
using namespace std;

//class Supplier;

class Location
{
private:
	enum Sizes { local, municipal, regional, continental, intercontinental };
	typedef unordered_map<string, Location> Locations;
	Sizes size;
	Locations locations;

	int distFromHub;

public:
	friend class Supplier;
	void addLocation(string newName, Location newLocation);

	int getDisFromHub();
	Location getLocation(string name);

	void setDistFromHub(int dist);
	void setsize(Sizes newSize);
	Location();
	~Location();
};


#endif // Location included