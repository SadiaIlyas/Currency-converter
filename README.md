**💱 Currency Converter in C++**

A simple console-based Currency Converter built in C++.
This program allows users to convert an entered amount between multiple currencies such as USD, PKR, EUR, GBP, INR, AED, KRW, and SAR.

**🚀 Features**

Convert between 8 different currencies

Menu-driven interface for easy navigation

Conversion handled via USD as the base currency

Supports repeated conversions in a single run

Displays results with formatted precision

Handles invalid input gracefully

**🛠️ Technologies Used**

Language: C++

Concepts Used:

Functions

Switch-case statements

Loops (do-while)

Structures of modular programming

iomanip for formatted output

**📖 How It Works**

The program asks the user to select the source currency.

The user enters the amount to be converted.

The program then asks for the target currency.

Conversion is performed internally by first converting the amount to USD, and then from USD to the target currency.

The converted amount is displayed with up to 4 decimal places.

The user can choose to repeat the process or exit.

**🌍 Supported Currencies**

USD – US Dollar

PKR – Pakistani Rupee

EUR – Euro

GBP – British Pound

INR – Indian Rupee

AED – UAE Dirham

**Example OUTPUT:**
Enter the currency of your amount:
1. USD   2. PKR
3. EUR   4. GBP
5. INR   6. AED (Dirham)
7. KRW (Won)   8. SAR (Riyal)

> 2
Enter your amount:
> 1000
Enter the currency in which you want to convert the amount:
1. USD   2. PKR
3. EUR   4. GBP
5. INR   6. AED (Dirham)
7. KRW (Won)   8. SAR (Riyal)
> 1
The converted amount is: 3.6
Do you want to convert another amount (Y/N)? 
**🙌 Acknowledgment**

This project was created as part of my C++ internship task at INDOLIKE.
It helped me practice real-world problem-solving and modular programming in C++.
