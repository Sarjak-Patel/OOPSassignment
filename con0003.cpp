#include <iostream>
#include <string>
using namespace std;
class Car {
private:
    string company;
    string model;
    int year;
public:
    Car() : company("Unknown"), model("Unknown"), year(0) {}
    Car(const string& c, const string& m, int y) : company(c), model(m), year(y) {}
    void setCompany(const string& c) {
        company = c;
    }
    void setModel(const string& m) {
        model = m;
    }
    void setYear(int y) {
        if (y > 0) {
            year = y;
        } else {
            cout << "Error: Year must be a positive integer." << endl;
        }
    }
    string getCompany() const {
        return company;
    }
    string getModel() const {
        return model;
    }
    int getYear() const {
        return year;
    }
    void display() const {
        cout << "Company: " << company << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
    }
};

int main() {
    Car myCar;
    myCar.setCompany("Toyota");
    myCar.setModel("Camry");
    myCar.setYear(2023);
    cout << "Car details after setting values:" << endl;
    myCar.display();
    Car anotherCar("Honda", "Civic", 2022);
    cout << "\nAnother Car details:" << endl;
    anotherCar.display();
}

