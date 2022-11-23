#include<bits/stdc++.h>
using namespace std;

class Vehicle{
    protected:
        float mileage;
        int price;

    public:
        Vehicle(){
            mileage = 0.0;
            price= 0;
        }

        void setData(){
            cout<<"Enter mileage: ";
            cin>>this->mileage;
            
            cout<<"Enter Price: ";
            cin>>this->price;
        }
};

class Car:public Vehicle{
    protected:
        int ownership_cost;
        int warranty;
        int seating_capacity;
        string fuel_type;
    public:
        Car(){
            ownership_cost=0;
            warranty=0;
            seating_capacity=0;
            fuel_type="";
        }
         void setData(){
            Vehicle::setData();
            cout<<"Enter ownership cost: ";
            cin>>this->ownership_cost;
            
            cout<<"Enter warranty: ";
            cin>>this->warranty;

            cout<<"Enter seating capacity: ";
            cin>>this->seating_capacity;

            cout<<"Enter fuel type: ";
            cin>>this->fuel_type;
        }
};

class Bike:public Vehicle{
    protected:
        int cylinders;
        int gears;
        string cooling_type;
        string wheel_type;
        int tank_size;


    
    public:
        Bike(){
            cylinders=0;
            gears=0;
            cooling_type="";
            wheel_type="";
            tank_size=0;
        }
         void setData(){
            Vehicle::setData();
            cout<<"Enter cylinders: ";
            cin>>this->cylinders;
            
            cout<<"Enter gears: ";
            cin>>this->gears;

            cout<<"Enter cooling type: ";
            cin>>this->cooling_type;

            cout<<"Enter wheel type: ";
            cin>>this->wheel_type;

            cout<<"Enter tank size: ";
            cin>>this->tank_size;
        }
};


class Audi:public Car{
    protected:
        string model_type;
    
    public:
        Audi(){
            model_type="";
        }
         void setData(){
            Car::setData();
            cout<<"Enter model Type for Audi: ";
            cin>>this->model_type;   
        }
        friend void audi_getData(Audi a){
            cout<<"*--------Audi--------*"<<endl;
            cout<<"mileage: "<<a.mileage<<endl;
            cout<<"price: "<<a.price<<endl;
            cout<<"ownership_cost: "<<a.ownership_cost<<endl;
            cout<<"warranty: "<<a.warranty<<endl;
            cout<<" seating capacity: "<<a.seating_capacity<<endl;
            cout<<" fuel type: "<<a.fuel_type<<endl;
            cout<<" model type: "<<a.model_type<<endl;

        }
};


class Ford:public Car{
    protected:
            string model_type;
        
        public:
            Ford(){
                model_type="";
            }

            void setData(){
                Car::setData();
                cout<<"Enter model Type for Ford: ";
                cin>>this->model_type;     
            }
            friend void ford_getData(Ford a){
            cout<<"*--------Ford--------*"<<endl;
            cout<<"mileage: "<<a.mileage<<endl;
            cout<<"price: "<<a.price<<endl;
            cout<<"ownership_cost: "<<a.ownership_cost<<endl;
            cout<<"warranty: "<<a.warranty<<endl;
            cout<<" seating capacity: "<<a.seating_capacity<<endl;
            cout<<" fuel type: "<<a.fuel_type<<endl;
            cout<<" model type: "<<a.model_type<<endl;

        }
        

};

class Bajaj:public Bike{
    protected:
        string make_type;
    
    public:
        Bajaj(){
            make_type="";
        }

        void setData(){
            Bike::setData();
            cout<<"Enter make Type for Bajaj: ";
            cin>>this->make_type;
        }
        friend void bajaj_getData(Bajaj a){
            cout<<"*--------Bajaj--------*"<<endl;
            cout<<"mileage: "<<a.mileage<<endl;
            cout<<"price: "<<a.price<<endl;
            cout<<"cylinders: "<<a.cylinders<<endl;
            cout<<"gears: "<<a.gears<<endl;
            cout<<" cooling type: "<<a.cooling_type<<endl;
            cout<<" fuel tank size : "<<a.tank_size<<endl;
            cout<<" make type: "<<a.make_type<<endl;
        }
        
};

class Tvs:public Bike{
    protected:
            string make_type;
        
        public:
            Tvs(){
                make_type="";
            }
            void setData(){
                Bike::setData();
                cout<<"Enter make Type for Tvs: ";
                cin>>this->make_type;
            }
            friend void tvs_getData(Tvs a){
                cout<<"*--------Tvs--------*"<<endl;
                cout<<"mileage: "<<a.mileage<<endl;
                cout<<"price: "<<a.price<<endl;
                cout<<"cylinders: "<<a.cylinders<<endl;
                cout<<"gears: "<<a.gears<<endl;
                cout<<" cooling type: "<<a.cooling_type<<endl;
                cout<<" fuel tank size : "<<a.tank_size<<endl;
                cout<<" make type: "<<a.make_type<<endl;
        }

};



int main()
{
    Audi a;
    Ford f;
    Bajaj b;
    Tvs t;

    cout<<"Enter details for audi"<<endl;
    a.setData();
    cout<<"Enter details for ford"<<endl;
    f.setData();
    cout<<"Enter details for bajaj"<<endl;
    b.setData();
    cout<<"Enter details for tvs"<<endl;
    t.setData();

    cout<<endl<<endl<<endl<<endl;

    audi_getData(a);
    ford_getData(f);
    bajaj_getData(b);
    tvs_getData(t);


    return 0;
}