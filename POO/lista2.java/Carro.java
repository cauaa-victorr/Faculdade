package lista2.java;

public class Carro {
    private String placa;
    private String modelo;
    private double km;

    public Carro(String placa, String modelo, double km) {
        this.placa = placa;
        this.modelo = modelo;
        km = 0;
    }

    public String getPlaca() {
        return placa;
    }

    public String getModelo() {
        return modelo;
    }

    public double getKm() {
        return km;
    }

    public boolean registarViagem(double km) {
        if (km > 0) {
            km++;
        }
    }
}
