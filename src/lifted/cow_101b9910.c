/* f_0x101b9910 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101b9910 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101b9910(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3, CowU32 param_4, CowU32 param_5, CowU32 param_6)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    int iVar2;
    wr32((uint32_t)param_1, COW_IMG(COW_ADDR_LIFT_10337B20));
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(1)), param_2);
      iVar2 = 8 - (int)param_3;
      do {
        cVar1 = rd8((uint32_t)param_3);
        wr8((uint32_t)(param_3 + 1u * (uint32_t)((int)param_1 + iVar2)), cVar1);
        param_3 = param_3 + 1;
      } while (cVar1 != '\0');
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x45)), param_4);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x42)), 0);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x43)), 0);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x44)), 0);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x46)), param_5);
      wr8((uint32_t)(uint32_t)(param_1 + 4u * (uint32_t)(0x47)), param_6);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 6 parameter(s), cleanup 20 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [esi], frame pointer no, 0 locals, pops [esi], ret 20.
   Arguments: 1 register argument(s) [ecx], 5 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101b9910(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    CowU32 param_5 = rd32((uint32_t)(sp0 + 4u + 0xcu));
    CowU32 param_6 = rd32((uint32_t)(sp0 + 4u + 0x10u));
    g->edx = param_3;   /* 0x101b9910: the value the entry loaded and the decompiler dropped */
    g->eax = g->ecx;   /* 0x101b9914: the value the entry loaded and the decompiler dropped */
    g->ecx = param_2;   /* 0x101b9916: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x101b991a: push esi */
    { g->esi = (uint32_t)((uint32_t)(g->eax + 0x8u)); }   /* 0x101b991b: register esi, replayed as the entry ran it */
    cow_lift_101b9910(g, param_1, param_2, param_3, param_4, param_5, param_6);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 20u);
}
/* COW_ADAPTER END */
