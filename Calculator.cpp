/* 
 * Scientific and business Calculator                                                          C++ Version
 * Version - 1.0
 * Developer - Shubhojeet Biswas
 * Selling the copy of this file without my permission is strictly not allowed.
 * To buy this file you can contact me at shubhojeetbiswas.vsmps@gmail.com.
 */
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

const double pi { (3.142857142857143) };
long double calc_area_circle(long double radius);
long double calc_volume_cylinder(long double radius, long double height);
void area_circle();
void volume_cylinder();
void greeting (string name, string prefix = "Mr./Mrs.", string suffix = "");

long double calc_area_circle(long double radius)
{
    return pi * radius * radius;
}

long double calc_volume_cylinder(long double radius, long double height)
{
    return pi * radius * radius * height;
}

void area_circle()
{
    long double radius;
    cout << "Enter the radius of circle : ";
    cin >> radius;
    cout << "\nThe area of the circle is " << calc_area_circle(radius) << endl;
}

void volume_cylinder()
{
    long double radius {};
    cout << "\n\nEnter the radius of cylinder : ";
    cin >> radius;
    long double height {};
    cout << "Enter the height of cylinder : ";
    cin >> height;
    cout << "\nThe volume of the cylinder is : " << calc_volume_cylinder(radius, height) << endl;
}

void greeting (string name, string prefix, string suffix) {
    cout << "\nHello " << prefix + " " + name + " " + suffix << endl;
    cout << "I welcome you to my calculator." << endl;
    cout << "I hope you'll like it." << endl;
}

