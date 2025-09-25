public class Main {
    public static void main(String[] args) {
        LinkedList list = new LinkedList();

        list.insert(10);
        list.insert(20);
        list.insert(30);
        list.display();  // 10 -> 20 -> 30 -> null

        list.delete(20);
        list.display();  // 10 -> 30 -> null
    }
}
