#include <iostream>

using namespace std;

int main()
{
    cout << "Hello, welcome to Joel's Carpet Cleaning Service" << endl;
    cout << "\nHow many small rooms would you like cleaned? ";

    int SmallRooms {0};
    cin >> SmallRooms;

    cout << "How many large rooms would you like cleaned? ";

    int LargeRooms {0};
    cin >> LargeRooms;

    cout << "\nEstimate for carpet cleaning service" << endl;
    cout << "Number of small rooms: " << SmallRooms << endl;
    cout << "Number of large rooms: " << LargeRooms << endl;

    const double PricePerSmallRoom {25.0};
    const double PricePerLargeRoom {35.0};

    cout << "Price per small room: $" << PricePerSmallRoom << endl;
    cout << "Price per large room: $" << PricePerLargeRoom << endl;
    cout << "Cost: $" << (PricePerSmallRoom*SmallRooms)+(PricePerLargeRoom*LargeRooms) << endl;

    const double SalesTax {0.06};

    cout << "Tax: $" << SalesTax << endl;
    cout << "=================================================================" << endl;
    cout << "Total estimate: $" << (PricePerSmallRoom*SmallRooms)+(PricePerLargeRoom*LargeRooms)+((PricePerSmallRoom*SmallRooms)*SalesTax+(PricePerLargeRoom*LargeRooms)*SalesTax) << endl;

    const int EstimateExpiry {30};

    cout << "This estimate is valid for " << EstimateExpiry << " days" << endl;


    cin.ignore(255,'\n');
    cin.get();
    return 0;
}
