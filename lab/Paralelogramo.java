package apaloo;

public class Paralelogramo extends Figura {
    private double base, altura; 
    
    public Paralelogramo(double base, double altura){
        super();
        this.base = base; 
        this.altura = altura; 
    }

    public void calcularArea(){
        area = base * altura;
    }

    public void calcularPerimetro(){
        perimetro = 2 * base + 2 * altura;
    }

}
