package POO.lista1ex1.java;

import java.util.Scanner;

public class lista1Ex9 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        int freg, aulas;
        double porcetagem;
        System.out.print("Digite total de aulas:");
        aulas = scanner.nextInt();
        System.out.print("Digite a frenguencia do aluno:");
        freg = scanner.nextInt();

        porcetagem = (freg/aulas)*100;

        if(porcetagem>75){
            System.out.println("Freguencia %.1lf -  Aprovado por frequência.");
        }else{
            System.out.println("Freguencia %.1lf - Reprovado por frequência.");
        }



    }
}
