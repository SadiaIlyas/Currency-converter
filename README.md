# Currency Converter 💱

> A multi-currency conversion tool built in C++ that converts between 5+ international currencies using user-defined exchange rates through a clean command-line interface.

<p>
  <img src="https://img.shields.io/badge/Language-C++-00599C?style=flat-square&logo=c%2B%2B&logoColor=white"/>
  <img src="https://img.shields.io/badge/Platform-Console-333333?style=flat-square"/>
  <img src="https://img.shields.io/badge/Status-Complete-2E8B57?style=flat-square"/>
</p>

---

## What it does

Currency Converter accepts an amount and a source-to-target currency pair from the user, applies real-world exchange logic, and outputs the converted value. The program supports multiple currency pairs in a single session and handles invalid input without terminating.

---

## Features

- **5+ supported currency pairs** — PKR, USD, EUR, GBP, SAR and more
- **Bidirectional conversion** — convert in either direction for any pair
- **Loop-based session** — convert multiple amounts without restarting
- **Input validation** — rejects negative amounts and unrecognised currency codes
- **Clean formatted output** — results displayed to 2 decimal places

---

## Supported currencies

| Code | Currency |
|---|---|
| PKR | Pakistani Rupee |
| USD | US Dollar |
| EUR | Euro |
| GBP | British Pound |
| SAR | Saudi Riyal |
| AED | UAE Dirham |

---

## How to run

**Requirements:** C++ compiler (g++ recommended)

```bash
# Clone the repository
git clone https://github.com/SadiaIlyas/Currency-converter.git
cd Currency-converter

# Compile
g++ -o currency_converter main.cpp

# Run
./currency_converter
```

On Windows:
```bash
g++ -o currency_converter.exe main.cpp
currency_converter.exe
```

---

## Sample interaction

```
==============================
      CURRENCY CONVERTER
==============================

Enter amount: 5000
Convert from (e.g. PKR): PKR
Convert to   (e.g. USD): USD

Result: 5000 PKR = 17.95 USD

Convert another? (y/n): y

Enter amount: 100
Convert from: USD
Convert to:   EUR

Result: 100 USD = 92.40 EUR

Convert another? (y/n): n
Thank you for using Currency Converter.
```

---

## Concepts demonstrated

- Functions for modular conversion logic — one function per currency pair
- `switch` / `if-else` chains for currency routing
- Formatted output using `setprecision` and `fixed`
- Loop-driven program flow with clean exit handling
- Input sanitisation for strings and numeric values

---

## What I learned

- Structuring a multi-option program without making `main()` bloated
- Formatting decimal output to a fixed precision in C++
- Thinking about edge cases: What if the user types "usd" instead of "USD"? What if they enter -500?

---

## Author

**Sadia Ilyas** — CS Student @ GCU Lahore
[LinkedIn](https://linkedin.com/in/sadia-ilyas-b96183353) · [GitHub](https://github.com/SadiaIlyas)
