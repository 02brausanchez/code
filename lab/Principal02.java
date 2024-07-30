package apaloo;

public class Principal02 {
    public static void main(String[] args) {
        Circulo oCirculo; 
        oCirculo = new Circulo(); 
        
        oCirculo.setRadio(10.0);
        oCirculo.calcularArea();
        oCirculo.calcularPerimetro();
        System.out.println(oCirculo.getArea());
        System.out.println(oCirculo.getPerimetro());

        Figura oFigura = new Figura(); 
        oFigura.calcularArea();
        oFigura.calcularPerimetro();

        Paralelogramo oParalelogramo; 
        oParalelogramo = new Paralelogramo(10.0,5.0); 
        oParalelogramo.calcularArea();
        oParalelogramo.calcularPerimetro();
        System.out.println(oParalelogramo.getArea());
        System.out.println(oParalelogramo.getPerimetro());

    }
}
