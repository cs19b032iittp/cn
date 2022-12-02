#ifndef _ICMP_H
#define _ICMP_H

struct ICMPHeader{
	unsigned int type :8;
	unsigned int code :8;
	unsigned short int checksum;
	char data[65535];
}__attribute__((packed));	
#endif


