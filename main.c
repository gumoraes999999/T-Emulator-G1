#include <stdio.h>
#include <stdbool.h>
#include "bootloader.h"
#include "partition.h"
#include "cli.h"

// Define emulator state
enum EmulatorState {
    RUNNING,
    STOPPED
};

// Main function
int main() {
    // Initialize emulator components
    initializeBootloader();
    initializeFirmwarePartitions();
    initializeCLI();

    // Set emulator state to running
    enum EmulatorState emulatorState = RUNNING;

    // Main emulator loop
    while (emulatorState == RUNNING) {
        // Update emulator components
        updateBootloader();
        updateCLI();

        // Check for emulator termination condition
        if (shouldStopEmulator()) {
            emulatorState = STOPPED;
        }
    }

    // Cleanup emulator components
    cleanupBootloader();
    cleanupFirmwarePartitions();
    cleanupCLI();

    return 0;
}
