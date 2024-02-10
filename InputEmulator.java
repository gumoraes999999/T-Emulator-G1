public class InputEmulator {
    private boolean isKeyboardPresent;
    private boolean isTrackballPresent;

    public InputEmulator(boolean hasKeyboard, boolean hasTrackball) {
        this.isKeyboardPresent = hasKeyboard;
        this.isTrackballPresent = hasTrackball;
    }

    public void simulateKeyboardInput(String text) {
        // Simulate keyboard input
        System.out.println("Simulating keyboard input: " + text);
    }

    public void simulateTrackballMovement(int dx, int dy) {
        // Simulate trackball movement
        System.out.println("Simulating trackball movement: dx=" + dx + ", dy=" + dy);
    }
}
