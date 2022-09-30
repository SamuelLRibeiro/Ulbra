import java.util.Scanner;

public class Program {
    public static void main(String[] args) {
        Mes classeMes = new Mes();
        Month classeMonth = new Month();

        Scanner idiomaEscolhido = new Scanner(System.in);
        Scanner inputChoice = new Scanner(System.in);
        System.out.println("Digite o idioma: [1] Portugues [2] Ingles");
        int idioma = idiomaEscolhido.nextInt();

        if (idioma == 1){
            System.out.println("Digite o numero do mes que voce quer saber por extenso: ");
            int mesEscolhido = inputChoice.nextInt();
            if (mesEscolhido < 13){
                System.out.println(classeMes.meses[mesEscolhido-1]);
            }
        } else if (idioma == 2) {
            System.out.println("Digite o numero do mes que voce quer saber por extenso: ");
            int mesEscolhido = inputChoice.nextInt();
            if (mesEscolhido < 13){
                System.out.println(classeMonth.months[mesEscolhido-1]);
            }
        }
    }
}