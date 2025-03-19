# GPA Calculation System in C 🎓📊

## 📌 Description

This **C program** calculates a student's potential GPA based on their grade level and current GPA. The program uses the grade level to adjust the GPA and then determines the student's academic standing (A, B, C, D, or F) based on the adjusted GPA.

The program performs the following tasks:
- Prompts the user to input their grade level (Freshman, Sophomore, Junior, or Senior).
- Takes the student's current GPA as input.
- Adjusts the GPA based on the grade level.
- Determines the letter grade (A, B, C, D, or F) based on the adjusted GPA.

## ✨ Features

- **Grade Level Adjustment**: The program adjusts the GPA based on the student's grade level (Freshman: +0.4, Sophomore: +0.3, Junior: +0.2, Senior: +0.1).
- **GPA Evaluation**: After adjusting the GPA, the program evaluates the student's academic performance and provides a letter grade.
- **Input Validation**: The program ensures that the user inputs their grade level and GPA correctly.

## 🛠️ How to Run

1. **Clone the repository:**
    ```bash
    git clone <repository_url>
    ```

2. **Navigate into the project directory:**
    ```bash
    cd gpa-calculation-system-c
    ```

3. **Compile the C program:**
    ```bash
    gcc gpa_calculation.c -o gpa_calculation
    ```

4. **Run the program:**
    ```bash
    ./gpa_calculation
    ```

## 📂 File Structure

- `gpa_calculation.c`: The C source file containing the logic for calculating the GPA and determining the letter grade.
- `README.md`: This file, containing details about the project.

## 🔧 Dependencies

- **C Standard Library**: The program uses standard input/output and basic control structures from the C Standard Library.

## 📜 License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details. 📝
