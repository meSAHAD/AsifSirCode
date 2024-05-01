import java.util.Scanner;

public class calculator1 {
    public static void main(String[] args) {
        Scanner takeinput = new Scanner(System.in);
        double a, b;
        int choice;

        do {
            displayMenu();
            choice = takeinput.nextInt();

            switch (choice) {
                case 1:
                    System.out.println("Enter two numbers:");
                    a = takeinput.nextDouble();
                    b = takeinput.nextDouble();
                    System.out.println("Result: " + add(a, b));
                    break;
                case 2:
                    System.out.println("Enter two numbers:");
                    a = takeinput.nextDouble();
                    b = takeinput.nextDouble();
                    System.out.println("Result: " + subtraction(a, b));
                    break;
                case 3:
                    System.out.println("Enter two numbers:");
                    a = takeinput.nextDouble();
                    b = takeinput.nextDouble();
                    System.out.println("Result: " + multiplication(a, b));
                    break;
                case 4:
                    System.out.println("Enter two numbers:");
                    a = takeinput.nextDouble();
                    b = takeinput.nextDouble();
                    division(a, b);
                    break;
                case 5:
                    break;
                default:
                    System.out.println("Invalid choice! Please choose a valid option.");
            }
        } while (choice != 5);

        takeinput.close();
    }

    public static void displayMenu() {
        System.out.println("\n\nMENU");
        System.out.println(" 1. Addition (+)\n 2. Subtraction (-)\n 3. Multiplication (*)\n 4. Division (/)\n 5. Exit");
        System.out.print("Please Enter Your preferred Menu Digit: ");
    }

    public static double add(double a, double b) {

        return a + b;
    }

    public static double subtraction(double a, double b) {
        return a - b;
    }

    public static double multiplication(double a, double b) {
        return a * b;
    }

    public static void division(double a, double b) {
        if (b == 0) {
            System.out.println("Math Error!!");
            return;
        }
        System.out.println("Result: " + (a / b));
    }
}
