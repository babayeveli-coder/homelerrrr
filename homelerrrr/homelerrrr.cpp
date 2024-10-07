

#include <iostream>
using namespace std;
int main()
{


    //1



    double distance, fuel_per_100km, fuel_price_per_liter = 0.90;

    cout << "Gediləcək yolu daxil edin (km): ";
    cin >> distance;

    cout << "Masının 100 kilometr üçün istehlak etdiyi benzin miqdarı (litrlə): ";
    cin >> fuel_per_100km;

    double total_fuel_needed = (distance / 100) * fuel_per_100km;
    double total_cost = total_fuel_needed * fuel_price_per_liter;

    cout << "Lazım olan benzin miqdarı: " << total_fuel_needed << " litr" << endl;
    cout << "Lazım olan benzin qiyməti: " << total_cost << " AZN" << endl;

    return 0;







    //2
    //------------------------------------------------------------------------------------------







    double width, length, height;


    cout << "Otağın enini daxil edin (m): ";
    cin >> width;

    cout << "Otağın uzunluğunu daxil edin (m): ";
    cin >> length;

    cout << "Otağın hündürlüyünü daxil edin (m): ";
    cin >> height;


    double total_wall_area = 2 * (width * height) + 2 * (length * height);


    cout << "Otağın divarları üçün lazım olan oboy sahəsi: " << total_wall_area << " kvadrat metr" << endl;

    return 0;





    //3
    //------------------------------------------------------------------------------------------







    int numberOfRooms;


    cout << "Otaqların sayını daxil edin: ";
    cin >> numberOfRooms;

    int trashBins = numberOfRooms;
    int wardrobes = numberOfRooms;
    int televisions = numberOfRooms;



    cout << "Lazım olan zibil qablarının sayı: " << trashBins << endl;
    cout << "Lazım olan şkafların sayı: " << wardrobes << endl;
    cout << "Lazım olan televizorların sayı: " << televisions << endl;

    return 0;






    //4
    //--------------------------------------------------------------------------------------------







    int totalPages, pagesPerDay;


    cout << "Kitabın cəmi səhifə sayını daxil edin: ";
    cin >> totalPages;

    cout << "Hər gün oxuyacağınız səhifə sayını daxil edin: ";
    cin >> pagesPerDay;


    int daysToFinish;


    if (totalPages % pagesPerDay == 0) {
        daysToFinish = totalPages / pagesPerDay;
    }
    else {
        daysToFinish = (totalPages / pagesPerDay) + 1;
    }


    cout << "Kitabın bitməsi üçün lazım olan günlərin sayı: " << daysToFinish << endl;

    return 0;






    //5
    //--------------------------------------------------------------------------------------------------






    int point12, point11, point10, point9, point8;


    cout << "12 balların sayını daxil edin: ";
    cin >> point12;

    cout << "11 balların sayını daxil edin: ";
    cin >> point11;

    cout << "10 balların sayını daxil edin: ";
    cin >> point10;

    cout << "9 balların sayını daxil edin: ";
    cin >> point9;

    cout << "8 balların sayını daxil edin: ";
    cin >> point8;


    int totalGold = (point12 * 5) + (point11 * 4) + (point10 * 3) + (point9 * 2) + (point8 * 1);


    cout << "Cəmi qızıl medalların sayı: " << totalGold << endl;

    return 0;






}


