
//sloution to problem no 2

import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;

public class Calculator { //main class as per question
    public static void main(String[] args) { //main method 
        try (BufferedReader reader = new BufferedReader(new FileReader("C:\\\\Users\\\\sahad\\\\OneDrive\\\\Documents\\\\My Codes\\\\OOP\\\\input.txt"))) {
            String line;  //input from files
            // Read each line from the file and perform the calculation
            while ((line = reader.readLine()) != null) { //reading from file untill null value appears
                String[] parts = line.split(" "); //splitting the line into parts
                // Check if the input format is valid
                if (parts.length != 3) {
                    System.out.println("Error: Invalid input format"); //for safegurd for 4th input in the question
                    continue;
                }
                double num1 = Double.parseDouble(parts[0]); //converting string to double
                char operator = parts[1].charAt(0); //converting string to char
                double num2 = Double.parseDouble(parts[2]); //converting string to double
                double result = calculate(num1, operator, num2); //calling calculate method
                System.out.println("Result: " + result); //
            }
        } 
        // handling exceptions
        catch (IOException e) { 
            System.out.println("Error reading input file: " + e.getMessage());
        } catch (NumberFormatException e) { 
            System.out.println("Error: Invalid number format in input file.");
        }
    }
    // Calculate the result of the given operation
    public static double calculate(double num1, char operator, double num2) {
        switch (operator) {
            case '+': // do addition
                return num1 + num2;
            case '-': //do subtraction
                return num1 - num2;
            case '*': //do multiplication
                return num1 * num2;
            case '/': //do division
                if (num2 == 0) {
                    System.out.println("Error: Division by zero!"); //divided b=by zero protection
                    return Double.NaN;
                }
                return num1 / num2;
            default: 
                System.out.println("Error: Invalid operator!"); //for safegurd for 4th input in the question
                return Double.NaN;
        }
    }
}
