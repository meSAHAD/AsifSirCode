import java.util.Scanner;

public class primeNum {
  public static void main(String[] args) {
      Scanner inputNum = new Scanner(System.in);
      System.out.print("Enter the lower limit: ");
      int bottLimit = inputNum.nextInt();
      System.out.print("Enter the upper limit: ");
      int uppLimit = inputNum.nextInt();

      for (int i = bottLimit; i <= uppLimit; i++) {
          if (isPrime(i)) {
              System.out.println(i);
          }
      }
  }

  public static boolean isPrime(int num) {
      if (num <= 1) {
          return false;
      }
      for (int i = 2; i <= Math.sqrt(num); i++) {
          if (num % i == 0) {
              return false;
          }
      }
      return true;
  }
}