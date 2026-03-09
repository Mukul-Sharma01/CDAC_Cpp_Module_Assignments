#include <iostream>
using namespace std;

class TollBooth
{
private:
    int totalVehicles;
    double totalRevenue;

public:
    // initializing values
    TollBooth()
    {
        totalVehicles = 0;
        totalRevenue = 0;
    }

    // Reset valus
    void reset()
    {
        totalVehicles = 0;
        totalRevenue = 0;
        cout << "Booth statistics reset.\n";
    }

    // Vehicle paying toll
    void vehiclePayingToll(int vehicleType, double tollAmount)
    {
        totalVehicles++;
        totalRevenue += tollAmount;

        cout << "Vehicle added successfully.\n";
    }

    // Getter methods
    int getTotalVehicles()
    {
        return totalVehicles;
    }

    double getTotalRevenue()
    {
        return totalRevenue;
    }
};

int main()
{
    TollBooth booth;
    int choice;

    const double carToll = 180;
    const double truckToll = 300;
    const double busToll = 350;

    do
    {
        cout << "\n----- Toll Booth Menu -----\n";
        cout << "1. Add Standard Car\n";
        cout << "2. Add Truck\n";
        cout << "3. Add Bus\n";
        cout << "4. Display Total Vehicles\n";
        cout << "5. Display Total Revenue\n";
        cout << "6. Reset Booth Statistics\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            booth.vehiclePayingToll(1, carToll);
            break;

        case 2:
            booth.vehiclePayingToll(2, truckToll);
            break;

        case 3:
            booth.vehiclePayingToll(3, busToll);
            break;

        case 4:
            cout << "Total Vehicles Passed: "
                 << booth.getTotalVehicles() << endl;
            break;

        case 5:
            cout << "Total Revenue Collected: "
                 << booth.getTotalRevenue() << endl;
            break;

        case 6:
            booth.reset();
            break;

        case 7:
            cout << "Exiting program.\n";
            break;

        default:
            cout << "Invalid choice.\n";
        }

    } while (choice != 7);

    return 0;
}