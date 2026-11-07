/* f_0x101201c0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101201c0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101201c0(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 puVar1;
    int iVar2;
    puVar1 = (CowU32)(param_1 + 0x24);
      iVar2 = 2;
      do {
        wr32((uint32_t)(puVar1 + 4u * (uint32_t)(-2)), 0);
        wr32((uint32_t)puVar1, 0xffffffff);
        wr32((uint32_t)(puVar1 + 4u * (uint32_t)(3)), 0);
        wr32((uint32_t)(puVar1 + 4u * (uint32_t)(5)), 0xffffffff);
        puVar1 = puVar1 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      wr32((uint32_t)(param_1 + 0x2c), 0);
      wr32((uint32_t)(param_1 + 0x40), 0);
      cow_bridge_tail_101265d0(g, g->ecx, g->edx, g->eax);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), 1 parameter(s), no return (tail call).
   TAIL CALL: this entry ends in `jmp 0x101265d0`, not `call`+`ret`, so the frame has no epilogue.
   Frame, pushes and locals read back off the entry's generated body: 1 push(es) [esi], frame pointer no, 0 locals, no pops, no ret - ends in jmp 0x101265d0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move. */
void cow_adapter_101201c0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x101201c0: push esi */
    { g->eax = (uint32_t)((uint32_t)(g->ecx + 0x24u)); }   /* 0x101201c1: register eax, replayed as the entry ran it */
    g->esi = 2u;   /* 0x101201c4: the value the entry loaded and the decompiler dropped */
    g->edx = 0u;   /* 0x101201c9: the value the entry loaded and the decompiler dropped */
    cow_lift_101201c0(g, param_1);
    /* no epilogue: the target's own `ret` returned for this entry, popping OUR CALLER's return-address
       slot. eax is whatever it left there, and esp is where it left it. */
}
/* COW_ADAPTER END */
