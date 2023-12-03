#pragma once
#include<stdio.h>
#include<stdint.h>

void process_instruction();

void R_type(uint8_t rs, uint8_t rt, uint8_t rd, uint8_t shamt, uint8_t funct);
void I_type(uint8_t opcode, uint8_t rs, uint8_t rt, int16_t imm);
void J_type(uint8_t opcode, uint32_t addr);

// R-type
void add(uint8_t rs, uint8_t rt, uint8_t rd);   // Signed addition
void addu(uint8_t rs, uint8_t rt, uint8_t rd);  // Unsigned addition
void sub(uint8_t rs, uint8_t rt, uint8_t rd);   // Signed subtraction
void subu(uint8_t rs, uint8_t rt, uint8_t rd);  // Unsigned subtraction
void mult(uint8_t rs, uint8_t rt);            // Signed multiplication
void multu(uint8_t rs, uint8_t rt);          // Unsigned multiplication
void div(uint8_t rs, uint8_t rt);          // Signed division
void divu(uint8_t rs, uint8_t rt);      // Unsigned division
void mfhi(uint8_t rd);                  // Read HI register
void mflo(uint8_t rd);                  // Read LO register
void mthi(uint8_t rs);                  // Write to HI register
void mtlo(uint8_t rs);                  // Write to LO register
void AND(uint8_t rs, uint8_t rt, uint8_t rd);   // AND
void OR(uint8_t rs, uint8_t rt, uint8_t rd);    // OR
void XOR(uint8_t rs, uint8_t rt, uint8_t rd);   // XOR
void NOR(uint8_t rs, uint8_t rt, uint8_t rd);   // NOR
void sll(uint8_t rt, uint8_t rd, uint8_t shamt); // Logical left shift
void sllv(uint8_t rs, uint8_t rt, uint8_t rd);  // Logical left shift variable
void srl(uint8_t rt, uint8_t rd, uint8_t shamt); // Logical right shift
void srlv(uint8_t rs, uint8_t rt, uint8_t rd);  // Logical right shift variable
void sra(uint8_t rt, uint8_t rd, uint8_t shamt); // Arithmetic right shift
void srav(uint8_t rs, uint8_t rt, uint8_t rd);  // Arithmetic right shift variable
void slt(uint8_t rs, uint8_t rt, uint8_t rd);   // Signed comparison is less than
void sltu(uint8_t rs, uint8_t rt, uint8_t rd);  // Unsigned comparison is less than

// I-type
void addi(uint8_t rs, uint8_t rt, int16_t imm);   // Signed immediate addition
void addiu(uint8_t rs, uint8_t rt, int16_t imm);  // Unsigned immediate addition
void slti(uint8_t rs, uint8_t rt, int16_t imm);   // The signed immediate number is less than
void sltiu(uint8_t rs, uint8_t rt, int16_t imm);  // Unsigned immediate value is less than
void ANDi(uint8_t rs, uint8_t rt, int16_t imm);   // AND immediate value
void ORi(uint8_t rs, uint8_t rt, int16_t imm);    // OR immediate value
void XORi(uint8_t rs, uint8_t rt, int16_t imm);   // XOR immediate value
void LUI(uint8_t rt, int16_t imm);                // Load high-bit immediate data
void lb(uint8_t rs, uint8_t rt, int16_t imm);     // Signed byte load
void lh(uint8_t rs, uint8_t rt, int16_t imm);     // Signed half-word load
void lw(uint8_t rs, uint8_t rt, int16_t imm);     // Signed word loading
void lbu(uint8_t rs, uint8_t rt, int16_t imm);    // Unsigned byte load
void lhu(uint8_t rs, uint8_t rt, int16_t imm);    // Unsigned half-word load
void sb(uint8_t rs, uint8_t rt, int16_t imm);     // Byte storage
void sh(uint8_t rs, uint8_t rt, int16_t imm);     // Half word storage
void sw(uint8_t rs, uint8_t rt, int16_t imm);     // Word storage
void bltz(uint8_t rs, int16_t imm);               // Branch less than zero
void bgez(uint8_t rs, int16_t imm);               // Branch is greater than or equal to zero
void bltzal(uint8_t rs, int16_t imm);             // Branch less than zero and linked
void bgezal(uint8_t rs, int16_t imm);             // Branch is greater than or equal to zero and linked
void beq(uint8_t rs, uint8_t rt, int16_t imm);    // Branches are equal
void bne(uint8_t rs, uint8_t rt, int16_t imm);    // Branches are not equal
void blez(uint8_t rs, int16_t imm);               // Branch is less than or equal to zero
void bgtz(uint8_t rs, int16_t imm);               // Branch is greater than zero

// J-type
void j(uint32_t addr);      // Jump
void jal(uint32_t addr);    // Jump and link
void jr(uint8_t rs);        // jump register
void jalr(uint8_t rs, uint8_t rd);  // jump register and link

void syscall();             // system call





