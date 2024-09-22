#include <iostream>

class Car
{
private:
    std::string model;
    std::string color;
    std::string engine;

public:
    void setModel(std::string cp_model)
    {
        model = cp_model;
    }
    void setColor(std::string cp_color)
    {
        color = cp_color;
    }
    void setEngine(std::string cp_engine)
    {
        engine = cp_engine;
    }
    void Display()
    {
        std::cout << "----------------------\n";
        std::cout << "Model => " << model << std::endl;
        std::cout << "Color => " << color << std::endl;
        std::cout << "Engine => " << engine << std::endl;
        std::cout << "----------------------\n";
    }
};

class BuilderAbstract
{
    public:
        virtual void buildModel() = 0;
        virtual void buildColor() = 0;
        virtual void buildEngine() = 0;
        virtual Car  getFinalProduct() = 0;
};

class BuilderConcrete_1 : public BuilderAbstract
{
    private:
        Car car;
    public:
        void buildModel()override
        {
            car.setModel("BMW");
        }
        void buildColor()override
        {
            car.setColor("Black");
        }
        void buildEngine()override
        {
            car.setEngine("V Engine");
        }
        Car  getFinalProduct()override
        {
            return car;
        }
};
class BuilderConcrete_2 : public BuilderAbstract
{
    private:
        Car car;
    public:
        void buildModel()override
        {
            car.setModel("Honda");
        }
        void buildColor()override
        {
            car.setColor("White");
        }
        void buildEngine()override
        {
            car.setEngine("Axiel Engine");
        }
        Car  getFinalProduct()override
        {
            return car;
        }
};
class Director
{
    public:
        static Car CreateCar(BuilderAbstract* ptr)
        {
            ptr->buildModel();
            ptr->buildColor();
            ptr->buildEngine();

            return ptr->getFinalProduct();
        }
};
int main()
{
    BuilderConcrete_1 builder1;
    Car car1 = Director::CreateCar(&builder1);
    car1.Display();

    BuilderConcrete_2 builder2;
    Car car2 = Director::CreateCar(&builder2);
    car2.Display();
    return 0;
}