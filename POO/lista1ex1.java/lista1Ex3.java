package POO.lista1ex1.java;

import java.util.Scanner;

public class lista1Ex3 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Digite a temperatura atual:");
        double temp = scanner.nextInt();

        if(temp < 15){
            System.out.println("Frio - Leve casaco");
        }else{
            if(temp > 15 && temp < 25){
                System.out.println("Agradável - Roupas leves.");
            }else{
                System.out.println("Quente - Use protetor solar.");
            }
       scanner.close(); }
    }
    
}
