import java.util.Scanner;
//import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        double a, b;
        int n;

        do {
            displayMenu();
            n = scanner.nextInt();

            switch (n) {
                case 1:
                    System.out.println("Enter two numbers:");
                    a = scanner.nextDouble();
                    b = scanner.nextDouble();
                    System.out.println(add(a, b));
                    break;
                case 2:
                    System.out.println("Enter two numbers:");
                    a = scanner.nextDouble();
                    b = scanner.nextDouble();
                    System.out.println(subtraction(a, b));
                    break;
                case 3:
                    System.out.println("Enter two numbers:");
                    a = scanner.nextDouble();
                    b = scanner.nextDouble();
                    System.out.println(multiplication(a, b));
                    break;
                case 4:
                    System.out.println("Enter two numbers:");
                    a = scanner.nextDouble();
                    b = scanner.nextDouble();
                    division(a, b);
                    break;
                case 5:
                    System.out.println("Exiting...");
                    break;
                default:
                    System.out.println("Invalid choice! Please choose a valid option.");
            }
        } while (n != 5);

        scanner.close();
    }

    public static void displayMenu() {
        System.out.println(" *MENU* ");
        System.out.println("___ ");
        System.out.println("Your choice:");
        System.out.println(" 1.Addition(+)\n 2.Subtraction(-)\n 3.Multiplication(*)\n 4.Division(/)\n 5.Exit");
        System.out.print("Please Enter Your favorite Menu Digit: ");
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
        System.out.println(a / b);
    }
}