/* f_0x102b6d00 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_102b6d00 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_102b6d00(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    CowU32 puVar2;
    puVar2 = param_1;
      for (iVar1 = 99; iVar1 != 0; iVar1 = iVar1 + -1) {
        wr32((uint32_t)puVar2, 0);
        puVar2 = puVar2 + 4u * (uint32_t)(1);
      }
      wr32((uint32_t)param_1, 0xa000a);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(2)), COW_IMG(COW_ADDR_LIFT_102B6DD0));
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(3)), COW_IMG(COW_ADDR_LIFT_102B6DE0));
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(4)), COW_IMG(COW_ADDR_LIFT_102B6E10));
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0xb)), COW_IMG(COW_ADDR_LIFT_10291280));
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0xc)), COW_IMG(COW_ADDR_LIFT_102B38D0));
      cow_bridge_1028d9c0(g, COW_IMG(COW_ADDR_LIFT_102B6D43), 1u, (const CowU32[]){ (g->esi + 20u) }, g->ecx, g->edx, 0u, 0u);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0xd)), 0);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0xe)), 0);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0xf)), 0);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x10)), 0);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x14)), COW_IMG(COW_ADDR_LIFT_102B3840));
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x4c)), 1);
      cow_bridge_102bacf0(g, COW_IMG(COW_ADDR_LIFT_102B6D6A), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, 0u, 0u);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(5)), 0x7f7fffff);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(6)), 0x7f7fffff);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(7)), 0x7f7fffff);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(8)), 0xff7fffff);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(9)), 0xff7fffff);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(10)), 0xff7fffff);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 2 push(es) [esi, edi], frame pointer no, 0 locals, pops [edi, esi], ret 0.
   Arguments: 0 register argument(s) [-], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_102b6d00(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x102b6d00: push esi */
    { uint32_t A = (uint32_t)(g->esp + 0x8u); g->esi = (uint32_t)(rd32(A)); }   /* 0x102b6d01: register esi, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x102b6d05: push edi */
    g->ecx = 99u;   /* 0x102b6d06: the value the entry loaded and the decompiler dropped */
    g->eax = 0u;   /* 0x102b6d0b: the value the entry loaded and the decompiler dropped */
    g->edi = g->esi;   /* 0x102b6d0d: the value the entry loaded and the decompiler dropped */
    cow_lift_102b6d00(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->eax = (CowU32)(4286578687u);   /* the entry left eax here on its way to the ret */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
