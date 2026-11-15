/* f_0x102b7ed0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_102b7ed0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_102b7ed0(Guest* g, int32_t param_1, int32_t param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    iVar1 = param_1 + 0x54;
      switch(rd32((uint32_t)(param_2 + 0x24))) {
      case 1:
        cow_bridge_102b7fa0(g, COW_IMG(COW_ADDR_LIFT_102B7EF5), 3u, (const CowU32[]){ g->esi, g->eax, g->edi }, g->ecx, g->edx, param_2, 12u);
        return;
      case 2:
        cow_bridge_102b8320(g, COW_IMG(COW_ADDR_LIFT_102B7F03), 3u, (const CowU32[]){ param_1, param_2, iVar1 }, g->ecx, g->edx, param_2, 0u);
        cow_bridge_102bada0(g, COW_IMG(COW_ADDR_LIFT_102B7F0A), 2u, (const CowU32[]){ param_1, iVar1 }, g->ecx, g->edx, param_2, 20u);
        return;
      case 3:
        cow_bridge_102b85a0(g, COW_IMG(COW_ADDR_LIFT_102B7F18), 3u, (const CowU32[]){ param_1, param_2, iVar1 }, g->ecx, g->edx, param_2, 12u);
        return;
      case 4:
        cow_bridge_102b8830(g, COW_IMG(COW_ADDR_LIFT_102B7F26), 3u, (const CowU32[]){ param_1, param_2, iVar1 }, g->ecx, g->edx, param_2, 0u);
        cow_bridge_102bb530(g, COW_IMG(COW_ADDR_LIFT_102B7F2D), 2u, (const CowU32[]){ param_1, iVar1 }, g->ecx, g->edx, param_2, 20u);
        return;
      case 5:
      case 6:
        cow_bridge_102b8b70(g, COW_IMG(COW_ADDR_LIFT_102B7F3B), 3u, (const CowU32[]){ param_1, param_2, iVar1 }, g->ecx, g->edx, param_2, 0u);
        cow_bridge_102bba00(g, COW_IMG(COW_ADDR_LIFT_102B7F42), 2u, (const CowU32[]){ param_1, iVar1 }, g->ecx, g->edx, param_2, 20u);
        return;
      case 7:
        cow_bridge_102b9120(g, COW_IMG(COW_ADDR_LIFT_102B7F50), 3u, (const CowU32[]){ param_1, param_2, iVar1 }, g->ecx, g->edx, param_2, 0u);
        cow_bridge_102bbe60(g, COW_IMG(COW_ADDR_LIFT_102B7F57), 2u, (const CowU32[]){ param_1, iVar1 }, g->ecx, g->edx, param_2, 20u);
        return;
      default:
        cow_bridge_102858b0(g, COW_IMG(COW_ADDR_LIFT_102B7F71), 3u, (const CowU32[]){ 272316316u, 272376212u, 1559u }, g->ecx, g->edx, param_2, 0u);
        cow_bridge_102858b0(g, COW_IMG(COW_ADDR_LIFT_102B7F7B), 1u, (const CowU32[]){ 272376984u }, g->ecx, g->edx, param_2, 16u);
        return;
      }
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 2 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 2 push(es) [esi, edi], frame pointer no, 0 locals, pops [edi, esi], ret 0.
   Arguments: 0 register argument(s) [-], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_102b7ed0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    g->eax = param_2;   /* 0x102b7ed0: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x102b7ed4: push esi */
    { uint32_t A = (uint32_t)(g->esp + 0x8u); g->esi = (uint32_t)(rd32(A)); }   /* 0x102b7ed5: register esi, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x102b7ed9: push edi */
    { uint32_t A = (uint32_t)(g->eax + 0x24u); g->ecx = (uint32_t)(rd32(A)); }   /* 0x102b7eda: register ecx, replayed as the entry ran it */
    { { uint32_t a = g->ecx; uint32_t r = (uint32_t)(a - 1u); g->ecx = (uint32_t)(r); }; }   /* 0x102b7edd: register ecx, replayed as the entry ran it */
    { g->edi = (uint32_t)((uint32_t)(g->esi + 0x54u)); }   /* 0x102b7ede: register edi, replayed as the entry ran it */
    cow_lift_102b7ed0(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
