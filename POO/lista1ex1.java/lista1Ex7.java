package POO.lista1ex1.java;

import java.util.Scanner;

public class lista1Ex7 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        int dinheiro, N50, N20;
        double resto;

        do {
            System.out.println("Digite o valor de que deseja sacar:");
             dinheiro = scanner.nextInt();

             N50 = dinheiro/50;
             resto = dinheiro%50;
             N20 = resto/20;
             resto = resto%20;
            
             System.out.print("Entregando %d notas de 50", N50);
             System.out.print("Entregando %d notas de 20", N20);
             System.out.print("Entregando %lf notas de 10", resto);


        } while (dinheiro!=0);
         scanner.close();
    }
     
}
   
