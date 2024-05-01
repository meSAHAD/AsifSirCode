import java.util.Scanner;

public class tempConvert {
    public static void main(String[] args) {
        Scanner inputTemp = new Scanner(System.in);
        System.out.print("Enter the value of Temperature (in Fahrenheit): ");
        double fahrenheit = inputTemp.nextDouble();
        System.out.printf("%.2f", tempConvert(fahrenheit));
    }

    public static double tempConvert(double temperature) {
        double celsius = (temperature - 32) * 5 / 9;
        return celsius;
    }
}