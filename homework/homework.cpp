// #include <iostream>

// int main(){
//     std::string country="";
//     std::cout << "Where do you live?" << std::endl;
//     std::cin >> country;
//     std::cout << "I've heard great things about " << country << ". I'd like to go sometime." << std::endl;
// sqrt(3);
//     return 0;
// }

// #include <iostream>
// int main(){
//     double inp_celsius=0; // Input temperature in celsius
//     std::cout << "Please enter a degree value in Celsius:" << std::endl;
//     std::cin >> inp_celsius;
//     double out_fahrenheit = inp_celsius * 9.0 / 5 + 32;
//     std::cout << inp_celsius << " Celsius is " << out_fahrenheit << " Fahrenheint" << std::endl;
//     return 0;
// }

// #include <iostream>
// int main(){
//     double length=0, width=0, height=0;
//     std::cout << "Welcome to box calculator. Please type in length, width and height information: " << std::endl;
//     std::cout << "length : "; std::cin >> length;
//     std::cout << "width : ";  std::cin >> width;
//     std::cout << "heght : ";  std::cin >> height;
//     double base_area = length * width;
//     std::cout << "The base area is : " << base_area << std::endl;
//     std::cout << "The volume is : " << base_area * height << std::endl;
//     return 0;
// char var1 {40}; 
// char var2 {50};
 
// auto result = var1 + var2 ;
// }

// #include <iostream>
// #include <iomanip>
// #include <bitset>
// constinit double x=12.5;
// constinit double y=34.6;
// unsigned short int sum=static_cast<int>(x) + static_cast<int>(y);
// int main() {
//     std::cout << sum << " " << &sum << std::endl;
//     x = 42;
//     std::cout << std::showbase << sum << " " << &sum << std::endl;
//     std::cout << std::showbase << std::bitset<8>(sum) << std::endl;
//     std::cout << std::showbase  << std::bitset<sizeof(sum)*8>(sum) << std::endl;

//     return 0;
// }




// #include <iostream>
// #include <bitset>


// int main(){

// 	unsigned short int value {0xff0u};

// 	std::cout << "Size of short int " << sizeof(short int) <<  std::endl;//  16 bits
	
//     std::cout << "value : " << std::bitset<16>(value) 
//     << ", dec : " << value << std::endl;

//     //Shift left by one bit
//     value = static_cast<unsigned short int>(value << 1);
//     std::cout << "value : " << std::bitset<16>(value) 
//     << ", dec : " << value << std::endl;

//     //Shift left by one bit
//     value = static_cast<unsigned short int>(value << 1);
//     std::cout << "value : " << std::bitset<16>(value) 
//     << ", dec : " << value << std::endl;

//     //Shift left by one bit
//     value = static_cast<unsigned short int>(value << 1);
//     std::cout << "value : " << std::bitset<16>(value) 
//     << ", dec : " << value << std::endl;


//     //Shift left by one bit
//     value = static_cast<unsigned short int>(value << 1);
//     std::cout << "value : " << std::bitset<16>(value) 
//     << ", dec : " << value << std::endl;

//     //Shift left by one bit
//     value = static_cast<unsigned short int>(value << 1);
//     std::cout << "value : " << std::bitset<16>(value) 
//     << ", dec : " << value << std::endl;

//     //Shift right by one bit
//     value = static_cast<unsigned short int>(value >> 1);
//     std::cout << "value : " << std::bitset<16>(value) 
//     << ", dec : " << value << std::endl;


//     //Shift by multiple bits in one go
//     //Shift right by four bits 
//     value = static_cast<unsigned short int>(value >> 4);
//     std::cout << "value : " << std::bitset<16>(value) 
//     << ", dec : " << value << std::endl;



//     //
//     std::cout << "value : " << (value >> 1) << std::endl;








   
//     return 0;
// }


// #include <iostream>
// #include <iomanip>
// #include <bitset>


// int main(){

// 	const int COLUMN_WIDTH {20};
    
// 	//Highlight position for bit of interest with a 1
// 	//Mask other positions with 0
	
//     const unsigned char mask_bit_0 {0b00000001} ;//Bit0
//     const unsigned char mask_bit_1 {0b00000010} ;//Bit1
//     const unsigned char mask_bit_2 {0b00000100} ;//Bit2
//     const unsigned char mask_bit_3 {0b00001000} ;//Bit3
//     const unsigned char mask_bit_4 {0b00010000} ;//Bit4
//     const unsigned char mask_bit_5 {0b00100000} ;//Bit5
//     const unsigned char mask_bit_6 {0b01000000} ;//Bit6
//     const unsigned char mask_bit_7 {0b10000000} ;//Bit7
    
//     //Sandbox variable
//     unsigned char var {0b00000000};// Starts off all bits off
    
//     std::cout << std::setw(COLUMN_WIDTH) <<  "var : "
// 		 << std::setw(COLUMN_WIDTH) << std::bitset<8>(var) << std::endl;



