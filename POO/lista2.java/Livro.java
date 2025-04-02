package lista2.java;

public class Livro {
    private String titulo;
    private String autor;
    private int copiasDisponiveis;

    public Livro(String titulo, String autor, int copiasDisponiveis){
        this.titulo = titulo;
        this.autor = autor;
        copiasDisponiveis = 1;
    }

    public int getCopiasDisponiveis(){
        return copiasDisponiveis;
    }
    public boolean emprestar(double emprestar) {
        if (emprestar > 0 && emprestar <= copiasDisponiveis) {
            copiasDisponiveis -= emprestar;
            return true;
        }
        return false;
    }
    public boolean devolver(double devolver) {
        if (devolver > 0.0) {
            devolver += copiasDisponiveis;
            return true;
        } else {
            return false;
        }
    }

}
