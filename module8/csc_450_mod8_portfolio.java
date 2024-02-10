public class Main extends Thread {
    public static void main(String[] args) {
        Main threadUp = new Main(); // Thread for counting up.
        Main threadDown = new Main(); // Thread for counting down.

        // Start threadUp, print 1 to 20 to console, wait 1000 millis at most, rejoin main thread.
        threadUp.start();
            for (int i=1; i <=20; i++) {
                System.out.printf("Thread 1: %d%n", i);
            }
        try {
            threadUp.join(1000);
        } catch (InterruptedException e) {
            throw new RuntimeException(e);
        }

        // Now that threadUp has finished, start threadDown, count from 20 to 1, print to console.
        threadDown.start();
        for (int i = 20; i >= 1; i--) {
            System.out.printf("Thread 2: %d%n", i);
        }
    }
}
