#include <iostream>
#include <cmath>

using namespace std;
int main() {
    std::cout << "Hello, Variables & Constants!" << std::endl;
    cout << endl;

    const float priceSmallRoom{25};
    const float priceLargeRoom{30};
    const float salesTaxRate{.06};

    cout << "Hi!" << endl;
    cout << endl;

    int qtySmallRoom{0};
    cout << "How many small room to clean? ";
    cin >> qtySmallRoom;

    int qtyLargeRoom{0};
    cout << "How many large room to clean? ";
    cin >> qtyLargeRoom;

    float totalBeforeTax = priceLargeRoom * qtyLargeRoom
                            + priceSmallRoom * qtySmallRoom;

    float totalTaxAmount = (totalBeforeTax * salesTaxRate);

    float totalAfterTax = totalBeforeTax + totalTaxAmount;

    cout << endl;
    cout << "Estimate for carpet cleaning service" << endl;

    cout << "Number of small rooms: " << qtySmallRoom << endl;
    cout << "Number of large rooms: " << qtyLargeRoom << endl;

    cout << "Price per small room: $" << priceSmallRoom << endl;
    cout << "Price per large room: $" << priceLargeRoom << endl;

    cout << "Cost: $" << totalBeforeTax << endl;
    cout << "Tax: $" << totalTaxAmount << endl;

    cout << "==============================================" << endl;
    cout << "Total estimate: $" << totalAfterTax << endl;
    cout << "This estimate is valid for 30 days." << endl;

    return 0;
}