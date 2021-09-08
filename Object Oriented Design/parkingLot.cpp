#include<iostream>
#include<string>
#include<vector>

using namespace std;

/*
	Design a parking lot
		
	Assumptions: 
		=> We have a parking lot with multiple levels
		=> Each level has multiple spots for parking
		=> Parking lot support three types of vehicles
			-> motorcycles (small)
			-> cars (med)
			-> Buses/Trucks (large)
		=> Motorcycles can park anywhere (but preferablly on their on spot)
		=> Cars can park on their own spot and those ment for trucks
		=> Large vehicles can park only at their own spots
*/

enum VehicleSize
{
	Small,
	Medium,
	Large
};

// Vehicles and relations
class Vehicle
{
protected:
	string licencePlate;
	VehicleSize Size;
	int SpotsNeeded;
	bool IsParked;
	vector<ParkingSpot> spots;
	
public:
	bool isParked { return IsParked; }
	void parkVehicle(ParkingSpot spot) {}
	void removeVehicle(){}
	int getLicencePlate(){  . . . }
	int spotsNeeded(){ return SpotsNeeded; }
};

class Bike : public Vehicle
{
	Size = VehicleSize.Bike;
	SpotsNeeded = 1;
};

class Car : public Vehicle{
	Size = VehicleSize.Car;
	SpotsNeeded = 1;
};

class Large : public Vehicle
{
	Size = VehicleSize.Large;
	SpotsNeeded = 2;
};

// Parking lot

class ParkingSpot
{
private:
	int Level;
	int SerialNum;
	bool IsOccupied;
	Vehicle vehicle;
	
public: 
	void GetPosition(){// returns us the level and serial number};
	void getId(){// return serial num}
	bool isOccupied(){// returns IsOccupied}
};

class Level
{
private: 
	int LevelNumber;
	int Capacity;		// number of total spots includes avial and unavai
	int AvilableSpots;
	vector<ParkingSpot> Spots;

public:

	// assign a spot to the vehicle
	void assignSpot(Vehicle vehicle){}
	
	// Returns a list of Parking spots that are free 
	vector<ParkingSpot> getFreeSpots(){};
	
	// get number of parked vehicles in the spot
	int parkedVehicles(){};
	
	void freeSpot(ParkingSpot spot){}
};

class ParkingLot
{
private:
	int Levels; 
	static int Capacity;
	
public:
	void ParkVehicle(Vehicle vehicle)
	
}

int main()
{
	
	
}