//     //Set a few bits : make them 1's regardless of what's in there

// 	//SETTING BITS
//     //Setting : |= with mask of the bit
	
//     //Set bit 1
// 	std::cout << "Setting bit in position 1" << std::endl;
// 	var |= mask_bit_1;
// 	std::cout << std::setw(COLUMN_WIDTH) <<  "var : "
// 		 << std::setw(COLUMN_WIDTH) << std::bitset<8>(var) << std::endl;

// 	//Set bit 5
// 	std::cout << "Setting bit in position 5" << std::endl;
// 	var |= mask_bit_5;
// 	std::cout << std::setw(COLUMN_WIDTH) <<  "var : "
// 		 << std::setw(COLUMN_WIDTH) << std::bitset<8>(var) << std::endl;


// 	//RESETTING BITS : set to 0
//     //Resetting : &= (~mask)
	
// 	//Reset bit 1
// 	std::cout << "Resetting bit in position 1" << std::endl;
//     var &= (~mask_bit_1);
// 	std::cout << std::setw(COLUMN_WIDTH) <<  "var : "
// 		 << std::setw(COLUMN_WIDTH) << std::bitset<8>(var) << std::endl;

// 	//Reset bit 5
// 	std::cout << "Resetting bit in position 1" << std::endl;
//     var &= (~mask_bit_5);
// 	std::cout << std::setw(COLUMN_WIDTH) <<  "var : "
// 		 << std::setw(COLUMN_WIDTH) << std::bitset<8>(var) << std::endl;


// 	//Set all bits
// 	std::cout << "Setting all bits" << std::endl;
//     var |= ( mask_bit_0 | mask_bit_1 | mask_bit_2 | mask_bit_3 |
//              mask_bit_4 | mask_bit_5 | mask_bit_6 | mask_bit_7);
// 	std::cout << std::setw(COLUMN_WIDTH) <<  "var : "
// 		 << std::setw(COLUMN_WIDTH) << std::bitset<8>(var) << std::endl;


// 	//Reset bits at pos 0,2,4,6
// 	std::cout << "Reset bits at pos 0,2,4,6" << std::endl;
//     var &= ~(mask_bit_0 | mask_bit_2 | mask_bit_4 | mask_bit_6);
// 	std::cout << std::setw(COLUMN_WIDTH) <<  "var : "
// 		 << std::setw(COLUMN_WIDTH) << std::bitset<8>(var) << std::endl;



// 	//Check state of a bit
// 	std::cout << std::endl;
// 	std::cout << "Checking the state of each bit position (on/off)" << std::endl;
// 	std::cout << "bit0 is " << ((var & mask_bit_0) >> 0 )<< std::endl;
//     std::cout << "bit1 is " << ((var & mask_bit_1) >> 1 ) << std::endl;
//     std::cout << "bit2 is " << ((var & mask_bit_2) >> 2 ) << std::endl;
//     std::cout << "bit3 is " << ((var & mask_bit_3) >> 3 ) << std::endl;
//     std::cout << "bit4 is " << ((var & mask_bit_4) >> 4 ) << std::endl;
//     std::cout << "bit5 is " << ((var & mask_bit_5) >> 5 ) << std::endl;
// 	std::cout << std::boolalpha;
//     std::cout << "bit6 is " << ((var & mask_bit_6) >> 6 ) << std::endl;
// 	std::cout << "bit6 is " << static_cast<bool>(var & mask_bit_6) << std::endl;

//     std::cout << "bit7 is " << ((var & mask_bit_7) >> 7 ) << std::endl;
//     std::cout << "bit7 is " << static_cast<bool>(var & mask_bit_7) << std::endl;


// 	//Toggle bits
// 	//Toggle : var ^ mask
	
// 	//Toggle bit 0
// 	std::cout << std::endl;
// 	std::cout << "Toggle bit 0" << std::endl;
//     var ^= mask_bit_0;
// 	std::cout << std::setw(COLUMN_WIDTH) <<  "var : "
// 		 << std::setw(COLUMN_WIDTH) << std::bitset<8>(var) << std::endl;

//     //Toggle bit7 
// 	std::cout << "Toggle bit 7" << std::endl;
//     var ^= mask_bit_7;
// 	std::cout << std::setw(COLUMN_WIDTH) <<  "var : "
// 		 << std::setw(COLUMN_WIDTH) << std::bitset<8>(var) << std::endl;

// 	//Toggle multiple bits in one go : the 4 higher bits
// 	std::cout << "Toggle multiple bits in one go : the 4 higher bits" << std::endl;
//     var ^= (mask_bit_7 | mask_bit_6 | mask_bit_5 | mask_bit_4);
// 	std::cout << std::setw(COLUMN_WIDTH) <<  "var : "
// 		 << std::setw(COLUMN_WIDTH) << std::bitset<8>(var) << std::endl;
   
//     return 0;
// }

// #include <iostream>

