package lista2.java;

public class RegistroFuncionario {
    private String nome;
    private String CPF;
    private double salario;

    public RegistroFuncionario(String nome, String CPF, double salario) {
        this.nome = nome;
        this.CPF = CPF;
        salario = 0.0;
    }

    public String getNome() {
        return nome;
    }

    public String getCPF() {
        return CPF;
    }

    public double getSalario() {
        return salario;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public void setAumentarSalario(double aumentarSalario) {
        this.aumentarSalario = aumentarSalario;
        aumentarSalario += salario;
    }
}
