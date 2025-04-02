package POO.lista1ex1.java;

public class lista1Ex8 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int temp;
        
        System.out.println("Digite a temperatura (-1 para encerrar):");
        temp = scanner.nextInt();

        while (temp != -1) {
            if(temp > 24 && temp < 28){
                System.out.print("Alerta: Temperatura fora da faixa ideal!");
            }else{
                System.out.print("Temperatura normal.");
            }
            System.out.println("Digite a temperatura (-1 para encerrar):");
            temp = scanner.nextInt(); 
        }
        System.out.println("Monitoramento encerrado.");

        scanner.close();

    }
}
