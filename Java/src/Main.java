// se importa paquete "JOptionPane" para dibujar un cuadro de dialogo en pantalla
// que muestre información o para llenar información.
import javax.swing.JOptionPane;

public class Main
{
    public static void main(String[] args)
    {
        
        // se crea un objeto de la clase Recrear (Instanciaciación)
        Recrear obj = new Recrear();
        // se define una variable de tipo entero llamada "alt"
        int alt;
        // con el ciclo do-while pediremos la altura
        do
        {
            // se pide la altura y se guarda en "alt"
            alt = Integer.parseInt(JOptionPane.showInputDialog("Altura:"));
            obj.setAltura(alt);// se llama al metodo setAltura para encapsular a la variable "alt"
        }
        while(alt < 0 || alt > 23);//el ciclo repetira esas instrucciones si la "alt" es menor a 0 o mayor a 23.
        System.out.println(obj.recrearPiramide());// mostraramos la "media piramide".
    }
}