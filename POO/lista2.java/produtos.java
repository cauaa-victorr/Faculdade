package lista2.java;

public class produtos {
    private String nome;
    private String codigo;
    private int quantidade;

    public produtos(String nome, String codigo, int quantidade) {
        this.nome = nome;
        this.codigo = codigo;
        quantidade = 0;
    }

    public String getNome() {
        return nome;
    }

    public String getCodigo() {
        return codigo;
    }

    public int getQuantidade() {
        return quantidade;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public boolean adicionar(int qtd) {
        this.qtd = qtd;
        if (qdt > 0) {
            quantidade = +qtd;
        }
    }

    public boolean remover(int qtd) {
        this.qtd = qtd;

        if (qtd > 0) {
            quantidade += qtd;
        }
    }

}
