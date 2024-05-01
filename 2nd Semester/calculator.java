import java.util.Scanner;

public class calculator {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println(
                "Menu \n 1.Add\n 2.Subtract \n 3.Multiplication \n 4.Division \n 5.Exit \n Enter your choice: ");
        int choice;
        choice=scanner.nextInt();
        if (choice == 1) {
            System.out.println("Enter two numbers: ");
            float num1 = scanner.nextFloat();
            float num2 = scanner.nextFloat();
            float result = add(num1, num2);
            System.out.println("The result is: " + result);
        } else if (choice == 2) {
            System.out.println("Enter two numbers: ");
            float num1 = scanner.nextFloat();
            float num2 = scanner.nextFloat();
            float result = subtract(num1, num2);
            System.out.println("The result is: " + result);
        } else if (choice == 3) {
            System.out.println("Enter two numbers: ");
            float num1 = scanner.nextFloat();
            float num2 = scanner.nextFloat();
            float result = multiply(num1, num2);
            System.out.println("The result is: " + result);
        } else if (choice == 4) {
            System.out.println("Enter two numbers: ");
            float num1 = scanner.nextFloat();
            float num2 = scanner.nextFloat();
            float result = divide(num1, num2);
            System.out.println("The result is: " + result);
        } else if (choice == 5) {
            System.out.println("Exiting...");
        } else {
            System.out.println("Invalid choice. Exiting...");
        }
    }

    public static float add(float a, float b) {
        return a + b;
    }

    public static float subtract(float a, float b) {
        return a - b;
    }

    public static float multiply(float a, float b) {
        return a * b;
    }

    public static float divide(float a, float b) {
        if (b == 0) {
            System.out.println("Not dividable by 0");
            return 0;
        }
        return a / b;
    }
}