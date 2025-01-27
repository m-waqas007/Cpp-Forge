# Pearson Correlation Coefficient Calculator

A C++ program that calculates the Pearson correlation coefficient between two sets of data points.

## 📊 Overview

The Pearson correlation coefficient is a statistical measure that quantifies the strength and direction of the linear relationship between two continuous variables. This program provides a simple and efficient way to calculate this coefficient.

## 🧮 Features

- Calculate Pearson correlation coefficient between two datasets
- Input validation and error handling
- Support for both positive and negative correlations
- Handles decimal numbers
- Clear and user-friendly interface

## 🔍 Mathematical Formula

The Pearson correlation coefficient (r) is calculated using the formula:

```
r = Σ((x - μx)(y - μy)) / (σx * σy)

where:
- μx is the mean of x values
- μy is the mean of y values
- σx is the standard deviation of x values
- σy is the standard deviation of y values
```

## 🚀 How to Use

1. Compile the program:
   ```bash
   g++ pearson_calculator.cpp -o pearson_calculator
   ```

2. Run the executable:
   ```bash
   ./pearson_calculator
   ```

3. Follow the prompts to:
   - Enter the number of data points
   - Input the x-values
   - Input the y-values

4. The program will output the calculated Pearson correlation coefficient

## 📥 Input Format

- Enter the number of data points (n) when prompted
- Input n x-values, one per line
- Input n y-values, one per line

## 📤 Output

The program outputs:
- The calculated Pearson correlation coefficient
- A brief interpretation of the result

<!--
## 🔢 Example

```
Enter number of data points: 4
Enter x values:
1
2
3
4
Enter y values:
2
4
6
8
Pearson Correlation Coefficient: 1.0
Interpretation: Perfect positive correlation
``` 
-->

## ⚠️ Requirements

- C++ compiler (GCC 4.9 or later recommended)
- Basic command line knowledge

## 👨‍💻 Author

Created by [@m-waqas007](https://github.com/m-waqas007)

## 📝 License

This project is open source and available under the MIT License.

## 🤝 Contributing

Contributions, issues, and feature requests are welcome! Feel free to check the [issues page](https://github.com/m-waqas007/Cpp-Forge/issues).
