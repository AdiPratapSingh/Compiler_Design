public class SyntaxCheck {
    static void printFunc(float val) {
        int a = val + 5;
    }

    public static void main() {
        int a;
        a = 10;
        boolean f;
        f = true || false;
        if (f) {
            int k;
            k = a + 20;
            a = 2*a + 12;
        }
        printFunc(a);
        while (a < 100) {
            a = a + 1;
            f = f && false;
        }
    }
}