// const unsigned char mask_bit_0 {0b00000001} ;//Bit0
// const unsigned char mask_bit_1 {0b00000010} ;//Bit1
// const unsigned char mask_bit_2 {0b00000100} ;//Bit2
// const unsigned char mask_bit_3 {0b00001000} ;//Bit3
// const unsigned char mask_bit_4 {0b00010000} ;//Bit4
// const unsigned char mask_bit_5 {0b00100000} ;//Bit5
// const unsigned char mask_bit_6 {0b01000000} ;//Bit6
// const unsigned char mask_bit_7 {0b10000000} ;//Bit7


// void use_options_v0 (bool flag0, bool flag1, bool flag2, bool flag3,
//       bool flag4, bool flag5, bool flag6, bool flag7){
          
//     std::cout << "Flag0 is : " << flag0 << ", do something with it." <<  std::endl;
//     std::cout << "Flag1 is : " << flag1 << ", do something with it."<<  std::endl;
//     std::cout << "Flag2 is : " << flag2 << ", do something with it." <<  std::endl;
//     std::cout << "Flag3 is : " << flag3 << ", do something with it."<<  std::endl;
//     std::cout << "Flag4 is : " << flag4 << ", do something with it."<<  std::endl;
//     std::cout << "Flag5 is : " << flag5 << ", do something with it."<<  std::endl;
//     std::cout << "Flag6 is : " << flag6 << ", do something with it."<<  std::endl;
//     std::cout << "Flag7 is : " << flag7 << ", do something with it."<<  std::endl;
// }


// void use_options_v1(unsigned char flags){
   
//     std::cout << "bit0 is " << ((flags & mask_bit_0) >> 0 ) << ", do something with it!"<< std::endl;
//     std::cout << "bit1 is " << ((flags & mask_bit_1) >> 1 ) <<", do something with it!"<< std::endl;
//     std::cout << "bit2 is " << ((flags & mask_bit_2) >> 2 ) <<", do something with it!"<< std::endl;
//     std::cout << "bit3 is " << ((flags & mask_bit_3) >> 3 ) <<", do something with it!"<< std::endl;
//     std::cout << "bit4 is " << ((flags & mask_bit_4) >> 4 ) <<", do something with it!"<< std::endl;
//     std::cout << "bit5 is " << ((flags & mask_bit_5) >> 5 ) <<", do something with it!"<< std::endl;
//     std::cout << "bit6 is " << ((flags & mask_bit_6) >> 6 ) <<", do something with it!"<< std::endl;
//     std::cout << "bit7 is " << ((flags & mask_bit_7) >> 7 ) <<", do something with it!"<< std::endl;    
// }



// int main(){

// 	use_options_v0(0,0,1,1,1,0,1,0);

//     std::cout << "----------------------" << std::endl;
// 	use_options_v1(mask_bit_2 | mask_bit_3 | mask_bit_4 | mask_bit_6);

//     return 0;
// }

// #include <iostream>
// bool is_leap_year( unsigned int year){
    
//     bool is_leap{};
    
//     //Don't modify anything above this line
//     //Your code goes below this line
    
// //     rok není dělitelný 4 → běžný rok, 365 dní, (např. 2023),
// // rok je dělitelný 4, zároveň to ale není přelom století (na konci není 00) → rok je přestupný, 366 dní, (např, 2020 nebo 2024),
// // rok je přelomem století, je dělitelný 100, ale zároveň první dvojčíslí není dělitelné 4 → rok není přestupný, 365 dní, (např. 1900 nebo 2100),
// // rok je dělitelný 4 i 100 i 400 → rok je přestupný (např. 2000).
//     std::cout << std::boolalpha << std::endl;
//     std::cout << "year: " << year << " ";
//     // std::cout << year %4 << (!(year % 4) && !(year % 100)) << std::endl;
//     // std::cout << (!(!(year % 4) && !(year % 100) && !(year % 400))) << std::endl;

//     is_leap = ((!(year % 4) && (year % 100)) || (!(year % 4) && !(year % 100) && !(year % 400)));
       
//     //Your code goes above this line
//     //Don't modify anything below this line
    
//     return is_leap;
// }

// int main(){
//     std::cout << is_leap_year(2023) << std::endl;
//     std::cout << is_leap_year(2000) << std::endl;
//     std::cout << is_leap_year(2100) << std::endl;
//     std::cout << is_leap_year(2024) << std::endl;
//     std::cout << is_leap_year(1900) << std::endl;
    
// }


// #include <iostream>



// int main(){

	
// 	bool go {true};

// 	if(int speed {10};go){
//         std::cout << "speed : " << speed << std::endl;
		
// 		if(speed > 5){
// 			std::cout << "Slow down!" << std::endl;
// 		}else{
// 			std::cout << "All good!" << std::endl;
// 		}
// 	}else{
//         std::cout << "speed : " << speed << std::endl;
// 		std::cout << "Stop" << std::endl;
// 	}

//     //std::cout << "Out of the if block , speed : " << speed << std::endl;
   
//     return 0;
// }

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