package lista2.java;

public class ConfiguracaoJogo {
    private String dificuldade;
    private int volumeSom;

    public ConfiguracaoJogo(String dificuldade, int volumeSom) {
        this.dificuldade = dificuldade;
        this.volumeSom = volumeSom;
    }

    public String getDificuldade() {
        return dificuldade;
    }

    public int getVolumeSom() {
        return volumeSom;
    }

    public void setDificuldade(String dificuldade) {
        if (dificuldade.equalsIgnoreCase("fácil") ||
                dificuldade.equalsIgnoreCase("médio") ||
                dificuldade.equalsIgnoreCase("difícil")) {
            this.dificuldade = dificuldade;
        }

    }

    public void setVolumeSom(int volumeSom) {
        if (volumeSom >= 0 && volumeSom <= 100) {
            this.volumeSom = volumeSom;
        }
    }
}