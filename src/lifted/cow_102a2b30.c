/* f_0x102a2b30 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_102a2b30 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_102a2b30(Guest* g, int32_t param_1, int32_t param_2, int32_t param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 uVar1;
    int iVar2;
    iVar2 = cow_bridge_102a1ee0(g, COW_IMG(COW_ADDR_LIFT_102A2B3F), 1u, (const CowU32[]){ g->eax }, g->ecx, g->edx, g->eax, 0u);
      uVar1 = rd32((uint32_t)(iVar2 + 0x20));
      iVar2 = cow_bridge_102a1ee0(g, COW_IMG(COW_ADDR_LIFT_102A2B4F), 1u, (const CowU32[]){ rd32((uint32_t)(param_2 + 0x18)) }, g->ecx, g->edx, g->eax, 0u);
      wr32((uint32_t)(iVar2 + 0x20), 0);
      cow_bridge_10283e20(g, COW_IMG(COW_ADDR_LIFT_102A2B5F), 1u, (const CowU32[]){ rd32((uint32_t)(param_2 + 4)) }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_1028f610(g, COW_IMG(COW_ADDR_LIFT_102A2B7C), 3u, (const CowU32[]){ param_1, rd32((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 0x40)) + param_3 * 0x30)), 0 }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10297ee0(g, COW_IMG(COW_ADDR_LIFT_102A2B83), 1u, (const CowU32[]){ 1u }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10297310(g, COW_IMG(COW_ADDR_LIFT_102A2B8A), 1u, (const CowU32[]){ 2u }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10283f90(g, COW_IMG(COW_ADDR_LIFT_102A2B91), 1u, (const CowU32[]){ 10u }, g->ecx, g->edx, g->eax, 0u);
      if (rd32((uint32_t)rd32((uint32_t)((param_2 + 0x18)))) == 0xf0005) {
        cow_bridge_10283240(g, COW_IMG(COW_ADDR_LIFT_102A2BA4), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      }
      else {
        cow_bridge_102826e0(g, COW_IMG(COW_ADDR_LIFT_102A2BB0), 1u, (const CowU32[]){ 1065353216u }, g->ecx, g->edx, g->eax, 4u);
      }
      cow_bridge_10281d40(g, COW_IMG(COW_ADDR_LIFT_102A2BBE), 3u, (const CowU32[]){ 0u, 0u, 0u }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_102a1f40(g, COW_IMG(COW_ADDR_LIFT_102A2BD5), 3u, (const CowU32[]){ rd32((uint32_t)(param_2 + 0x18)), param_2, (int32_t)rd32((uint32_t)(param_1 + 0x18)) + (int32_t)rd32((uint32_t)(param_1 + 0x1c)) * 0xc }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10281d40(g, COW_IMG(COW_ADDR_LIFT_102A2BE6), 3u, (const CowU32[]){ 128u, 128u, 1u }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10283240(g, COW_IMG(COW_ADDR_LIFT_102A2BEB), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10283f90(g, COW_IMG(COW_ADDR_LIFT_102A2BF2), 1u, (const CowU32[]){ 0xfffffff6 }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10297310(g, COW_IMG(COW_ADDR_LIFT_102A2BF9), 1u, (const CowU32[]){ 0xffffffff }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10297ee0(g, COW_IMG(COW_ADDR_LIFT_102A2C00), 1u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      iVar2 = cow_bridge_102a1ee0(g, COW_IMG(COW_ADDR_LIFT_102A2C09), 1u, (const CowU32[]){ rd32((uint32_t)(param_2 + 0x18)) }, g->ecx, g->edx, g->eax, 0u);
      wr32((uint32_t)(iVar2 + 0x20), uVar1);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 3 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 2 push(es) [esi, edi], frame pointer no, 0 locals, pops [edi, esi], ret 0.
   Arguments: 0 register argument(s) [-], 3 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_102a2b30(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x102a2b30: push esi */
    { uint32_t A = (uint32_t)(g->esp + 0xCu); g->esi = (uint32_t)(rd32(A)); }   /* 0x102a2b31: register esi, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x102a2b35: push edi */
    { uint32_t A = (uint32_t)(g->esi + 0x18u); g->eax = (uint32_t)(rd32(A)); }   /* 0x102a2b36: register eax, replayed as the entry ran it */
    cow_lift_102a2b30(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
