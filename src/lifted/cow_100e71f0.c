/* f_0x100e71f0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_100e71f0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_100e71f0(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU8 bVar1;
    CowU32 pbVar2;
    CowU32 pbVar3;
    _Bool bVar4;
      
      pbVar3 = (CowU32)(param_2 + 0xb4);
      pbVar2 = (CowU32)(param_1 + 0xb4);
      while( 1 ) {
        bVar1 = rd8((uint32_t)pbVar2);
        bVar4 = bVar1 < rd8((uint32_t)pbVar3);
        if (bVar1 != rd8((uint32_t)pbVar3)) break;
        if (bVar1 == 0) {
          g->eax = (CowU32)(0); return;
        }
        bVar1 = rd8((uint32_t)(pbVar2 + 1u * (uint32_t)(1)));
        bVar4 = bVar1 < rd8((uint32_t)(pbVar3 + 1u * (uint32_t)(1)));
        if (bVar1 != rd8((uint32_t)(pbVar3 + 1u * (uint32_t)(1)))) break;
        pbVar2 = pbVar2 + 2;
        pbVar3 = pbVar3 + 2;
        if (bVar1 == 0) {
          g->eax = (CowU32)(0); return;
        }
      }
      g->eax = (CowU32)((1 - (CowU32)bVar4) - (CowU32)(bVar4 != 0)); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(edx), cdecl, 3 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [ebx], frame pointer no, 0 locals, pops [ebx], ret 0.
   Arguments: 1 register argument(s) [edx], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_100e71f0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->edx;   /* edx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    g->eax = param_3;   /* 0x100e71f0: the value the entry loaded and the decompiler dropped */
    g->ecx = param_2;   /* 0x100e71f4: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x100e71f8: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x100e71f9: push esi */
    { g->esi = (uint32_t)((uint32_t)(g->eax + 0xB4u)); }   /* 0x100e71fa: register esi, replayed as the entry ran it */
    cow_lift_100e71f0(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 1 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
