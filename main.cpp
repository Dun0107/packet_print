#include "packet.h"

char *packet = "\x00\x50\x56\xef\x84\x60\x00\x0c\x29\x19\xdc\xd4\x08\x00\x45\x00\x01\x76\xe9\x63\x40\x00\x40\x06\x83\xf8\xc0\xa8\x38\x81\xaf\xd5\x23\x27\x9c\x5e\x00\x50\x47\x44\x67\x41\x5a\x26\x4a\xd2\x50\x18\x72\x10\xcd\x8e\x00\x00\x47\x45\x54\x20\x2f\x20\x48\x54\x54\x50\x2f\x31\x2e\x31\x0d\x0a\x48\x6f\x73\x74\x3a\x20\x74\x65\x73\x74\x2e\x67\x69\x6c\x67\x69\x6c\x2e\x6e\x65\x74\x0d\x0a\x55\x73\x65\x72\x2d\x41\x67\x65\x6e\x74\x3a\x20\x4d\x6f\x7a\x69\x6c\x6c\x61\x2f\x35\x2e\x30\x20\x28\x58\x31\x31\x3b\x20\x55\x62\x75\x6e\x74\x75\x3b\x20\x4c\x69\x6e\x75\x78\x20\x78\x38\x36\x5f\x36\x34\x3b\x20\x72\x76\x3a\x36\x35\x2e\x30\x29\x20\x47\x65\x63\x6b\x6f\x2f\x32\x30\x31\x30\x30\x31\x30\x31\x20\x46\x69\x72\x65\x66\x6f\x78\x2f\x36\x35\x2e\x30\x0d\x0a\x41\x63\x63\x65\x70\x74\x3a\x20\x74\x65\x78\x74\x2f\x68\x74\x6d\x6c\x2c\x61\x70\x70\x6c\x69\x63\x61\x74\x69\x6f\x6e\x2f\x78\x68\x74\x6d\x6c\x2b\x78\x6d\x6c\x2c\x61\x70\x70\x6c\x69\x63\x61\x74\x69\x6f\x6e\x2f\x78\x6d\x6c\x3b\x71\x3d\x30\x2e\x39\x2c\x69\x6d\x61\x67\x65\x2f\x77\x65\x62\x70\x2c\x2a\x2f\x2a\x3b\x71\x3d\x30\x2e\x38\x0d\x0a\x41\x63\x63\x65\x70\x74\x2d\x4c\x61\x6e\x67\x75\x61\x67\x65\x3a\x20\x65\x6e\x2d\x55\x53\x2c\x65\x6e\x3b\x71\x3d\x30\x2e\x35\x0d\x0a\x41\x63\x63\x65\x70\x74\x2d\x45\x6e\x63\x6f\x64\x69\x6e\x67\x3a\x20\x67\x7a\x69\x70\x2c\x20\x64\x65\x66\x6c\x61\x74\x65\x0d\x0a\x43\x6f\x6e\x6e\x65\x63\x74\x69\x6f\x6e\x3a\x20\x6b\x65\x65\x70\x2d\x61\x6c\x69\x76\x65\x0d\x0a\x55\x70\x67\x72\x61\x64\x65\x2d\x49\x6e\x73\x65\x63\x75\x72\x65\x2d\x52\x65\x71\x75\x65\x73\x74\x73\x3a\x20\x31\x0d\x0a\x0d\x0a";

int main() {

    macprint(packet);
    ipprint(packet);
    tcpprint(packet);
    httpprint(packet);

}
