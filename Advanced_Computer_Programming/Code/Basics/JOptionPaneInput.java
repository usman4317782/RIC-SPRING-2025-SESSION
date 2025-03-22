//complete java code To obtain input using the JOptionPane input dialog boxes
import javax.swing.JOptionPane;

public class JOptionPaneInput {
    public static void main(String[] args) {
        String name = JOptionPane.showInputDialog("Enter your name:");
        JOptionPane.showMessageDialog(null, "Hello, " + name);
    }
}