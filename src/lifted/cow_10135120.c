/* f_0x10135120 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10135120 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10135120(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    CowU32 uVar2;
    if ((((rd16((uint32_t)(param_3 + 0x14d0)) == (CowU32)0x0) || (rd16((uint32_t)rd32((uint32_t)((param_3 + 0x14d0)))) == 0)) ||
          (rd16((uint32_t)(param_3 + 0x14d8)) == (CowU32)0x0)) || (rd16((uint32_t)rd32((uint32_t)((param_3 + 0x14d8)))) == 0)) {
        g->eax = (CowU32)(0); return;
      }
      if (((char)rd32((uint32_t)(param_1 + 4u * (uint32_t)(1))) == '\0') || (rd8((uint32_t)((int)param_1 + 5)) != rd8((uint32_t)(param_2 + 2)))) {
        uVar2 = cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(param_1)) + 0x54u))), COW_IMG(COW_ADDR_LIFT_10135168), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        cVar1 = cow_bridge_10131f10(g, COW_IMG(COW_ADDR_LIFT_10135178), 2u, (const CowU32[]){ rd8((uint32_t)(param_2 + 2)), uVar2 }, g->ecx, g->edx, g->eax, 0u);
        g->eax = (CowU32)((-(CowU32)(cVar1 != '\0') & 0xffd00fd0) + 0x80808080); return;
      }
      g->eax = (CowU32)(-0x7f7fbfe0); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 3 parameter(s), cleanup 8 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [esi], frame pointer no, 0 locals, pops [esi], ret 8.
   Arguments: 1 register argument(s) [ecx], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10135120(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    g->edx = param_3;   /* 0x10135120: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10135124: push esi */
    { uint32_t A = (uint32_t)(g->edx + 0x14D0u); g->eax = (uint32_t)(rd32(A)); }   /* 0x10135125: register eax, replayed as the entry ran it */
    cow_lift_10135120(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
