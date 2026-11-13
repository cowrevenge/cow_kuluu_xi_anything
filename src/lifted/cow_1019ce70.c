/* f_0x1019ce70 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1019ce70 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1019ce70(Guest* g, int32_t param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    wr8((uint32_t)(param_1 + 0x29), 0x1e);
      wr8((uint32_t)(param_1 + 0x2a), 0x17);
      wr8((uint32_t)(param_1 + 0x2b), 0x32);
      wr8((uint32_t)(param_1 + 0x2c), 0x24);
      wr8((uint32_t)(param_1 + 0x2d), 0x11);
      wr8((uint32_t)(param_1 + 0x2e), 0x30);
      wr8((uint32_t)(param_1 + 0x2f), 0x15);
      wr8((uint32_t)(param_1 + 0x30), 0x31);
      wr8((uint32_t)(param_1 + 0x31), 0xc);
      wr8((uint32_t)(param_1 + 0x32), 0x21);
      wr8((uint32_t)(param_1 + 0x33), 0x1b);
      wr8((uint32_t)(param_1 + 0x34), 0x1a);
      wr8((uint32_t)(param_1 + 0x35), 0x2c);
      wr8((uint32_t)(param_1 + 0x36), 0x34);
      wr8((uint32_t)(param_1 + 0x37), 0x33);
      wr8((uint32_t)(param_1 + 0x38), 0);
      wr8((uint32_t)(param_1 + 0x39), 0);
      wr8((uint32_t)(param_1 + 0x3a), 0x12);
      wr8((uint32_t)(param_1 + 0x3b), 0x2f);
      wr8((uint32_t)(param_1 + 0x3c), 0x23);
      wr8((uint32_t)(param_1 + 0x3d), 0x2e);
      wr8((uint32_t)(param_1 + 0x3e), 0x1f);
      wr8((uint32_t)(param_1 + 0x3f), 0x19);
      wr8((uint32_t)(param_1 + 0x40), 0x14);
      wr8((uint32_t)(param_1 + 0x41), 0x26);
      wr8((uint32_t)(param_1 + 0x42), 0x13);
      wr8((uint32_t)(param_1 + 0x43), 0x16);
      wr8((uint32_t)(param_1 + 0x44), 0x2d);
      wr8((uint32_t)(param_1 + 0x45), 0x10);
      wr8((uint32_t)(param_1 + 0x46), 0);
      wr8((uint32_t)(param_1 + 0x47), 0);
      wr8((uint32_t)(param_1 + 0x48), 0);
      if ((int32_t)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10456A28)) + 8)) == 2) {
        wr8((uint32_t)(param_1 + 0x2f), 0x2c);
        wr8((uint32_t)(param_1 + 0x35), 0x15);
        wr8((uint32_t)(param_1 + 0x31), 0xf3);
        wr8((uint32_t)(param_1 + 0x33), 0x1a);
        wr8((uint32_t)(param_1 + 0x34), 0x1b);
      }
      else if ((int32_t)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10456A28)) + 8)) == 3) {
        wr8((uint32_t)(param_1 + 0x31), 0xfc);
        wr8((uint32_t)(param_1 + 0x33), 0xf9);
        wr8((uint32_t)(param_1 + 0x34), 0xfa);
        wr8((uint32_t)(param_1 + 0x36), 0x27);
        wr8((uint32_t)(param_1 + 0x37), 0x33);
      }
      iVar1 = 0x6a;
      do {
        cow_bridge_10193830(g, COW_IMG(COW_ADDR_LIFT_1019CF3D), 2u, (const CowU32[]){ iVar1, rd8((uint32_t)(param_1 + -0x41 + iVar1)) }, g->ecx, g->edx, g->eax, 8u);
        iVar1 = iVar1 + 1;
      } while (iVar1 < 0x8a);
      cow_bridge_tail_1019cfa0(g, g->ecx, g->edx, g->eax);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx+edx), 1 parameter(s), no return (tail call).
   TAIL CALL: this entry ends in `jmp 0x1019cfa0`, not `call`+`ret`, so the frame has no epilogue.
   Frame, pushes and locals read back off the entry's generated body: 2 push(es) [esi, edi], frame pointer no, 0 locals, no pops, no ret - ends in jmp 0x1019cfa0.
   Arguments: 2 register argument(s) [ecx, edx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move. */
void cow_adapter_1019ce70(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1019ce70: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x1019ce71: push edi */
    g->esi = g->ecx;   /* 0x1019ce72: the value the entry loaded and the decompiler dropped */
    { g->edx = (g->edx & 0xFFFFFF00u) | (uint8_t)(0x1Au); }   /* 0x1019ce74: register edx, replayed as the entry ran it */
    { g->ecx = (g->ecx & 0xFFFFFF00u) | (uint8_t)(0x2Cu); }   /* 0x1019ce76: register ecx, replayed as the entry ran it */
    { uint8_t a = (uint8_t)g->eax; uint8_t b = (uint8_t)(uint8_t)g->eax; uint8_t r = (uint8_t)(a ^ b); g->eax = (g->eax & 0xFFFFFF00u) | (uint8_t)(r); }   /* 0x1019ce78: register eax, replayed as the entry ran it */
    cow_lift_1019ce70(g, param_1);
    /* no epilogue: the target's own `ret` returned for this entry, popping OUR CALLER's return-address
       slot. eax is whatever it left there, and esp is where it left it. */
}
/* COW_ADAPTER END */
