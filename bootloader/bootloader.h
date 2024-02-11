#ifndef BOOTLOADER_H
#define BOOTLOADER_H

// Define bootloader states
typedef enum {
    BOOTLOADER_STATE_NORMAL,
    BOOTLOADER_STATE_FASTBOOT,
    BOOTLOADER_STATE_RECOVERY
} BootloaderState;

// Function prototypes
void initBootloader();
void updateBootloader();
void cleanupBootloader();

#endif // BOOTLOADER_H
