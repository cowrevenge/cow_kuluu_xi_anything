/* f_0x10110180 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10110180 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10110180(Guest* g, CowU32 param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 puVar1;
    cow_bridge_10112810(g, COW_IMG(COW_ADDR_LIFT_1011019E), 5u, (const CowU32[]){ g->edi, 1u, 272023332u, 272023340u, g->eax }, param_1, g->edx, g->eax, 0u);
      if ((int32_t)rd32((uint32_t)((int)param_1 + 8)) == 1) {
        puVar1 = COW_IMG(COW_ADDR_LIFT_1036BF78);
      }
      else {
        puVar1 = COW_IMG(COW_ADDR_LIFT_1036BF70);
        if ((int32_t)rd32((uint32_t)((int)param_1 + 8)) != 2) {
          puVar1 = COW_IMG(COW_ADDR_LIFT_1036A198);
        }
      }
      cow_bridge_10112880(g, COW_IMG(COW_ADDR_LIFT_101101D3), 6u, (const CowU32[]){ param_2, 2, puVar1, rd32((uint32_t)((int)param_1 + 0x10)), rd32((uint32_t)((int)param_1 + 0xc)), rd32((uint32_t)((int)param_1 + 0x14)) }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10112780(g, COW_IMG(COW_ADDR_LIFT_101101E7), 4u, (const CowU32[]){ param_2, 1, COW_IMG(COW_ADDR_LIFT_1036BF28), COW_IMG(COW_ADDR_LIFT_1036BF2C) }, g->ecx, g->edx, g->eax, 0u);
      g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(1) & 0xffu)); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 2 parameter(s), cleanup 4 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [esi], frame pointer no, 0 locals, pops [esi], ret 4.
   Arguments: 1 register argument(s) [ecx], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10110180(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10110180: push esi */
    g->esi = g->ecx;   /* 0x10110181: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x10110183: push edi */
    { uint32_t A = (uint32_t)(g->esp + 0xCu); g->edi = (uint32_t)(rd32(A)); }   /* 0x10110184: register edi, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->esi + 0x4u); g->eax = (uint32_t)(rd32(A)); }   /* 0x10110188: register eax, replayed as the entry ran it */
    cow_lift_10110180(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 1 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
