/* f_0x1022d140 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1022d140 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1022d140(Guest* g, CowU32 param_1, int32_t param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    CowU32 uVar2;
    CowU32 this;
    CowU8 local_80[128];
    this = rd32(COW_IMG(COW_ADDR_LIFT_10667A70));
      uVar2 = rd32((uint32_t)((int)rd32(COW_IMG(COW_ADDR_LIFT_10667A70)) + 0x30));
      iVar1 = cow_bridge_1022c730(g, COW_IMG(COW_ADDR_LIFT_1022D159), 1u, (const CowU32[]){ g->edi }, rd32(COW_IMG(COW_ADDR_LIFT_10667A70)), g->edx, g->eax, 0u);
      if (-1 < iVar1) {
        uVar2 = cow_bridge_1022c730(g, COW_IMG(COW_ADDR_LIFT_1022D165), 1u, (const CowU32[]){ g->edi }, this, g->edx, g->eax, 0u);
        cow_bridge_1022bda0(g, COW_IMG(COW_ADDR_LIFT_1022D176), 2u, (const CowU32[]){ uVar2, rd32((uint32_t)(param_2 + 4)) }, g->ecx, g->edx, g->eax, 0u);
        uVar2 = cow_bridge_1022bf10(g, COW_IMG(COW_ADDR_LIFT_1022D17D), 0u, (const CowU32[]){ 0u }, uVar2, g->edx, g->eax, 0u);
        cow_bridge_10312031(g, COW_IMG(COW_ADDR_LIFT_1022D18D), 3u, (const CowU32[]){ local_80, COW_IMG(COW_ADDR_LIFT_10386970), uVar2 }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_10080dc0(g, COW_IMG(COW_ADDR_LIFT_1022D199), 2u, (const CowU32[]){ local_80, 0 }, g->ecx, g->edx, g->eax, 0u);
        this = rd32(COW_IMG(COW_ADDR_LIFT_10667A70));
      }
      cow_bridge_1015e790(g, COW_IMG(COW_ADDR_LIFT_1022D1B2), 2u, (const CowU32[]){ rd32((uint32_t)((int)this + 8)), 1 }, 274864184u, g->edx, g->eax, 0u);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 2 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 2 push(es) [esi, edi], frame pointer no, 128 locals, pops [edi, esi], ret 0.
   Arguments: 0 register argument(s) [-], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1022d140(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    g->esp -= 0x80u;                      /* 0x1022d140: 128 bytes of locals */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1022d146: push esi */
    g->esi = rd32(COW_IMG(COW_ADDR_LIFT_10667A70));   /* 0x1022d147: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x1022d14d: push edi */
    g->ecx = g->esi;   /* 0x1022d14e: the value the entry loaded and the decompiler dropped */
    { uint32_t A = (uint32_t)(g->esi + 0x30u); g->edi = (uint32_t)(rd32(A)); }   /* 0x1022d150: register edi, replayed as the entry ran it */
    cow_lift_1022d140(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
