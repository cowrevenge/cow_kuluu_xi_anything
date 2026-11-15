/* f_0x100370d0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_100370d0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_100370d0(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3, CowU32 param_4, CowU32 param_5, CowU32 param_6, CowU32 param_7, CowU32 param_8, CowU32 param_9)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 this_00;
    int iVar1;
    this_00 = (CowU32)cow_bridge_100286b0(g, COW_IMG(COW_ADDR_LIFT_100370E0), 2u, (const CowU32[]){ 749u, 3u }, param_1, g->edx, g->eax, 8u);
      if (this_00 != (CowU32)0x0) {
        iVar1 = cow_bridge_100369f0(g, COW_IMG(COW_ADDR_LIFT_100370EE), 0u, (const CowU32[]){ 0u }, this_00, g->edx, g->eax, 0u);
        if (iVar1 != 0) {
          cow_bridge_10071e90(g, COW_IMG(COW_ADDR_LIFT_10037102), 0u, (const CowU32[]){ 0u }, param_1, g->edx, g->eax, 0u);
          wr32((uint32_t)(iVar1 + 0x104), rd32((uint32_t)((int)param_1 + 0x14)));
          wr32((uint32_t)(iVar1 + 0x19c), param_2);
          if (param_2 != (CowU32)0x0) {
            wr32((uint32_t)(iVar1 + 0x1a0), rd32((uint32_t)param_2));
            wr32((uint32_t)(iVar1 + 0x1a4), rd32((uint32_t)(param_2 + 4u * (uint32_t)(1))));
            wr32((uint32_t)(iVar1 + 0x1a8), rd32((uint32_t)(param_2 + 4u * (uint32_t)(2))));
            wr32((uint32_t)(iVar1 + 0x1ac), rd32((uint32_t)(param_2 + 4u * (uint32_t)(3))));
          }
          wr32((uint32_t)(iVar1 + 0x1b0), param_3);
          wr32((uint32_t)(iVar1 + 0x1b4), param_4);
          wr32((uint32_t)(iVar1 + 0x1d0), param_6);
          wr32((uint32_t)(iVar1 + 0x1b8), param_5);
          wr16((uint32_t)(iVar1 + 0x1be), (CowU16)param_9);
          wr32((uint32_t)(iVar1 + 0x1d4), param_7);
          wr32((uint32_t)(iVar1 + 0x1d8), param_8);
          wr32((uint32_t)(iVar1 + 0x1dc), 0);
          g->eax = (CowU32)(iVar1); return;
        }
      }
      g->eax = (CowU32)(0); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 9 parameter(s), cleanup 32 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 2 push(es) [esi, edi], frame pointer no, 0 locals, pops [edi, esi], ret 32.
   Arguments: 1 register argument(s) [ecx], 8 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_100370d0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    CowU32 param_5 = rd32((uint32_t)(sp0 + 4u + 0xcu));
    CowU32 param_6 = rd32((uint32_t)(sp0 + 4u + 0x10u));
    CowU32 param_7 = rd32((uint32_t)(sp0 + 4u + 0x14u));
    CowU32 param_8 = rd32((uint32_t)(sp0 + 4u + 0x18u));
    CowU32 param_9 = rd32((uint32_t)(sp0 + 4u + 0x1cu));
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x100370d0: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x100370d1: push edi */
    cow_lift_100370d0(g, param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, param_9);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 32u);
}
/* COW_ADAPTER END */
