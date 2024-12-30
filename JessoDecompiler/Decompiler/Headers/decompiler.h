#pragma once
#include "../../Disassembler/Headers/disassembler.h"

enum PrimitiveType
{
	CHAR_TYPE,
	SHORT_TYPE,
	INT_TYPE,
	LONG_LONG_TYPE,

	FLOAT_TYPE,
	DOUBLE_TYPE,

	VOID_TYPE
};

struct LineOfC 
{
	char line[150];
	unsigned char indents;
};

struct VariableType 
{
	unsigned char primitiveType;
	unsigned char isSigned;
	unsigned char isPointer;
};

struct Scope
{
	struct Scope* lastScope;
	unsigned long long start;
	unsigned long long end;
	unsigned char foundReturnStatement;
};

#include "../Headers/functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

	const char* callingConventionStrs[];
	
	unsigned short decompileFunction(struct Function* functions, unsigned short numOfFunctions, unsigned short functionIndex, const char* functionName, struct LineOfC* resultBuffer, unsigned short resultBufferLen);

#ifdef __cplusplus
}
#endif

static unsigned short generateFunctionHeader(struct Function* function, const char* functionName, struct LineOfC* result);

static unsigned char getAllLocalVariables(struct DisassembledInstruction* instructions, unsigned short numOfInstructions, struct LineOfC* resultBuffer, int* resultBufferIndex, unsigned short resultBufferLen);

static unsigned short variableTypeToStr(struct VariableType* varType, char* buffer, unsigned char bufferLen);

static unsigned char getAllScopes(struct Function* function, struct Scope* resultBuffer, unsigned char resultBufferLen, unsigned char* numOfScopesFound);

static unsigned char checkForReturnStatement(struct DisassembledInstruction* instruction, unsigned long long address, struct Function* functions, unsigned short numOfFunctions);

static unsigned char checkForAssignment(struct DisassembledInstruction* instruction);

static unsigned char decompileCondition(struct Function* functions, unsigned short numOfFunctions, unsigned short startInstructionIndex, unsigned short functionIndex, struct LineOfC* result);

static unsigned char decompileReturnStatement(struct Function* functions, unsigned short numOfFunctions, unsigned short startInstructionIndex, unsigned short functionIndex, struct LineOfC* result, int* lastInstructionIndex);

static unsigned char decompileAssignment(struct Function* functions, unsigned short numOfFunctions, unsigned short startInstructionIndex, unsigned short functionIndex, struct LineOfC* result, int* lastInstructionIndex);

static unsigned char decompileOperand(struct Function* functions, unsigned short numOfFunctions, unsigned short startInstructionIndex, unsigned short functionIndex, struct Operand* operand, char* resultBuffer, unsigned char resultBufferSize);

static unsigned char decompileExpression(struct Function* functions, unsigned short numOfFunctions, unsigned short startInstructionIndex, unsigned short functionIndex, struct Operand* operand, char* resultBuffer, unsigned char resultBufferSize);

static unsigned char decompileFunctionCall(struct Function* functions, unsigned short numOfFunctions, unsigned short startInstructionIndex, unsigned short functionIndex, struct Function* callee, char* resultBuffer, unsigned char resultBufferSize);