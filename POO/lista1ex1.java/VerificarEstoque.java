import java.util.Scanner;

public class VerificarEstoque {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        System.out.print("Digite a quantidade atual em estoque: ");
        int quantidade = scanner.nextInt();
        
        if (quantidade < 10) {
            System.out.println("Estoque crítico! Solicitar reposição.");
        } else if (quantidade <= 50) {
            System.out.println("Estoque normal.");
        } else {
            System.out.println("Estoque cheio.");
        }
        
        scanner.close(); 
    }

    
}
