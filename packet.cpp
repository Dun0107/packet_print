#include "packet.h"

void ipprint(char *p)
{
    uint8_t dst_ip[4] = {p[30], p[31], p[32], p[33]};
    printf("dip: %d.%d.%d.%d\n", dst_ip[0],dst_ip[1],dst_ip[2],dst_ip[3]);
    uint8_t src_ip[4] ={p[26], p[27], p[28], p[29]};
    printf("sip: %d.%d.%d.%d\n", src_ip[0],src_ip[1],src_ip[2],src_ip[3]);
}

void macprint(char *p)
{
    uint8_t dst_mac[6] = {p[0],p[1],p[2],p[3],p[4],p[5]};
    printf("dmac : %02X: %X: %02X: %X: %X: %X\n", dst_mac[0], dst_mac[1], dst_mac[2], dst_mac[3], dst_mac[4],dst_mac[5]);
    uint8_t src_mac[6] = { p[6],p[7],p[8],p[9],p[10],p[11] };
    printf("smac : %02X: %02X: %02X: %X: %X: %X\n", src_mac[0], src_mac[1], src_mac[2], src_mac[3], src_mac[4], src_mac[5]);
}

void tcpprint(char *p)
{
    uint8_t dst_port[2] = {p[36], p[37]};
    printf("dip: %d\n", dst_port[0]*16*16+dst_port[1]);
    uint8_t src_port[2] ={p[34], p[35]};
    printf("sip: %d\n", src_port[0]*16*16+src_port[1]);
}

void httpprint(char *p)
{
    uint8_t http[16] = {p[54],p[55],p[56],p[57],p[58],p[59],p[60],p[61],p[62],p[63],p[64],p[65],p[66],p[67],p[68],p[69]};

    printf("http : %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", http[0], http[1], http[2], http[3], http[4], http[5], http[6], http[7], http[8], http[9], http[10], http[11], http[12], http[13], http[14], http[15]);
}


