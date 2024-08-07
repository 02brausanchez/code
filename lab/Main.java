package apaloo;

public class Main {
    public static void main(String[] args) {
        ColaL c = new ColaL(); 
        c.encolar(1);
        c.encolar(2);
        c.encolar(3);
        System.out.println(c.desencolar());
        System.out.println(c.desencolar());
        System.out.println(c.desencolar());

    }
    
}
