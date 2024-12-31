#pragma once
#include "../../Disassembler/Headers/disassembler.h"
#include "../Headers/decompiler.h"

enum CallingConvention
{
	__CDECL,
	__STDCALL,
	__FASTCALL,
	__THISCALL
};

struct VariableType
{
	unsigned char primitiveType;
	unsigned char isSigned;
	unsigned char numOfPtrs;
};

struct LocalVariable 
{
	struct VariableType type;
	int stackOffset;
};

struct Function
{
	unsigned long long* addresses;
	struct DisassembledInstruction* instructions;
	unsigned short numOfInstructions;

	char name[20];

	struct VariableType returnType;
	unsigned long long addressOfReturnFunction; // if the function's return value is that of another function, this will be the address of that function

	unsigned char callingConvention;

	unsigned char numOfRegArgs;
	struct VariableType regArgs[4];

	unsigned char numOfStackArgs;
	struct VariableType stackArgs[6];
	unsigned char stackArgBpOffsets[6];

	unsigned char numOflocalVars;
	struct LocalVariable localVars[50];
};

#ifdef __cplusplus
extern "C"
{
#endif

	unsigned char findNextFunction(struct DisassembledInstruction* instructions, unsigned long long* addresses, unsigned short numOfInstructions, struct Function* result, int* instructionIndex);
	unsigned char fixAllFunctionReturnTypes(struct Function* functions, unsigned short numOfFunctions);
	int findFunctionByAddress(struct Function* functions, int low, int high, unsigned long long address);
	struct LocalVariable* getLocalVarByOffset(struct Function* function, int stackOffset);

#ifdef __cplusplus
}
#endif

static unsigned char getVariableType(struct Function* function, struct Operand* var, struct VariableType* result);

static unsigned char handleIfVarIsPtr(struct Function* function, unsigned char reg, struct VariableType* result);