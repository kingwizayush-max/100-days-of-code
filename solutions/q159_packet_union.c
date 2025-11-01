#include <stdio.h>

union Packet {
    unsigned int value;
    unsigned char bytes[4];
};

int main() {
    union Packet packet;
    
    printf("Setting individual bytes:\n");
    
    // Set 4 bytes individually
    packet.bytes[0] = 0x12;
    packet.bytes[1] = 0x34;
    packet.bytes[2] = 0x56;
    packet.bytes[3] = 0x78;
    
    printf("Byte 0: 0x%02X\n", packet.bytes[0]);
    printf("Byte 1: 0x%02X\n", packet.bytes[1]);
    printf("Byte 2: 0x%02X\n", packet.bytes[2]);
    printf("Byte 3: 0x%02X\n", packet.bytes[3]);
    
    printf("\nResulting 32-bit unsigned int value: 0x%08X (%u)\n", 
           packet.value, packet.value);
    
    // Demonstrate reverse: set value and read bytes
    printf("\nSetting unsigned int value:\n");
    packet.value = 0xABCDEF12;
    
    printf("Unsigned int: 0x%08X\n", packet.value);
    printf("Byte 0: 0x%02X\n", packet.bytes[0]);
    printf("Byte 1: 0x%02X\n", packet.bytes[1]);
    printf("Byte 2: 0x%02X\n", packet.bytes[2]);
    printf("Byte 3: 0x%02X\n", packet.bytes[3]);
    
    return 0;
}

