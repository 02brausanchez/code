package apaloo;

public class Polimorfismo {
    public static void muevete(Mamifero m){
        m.mover();
    }
    public static void main(String[] args) {
        Gato bisho = new Gato(); 
        Perro feo = new Perro(); 
        muevete(bisho);
        muevete(feo); 
    }
}
