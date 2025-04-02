import java.util.Scanner;

public class Lista1Ex6 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        System.out.println("Digite o nome da matéria:");
        String materia = scanner.nextLine(); 
        
        for (int i = 0; i < 5; i++) {
            System.out.printf("Estudar %s por 2 horas\n", materia); 
        }

        scanner.close(); 
    }
}
