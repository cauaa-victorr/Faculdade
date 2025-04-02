package lista2.java;

public class Usuario {
    private String nome;
    private String email;
    private String senha;

    public Usuario(String nome, String email, String senha) {
        this.nome = nome;
        this.email = email;
        this.senha = senha;
    }

    public String getNome() {
        return nome;
    }

    public String getEmail() {
        return email;
    }

    public String getSenha() {
        return senha;
    }
    public boolean alterarSenha(String novaSenha) {
        if (novaSenha.length() >= 6) {
            this.senha = novaSenha;
}
