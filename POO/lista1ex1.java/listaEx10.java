import java.util.Scanner;

public class lista1Ex9 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int codigo;
        double total = 0;

        do {
            System.out.println("Digite o código do item (1 = Hambúrguer, 2 = Pizza, 3 = Salada) ou 0 para sair:");
            codigo = scanner.nextInt();

            switch (codigo) {
                case 1:
                    System.out.println("Você escolheu Hambúrguer - R$20,00");
                    total += 20;
                    break;
                case 2:
                    System.out.println("Você escolheu Pizza - R$30,00");
                    total += 30;
                    break;
                case 3:
                    System.out.println("Você escolheu Salada - R$15,00");
                    total += 15;
                    break;
                case 0:
                    System.out.println("Encerrando pedidos...");
                    break;
                default:
                    System.out.println("Código inválido! Tente novamente.");
            }
        } while (codigo != 0);

        System.out.println("Total a pagar: R$" + total);
        scanner.close();
    }
}
