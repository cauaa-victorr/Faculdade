package lista2.java;

public class ReservaHotel {
    private int numeroQuarto;
    private String hospede;
    private boolean status;

    public ReservaHotel(int numeroQuarto, String hospede, boolean status) {
        this.numeroQuarto = numeroQuarto;
        this.hospede = hospede;
        this.status = status;
    }

    public int getNumeroQuarto() {
        return numeroQuarto;
    }

    public String getHospede() {
        return hospede;
    }

    public boolean isStatus() {
        return status;
    }

    public void checkIn(String hospede) {
        if (!status) {
            this.hospede = hospede;
            this.ocupado = true;
        }

    public void checkOut() {
        if (ststus) {
            this.hospede = null;
            this.ocupado = false;

}
