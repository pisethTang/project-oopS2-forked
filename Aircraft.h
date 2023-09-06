#ifndef AIRCRAFT_H
#define AIRCRAFT_H

class Aircraft{

    protected:
    int weight;                  // the weight of AirCraft
    float fuel;                  // fuel percentage, initially 100%
    int numberOfFlights;         // initially 0

    public:
    Aircraft AirCraft();
    Aircraft AirCraft(int w);             // creates an Aircraft with weight w

    int get_weight();
    void set_weight(int newWeight);
    float get_fuel();
    void set_fuel(double newFuel);
    int get_numberOfFlights();
    void set_numberOfFlights(int newNumberOfFlights);

    void refuel();               // Resets fuel back to 100%
    virtual void fly(int headwind, int minutes); // headwind in km/h and minutes (time flying)

};

#endif