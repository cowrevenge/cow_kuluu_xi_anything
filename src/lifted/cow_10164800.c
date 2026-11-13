/* f_0x10164800 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10164800 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10164800(Guest* g, int32_t param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    CowU32 puVar2;
    puVar2 = (CowU32)(param_1 + 0x34);
      for (iVar1 = 0x2c0; iVar1 != 0; iVar1 = iVar1 + -1) {
        wr32((uint32_t)puVar2, 0);
        puVar2 = puVar2 + 4u * (uint32_t)(1);
      }
      wr32((uint32_t)(param_1 + 0x14), 0);
      wr32((uint32_t)(param_1 + 0x18), 0);
      wr32((uint32_t)(param_1 + 0x1c), 0);
      wr32((uint32_t)(param_1 + 0x20), 0);
      wr32((uint32_t)(param_1 + 0x24), 0);
      wr32((uint32_t)(param_1 + 0x2c), 0);
      wr8((uint32_t)(param_1 + 0x32), 0);
      wr8((uint32_t)(param_1 + 0x30), 0xff);
      wr8((uint32_t)(param_1 + 0x31), 0xff);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [edi], frame pointer no, 0 locals, pops [edi], ret 0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10164800(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    g->edx = g->ecx;   /* 0x10164800: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x10164802: push edi */
    g->ecx = 704u;   /* 0x10164803: the value the entry loaded and the decompiler dropped */
    g->eax = 0u;   /* 0x10164808: the value the entry loaded and the decompiler dropped */
    { g->edi = (uint32_t)((uint32_t)(g->edx + 0x34u)); }   /* 0x1016480a: register edi, replayed as the entry ran it */
    cow_lift_10164800(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    g->eax = (CowU32)((g->eax | 255u));   /* the entry left eax here on its way to the ret */
    g->edx = (CowU32)(param_1);   /* what edx holds at every ret of the entry */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
