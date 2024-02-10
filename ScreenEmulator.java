public class ScreenEmulator {
    private int screenWidth;
    private int screenHeight;

    public ScreenEmulator(int width, int height) {
        this.screenWidth = width;
        this.screenHeight = height;
    }

    public int getScreenWidth() {
        return screenWidth;
    }

    public int getScreenHeight() {
        return screenHeight;
    }

    public void simulateTouchInput(int x, int y) {
        // Simulate touch input at (x, y) coordinates
        System.out.println("Simulating touch input at coordinates: (" + x + ", " + y + ")");
    }
}
