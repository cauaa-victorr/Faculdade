public class conta_bancaria {
    private String numeroConta;
    private double saldo;
    private String titular;

    public conta_bancaria(String numeroConta, double saldo, String titular) {
        this.numeroConta = numeroConta;
        this.saldo = saldo;
        this.titular = titular;
    }

    public String getNumeroConta() {
        return numeroConta;

    }

    public void setNumeroConta(String numeroConta) {
        this.numeroConta = numeroConta;
    }

    public double getSaldo() {
        return saldo;
    }

    public void setSaldo(double saldo) {
        this.saldo = saldo;
    }

    public String getTitular() {
        return titular;
    }

    public void setTitular(String titular) {
        this.titular = titular;
    }

    public boolean depositar(double valor) {
        if (valor > 0.0) {
            saldo += valor;
            return true;
        } else {
            return false;
        }
    }

    public boolean sacar(double valor) {
        if (valor > 0 && valor <= saldo) {
            saldo -= valor;
            return true;
        }
        return false;
    }

    public boolean transferir(double valor, conta_bancaria outraConta) {
        if (this.sacar(valor)) {
            outraConta.depositar(valor);
            return true;
        }
        return false;
    }

    @Override
    public String toString() {
        return "Conta [Numero da connta=" + numeroConta + ", Saldo=" + saldo + ", Saque=" + sacar(saldo) + "]";
    }
}