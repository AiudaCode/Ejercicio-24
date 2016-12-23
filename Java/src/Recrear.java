public class Recrear
{
    // se define un atributo privado:
    private int altura;// altura de tipo entero, sera la altura que digite el usuario
    
    public Recrear()
    {
        // se le asignan los siguientes valores por defecto en el constructor de la clase
        altura = 0;// 0 a la variable "altura"
    }

    // implemetacion del metodo para recrear la "media piramide"
    public String recrearPiramide()
    {
        String bloque = "";
        // recorremos con un ciclo for desde 0 hasta la altura que el usuario digito
        for(int i = 0; i < altura; i++)
        {
            // se recorre con un ciclo for hasta j sea menor (que la altura del usuario menos el valor de i menos 1)
            for(int j = 0; j < altura-i-1; j++)
            {
                // se acumulara con un espacio en blanco la variable "bloque"
                bloque = bloque + " ";
                // se acumulan con espacios para alinear la "media piramide" hacia la derecha....
            }
            // se recorre con un ciclo for hasta k sea menor (que el valor de i mas 2)
            for(int k = 0; k < i+2; k++)
            {
                // se acumulara con un "#" (bloque) la variable "bloque"
                bloque = bloque + "#";
            }
            // despues de recorrer los dos ciclos:
            bloque = bloque + "\n";// se dara un salto de linea... en la variable bloque
        }
        return bloque;
    }

    // implementacion del metodos Setters y Getters del atributo altura
    public void setAltura(int n)
    {
        altura = n;
    }

    public int getAltura()
    {
        return altura;
    }
}