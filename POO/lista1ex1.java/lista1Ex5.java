import java.util.Scanner;

public class lista1Ex5 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        double litro = 0, totalLitro = 0;

        System.out.println("Digite o consumo em litros ou 0 para encerrar");
        litro = scanner.nextDouble();

        while (litro!=0) {
        totalLitro+=litro;
        System.out.println("Digite o consumo em litros ou 0 para encerrar");
        litro = scanner.nextDouble();
            
        }
        scanner.close();
    }
    
}
