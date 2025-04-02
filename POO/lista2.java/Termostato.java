package lista2.java;

public class Termostato {
    private double temperaturaAtual;
    private double temperaturaMaxima;

    public Termostato(double temperaturaAtual) {
        this.temperaturaAtual = temperaturaAtual;
    }

    public double getTemperaturaAtual() {
        return temperaturaAtual;
    }

    public void setTemperaturaAtual(double temperaturaAtual) {
        this.temperaturaAtual = temperaturaAtual;
    }

}
