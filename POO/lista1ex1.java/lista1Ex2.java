import java.util.Scanner;

public class lista1Ex2 {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Digite a cor do semaforo:");
        var cor = scanner.next();

        switch (cor) {
            case "verde":
                
                System.out.println("Siga em frente.");

                break;
            case "amarelo":
                System.out.println("Atenção, prepare-se para parar.");

                break;
            case "vermelho":

                System.out.println("Pare imediatamente.");
            default:
                System.out.println("Cor desconhecida");
                break;
        }
        scanner.close(); 
    }
}