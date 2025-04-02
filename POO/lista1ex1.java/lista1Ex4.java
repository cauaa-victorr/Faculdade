import java.util.Scanner;

public class lista1Ex4 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        for(int i=0; i<24; i++){
            System.out.printf("Venda registrada na hora %d", i);
        }
        scanner.close();
    }
}
