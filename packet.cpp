#include "packet.h"

void ipprint(char *p)
{
    uint8_t dst_ip[4];
    uint8_t src_ip[4];

    memcpy(dst_ip,p+30, 4);
    printf("dip: %d.%d.%d.%d\n", dst_ip[0], dst_ip[1], dst_ip[2], dst_ip[3]);
    memcpy(src_ip,p+26, 4);
    printf("sip: %d.%d.%d.%d\n\n", src_ip[0], src_ip[1], src_ip[2], src_ip[3]);


}

void macprint(char *p)
{
    //    uint8_t pp[6] = { p[0],p[1],p[2],p[3],p[4],p[5] };
    //    printf("dmac : %02X: %X: %02X: %X: %X: %X\n", pp[0], pp[1], pp[2], pp[3], pp[4], pp[5]);
    //    uint8_t ppp[6] = { p[6],p[7],p[8],p[9],p[10],p[11] };
    //    printf("smac : %02X: %02X: %02X: %X: %X: %X\n", ppp[0], ppp[1], ppp[2], ppp[3], ppp[4], ppp[5]);

    uint8_t dst_mac[6];
    uint8_t src_mac[6];

    memcpy(dst_mac,p,6);
    printf("dmac : %02X:%X:%02X:%X:%X:%X\n", dst_mac[0], dst_mac[1], dst_mac[2], dst_mac[3], dst_mac[4], dst_mac[5]);
    memcpy(src_mac,p+6,6);
    printf("smac : %02X:%02X:%02X:%X:%X:%X\n\n", src_mac[0], src_mac[1], src_mac[2], src_mac[3], src_mac[4], src_mac[5]);


}

void tcpprint(char *p)
{
    uint8_t dst_port[2];
    uint8_t src_port[2];

    memcpy(dst_port,p+36,2);
    printf("dport : %d\n", dst_port[0]*16*16+dst_port[1]);
    memcpy(src_port,p+34,2);
    printf("sport : %d\n\n", src_port[0]*16*16+src_port[1]);

}

void httpprint(char *p)
{
    uint8_t http[16];

    memcpy(http,p+54,16);
    printf("http : %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", http[0], http[1], http[2], http[3], http[4], http[5], http[6], http[7], http[8], http[9], http[10], http[11], http[12], http[13], http[14], http[15]);
}


