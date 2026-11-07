/* f_0x1024d9f0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1024d9f0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1024d9f0(Guest* g)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    CowU32 pbVar2;
    CowU8 local_10[16];
    pbVar2 = (CowU32)COW_IMG(COW_ADDR_LIFT_103890E8);
      iVar1 = 0;
      do {
        if ((rd8((uint32_t)pbVar2) & 1) == 0) {
          cow_bridge_10312031(g, COW_IMG(COW_ADDR_LIFT_1024DA14), 3u, (const CowU32[]){ local_10, COW_IMG(COW_ADDR_LIFT_103896CC), iVar1 + 1 }, g->ecx, g->edx, g->eax, 12u);
        }
        pbVar2 = pbVar2 + 0x24;
        iVar1 = iVar1 + 1;
      } while (iVar1 < 0xf);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 0 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 2 push(es) [esi, edi], frame pointer no, 16 locals, pops [edi, esi], ret 0.
   Arguments: 0 register argument(s) [-], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1024d9f0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */

    g->esp -= 0x10u;                      /* 0x1024d9f0: 16 bytes of locals */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1024d9f3: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x1024d9f4: push edi */
    g->edi = COW_IMG(COW_ADDR_LIFT_103890E8);   /* 0x1024d9f5: the value the entry loaded and the decompiler dropped */
    g->esi = 0u;   /* 0x1024d9fa: the value the entry loaded and the decompiler dropped */
    cow_lift_1024d9f0(g);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
