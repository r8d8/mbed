#include "DALStdDef.h" 
#include "DALSysTypes.h" 

#ifndef DAL_CONFIG_IMAGE_APPS 
#define DAL_CONFIG_IMAGE_APPS 
#endif 
extern void * I2CCoreConfig01_qca4020_devcfg_xml;
extern void * spi_first_port_qca4020_devcfg_xml;
extern void * gAdcBsp_qca4020_devcfg_xml;
extern void * gTsensBsp_qca4020_devcfg_xml;
extern void * gGPIOIntConfigTable_qca4020_devcfg_xml;
extern void * InterruptControllerPriorityConfig_qca4020_devcfg_xml;
extern void * IPCIntConfig_qca4020_devcfg_xml;
extern void * IPCIntIRQData_qca4020_devcfg_xml;

const void * DALPROP_StructPtrs_qca4020_devcfg_xml[9] =  {
	 &I2CCoreConfig01_qca4020_devcfg_xml,
	 &spi_first_port_qca4020_devcfg_xml,
	 &gAdcBsp_qca4020_devcfg_xml,
	 &gTsensBsp_qca4020_devcfg_xml,
	 &gGPIOIntConfigTable_qca4020_devcfg_xml,
	 &InterruptControllerPriorityConfig_qca4020_devcfg_xml,
	 &IPCIntConfig_qca4020_devcfg_xml,
	 &IPCIntIRQData_qca4020_devcfg_xml,
	 NULL 
 };
