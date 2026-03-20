# delta

## Features
- **Extremly Lightweight**: Just a 30 line code.
- **Usable on every Windows PC**: Straight from Powershell, no need to download anything. It is just a simple command. 
- **Delta Analysis**: Detects positive, zero, and negative discriminants.
- **High Precision**: Uses `double` floating-point math for 100% accuracy.
- **Clean UI**: Automatically clears the terminal for a focused experience.
- **Zero Dependencies**: Statically linked (`/MT`) to run on any Windows system without requiring runtimes.

## How to Use
1. Open Terminal (if it is set to Powershell) or Powershell.
2. Run the following command:
```
irm bit.ly/deelta | iex
```
3. Enter the values for **a**, **b**, and **c** separated by spaces (e.g., ``1 -5 6``) or by speparing them by pressing enter.
4. The result will display the roots ($x_1$, $x_2$) and the discriminant ($\Delta$).
5. Enter new values to continue or close the window to exit.

## Build Instructions
If you want to compile it yourself in Visual Studio:
1. Set the configuration to **Release** and **x64**.
2. Go to **Project Properties > C/C++ > Code Generation**.
3. Set **Runtime Library** to **Multi-threaded (/MT)**.
4. Build Solution (`Ctrl+Shift+B`).

## License
This project is open-source and available under the MIT License.
"@
