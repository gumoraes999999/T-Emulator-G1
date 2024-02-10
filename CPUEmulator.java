public class CPUEmulator {
    private int cpuClockSpeed;
    private int totalRAM;

    public CPUEmulator(int clockSpeed, int ram) {
        this.cpuClockSpeed = clockSpeed;
        this.totalRAM = ram;
    }

    public int getCPUClockSpeed() {
        return cpuClockSpeed;
    }

    public int getTotalRAM() {
        return totalRAM;
    }

    public void executeInstruction() {
        // Emulate execution of CPU instruction
        System.out.println("Executing CPU instruction...");
    }
}
