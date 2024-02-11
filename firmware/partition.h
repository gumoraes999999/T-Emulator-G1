#ifndef PARTITION_H
#define PARTITION_H

#include <stdint.h>

// Define maximum partition size
#define PARTITION_SIZE 1024

// Define partition structure
typedef struct {
    char name[32];
    uint8_t data[PARTITION_SIZE];
} FirmwarePartition;

// Function prototypes
void initFirmwarePartitions();
void readPartition(const char* partitionName, uint8_t* buffer, size_t bufferSize);
void writePartition(const char* partitionName, const uint8_t* data, size_t dataSize);
void cleanupFirmwarePartitions();

#endif // PARTITION_H
