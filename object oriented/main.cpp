#include <iostream>
#include <vector>
#include <memory>
#include <string>

using namespace std;
struct Address {
    string description;
    Address(const string& d ): description (d){}
};

class vehicle{
protected:
    string id;
    double maxspeed;
    double geolat;
    double geolon;
public:
    vehicle ( const string& id, double maxspeed, double geolat, double geolon) : id(id), maxspeed(maxspeed), geolat(geolat), geolon(geolon) {}
    virtual ~vehicle()= default;
    virtual void NavigateTo(const Address& address) const =0;
};
class car : public vehicle {
private:
    int tanklevel;
public:
    car ( const string& id, double maxspeed, double geolat, double geolon, int tanklevel) : vehicle (  id, maxspeed, geolat, geolon), tanklevel(tanklevel){}

    void NavigateTo(const Address& address) const override{
        cout << "car ["<< id <<"] driving to " << address.description<<endl;
    }
    int get_tanklevel()const{
        return tanklevel;
    }

};
class bike: public vehicle{
private:
    int frameheight;
public:
    bike( const string& id, double maxspeed, double geolat, double geolon, int frameheight) : vehicle (  id, maxspeed, geolat, geolon),frameheight(frameheight){}
    void NavigateTo(const Address& address) const override{
        cout << "bike ["<< id <<"] driving to " << address.description<<endl;
    }
    int get_frameheight()const{
        return frameheight;
    }

};

void central_gather(const vector<unique_ptr<vehicle>>& vehicles, const Address & central_adress){
    for(const auto& n : vehicles) {
        n->NavigateTo(central_adress);
        if (const car *bal = dynamic_cast<const car *> (n.get())) {
            cout << "Tank level: " << bal->get_tanklevel() << endl;
        } else if (const bike *bal2 = dynamic_cast<const bike *> (n.get())) {
            cout << "Tank level: " << bal2->get_frameheight() << endl;
        }
        else {
            cout << "Unknown vehicle type!" << endl;
        }
    }
}
int main() {
    vector<unique_ptr<vehicle>> test;
    test.push_back(make_unique<car>("D456", 76.54, 4.67, 123.5, 40));
    test.push_back(make_unique<bike>("b456", 45.54, 42.67, 23.5, 87));
    central_gather(test, Address("central depo"));


    return 0;
}