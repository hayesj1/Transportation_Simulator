#ifndef PASSENGER_INCLUDED
#define PASSENGER_INCLUDED

#include "Good.h"
class Passenger : protected Good
{
public:
	enum PassengerTypes{ third_class, second_class, first_class, common, premium, homeless, middle_class, wealthy };
	struct PassTypetoStr : unordered_map<int, string>{
		PassTypetoStr()
		{
			this->operator[](third_class) = "Third Class";
			this->operator[](second_class) = "Second Class";
			this->operator[](first_class) = "First Class";
			this->operator[](common) = "Economy Class";
			this->operator[](premium) = "Business Class";
			this->operator[](homeless) = "Homeless";
			this->operator[](middle_class) = "Middle Class";
			this->operator[](wealthy) = "Wealthy";
		};
		~PassTypetoStr(){};
	};

	Passenger();
	virtual ~Passenger();

protected:
	PassengerTypes passType;
	double ticketPrice;
};

#endif // Passenger included
