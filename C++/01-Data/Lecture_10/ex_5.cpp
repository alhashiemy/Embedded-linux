#include <iostream>

class Vehicle
{
    public:
        virtual void drive() = 0;
};
class Car : public Vehicle
{
    public:
        void drive()override
        {
            std::cout << "Drive car...." << std::endl;
        }
};
class Bike : public Vehicle
{
    public:
        void drive()
        {
            std::cout << "Drive Bike...." << std::endl;
        }
};
class MotorCycle : public Vehicle
{
    public:
        void drive()override
        {
            std::cout << "Drive MotorCycle...." << std::endl;
        }
};

class Factory
{
    public:
        static Vehicle* CreateVehicle(std::string vehicle)
        {
            if(vehicle == "car")
            {
                return new Car();
            }
            else if(vehicle == "bike")
            {
                return new Bike();
            }
            else if(vehicle == "motorcycle")
            {
                return new MotorCycle();
            }
            else
            {
                return nullptr;
            }
        }
};
int main()
{
    // Vehicle* veh1 = new Car();
    // Vehicle* veh2 = new Bike();
    // Vehicle* veh3 = new MotorCycle();

    // veh1->drive();
    // veh2->drive();
    // veh3->drive();

    // delete veh3;
    // delete veh2;
    // delete veh1;

    Vehicle* veh1 =  Factory::CreateVehicle("car");
    Vehicle* veh2 =  Factory::CreateVehicle("bike");
    Vehicle* veh3 =  Factory::CreateVehicle("motorcycle");

    if(veh1 != nullptr)
    veh1->drive();
    if(veh2 != nullptr)
    veh2->drive();
    if(veh3 != nullptr)
    veh3->drive();

    delete veh3;
    delete veh2;
    delete veh1;
    return 0;
}