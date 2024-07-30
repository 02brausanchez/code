package apaloo;

public class Figura {
    protected double area; 
    protected double perimetro; 
    public static double MiPI = 3.1416; 
    
    public Figura(){
        this.area = 0; 
        this.perimetro = 0;
    }

    public Figura(double x){
        this.area = x; 
        this.perimetro = x;
    }

    public double getArea(){
        return area;
    }

    public double getPerimetro(){
        return perimetro; 
    }

    public void calcularArea(){}
    public void calcularPerimetro(){}



}
