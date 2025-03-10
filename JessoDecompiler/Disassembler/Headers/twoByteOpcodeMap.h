#pragma once
#include "opcodes.h" 

// The information in this file comes from the
//	Intel 64 and IA-32 architectures software developer's manual

// This map is not complete; only some of the opcodes are implemented as of now

// Appendix A: A.3 table A-3
const struct Opcode twoByteOpcodeMap[0x100][4] = // [byte][prefix] 0 - no prefix; 1 - 0x66; 2 - 0xF3; 3 - 0xF2
{
	{ NO_MNEMONIC, 6, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0x00
	{ NO_MNEMONIC, 7, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0x01
	{ LAR, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },				// 0x02
	{ LSL, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },				// 0x03
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0x04
	{ SYSCALL, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, o64 },					// 0x05
	{ CLTS, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },			// 0x06
	{ SYSRET, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, o64 },						// 0x07
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0x08
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0x09
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0x0A
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0x0B
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0x0C
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0x0D
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0x0E
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0x0F
	{																							// 0x10
		{ MOVUPS, -1, Vps, Wps, NO_OPERAND_CODE, NO_SUPERSCRIPT },
		{ MOVUPD, -1, Vpd, Wpd, NO_OPERAND_CODE, NO_SUPERSCRIPT },
		{ MOVSS, -1, Vx, Hx, Wss, NO_SUPERSCRIPT },
		{ MOVSD, -1, Vx, Hx, Wsd, NO_SUPERSCRIPT },
	},
	{																							// 0x11
		{ MOVUPS, -1, Wps, Vps, NO_OPERAND_CODE, NO_SUPERSCRIPT },
		{ MOVUPD, -1, Wpd, Vpd, NO_OPERAND_CODE, NO_SUPERSCRIPT },
		{ MOVSS, -1, Wss, Hx, Vss, NO_SUPERSCRIPT },
		{ MOVSD, -1, Wsd, Hx, Vsd, NO_SUPERSCRIPT },
	},
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0x12
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0x13
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0x14
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0x15
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0x16
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0x17
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0x18
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0x19
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0x1A
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0x1B
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0x1C
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0x1D
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0x1E
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0x1F
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0x20
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0x21
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0x22
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0x23
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0x24
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0x25
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0x26
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0x27
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0x28
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0x29
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0x2A
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0x2B
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0x2C
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0x2D
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0x2E
	{																							// 0x2F
		{ COMISS, -1, Vss, Wss, NO_OPERAND_CODE, NO_SUPERSCRIPT },
		{ COMISD, -1, Vsd, Wsd, NO_OPERAND_CODE, NO_SUPERSCRIPT },
	},
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0x30
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0x31
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0x32
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0x33
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0x34
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0x35
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0x36
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0x37
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0x38
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0x39
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0x3A
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0x3B
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0x3C
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0x3D
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0x3E
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0x3F
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0x40
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0x41
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0x42
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0x43
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0x44
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0x45
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0x46
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0x47
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0x48
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0x49
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0x4A
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0x4B
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0x4C
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0x4D
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0x4E
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0x4F
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0x50
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0x51
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0x52
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0x53
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0x54
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0x55
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0x56
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0x57
	{																							// 0x58
		{ ADDPS, -1, Vps, Hps, Wps, NO_SUPERSCRIPT },
		{ ADDPD, -1, Vpd, Hpd, Wpd, NO_SUPERSCRIPT },
		{ ADDSS, -1, Vss, Hss, Wss, NO_SUPERSCRIPT },
		{ ADDSD, -1, Vsd, Hsd, Wsd, NO_SUPERSCRIPT },
	},
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0x59
	{																							// 0x5A
		{ CVTPS2PD, -1, Vpd, Wps, NO_OPERAND_CODE, NO_SUPERSCRIPT },
		{ CVTPD2PS, -1, Vps, Wpd, NO_OPERAND_CODE, NO_SUPERSCRIPT },
		{ CVTSS2SD, -1, Vsd, Hx, Wss, NO_SUPERSCRIPT },
		{ CVTSD2SS, -1, Vss, Hx, Wsd, NO_SUPERSCRIPT },
	},
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0x5B
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0x5C
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0x5D
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0x5E
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0x5F
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0x60
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0x61
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0x62
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0x63
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0x64
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0x65
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0x66
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0x67
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0x68
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0x69
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0x6A
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0x6B
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0x6C
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0x6D
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0x6E
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0x6F
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0x70
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0x71
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0x72
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0x73
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0x74
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0x75
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0x76
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0x77
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0x78
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0x79
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0x7A
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0x7B
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0x7C
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0x7D
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0x7E
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0x7F
	{ JO_SHORT, -1, Jz, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },						// 0x80
	{ JNO_SHORT, -1, Jz, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },					// 0x81
	{ JB_SHORT, -1, Jz, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },						// 0x82
	{ JNB_SHORT, -1, Jz, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },					// 0x83
	{ JZ_SHORT, -1, Jz, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },						// 0x84
	{ JNZ_SHORT, -1, Jz, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },					// 0x85
	{ JBE_SHORT, -1, Jz, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },					// 0x86
	{ JA_SHORT, -1, Jz, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },						// 0x87
	{ JS_SHORT, -1, Jz, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },						// 0x88
	{ JNS_SHORT, -1, Jz, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },					// 0x89
	{ JP_SHORT, -1, Jz, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },						// 0x8A
	{ JNP_SHORT, -1, Jz, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },					// 0x8B
	{ JL_SHORT, -1, Jz, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },						// 0x8C
	{ JGE_SHORT, -1, Jz, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },					// 0x8D
	{ JLE_SHORT, -1, Jz, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },					// 0x8E
	{ JG_SHORT, -1, Jz, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },						// 0x8F
	{ SETO, -1, Eb, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },							// 0x90
	{ SETNO, -1, Eb, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },						// 0x91
	{ SETB, -1, Eb, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },							// 0x92
	{ SETNB, -1, Eb, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },						// 0x93
	{ SETZ, -1, Eb, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },							// 0x94
	{ SETNZ, -1, Eb, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },						// 0x95
	{ SETBE, -1, Eb, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },						// 0x96
	{ SETA, -1, Eb, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },							// 0x97
	{ SETS, -1, Eb, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },							// 0x98
	{ SETNS, -1, Eb, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },						// 0x99
	{ SETP, -1, Eb, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },							// 0x9A
	{ SETNP, -1, Eb, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },						// 0x9B
	{ SETL, -1, Eb, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },							// 0x9C
	{ SETNL, -1, Eb, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },						// 0x9D
	{ SETLE, -1, Eb, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },						// 0x9E
	{ SETG, -1, Eb, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },							// 0x9F
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0xA0
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0xA1
	{ CPUID, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },			// 0xA2
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0xA3
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0xA4
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0xA5
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0xA6
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0xA7
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0xA8
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0xA9
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0xAA
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0xAB
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0xAC
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0xAD
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0xAE
	{ IMUL, -1, Gv, Ev, NO_OPERAND_CODE, NO_SUPERSCRIPT },										// 0xAF
	{ CMPXCHG, -1, Eb, Gb, NO_OPERAND_CODE, NO_SUPERSCRIPT },									// 0xB0
	{ CMPXCHG, -1, Ev, Gv, NO_OPERAND_CODE, NO_SUPERSCRIPT },									// 0xB1
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0xB2
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0xB3
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0xB4
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0xB5
	{ MOVZX, -1, Gv, Eb, NO_OPERAND_CODE, NO_SUPERSCRIPT },										// 0xB6
	{ MOVZX, -1, Gv, Ew, NO_OPERAND_CODE, NO_SUPERSCRIPT },										// 0xB7
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0xB8
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0xB9
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0xBA
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0xBB
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0xBC
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0xBD
	{ MOVSX, -1, Gv, Eb, NO_OPERAND_CODE, NO_SUPERSCRIPT },										// 0xBE
	{ MOVSX, -1, Gv, Ew, NO_OPERAND_CODE, NO_SUPERSCRIPT },										// 0xBF
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0xC0
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0xC1
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0xC2
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0xC3
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0xC4
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0xC5
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0xC6
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0xC7
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0xC8
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0xC9
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0xCA
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0xCB
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0xCC
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0xCD
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0xCE
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0xCF
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0xD0
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0xD1
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0xD2
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0xD3
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0xD4
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0xD5
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0xD6
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0xD7
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0xD8
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0xD9
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0xDA
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0xDB
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0xDC
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0xDD
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0xDE
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0xDF
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0xE0
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0xE1
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0xE2
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0xE3
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0xE4
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0xE5
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0xE6
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0xE7
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0xE8
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0xE9
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0xEA
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0xEB
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0xEC
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0xED
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0xEE
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0xEF
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0xF0
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0xF1
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0xF2
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0xF3
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0xF4
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0xF5
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0xF6
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0xF7
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0xF8
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0xF9
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0xFA
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0xFB
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0xFC
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0xFD
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT },		// 0xFE
	{ NO_MNEMONIC, -1, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_OPERAND_CODE, NO_SUPERSCRIPT }		// 0xFF
};