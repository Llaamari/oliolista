# Object List Exercise (C++)
![C++](https://img.shields.io/badge/C++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white) ![Qt](https://img.shields.io/badge/Qt-%23217346.svg?style=for-the-badge&logo=Qt&logoColor=white)

This project is a simple C++ exercise demonstrating **object-oriented programming** and **STL vectors**.  
It defines a `Car` class and stores multiple car objects in a list, then prints their details.

---

## Description

The goal of this exercise is to:
- Create a `Car` class with basic attributes and methods.
- Use a `std::vector` to store multiple car objects.
- Practice iteration and object printing in C++.

---

## Class: `Car`

### Member Variables
| Name | Type | Description |
|------|------|--------------|
| `brand` | `std::string` | The car's brand (e.g. Toyota) |
| `model` | `std::string` | The car's model (e.g. Corolla) |
| `yearModel` | `int` | The car's manufacturing year |

### Methods
| Method | Description |
|---------|-------------|
| `Car(string brand, string model, int yearModel)` | Constructor that initializes all attributes |
| `void printData() const` | Prints the car's details to the console |

---

## Main Program (`main.cpp`)

The main function:
1. Creates a `std::vector<Car>` named `carList`.
2. Adds three cars to the list.
3. Prints the details of the **second car**.
4. Prints **all cars** in the list using a `for` loop.

---

## Example Output
```
Second car in the list:
Merkki: Volkswagen, Malli: Golf, Vuosi: 2018

All cars in the list:
Merkki: Toyota, Malli: Corolla, Vuosi: 2015
Merkki: Volkswagen, Malli: Golf, Vuosi: 2018
Merkki: Tesla, Malli: Model 3, Vuosi: 2022
```
