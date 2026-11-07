/* f_0x100bc280 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_100bc280 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_100bc280(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */

    switch(param_1) {
      default:
        cow_bridge_100afc80(g, COW_IMG(COW_ADDR_LIFT_100BC95C), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 1:
        cow_bridge_100afcf0(g, COW_IMG(COW_ADDR_LIFT_100BC29C), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 2:
        cow_bridge_100afd10(g, COW_IMG(COW_ADDR_LIFT_100BC2A4), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 3:
        cow_bridge_100afec0(g, COW_IMG(COW_ADDR_LIFT_100BC2AC), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 4:
        cow_bridge_100b0120(g, COW_IMG(COW_ADDR_LIFT_100BC2B4), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 5:
        cow_bridge_100b0130(g, COW_IMG(COW_ADDR_LIFT_100BC2BC), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 6:
        cow_bridge_100b0150(g, COW_IMG(COW_ADDR_LIFT_100BC2C4), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 7:
        cow_bridge_100b0170(g, COW_IMG(COW_ADDR_LIFT_100BC2CC), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 8:
        cow_bridge_100b01a0(g, COW_IMG(COW_ADDR_LIFT_100BC2D4), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 9:
        cow_bridge_100b01d0(g, COW_IMG(COW_ADDR_LIFT_100BC2DC), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 10:
        cow_bridge_100b0210(g, COW_IMG(COW_ADDR_LIFT_100BC2E4), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0xb:
        cow_bridge_100b0390(g, COW_IMG(COW_ADDR_LIFT_100BC2EC), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0xc:
        cow_bridge_100b03b0(g, COW_IMG(COW_ADDR_LIFT_100BC2F4), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0xd:
        cow_bridge_100b03d0(g, COW_IMG(COW_ADDR_LIFT_100BC2FC), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0xe:
        cow_bridge_100b0400(g, COW_IMG(COW_ADDR_LIFT_100BC304), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0xf:
        cow_bridge_100b0430(g, COW_IMG(COW_ADDR_LIFT_100BC30C), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x10:
        cow_bridge_100b0460(g, COW_IMG(COW_ADDR_LIFT_100BC314), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x11:
        cow_bridge_100b0490(g, COW_IMG(COW_ADDR_LIFT_100BC31C), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x12:
        cow_bridge_100b04c0(g, COW_IMG(COW_ADDR_LIFT_100BC324), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x13:
        cow_bridge_100b04e0(g, COW_IMG(COW_ADDR_LIFT_100BC32C), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x14:
        cow_bridge_100b0590(g, COW_IMG(COW_ADDR_LIFT_100BC334), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x15:
        cow_bridge_100b05c0(g, COW_IMG(COW_ADDR_LIFT_100BC33C), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x16:
        cow_bridge_100b0600(g, COW_IMG(COW_ADDR_LIFT_100BC344), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x17:
        cow_bridge_100b0660(g, COW_IMG(COW_ADDR_LIFT_100BC34C), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x18:
        cow_bridge_100b06c0(g, COW_IMG(COW_ADDR_LIFT_100BC354), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x19:
        cow_bridge_100b0720(g, COW_IMG(COW_ADDR_LIFT_100BC35C), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x1a:
        cow_bridge_100b0570(g, COW_IMG(COW_ADDR_LIFT_100BC364), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x1b:
        cow_bridge_100b0760(g, COW_IMG(COW_ADDR_LIFT_100BC36C), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x1c:
        cow_bridge_100b0870(g, COW_IMG(COW_ADDR_LIFT_100BC374), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x1d:
        cow_bridge_100b2100(g, COW_IMG(COW_ADDR_LIFT_100BC37C), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x1e:
        cow_bridge_100b2d20(g, COW_IMG(COW_ADDR_LIFT_100BC384), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x1f:
        cow_bridge_100b2ea0(g, COW_IMG(COW_ADDR_LIFT_100BC38C), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x20:
        cow_bridge_100b34c0(g, COW_IMG(COW_ADDR_LIFT_100BC394), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x21:
        cow_bridge_100b34e0(g, COW_IMG(COW_ADDR_LIFT_100BC39C), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x22:
        cow_bridge_100b3500(g, COW_IMG(COW_ADDR_LIFT_100BC3A4), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x23:
        cow_bridge_100b2dd0(g, COW_IMG(COW_ADDR_LIFT_100BC3AC), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x24:
        cow_bridge_100b2270(g, COW_IMG(COW_ADDR_LIFT_100BC3B4), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x25:
        cow_bridge_100b2940(g, COW_IMG(COW_ADDR_LIFT_100BC3BC), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x26:
        cow_bridge_100afc70(g, COW_IMG(COW_ADDR_LIFT_100BC3C4), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x27:
        cow_bridge_100b3930(g, COW_IMG(COW_ADDR_LIFT_100BC3CC), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x28:
        cow_bridge_100b3e50(g, COW_IMG(COW_ADDR_LIFT_100BC3D4), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x29:
        cow_bridge_100b3ff0(g, COW_IMG(COW_ADDR_LIFT_100BC3DC), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x2a:
        cow_bridge_100b4280(g, COW_IMG(COW_ADDR_LIFT_100BC3E4), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x2b:
        cow_bridge_100b1e80(g, COW_IMG(COW_ADDR_LIFT_100BC3EC), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x2c:
        cow_bridge_100b4c20(g, COW_IMG(COW_ADDR_LIFT_100BC3F4), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x2d:
        cow_bridge_100b4f10(g, COW_IMG(COW_ADDR_LIFT_100BC3FC), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x2e:
        cow_bridge_100b55d0(g, COW_IMG(COW_ADDR_LIFT_100BC404), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x2f:
        cow_bridge_100b35e0(g, COW_IMG(COW_ADDR_LIFT_100BC40C), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x30:
        cow_bridge_100b5620(g, COW_IMG(COW_ADDR_LIFT_100BC414), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x31:
        cow_bridge_100b5630(g, COW_IMG(COW_ADDR_LIFT_100BC41C), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x32:
        cow_bridge_100b5a10(g, COW_IMG(COW_ADDR_LIFT_100BC424), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x33:
        cow_bridge_100b5a40(g, COW_IMG(COW_ADDR_LIFT_100BC42C), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x34:
        cow_bridge_100b5a90(g, COW_IMG(COW_ADDR_LIFT_100BC434), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x35:
        cow_bridge_100b5b70(g, COW_IMG(COW_ADDR_LIFT_100BC43C), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x36:
        cow_bridge_100b5c50(g, COW_IMG(COW_ADDR_LIFT_100BC444), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x37:
        cow_bridge_100b5dd0(g, COW_IMG(COW_ADDR_LIFT_100BC44C), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x38:
        cow_bridge_100b6180(g, COW_IMG(COW_ADDR_LIFT_100BC454), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x39:
        cow_bridge_100b6140(g, COW_IMG(COW_ADDR_LIFT_100BC45C), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x3a:
        cow_bridge_100b2c80(g, COW_IMG(COW_ADDR_LIFT_100BC464), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x3b:
        cow_bridge_100b2b90(g, COW_IMG(COW_ADDR_LIFT_100BC46C), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x3c:
        cow_bridge_100b02a0(g, COW_IMG(COW_ADDR_LIFT_100BC474), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x3d:
        cow_bridge_100b02f0(g, COW_IMG(COW_ADDR_LIFT_100BC47C), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x3e:
        cow_bridge_100b0250(g, COW_IMG(COW_ADDR_LIFT_100BC484), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x3f:
        cow_bridge_100b61a0(g, COW_IMG(COW_ADDR_LIFT_100BC48C), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x40:
        cow_bridge_100b61e0(g, COW_IMG(COW_ADDR_LIFT_100BC494), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x41:
        cow_bridge_100b6250(g, COW_IMG(COW_ADDR_LIFT_100BC49C), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x42:
        cow_bridge_100b5600(g, COW_IMG(COW_ADDR_LIFT_100BC4A4), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x43:
        cow_bridge_100b63a0(g, COW_IMG(COW_ADDR_LIFT_100BC4AC), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x44:
        cow_bridge_100b6400(g, COW_IMG(COW_ADDR_LIFT_100BC4B4), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x45:
        cow_bridge_100b44c0(g, COW_IMG(COW_ADDR_LIFT_100BC4BC), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x46:
        cow_bridge_100b6440(g, COW_IMG(COW_ADDR_LIFT_100BC4C4), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x47:
        cow_bridge_100b62b0(g, COW_IMG(COW_ADDR_LIFT_100BC4CC), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x48:
        cow_bridge_100b2200(g, COW_IMG(COW_ADDR_LIFT_100BC4D4), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x49:
        cow_bridge_100b1de0(g, COW_IMG(COW_ADDR_LIFT_100BC4DC), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x4a:
        cow_bridge_100b6700(g, COW_IMG(COW_ADDR_LIFT_100BC4E4), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x4b:
        cow_bridge_100b6870(g, COW_IMG(COW_ADDR_LIFT_100BC4EC), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x4c:
        cow_bridge_100b6950(g, COW_IMG(COW_ADDR_LIFT_100BC4F4), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x4d:
        cow_bridge_100b6a00(g, COW_IMG(COW_ADDR_LIFT_100BC4FC), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x4e:
        cow_bridge_100b3580(g, COW_IMG(COW_ADDR_LIFT_100BC504), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x4f:
        cow_bridge_100b69b0(g, COW_IMG(COW_ADDR_LIFT_100BC50C), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x50:
        cow_bridge_100b4d10(g, COW_IMG(COW_ADDR_LIFT_100BC514), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x51:
        cow_bridge_100b5000(g, COW_IMG(COW_ADDR_LIFT_100BC51C), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x52:
        cow_bridge_100b48d0(g, COW_IMG(COW_ADDR_LIFT_100BC524), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x53:
        cow_bridge_100b4e00(g, COW_IMG(COW_ADDR_LIFT_100BC52C), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x54:
        cow_bridge_100b50f0(g, COW_IMG(COW_ADDR_LIFT_100BC534), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x55:
        cow_bridge_100b4950(g, COW_IMG(COW_ADDR_LIFT_100BC53C), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x56:
        cow_bridge_100b66c0(g, COW_IMG(COW_ADDR_LIFT_100BC544), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x57:
        cow_bridge_100b0350(g, COW_IMG(COW_ADDR_LIFT_100BC54C), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x58:
        cow_bridge_100b0380(g, COW_IMG(COW_ADDR_LIFT_100BC554), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x59:
        cow_bridge_100b6a60(g, COW_IMG(COW_ADDR_LIFT_100BC55C), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x5a:
        cow_bridge_100b31f0(g, COW_IMG(COW_ADDR_LIFT_100BC564), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x5b:
        cow_bridge_100b51f0(g, COW_IMG(COW_ADDR_LIFT_100BC56C), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x5c:
        cow_bridge_100b6e30(g, COW_IMG(COW_ADDR_LIFT_100BC574), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x5d:
        cow_bridge_100b7040(g, COW_IMG(COW_ADDR_LIFT_100BC57C), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x5e:
        cow_bridge_100b71e0(g, COW_IMG(COW_ADDR_LIFT_100BC584), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x5f:
        cow_bridge_100b72c0(g, COW_IMG(COW_ADDR_LIFT_100BC58C), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x60:
        cow_bridge_100b73f0(g, COW_IMG(COW_ADDR_LIFT_100BC594), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x61:
        cow_bridge_100b74e0(g, COW_IMG(COW_ADDR_LIFT_100BC59C), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x62:
        cow_bridge_100b44d0(g, COW_IMG(COW_ADDR_LIFT_100BC5A4), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 99:
        cow_bridge_100b7550(g, COW_IMG(COW_ADDR_LIFT_100BC5AC), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 100:
        cow_bridge_100b75c0(g, COW_IMG(COW_ADDR_LIFT_100BC5B4), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x65:
        cow_bridge_100b7860(g, COW_IMG(COW_ADDR_LIFT_100BC5BC), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x66:
        cow_bridge_100b5200(g, COW_IMG(COW_ADDR_LIFT_100BC5C4), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x67:
        cow_bridge_100b79c0(g, COW_IMG(COW_ADDR_LIFT_100BC5CC), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x68:
        cow_bridge_100b7a20(g, COW_IMG(COW_ADDR_LIFT_100BC5D4), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x69:
        cow_bridge_100b7a60(g, COW_IMG(COW_ADDR_LIFT_100BC5DC), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x6a:
        cow_bridge_100b7af0(g, COW_IMG(COW_ADDR_LIFT_100BC5E4), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x6b:
        cow_bridge_100b7070(g, COW_IMG(COW_ADDR_LIFT_100BC5EC), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x6c:
        cow_bridge_100b7630(g, COW_IMG(COW_ADDR_LIFT_100BC5F4), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x6d:
        cow_bridge_100b7850(g, COW_IMG(COW_ADDR_LIFT_100BC5FC), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x6e:
        cow_bridge_100b7c40(g, COW_IMG(COW_ADDR_LIFT_100BC604), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x6f:
        cow_bridge_100b07f0(g, COW_IMG(COW_ADDR_LIFT_100BC60C), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x70:
        cow_bridge_100b7dd0(g, COW_IMG(COW_ADDR_LIFT_100BC614), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x71:
        cow_bridge_100b7e10(g, COW_IMG(COW_ADDR_LIFT_100BC61C), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x72:
        cow_bridge_100b84b0(g, COW_IMG(COW_ADDR_LIFT_100BC624), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x73:
        cow_bridge_100b4540(g, COW_IMG(COW_ADDR_LIFT_100BC62C), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x74:
        cow_bridge_100b7490(g, COW_IMG(COW_ADDR_LIFT_100BC634), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x75:
        cow_bridge_100b8660(g, COW_IMG(COW_ADDR_LIFT_100BC63C), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x76:
        cow_bridge_100b7d50(g, COW_IMG(COW_ADDR_LIFT_100BC644), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x77:
        cow_bridge_100b8710(g, COW_IMG(COW_ADDR_LIFT_100BC64C), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x78:
        cow_bridge_100b87b0(g, COW_IMG(COW_ADDR_LIFT_100BC654), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x79:
        cow_bridge_100b88e0(g, COW_IMG(COW_ADDR_LIFT_100BC65C), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x7a:
        cow_bridge_100b3a50(g, COW_IMG(COW_ADDR_LIFT_100BC664), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x7b:
        cow_bridge_100b8a00(g, COW_IMG(COW_ADDR_LIFT_100BC66C), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x7c:
        cow_bridge_100b8a80(g, COW_IMG(COW_ADDR_LIFT_100BC674), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x7d:
        cow_bridge_100b8b20(g, COW_IMG(COW_ADDR_LIFT_100BC67C), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x7e:
        cow_bridge_100b8b80(g, COW_IMG(COW_ADDR_LIFT_100BC684), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x7f:
        cow_bridge_100b2aa0(g, COW_IMG(COW_ADDR_LIFT_100BC68C), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x80:
        cow_bridge_100b8e90(g, COW_IMG(COW_ADDR_LIFT_100BC694), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x81:
        cow_bridge_100b8fb0(g, COW_IMG(COW_ADDR_LIFT_100BC69C), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x82:
        cow_bridge_100b9040(g, COW_IMG(COW_ADDR_LIFT_100BC6A4), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x83:
        cow_bridge_100b90e0(g, COW_IMG(COW_ADDR_LIFT_100BC6AC), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x84:
        cow_bridge_100b9100(g, COW_IMG(COW_ADDR_LIFT_100BC6B4), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x85:
        cow_bridge_100b9120(g, COW_IMG(COW_ADDR_LIFT_100BC6BC), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x86:
        cow_bridge_100b8f30(g, COW_IMG(COW_ADDR_LIFT_100BC6C4), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x87:
        cow_bridge_100b9140(g, COW_IMG(COW_ADDR_LIFT_100BC6CC), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x88:
        cow_bridge_100b9220(g, COW_IMG(COW_ADDR_LIFT_100BC6D4), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x89:
        cow_bridge_100b9300(g, COW_IMG(COW_ADDR_LIFT_100BC6DC), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x8a:
        cow_bridge_100b93c0(g, COW_IMG(COW_ADDR_LIFT_100BC6E4), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x8b:
        cow_bridge_100b9490(g, COW_IMG(COW_ADDR_LIFT_100BC6EC), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x8c:
        cow_bridge_100b98e0(g, COW_IMG(COW_ADDR_LIFT_100BC6F4), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x8d:
        cow_bridge_100b9330(g, COW_IMG(COW_ADDR_LIFT_100BC6FC), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x8e:
        cow_bridge_100b6980(g, COW_IMG(COW_ADDR_LIFT_100BC704), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x8f:
        cow_bridge_100b6a30(g, COW_IMG(COW_ADDR_LIFT_100BC70C), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x90:
        cow_bridge_100b3540(g, COW_IMG(COW_ADDR_LIFT_100BC714), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x91:
        cow_bridge_100b9b70(g, COW_IMG(COW_ADDR_LIFT_100BC71C), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x92:
        cow_bridge_100b9ba0(g, COW_IMG(COW_ADDR_LIFT_100BC724), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x93:
        cow_bridge_100b9d30(g, COW_IMG(COW_ADDR_LIFT_100BC72C), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x94:
        cow_bridge_100b9cb0(g, COW_IMG(COW_ADDR_LIFT_100BC734), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x95:
        cow_bridge_100b9c20(g, COW_IMG(COW_ADDR_LIFT_100BC73C), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x96:
        cow_bridge_100b9c70(g, COW_IMG(COW_ADDR_LIFT_100BC744), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x97:
        cow_bridge_100ba0c0(g, COW_IMG(COW_ADDR_LIFT_100BC74C), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x98:
        cow_bridge_100b8630(g, COW_IMG(COW_ADDR_LIFT_100BC754), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x99:
        cow_bridge_100b7ce0(g, COW_IMG(COW_ADDR_LIFT_100BC75C), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x9a:
        cow_bridge_100b6df0(g, COW_IMG(COW_ADDR_LIFT_100BC764), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x9b:
        cow_bridge_100b7520(g, COW_IMG(COW_ADDR_LIFT_100BC76C), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x9c:
        cow_bridge_100ba100(g, COW_IMG(COW_ADDR_LIFT_100BC774), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x9d:
        cow_bridge_100ba190(g, COW_IMG(COW_ADDR_LIFT_100BC77C), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x9e:
        cow_bridge_100ba8a0(g, COW_IMG(COW_ADDR_LIFT_100BC784), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x9f:
        cow_bridge_100b44e0(g, COW_IMG(COW_ADDR_LIFT_100BC78C), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0xa0:
        cow_bridge_100b4960(g, COW_IMG(COW_ADDR_LIFT_100BC794), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0xa1:
        cow_bridge_100b48e0(g, COW_IMG(COW_ADDR_LIFT_100BC79C), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0xa2:
        cow_bridge_100b4970(g, COW_IMG(COW_ADDR_LIFT_100BC7A4), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0xa3:
        cow_bridge_100b48f0(g, COW_IMG(COW_ADDR_LIFT_100BC7AC), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0xa4:
        cow_bridge_100ba8d0(g, COW_IMG(COW_ADDR_LIFT_100BC7B4), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0xa5:
        cow_bridge_100ba920(g, COW_IMG(COW_ADDR_LIFT_100BC7BC), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0xa6:
        cow_bridge_100ba9c0(g, COW_IMG(COW_ADDR_LIFT_100BC7C4), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0xa7:
        cow_bridge_100baa60(g, COW_IMG(COW_ADDR_LIFT_100BC7CC), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0xa8:
        cow_bridge_100b9780(g, COW_IMG(COW_ADDR_LIFT_100BC7D4), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0xa9:
        cow_bridge_100bab50(g, COW_IMG(COW_ADDR_LIFT_100BC7DC), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0xaa:
        cow_bridge_100babe0(g, COW_IMG(COW_ADDR_LIFT_100BC7E4), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0xab:
        cow_bridge_100bac90(g, COW_IMG(COW_ADDR_LIFT_100BC7EC), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0xac:
        cow_bridge_100bb180(g, COW_IMG(COW_ADDR_LIFT_100BC7F4), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0xad:
        cow_bridge_100bb340(g, COW_IMG(COW_ADDR_LIFT_100BC7FC), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0xae:
        cow_bridge_100bb620(g, COW_IMG(COW_ADDR_LIFT_100BC804), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0xaf:
        cow_bridge_100bb9c0(g, COW_IMG(COW_ADDR_LIFT_100BC80C), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0xb0:
        cow_bridge_100b1fa0(g, COW_IMG(COW_ADDR_LIFT_100BC814), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0xb1:
        cow_bridge_100bba70(g, COW_IMG(COW_ADDR_LIFT_100BC81C), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0xb2:
        cow_bridge_100b0910(g, COW_IMG(COW_ADDR_LIFT_100BC824), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0xb3:
        cow_bridge_100bbaf0(g, COW_IMG(COW_ADDR_LIFT_100BC82C), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0xb4:
        cow_bridge_100b0a00(g, COW_IMG(COW_ADDR_LIFT_100BC834), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0xb5:
        cow_bridge_100b10f0(g, COW_IMG(COW_ADDR_LIFT_100BC83C), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0xb6:
        cow_bridge_100b1150(g, COW_IMG(COW_ADDR_LIFT_100BC844), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0xb7:
        cow_bridge_100afee0(g, COW_IMG(COW_ADDR_LIFT_100BC84C), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0xb8:
        cow_bridge_100b9600(g, COW_IMG(COW_ADDR_LIFT_100BC854), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0xb9:
        cow_bridge_100b9820(g, COW_IMG(COW_ADDR_LIFT_100BC85C), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0xba:
        cow_bridge_100b5f70(g, COW_IMG(COW_ADDR_LIFT_100BC864), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0xbb:
        cow_bridge_100b44f0(g, COW_IMG(COW_ADDR_LIFT_100BC86C), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0xbc:
        cow_bridge_100b4980(g, COW_IMG(COW_ADDR_LIFT_100BC874), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0xbd:
        cow_bridge_100b4900(g, COW_IMG(COW_ADDR_LIFT_100BC87C), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0xbe:
        cow_bridge_100b3e20(g, COW_IMG(COW_ADDR_LIFT_100BC884), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0xbf:
        cow_bridge_100bbd80(g, COW_IMG(COW_ADDR_LIFT_100BC88C), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0xc0:
        cow_bridge_100ba970(g, COW_IMG(COW_ADDR_LIFT_100BC894), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0xc1:
        cow_bridge_100b5500(g, COW_IMG(COW_ADDR_LIFT_100BC89C), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0xc2:
        cow_bridge_100bbf80(g, COW_IMG(COW_ADDR_LIFT_100BC8A4), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0xc3:
        cow_bridge_100bc000(g, COW_IMG(COW_ADDR_LIFT_100BC8AC), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0xc4:
        cow_bridge_100b4550(g, COW_IMG(COW_ADDR_LIFT_100BC8B4), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0xc5:
        cow_bridge_100b4500(g, COW_IMG(COW_ADDR_LIFT_100BC8BC), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0xc6:
        cow_bridge_100b4990(g, COW_IMG(COW_ADDR_LIFT_100BC8C4), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 199:
        cow_bridge_100b4910(g, COW_IMG(COW_ADDR_LIFT_100BC8CC), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 200:
        cow_bridge_100b9370(g, COW_IMG(COW_ADDR_LIFT_100BC8D4), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0xc9:
        cow_bridge_100b87e0(g, COW_IMG(COW_ADDR_LIFT_100BC8DC), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0xcc:
        cow_bridge_100b9d90(g, COW_IMG(COW_ADDR_LIFT_100BC8E4), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0xcd:
        cow_bridge_100b4510(g, COW_IMG(COW_ADDR_LIFT_100BC8EC), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0xce:
        cow_bridge_100b49a0(g, COW_IMG(COW_ADDR_LIFT_100BC8F4), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0xcf:
        cow_bridge_100b4920(g, COW_IMG(COW_ADDR_LIFT_100BC8FC), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0xd0:
        cow_bridge_100b4520(g, COW_IMG(COW_ADDR_LIFT_100BC904), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0xd1:
        cow_bridge_100b49b0(g, COW_IMG(COW_ADDR_LIFT_100BC90C), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0xd2:
        cow_bridge_100b4930(g, COW_IMG(COW_ADDR_LIFT_100BC914), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0xd3:
        cow_bridge_100b7140(g, COW_IMG(COW_ADDR_LIFT_100BC91C), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0xd4:
        cow_bridge_100b2280(g, COW_IMG(COW_ADDR_LIFT_100BC924), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0xd5:
        cow_bridge_100b4530(g, COW_IMG(COW_ADDR_LIFT_100BC92C), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0xd6:
        cow_bridge_100b49c0(g, COW_IMG(COW_ADDR_LIFT_100BC934), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0xd7:
        cow_bridge_100b4940(g, COW_IMG(COW_ADDR_LIFT_100BC93C), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0xd8:
        cow_bridge_100bc060(g, COW_IMG(COW_ADDR_LIFT_100BC944), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0xd9:
        cow_bridge_100b7be0(g, COW_IMG(COW_ADDR_LIFT_100BC94C), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0xda:
        cow_bridge_100b7c10(g, COW_IMG(COW_ADDR_LIFT_100BC954), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      }
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: stdcall, 1 parameter(s), cleanup 4 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [-], ret 4.
   Arguments: 0 register argument(s) [-], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_100bc280(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    { uint32_t A = (uint32_t)(g->esp + 0x4u); g->eax = (uint32_t)((uint32_t)(int32_t)((int16_t)rd16(A))); }   /* 0x100bc280: register eax, replayed as the entry ran it */
    cow_lift_100bc280(g, param_1);


    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