int main ()
{
    string selection {};
    string selection3 {};
    string password {};
    string NAME;
    vector <long double> list {};
    cout << "\n\nEnter you name : ";
    getline (cin, NAME);
    greeting(NAME);
    cout << endl;
    cout << "Enter the password : ";
    cin >> password;
    if (password == "JEETcodeCALC")
    {
        do
        {
            cout << "\n\n\n------------------MENU------------------" << endl;
            cout << "A - Addition" << endl;
            cout << "S - Subtraction" << endl;
            cout << "M - Multiplication" << endl;
            cout << "D - Division" << endl;
            cout << "P - Perimeter" << endl;
            cout << "V - Volume" << endl;
            cout << "V1 - Volume of cylinder" << endl;
            cout << "C - Cube Root" << endl;
            cout << "Co - Converter" << endl;
            cout << "R - Round of" << endl;
            cout << "F - Floor" << endl;
            cout << "L - Check Leap Year" << endl;
            cout << "T - Tan" << endl;
            cout << "H - Histogram" << endl;
            cout << "Ar - Area" << endl;
            cout << "Ar1 - Area of circle" << endl;
            cout << "Av - Average" << endl;
            cout << "Ce - Ceil" << endl;
            cout << "Co - Cosine" << endl;
            cout << "Di - Divisbility" << endl;
            cout << "Ma - Manage Data" << endl;
            cout << "Me - Median" << endl;
            cout << "Mo - Money Convert" << endl;
            cout << "Mu - Multiples" << endl;
            cout << "Pe - Percentage" << endl;
            cout << "Po - Power" << endl;
            cout << "Re - Reciprocal" << endl;
            cout << "Si - Sine" << endl;
            cout << "Su - Substitution Cipher" << endl;
            cout << "Sq - Square Root" << endl;
            cout << "Q - Quit" << endl;
            cout << "-------------------------------------------" << endl;
            cout << "\nEnter your choice : ";
            cin >> selection;
            
            if (selection == "a" || selection == "A")
            {
                int num {};
                long double sum {};
                long double num_to_add {};
                cout << "How many numbers do you want to add : ";
                cin >> num;
                for ( int i {1} ; i <= num ; ++i )
                {
                    cout << "Enter the number " << i << "  : ";
                    cin >> num_to_add;
                    list.push_back(num_to_add);
                }
                for (int i {} ; i < num ; ++i)
                    sum += list[i];
                cout << "\nTheir sum is : " << sum << endl;
                list.clear();
            } else if (selection == "s" || selection == "S")
            {
                long double num1 {};
                long double num2 {};
                long double diffrence {};
                cout << "Enter the number from which you want to subtract : ";
                cin >> num1;
                cout << "What do you want to subtract from " << num1 << " : ";
                cin >> num2;
                diffrence = (num1 - num2);
                cout << "\nTheir diffrence is " << diffrence << endl;
            } else if (selection == "m" || selection == "M")
            {
                int num {};
                long double product {1};
                long double num_to_multiply {};
                cout << "How many numbers do you want to multiply : ";
                cin >> num;
                for ( int i {1} ; i <= num ; ++i )
                {
                    cout << "Enter the number " << i << "  : ";
                    cin >> num_to_multiply;
                    list.push_back(num_to_multiply);
                }
                for (int i {} ; i < num ; ++i)
                    product *= list[i];
                cout << "\nTheir product is : " << product << endl;
                list.clear();
            } else if (selection == "d" || selection == "D")
            {
                long double num1 {};
                long double num2 {};
                long double quotient {};
                cout << "Enter the number which you want to divide : ";
                cin >> num1;
                cout << "In how many parts do you want to divide " << num1 << " : ";
                cin >> num2;
                quotient = (num1 / num2);
                cout << "\nTheir quotient is " << quotient << endl;
            } else if (selection == "p" || selection == "P")
            {
                int num {};
                long double perimeter {};
                long double sides {};
                cout << "How many side(s) are there in the object of which you want to calculate perimeter : ";
                cin >> num;
                for ( int i {1} ; i <= num ; ++i )
                {
                    cout << "Enter the side " << i << " in metre(s) : ";
                    cin >> sides;
                    list.push_back(sides);
                }
                for (int i {} ; i < num ; ++i)
                    perimeter += list[i];
                if (perimeter <= 1)
                    cout << "\nTheir perimeter is : " << perimeter << " metre " << endl;
                else
                    cout << "\nTheir perimeter is : " << perimeter << " metres " << endl;
                list.clear();
            } else if (selection == "v" || selection == "V")
            {
                long double length {}, breadth {}, height {};
                cout << "Enter the length, breadth and the height of the substance in metre(s) followed by spaces : ";
                cin >> length >> breadth >> height;
                long double volume { length*breadth*height };
                if (volume <= 1)
                    cout << "\nTheir volume is " << volume << " cubic metre" << endl;
                else
                    cout << "\nTheir volume is " << volume << " cubic metres" << endl;
            } else if (selection == "ar" || selection == "AR" || selection == "Ar" || selection == "aR")
            {
                long double length {}, breadth{};
                cout << "Enter the length and the breadth of the substance in metre(s) followed by spaces : ";
                cin >> length >> breadth;
                long double area { length*breadth };
                cout << "\nTheir area is " << area << " square metre" << endl;
            } else if (selection == "av" || selection == "AV" || selection == "Av" || selection == "aV")
            {
                long double sum_of_observations {};
                long double num_of_observations {};
                long double nums {};
                cout << "Enter the number of observation(s) : ";
                cin >> num_of_observations;
                for (int i {1} ; i <= num_of_observations ; ++i)
                {
                    cout << "Enter the observation " << i << " : ";
                    cin >> nums;
                    list.push_back(nums);
                }
                for (int i {} ; i < num_of_observations ; ++i)
                    sum_of_observations += list[i];
                long double average {sum_of_observations / num_of_observations};
                cout << "\nTheir average is " << average << endl;
                list.clear();
            } else if (selection == "sq" || selection == "SQ" || selection == "Sq" || selection == "sQ")
            {
                long double num {};
                cout << "Enter the number of which you want to calculate square root : ";
                cin >> num;
                cout << "\nIt's square root is : " << sqrt(num) << endl;
            } else if (selection == "pe" || selection == "PE" || selection == "Pe" || selection == "pE")
            {
                long double num {};
                cout << "Enter the number : ";
                cin >> num;
                long double percent {num / 100};
                cout << "\nIt's percentage is : " << percent << endl;
            } else if (selection == "c" || selection == "C")
            {
                long double num {};
                cout << "Enter the number of which you want to calculate cube root : ";
                cin >> num;
                cout << "\nIt's cube root is : " << cbrt(num) << endl;
            } else if (selection == "cos" || selection == "COS" || selection == "Cos" || selection == "COs" || selection == "cOS")
            {
                long double num {};
                cout << "Enter the number of which you want to calculate cosine : ";
                cin >> num;
                cout << "\nIt's cosine is : " << cos(num) << endl;
            } else if (selection == "si" || selection == "SI" || selection == "sI" || selection == "Si")
            {
                long double num {};
                cout << "Enter the number of which you want to calculate sine : ";
                cin >> num;
                cout << "\nIt's sine is : " << sin(num) << endl;
            } else if (selection == "r" || selection == "R")
            {
                long double num {};
                cout << "Enter the number (double) of which you want to round of : ";
                cin >> num;
                cout << "\nThe round of " << num << " is : " << round(num) << endl;
            } else if (selection == "po" || selection == "PO" || selection == "pO" || selection == "Po")
            {
                long double num {};
                long double power {};
                cout << "Enter the number : ";
                cin >> num;
                cout << "Enter the power to raise " << num << " : ";
                cin >> power;
                cout << endl;
                cout << num << " raised to " << power << " power is : " << pow(num, power) << endl;
            } else if (selection == "f" || selection == "F")
            {
                long double num {};
                cout << "Enter the number (double) : ";
                cin >> num;
                cout << "\nThe floor of " << num << " is : " << floor(num) << endl;
            } else if (selection == "ce" || selection == "CE" || selection == "cE" || selection == "Ce")
            {
                long double num {};
                cout << "Enter the number (double) : ";
                cin >> num;
                cout << "\nThe ceil of " << num << " is : " << ceil(num) << endl;
            } else if (selection == "me" || selection == "ME" || selection == "mE" || selection == "Me")
            {
                int num {};
                cout << "Enter the number of observations : ";
                cin >> num;
                for (int i {1} ; i <= num ; ++i)
                {
                    long double nums {};
                    cout << "Enter the observation " << i << " : ";
                    cin >> nums;
                    list.push_back(nums);
                }
                if (num % 2 == 0)
                {
                    long int position1 { num / 2 };
                    long int position2 { position1 + 1 };
                    long double term1 { list.at(position1) };
                    long double term2 { list.at(position2) };
                    long double median { ((term1 + term2) / 2) - 1 };
                    cout << "\nTheir median is : " << median << endl;
                } else
                {
                    int position { (( num + 1 ) / 2) - 1 };
                    cout << "\nTheir median is : " << list.at(position) << endl;
                }
                list.clear();
            } else if (selection == "re" || selection == "RE" || selection == "rE" || selection == "Re")
            {
                long double num {};
                cout << "Enter the number : ";
                cin >> num;
                cout << "\nIt's reciprocal value is : " << (1/num) << endl;
            } else if (selection == "t" || selection == "T")
            {
                long double num {};
                cout << "Enter the number to calculate tan : ";
                cin >> num;
                cout << "\nIt's tan is : " << tan(num) << endl;
            } else if (selection == "mu" || selection == "MU" || selection == "mU" || selection == "Mu")
            {
                long double num1 {};
                long double num2 {};
                cout << "Of which number you want multiples : ";
                cin >> num1;
                cout << "How many multiples you want for " << num1 << " : ";
                cin >> num2;
                for (long double a {num1} ; a <= num1 ; ++a)
                {
                    for (auto b {1} ; b <= num2 ; ++b)
                    {
                        cout << a << " * " << b << " = " << a * b << endl;
                    }
                }
            } else if (selection == "h" || selection == "H")
            {
                int num_items {};
                cout << "How many data items you've got ? : ";
                cin >> num_items;
                
                vector <int> data {};
                
                for ( int i{1} ; i <= num_items ; ++i )
                {
                    int data_item {};
                    cout << "Enter data item " << i << "  : ";
                    cin >> data_item;
                    data.push_back(data_item);
                }
                
                cout << "\n\nDisplaying the Histogram....." << endl;
                for (auto val : data)
                {
                    for (int i{1} ; i <= val ; ++i)
                    {
                        if (i % 5 == 0)
                            cout << "*";
                        else
                            cout << "-";
                    }
                    cout << endl;
                }
            } else if (selection == "ar1" || selection == "AR1" || selection == "aR1" || selection == "Ar1")
            {
                area_circle();
            } else if (selection == "v1" || selection == "V1")
            {
                volume_cylinder();
            } else if (selection == "di" || selection == "DI" || selection == "dI" || selection == "Di")
            {
                long int num_to_check {};
                long int num {};
                cout << "Enter the integer you want to checl the divisibility of : ";
                cin >> num_to_check;
                cout << "Enter the integer you want to check if divisble : ";
                cin >> num;
                long int quotient {num_to_check / num};
                cout << endl;
                if (num_to_check % num == 0)
                {
                    cout << num_to_check << " is divisible by " << num << endl;
                    cout << "And, " << num << " * " << quotient << " = " << num_to_check << endl;
                } else
                    cout << num_to_check << " isn't divisible by " << num << endl;
            } else if (selection == "su" || selection == "SU" || selection == "Su" || selection == "sU")
            {
                const string alphabet {" abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890"};
                const string key {"~XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkguompciasr?/><.,{}[]"};
                string message {};
                string encrypted_message {};
                
                cout << "Enter the secret message ( GIVE UNDERSCORES IN PLACE OF SPACES ) : ";
                cin >> message;
                
                cout << "\nEncrypted message :-" << endl;
                
                for (auto c : message)
                {
                    size_t position = alphabet.find(c);
                    if (position != string::npos)
                    {
                        char new_char {key.at(position)};
                        encrypted_message += new_char;
                    }
                    else
                        encrypted_message += c;
                }
                
                cout << encrypted_message << endl;
                
                cout << "\nDecrypted message :-" << endl;
                string decrypted_message {};
                for (auto c : encrypted_message)
                {
                    size_t position1 = key.find(c);
                    if (position1 != string::npos)
                    {
                        char new_char { alphabet.at(position1) };
                        decrypted_message += new_char;
                    } else
                        decrypted_message += c;
                }
                
                cout << decrypted_message << endl << endl;
            } else if (selection == "ma" || selection == "MA" || selection == "mA" || selection == "Ma")
            {
                vector <double> list1 {};
                string selection1 {};
                
                do
                {
                cout << "\n-------------------------------------" << endl;
                cout << "P - Display numbers" << endl;
                cout << "A - Add numbers to the list" << endl;
                cout << "M - Display mean of the numbers" << endl;
                cout << "Me - Display the median of those numbers" << endl;
                cout << "S - Display the smallest number" << endl;
                cout << "L - Display the largest number" << endl;
                cout << "C - Clear the list" << endl;
                cout << "E - Exit" << endl;
                cout << "-------------------------------------" << endl;
                cout << "\n\nEnter your choice : ";
                cin >> selection1;
                
                if (selection1 == "P" || selection1 == "p")
                {
                    if (list1.size() == 0)
                        cout << "[] - The list is empty......" << endl;
                    else
                    {
                        cout << "[ ";
                        for (auto val : list1)
                            cout << val << " ";
                        cout << "]"<< endl;
                    }
                } else if (selection1 == "a" && "A")
                {
                    long double val_to_add {};
                    long double num {};
                    cout << "How many numbers do you want to add to the list ? : ";
                    cin >> num;
                    for (int i {1} ; i <= num ; ++i)
                    {
                        cout << "Enter the number " << i << " : ";
                        cin >> val_to_add;
                        list1.push_back(val_to_add);
                    }
                    cout << "\nNumbers added to the list" << endl;
                } else if (selection1 == "m" || selection1 == "M")
                {
                    if (list1.size() == 0)
                        cout << "Unable to calculate the mean - no data" << endl;
                    else
                    {
                        long double sum_of_observations {};
                        for ( unsigned i{} ; i < list1.size() ; ++i )
                            sum_of_observations += list1[i];
                        long double mean { sum_of_observations / list1.size() };
                        cout << "Mean of the values present in the list is " << mean << endl;
                    }
                } else if ( selection1 == "s" || selection1 == "S" )
                {
                    if (list1.size() == 0)
                        cout << "Unable to determine the smallest number - list is empty" << endl;
                    else
                        cout << "The smallest number is " << *min_element(list1.begin(), list1.end()) << endl;
                } else if (selection1 == "L" || selection1 == "l")
                {
                    if (list1.size() == 0)
                        cout << "Unable to determine the largest number - list is empty" << endl;
                    else
                        cout << "The largest number is " << *max_element(list1.begin(), list1.end()) << endl;
                } else if (selection1 == "c" || selection1 == "C")
                {
                    if (list1.size() == 0)
                        cout << "The list is already empty." << endl;
                    else
                    {
                        list1.clear();
                        cout << "list is cleared" << endl;
                    }
                } else if (selection1 == "me" || selection1 == "ME" || selection1 == "mE" || selection1 == "Me")
                {
                    if (list1.size() == 0)
                        cout << "Unable to calculate the median, the list is empty []" << endl;
                    else
                    {
                        if (list1.size() % 2 == 0)
                        {
                            long int position1 { list1.size() / 2 };
                            long int position2 { position1 + 1 };
                            long double term1 { list1.at(position1) };
                            long double term2 { list1.at(position2) };
                            long double median { ((term1 + term2) / 2) - 1 };
                            cout << "\nTheir median is : " << median << endl;
                        }
                        else
                        {
                            long int position { (( list1.size() + 1 ) / 2) - 1 };
                            cout << "\nTheir median is : " << list1.at(position) << endl;
                        }
                    }
                } else if (selection1 == "e" || selection1 == "E")
                    cout << "GoodBye !!" << endl;
                else
                    cout << "Unknown selection, please try again." << endl;
                } while ( selection1 != "e" && selection1 != "E" );
                cout << "Exited" << endl;
            } else if (selection == "l" || selection == "L")
            {
                int year {};
                cout << "Enter the year : ";
                cin >> year;
                if (year % 4 == 0)
                {
                    cout << year << " is a leap year.";
                } else
                {
                    cout << year << " isn't a leap year.";
                }
            } else if (selection == "co" || selection == "CO" || selection == "cO" || selection == "Co")
            {
                do
                {
                    cout << "\n======================MENU====================" << endl;
                    cout << "1 - Currency" << endl;
                    cout << "2 - Length" << endl;
                    cout << "3 - Area" << endl;
                    cout << "4 - Volume" << endl;
                    cout << "5 - Temperature" << endl;
                    cout << "6 - Speed" << endl;
                    cout << "7 - Time" << endl;
                    cout << "8 - Mass" << endl;
                    cout << "E - Exit" << endl;
                    cout << "============================================" << endl;
                    cout << "\nEnter your choice : ";
                    cin >> selection3;

                    if (selection3 == "1")
                    {
                        const long double INR_per_USD {73.374};
                        const long double INR_per_CENT {0.7121};
                        const long double INR_per_DIME {7.404};
                        const long double INR_per_EURO {89.25};
                        const long double INR_per_PKR {0.48};
                        const long double INR_per_SAR {19.54};
                        const long double INR_per_THB {2.34};
                        long double rupee {};
                        
                        cout << "Enter the amount in rupee(s) : ";
                        cin >> rupee;
                        cout << endl;
                        cout << rupee << " Rupee(s) is equal to " << rupee / INR_per_USD << " Dollar(s)." << endl;
                        cout << rupee << " Rupee(s) is equal to " << rupee / INR_per_CENT << " Cent(s)." << endl;
                        cout << rupee << " Rupee(s) is equal to " << rupee / INR_per_DIME << " Dime(s)." << endl;
                        cout << rupee << " Rupee(s) is equal to " << rupee / INR_per_EURO << " Euro(s)." << endl;
                        cout << rupee << " Rupee(s) is equal to " << rupee / INR_per_PKR << " Pakistani rupee(s)." << endl;
                        cout << rupee << " Rupee(s) is equal to " << rupee / INR_per_SAR << " Saudi Riyal(s)." << endl;
                        cout << rupee << " Rupee(s) is equal to " << rupee / INR_per_THB << " Thai Baht(s)." << endl;
                    } else if (selection3 == "2")
                    {
                        string s;
                        cout << "\n===============================" << endl;
                        cout << "1 - Meter to Centimeter" << endl;
                        cout << "2 - Centimeter to Meter" << endl;
                        cout << "3 - Kilometre to Metre" << endl;
                        cout << "===============================" << endl;
                        cout << "\nEnter your choice : ";
                        cin >> s;

                        if (s == "1")
                        {
                            long double num {};
                            cout << "Enter the number : ";
                            cin >> num;
                            cout << endl;
                            cout << num << " metre(s) is equal to " << num*100 << " centimetre(s)" << endl;
                        } else if (s == "2")
                        {
                            long double num {};
                            cout << "Enter the number : ";
                            cin >> num;
                            cout << endl;
                            cout << num << " centimetre(s) is equal to " << num/100 << " metre(s)" << endl;
                        } else if (s == "3")
                        {
                            long double num {};
                            cout << "Enter the number : ";
                            cin >> num;
                            cout << endl;
                            cout << num << " kilometre(s) is equal to " << num*1000 << " metre(s)" << endl;
                        } else
                        {
                            cout << "Unknown Option" << endl;
                        }
                    } else if (selection3 == "3")
                    {
                        string s;
                        cout << "\n=================================" << endl;
                        cout << "1 - Metre^2 to Centimetre^2" << endl;
                        cout << "2 - Centimetre^2 to Metre^2" << endl;
                        cout << "3 - Kilometre^2 to Metre^2" << endl;
                        cout << "=================================" << endl;
                        cout << "\nEnter your choice : ";
                        cin >> s;

                        if (s == "1")
                        {
                            long double num {};
                            cout << "Enter the number : ";
                            cin >> num;
                            cout << endl;
                            cout << num << " Metre^2 is equal to " << num*10000 << " Centimetre^2" << endl;
                        } else if (s == "2")
                        {
                            long double num {};
                            cout << "Enter the number : ";
                            cin >> num;
                            cout << endl;
                            cout << num << " Centimetre^2 is equal to " << num/10000 << " Metre^2" << endl;
                        } else if (s == "3")
                        {
                            long double num {};
                            cout << "Enter the number : ";
                            cin >> num;
                            cout << endl;
                            cout << num << " Kilometre^2 is equal to " << num*1000000 << " Centimetre^2" << endl;
                        } else
                        {
                            cout << "Unknown selection" << endl;
                        }
                    } else if (selection3 == "4")
                    {
                        string s;
                        cout << "\n===================================" << endl;
                        cout << "1 - Metre^3 to Centimetre^3" << endl;
                        cout << "2 - Centimetre^3 to Metre^3" << endl;
                        cout << "3 - Kilometre^3 to Metre^3" << endl;
                        cout << "====================================" << endl;
                        cout << "\nEnter your choice : ";
                        cin >> s;

                        if (s == "1")
                        {
                            long double num {};
                            cout << "Enter the number : ";
                            cin >> num;
                            cout << endl;
                            cout << num << " Metre^3 is equal to " << num*1000000 << " Centimetre^3" << endl;
                        } else if (s == "2")
                        {
                            long double num {};
                            cout << "Enter the number : ";
                            cin >> num;
                            cout << endl;
                            cout << num << " Centimetre^3 is equal to " << num/1000000 << " Metre^3" << endl;
                        } else if (s == "3")
                        {
                            long double num {};
                            cout << "Enter the number : ";
                            cin >> num;
                            cout << endl;
                            cout << num << " Kilometre^3 is equal to " << num/1000000000 << " Metre^3" << endl;
                        } else
                        {
                            cout << "Unknown selection" << endl;
                        }
                    } else if (selection3 == "5")
                    {
                        string s;
                        cout << "\n====================================" << endl;
                        cout << "1 - Celsius to Fahrenheit" << endl;
                        cout << "2 - Fahrenheit to Celsius" << endl;
                        cout << "3 - Celsius to Kelvin" << endl;
                        cout << "4 - Kelvin to Celsius" << endl;
                        cout << "5 - Fahrenheit to Kelvin" << endl;
                        cout << "6 - Kelvin to Fahrenheit" << endl;
                        cout << "======================================" << endl;
                        cout << "\nEnter your choice : ";
                        cin >> s;

                        if (s == "1")
                        {
                            long double temp {};
                            cout << "Enter the temperature : ";
                            cin >> temp;
                            cout << endl;
                            cout << temp << " Celsius is equal to " << (temp+1.8) + 32 << " Fahrenheit." << endl;
                        } else if (s == "2")
                        {
                            long double temp {};
                            cout << "Enter the temperature : ";
                            cin >> temp;
                            cout << endl;
                            cout << temp << " Fahrenheit is equal to " << (temp-32) + (5/9) << " Celsius." << endl;
                        } else if (s == "3")
                        {
                            long double temp {};
                            cout << "Enter the temperature : ";
                            cin >> temp;
                            cout << endl;
                            cout << temp << " Celsius is equal to " << temp + 273 << " Kelvin." << endl;
                        } else if (s == "4")
                        {
                            long double temp {};
                            cout << "Enter the temperature : ";
                            cin >> temp;
                            cout << endl;
                            cout << temp << " Kelvin is equal to " << temp - 273 << " Celsius." << endl;
                        } else if (s == "5")
                        {
                            long double temp {};
                            cout << "Enter the temperature : ";
                            cin >> temp;
                            long double Cel {(temp-32) + (5/9)};
                            cout << endl;
                            cout << temp << " Fahrenheit is equal to " << Cel + 273 << " Kelvin." << endl;
                        } else if (s == "6")
                        {
                            long double temp {};
                            cout << "Enter the temperature : ";
                            cin >> temp;
                            long double Cel {temp - 273};
                            cout << endl;
                            cout << temp << " Fahrenheit is equal to " << (Cel+1.8) + 32 << " Kelvin." << endl;
                        } else
                        {
                            cout << "Unknown selection" << endl;
                        }
                    } else if (selection3 == "6")
                    {
                        string s;
                        cout << "\n=========================================" << endl;
                        cout << "1 - Kilometre/hour to Metre/sec" << endl;
                        cout << "2 - Metre/sec to Kilometere/hour" << endl;
                        cout << "==========================================" << endl;
                        cout << "\nEnter your choice : ";
                        cin >> s;
                        
                        if (s == "1")
                        {
                            long double speed {};
                            cout << "Enter your speed : ";
                            cin >> speed;
                            cout << endl;
                            cout << speed << " Km/h is equal to " << speed * (5/18) << " M/sec" << endl;
                        } else if (s == "2")
                        {
                            long double speed {};
                            cout << "Enter your speed : ";
                            cin >> speed;
                            cout << endl;
                            cout << speed << " M/sec is equal to " << speed * (18/5) << " Km/h";
                        } else
                        {
                            cout << "Unknown selection" << endl;
                        }
                    } else if (selection3 == "7")
                    {
                        string s;
                        cout << "\n=================================" << endl;
                        cout << "1 - Hour to Min" << endl;
                        cout << "2 - Min to Hour" << endl;
                        cout << "3 - Min to Sec" << endl;
                        cout << "4 - Sec to Min" << endl;
                        cout << "5 - Day to Hour" << endl;
                        cout << "=================================" << endl;
                        cout << "\nEnter your choice : ";
                        cin >> s;

                        if (s == "1")
                        {
                            long double num {};
                            cout << "Enter the time : ";
                            cin >> num;
                            cout << endl;
                            cout << num << " hour(s) is equal to " << num*60 << " minutes" << endl;
                        } else if (s == "2")
                        {
                            long double num {};
                            cout << "Enter the time : ";
                            cin >> num;
                            cout << endl;
                            cout << num << " minutes is equal to " << num/60 << " hour(s)." << endl;
                        } else if (s == "3")
                        {
                            long double num {};
                            cout << "Enter the time : ";
                            cin >> num;
                            cout << endl;
                            cout << num << " minute(s) is equal to " << num*60 << " seconds." << endl;
                        } else if (s == "4")
                        {
                            long double num {};
                            cout << "Enter the time : ";
                            cin >> num;
                            cout << endl;
                            cout << num << " minute(s) is equal to " << num/60 << " seconds." << endl;
                        } else if (s == "5")
                        {
                            long double num;
                            cout << "Enter the number of days : ";
                            cin >> num;
                            cout << endl;
                            cout << num << " day(s) is equal to " << num*1440 << " minutes." << endl;
                        } else
                        {
                            cout << "Unknown Option" << endl;
                        }
                    } else if (selection3 == "8")
                    {
                        string s;
                        cout << "\n====================================" << endl;
                        cout << "1 - Kilogram to Gram" << endl;
                        cout << "2 - Gram to Kilogram" << endl;
                        cout << "3 - Gram to Miligram" << endl;
                        cout << "4 - Milligram to Gram" << endl;
                        cout << "====================================" << endl;
                        cout << "\nEnter your choice : ";
                        cin >> s;

                        if (s == "1")
                        {
                            long double num {};
                            cout << "Enter the mass : ";
                            cin >> num;
                            cout << endl;
                            cout << num << " Kilogram(s) is equal to " << num*1000 << " Gram(s)" << endl;
                        } else if (s == "2")
                        {
                            long double num {};
                            cout << "Enter the mass : ";
                            cin >> num;
                            cout << endl;
                            cout << num << " Gram(s) is equal to " << num/1000 << " Kilogram(s)" << endl;
                        } else if (s == "3")
                        {
                            long double num {};
                            cout << "Enter the mass : ";
                            cin >> num;
                            cout << endl;
                            cout << num << " Gram(s) is equal to " << num*1000 << " Milligram(s)" << endl;
                        } else if (s == "4")
                        {
                            long double num {};
                            cout << "Enter the mass : ";
                            cin >> num;
                            cout << endl;
                            cout << num << " Milligram(s) is equal to " << num/1000 << " Gram(s)" << endl;
                        } else
                        {
                            cout << "Unknown Option" << endl;
                        }
                    } else if (selection3 == "e" || selection3 == "E")
                    {
                        cout << "Exited" << endl;
                    } else
                    {
                        cout << "Unknown selection, Try again" << endl;
                    }
                } while (selection3 != "e" || selection3 == "E");
                
            } else if (selection == "q" || selection == "Q")
                cout << "GoodBye !!" << endl;
            else
                cout << "Unknown selection, try again......" << endl;
        } while (selection != "q" && selection != "Q");
        
        cout << "=========================Thanks==========================" << endl;
        cout << "Hope you loved my program" << endl;
    } else
    {
        cout << "Incorrect Password" << endl;
        cout << "Program will now terminate" << endl;
    } 
    cout << endl;
    return 0;
}
