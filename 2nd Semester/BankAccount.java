import java.util.Scanner;

public class BankAccount {
    private String depositorName;
    private String accountNumber;
    private String accountType;
    private double bal;

    // Constructor to assign initial values
    public BankAccount(String depositorName, String accountNumber, String accountType, double initialBal) {
        this.depositorName = depositorName;
        this.accountNumber = accountNumber;
        this.accountType = accountType;
        this.bal = initialBal;
    }

    // Method to deposit an amnt
    public void deposit(double amnt) {
        bal += amnt;
        System.out.println("amnt " + amnt + " deposited. Current bal is " + bal);
    }
    public void withdraw(double amnt) {
        if (bal >= amnt) {
            bal -= amnt;
            System.out.println("amnt " + amnt + " withdrawn. Current bal is " + bal);
        } else {
            System.out.println("Insufficient bal. Withdrawal not processed.");
        }
    }
    public void displayBal() {
        System.out.println("Account holder: " + depositorName);
        System.out.println("Account bal: " + bal);
    }

    public static void main(String[] args) {
        Scanner inputinfo = new Scanner(System.in);

        System.out.print("Enter depositor name: ");
        String depositorName = inputinfo.nextLine();

        System.out.print("Enter account number: ");
        String accountNumber = inputinfo.nextLine();

        System.out.print("Enter account type: ");
        String accountType = inputinfo.nextLine();

        System.out.print("Enter initial bal: ");
        double initialBal = inputinfo.nextDouble();

        BankAccount account1 = new BankAccount(depositorName, accountNumber, accountType, initialBal);

        account1.displayBal();

        System.out.print("Enter the amnt to deposit: ");
        double depositamnt = inputinfo.nextDouble();
        account1.deposit(depositamnt);

        System.out.print("Enter the amnt to withdraw: ");
        double withdrawamnt = inputinfo.nextDouble();
        account1.withdraw(withdrawamnt);

        account1.displayBal();

        inputinfo.close();
    }
}