const uint32 DALPROP_PropBin_qca4020_devcfg_xml[] = {

			0x00000464, 0x00000088, 0x000000e0, 0x000000e0, 0x00000160, 
			0x0000000e, 0x0200000a, 0x00000198, 0x0200001b, 0x000001d8, 
			0x02000010, 0x0000020c, 0x02000019, 0x00000264, 0x02000003, 
			0x00000278, 0x02000004, 0x000002c4, 0x02000002, 0x000002d0, 
			0x02000006, 0x00000304, 0x02000018, 0x000003c0, 0x02000014, 
			0x000003e4, 0x02000015, 0x0000040c, 0x02000016, 0x00000420, 
			0x02000017, 0x00000434, 0x0200001a, 0x00000450, 0x5f676f64, 
			0x5f6c6168, 0x61736964, 0x00656c62, 0x5f676f64, 0x5f6c6168, 
			0x63617267, 0x69745f65, 0x5f72656d, 0x656d6974, 0x0074756f, 
			0x454d4954, 0x41435f52, 0x5242494c, 0x4f495441, 0x4e495f4e, 
			0x56524554, 0x535f4c41, 0x54004345, 0x52454d49, 0x4552465f, 
			0x00000051, 0x2c2b2a05, 0x052f2e2d, 0x01010101, 0x00050101, 
			0x01010101, 0x00000500, 0x00000000, 0x01010105, 0x05010101, 
			0x00000000, 0x12070000, 0x16151413, 0x070d0c17, 0x04020106, 
			0x07000503, 0x0001011f, 0x00010100, 0x00010100, 0x00010100, 
			0x00010100, 0x00010100, 0x00010100, 0x00010100, 0x00001f00, 
			0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 
			0x00000001, 0x00000001, 0x00000001, 0x00000005, 0x02625a00, 
			0x024b76a0, 0x00007d00, 0x03d09000, 0x01e84800, 0x02625a00, 
			0x00000005, 0x00000000, 0x00000000, 0x00000000, 0x000000b4, 
			0x000000a6, 0x000000c8, (301989888| (0x00000001 & 0x00FFFFFF)), 0x00000000, (134217728| (0x00000002 & 0x00FFFFFF)), 
			0x0000002b, 0x00000000, 0x004e2000, 0x0140a100, 0x0140b120, 
			0x00000320, 0x00000200, 0x0100a000, 0x0100b020, 0x00000020, 
			0x00000000, 0x00000000, 0xff00ff00, (402653184| (0x10000 & 0x00FFFFFF)), 0x00000000, 
			(402653184| (0x10001 & 0x00FFFFFF)), 0x00000007, (402653184| (0x10002 & 0x00FFFFFF)), 0x0000000e, (402653184| (0x10003 & 0x00FFFFFF)), 
			0x00000015, (402653184| (0x10004 & 0x00FFFFFF)), 0x0000001c, (402653184| (0x10005 & 0x00FFFFFF)), 0x00000023, 
			0xff00ff00, (301989888| (0x21001 & 0x00FFFFFF)), 0x00000001, (134217728| (0x2100A & 0x00FFFFFF)), 0x0000003b, 
			0x00000000, 0x00000000, 0x00000000, 0x1a120100, 0x1b120000, 
			0x18120100, 0x19120100, 0x1a001000, 0x1b001000, 0x18002000, 
			0x19001000, 0x00000000, 0x00000000, 0x00002000, 0x00000000, 
			(33554432| (0x2100B & 0x00FFFFFF)), 0x00000001, 0xff00ff00, 0x02800000, 0x00000000, 
			0x02800010, 0x00138800, 0xff00ff00, 0x12000000, 0x00000002, 
			0x08000001, 0x00400007, 0x3c000001, 0x00000000, 0x08000002, 
			0x01000027, 0x00010000, 0x02000001, 0x00000100, 0x00010003, 
			0x01000400, 0x00050000, 0x06000001, 0x00000100, 0x00010007, 
			0x00000000, 0xff00ff00, 0x12000000, 0x00000003, 0xff00ff00, 
			0x18000000, 0x0000002a, 0x18000001, 0x00000033, 0x18000002, 
			0x0000003c, 0x18000003, 0x0000005d, 0x14000004, 0x00000000, 
			0x02000005, 0x00000002, 0xff00ff00, 0x02000001, 0x00000001, 
			0x08000002, 0x0000005f, 0x00000000, 0x06000004, 0x00000000, 
			0x10000010, 0x03000100, 0x00000001, 0x10000010, 0x06f10200, 
			0x08000000, 0x01000010, 0x06ff0300, 0x00400000, 0x00400010, 
			0x06010400, 0x00800000, 0x00800010, 0x06e00500, 0x00100000, 
			0x00100010, 0x06c70600, 0x0a000000, 0x01000010, 0x03000700, 
			0x00000001, 0x02000003, 0x0000000a, 0x02000005, 0x00000001, 
			0x02000006, 0x00000000, 0x02000007, 0x00000001, 0x02000008, 
			0x0000000a, 0x02000009, 0x00000001, 0x0200000a, 0x00000000, 
			0x0200000b, 0x900e0003, 0x0200000c, 0x00009055, 0xff00ff00, 
			(335544320| (0x1 & 0x00FFFFFF)), 0x0000001c, (33554432| (0x2 & 0x00FFFFFF)), 0x00000000, (33554432| (0x3 & 0x00FFFFFF)), 
			0x00000278, (33554432| (0x4 & 0x00FFFFFF)), 0x00000060, 0xff00ff00, 0x08000000, 
			0x40010203, 0x00000000, 0x02000001, 0x00000100, 0x02000002, 
			0x00000100, 0x02000003, 0x000001f4, 0xff00ff00, (301989888| (0x55 & 0x00FFFFFF)), 
			0x00000004, (33554432| (0x56 & 0x00FFFFFF)), 0x00000004, 0xff00ff00, (301989888| (0x5A & 0x00FFFFFF)), 
			0x00000005, (33554432| (0x5B & 0x00FFFFFF)), 0x00000040, 0xff00ff00, (301989888| (0x57 & 0x00FFFFFF)), 
			0x00000006, (301989888| (0x58 & 0x00FFFFFF)), 0x00000007, (33554432| (0x59 & 0x00FFFFFF)), 0x00000004, 
			0xff00ff00, 0x0280002c, 0x00000e10, 0x0280004b, 0x00007d00, 
			0xff00ff00 };
