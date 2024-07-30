package apaloo;

public class Circulo extends Figura {
    private double radio; 
    
    //Contructor de la clase circulo
    
    public Circulo(){
        //Llama al constructor de la superclase
        super(); 
    }

    public double getRadio(){
        return radio; 
    }

    public void setRadio(double radio){
        this.radio = radio;
    }

    public void calcularArea(){
        this.area = Math.PI*Math.pow(this.radio,2.0);
    }

    public void calcularPerimetro(){
        this.perimetro = 2*Math.PI*this.radio;
    }
}
