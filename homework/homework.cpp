// #include <iostream>
// int integral;

// int main(){
//     std::cout << "Please type in an integral value : " << std::endl;
//     std::cin >> integral;
//     std::cout << integral;
//     if (integral % 2) {
//         std::cout << " is odd" << std::endl;
//     } else {
//         std::cout << " is even" << std::endl;
//     }
// }


// #include <iostream>
// #include <chrono>

// int year;

// int main(){
//     std::cout << "Please type in your year of birth : " << std::endl;
//     std::cin >> year;
//     auto now = std::chrono::system_clock::now();
//     auto ymd = std::chrono::year_month_day(std::chrono::floor<std::chrono::days>(now));
//     int currentyear = static_cast<int>(ymd.year());
//     int age = currentyear - year;
//     if (age >= 21 && age<=39) {
//         std::cout << "You are eligible for the treatment." << std::endl;
//     } else {
//         std::cout << "You are not eligible for the treatment." << std::endl;
//     }
//     return 0;
// }


// #include <iostream>

// int day;
// int passed;
// int daybefore;

// int main(){
//     std::cout << "Which day is today?  1:mon .. 7:sun " << std::endl;
//     std::cin >> day;

//     switch (day){
//     case 1:
//         std::cout << "Monday" << std::endl;
//         break;
//     case 2:
//         std::cout << "Tuesday" << std::endl;
//         break;
//     case 3:
//         std::cout << "Wednesday" << std::endl;
//         break;
//     case 4:
//         std::cout << "Thursday" << std::endl;
//         break;
//     case 5:
//         std::cout << "Friday" << std::endl;
//         break;
//     case 6:
//         std::cout << "Saturday" << std::endl;
//         break;
//     case 7:
//         std::cout << "Sunday" << std::endl;
//         break;
    
//     default:
//         std::cout << "Not valid day" << std::endl;
//         break;
//     }
//     std::cout << "How many days have passed up today?" << std::endl;
//     std::cin >> passed;

//     std::cout << "If we went " << passed << " days ago today, it would be ";
//     daybefore = (day-((passed%7)));
//     if (daybefore<1) daybefore +=7;

//     // std::cout << "((passed%7)) : " << ((passed%7)) << std::endl;
//     // std::cout << daybefore << std::endl;
//     switch (daybefore){
//     case 1:
//         std::cout << "Monday" << std::endl;
//         break;
//     case 2:
//         std::cout << "Tuesday" << std::endl;
//         break;
//     case 3:
//         std::cout << "Wednesday" << std::endl;
//         break;
//     case 4:
//         std::cout << "Thursday" << std::endl;
//         break;
//     case 5:
//         std::cout << "Friday" << std::endl;
//         break;
//     case 6:
//         std::cout << "Saturday" << std::endl;
//         break;
//     case 7:
//         std::cout << "Sunday" << std::endl;
//         break;
    
//     default:
//         std::cout << "Not valid day" << std::endl;
//         break;
//     }

//     return 0;
// }

// #include <iostream>

// double x,y;

// int main(){
//     std::cout << "Point x axe and point y axe : " << std::endl;
//     std::cin >> x >> y;
//     // std::cout << "Point y axe : " << std::endl;
//     // std::cin >> y;
//     std::cout << "Point x axe : " << x << " Point y axe : " << y << std::endl;
//     if (x >= -10.0 && x <=10.0 && y >= -5.0 && y <=5.0){
//         std::cout << "You are completely surrounded. Don't move!" << std::endl;
//     } else {
//         std::cout << "You're out of reach!" << std::endl;
        
//     }
//     return 0;
// }


#include <iostream>
#include <iomanip>

int year{2020}, month{1}, day{1}, dayofweek{1};
bool is_leap;
const char* monthnames[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

int main(){
    std::cout << "Callendar generator. What year you want? :" << std::endl;
    std::cin >> year;
    //zeller's congruence
    dayofweek= ((42+((year-1)%100)+(((year-1)%100)/4)+((year-1)/400)+(5*((year-1)/100)))%7); //num of leading blanks
    is_leap = ((!(year % 4) && (year % 100)) || (!(year % 4) && !(year % 100) && !(year % 400)));
    for (int month = 1; month <= 12; month++){
        std::cout << std::endl << std::endl;
        std::cout << monthnames[month-1] << " " << year << ": "<< std::endl;
        std::cout << std::setw(2) << "Mo " << "Tu " << "We " << "Th " << "Fr " << "Sa " << "Su" << std::endl;
        for (size_t i = 1; i <= dayofweek; i++){ //align days
            std::cout << std::setw(3) << " ";
      }
        for (int day = 1; day <= 31; day++){
            switch (month)
                {
                case 2:
                    if (is_leap && day > 29)
                        break;
                    if (!is_leap && day > 28)
                        break;
                case 4:
                case 6:
                case 9:
                case 11:
                    if (day > 30)
                        break;
                default:
                    dayofweek += 1;
                    if (dayofweek > 7){
                        dayofweek = 1;
                        std::cout << std::endl;
                    }
                    std::cout << std::setw(2) << day << " ";

                }

        }
    }

    return 0;
}