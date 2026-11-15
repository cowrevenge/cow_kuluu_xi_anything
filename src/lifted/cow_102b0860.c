/* f_0x102b0860 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_102b0860 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_102b0860(Guest* g, CowU32 param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 uVar1;
    char cVar2;
    int iVar3;
    iVar3 = cow_bridge_10291220(g, COW_IMG(COW_ADDR_LIFT_102B0872), 2u, (const CowU32[]){ g->ebx, 271981860u }, g->ecx, g->edx, g->eax, 0u);
      if (iVar3 == 0) {
        cow_bridge_102858b0(g, COW_IMG(COW_ADDR_LIFT_102B088F), 3u, (const CowU32[]){ 272316316u, 272365484u, 151u }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_102858b0(g, COW_IMG(COW_ADDR_LIFT_102B089A), 2u, (const CowU32[]){ 272341448u, g->ebx }, g->ecx, g->edx, g->eax, 20u);
        return;
      }
      cVar2 = cow_bridge_1029cd60(g, COW_IMG(COW_ADDR_LIFT_102B08AE), 2u, (const CowU32[]){ iVar3, rd32((uint32_t)param_1) }, g->ecx, g->edx, g->eax, 8u);
      if (cVar2 == '\0') {
        cow_bridge_102858b0(g, COW_IMG(COW_ADDR_LIFT_102B08C9), 3u, (const CowU32[]){ 272316316u, 272365484u, 156u }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_102858b0(g, COW_IMG(COW_ADDR_LIFT_102B08D4), 2u, (const CowU32[]){ COW_IMG(COW_ADDR_LIFT_103B99B4), param_2 }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_10311f70(g, COW_IMG(COW_ADDR_LIFT_102B08DA), 1u, (const CowU32[]){ iVar3 }, g->ecx, g->edx, g->eax, 24u);
        return;
      }
      uVar1 = rd32((uint32_t)param_1);
      switch(uVar1) {
      case 0xa0002:
        cow_bridge_102ae810(g, COW_IMG(COW_ADDR_LIFT_102B0958), 2u, (const CowU32[]){ param_1, iVar3 }, g->ecx, g->edx, g->eax, 8u);
        cow_bridge_10311f70(g, COW_IMG(COW_ADDR_LIFT_102B0905), 1u, (const CowU32[]){ iVar3 }, g->ecx, g->edx, g->eax, 4u);
        return;
      default:
        cow_bridge_102858b0(g, COW_IMG(COW_ADDR_LIFT_102B097C), 3u, (const CowU32[]){ 272312316u, 272365484u, 164u }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_102858b0(g, COW_IMG(COW_ADDR_LIFT_102B0987), 2u, (const CowU32[]){ COW_IMG(COW_ADDR_LIFT_103BF7FC), uVar1 }, g->ecx, g->edx, g->eax, 20u);
        cow_bridge_10311f70(g, COW_IMG(COW_ADDR_LIFT_102B091C), 1u, (const CowU32[]){ iVar3 }, g->ecx, g->edx, g->eax, 4u);
        return;
      case 0xa0005:
        cow_bridge_102ace60(g, COW_IMG(COW_ADDR_LIFT_102B0941), 2u, (const CowU32[]){ param_1, iVar3 }, g->ecx, g->edx, g->eax, 8u);
        cow_bridge_10311f70(g, COW_IMG(COW_ADDR_LIFT_102B0933), 1u, (const CowU32[]){ iVar3 }, g->ecx, g->edx, g->eax, 4u);
        return;
      case 0xa0007:
        cow_bridge_102b6610(g, COW_IMG(COW_ADDR_LIFT_102B0913), 2u, (const CowU32[]){ param_1, iVar3 }, g->ecx, g->edx, g->eax, 8u);
        cow_bridge_10311f70(g, COW_IMG(COW_ADDR_LIFT_102B094A), 1u, (const CowU32[]){ iVar3 }, g->ecx, g->edx, g->eax, 4u);
        return;
      case 0xa0008:
        cow_bridge_102b5b90(g, COW_IMG(COW_ADDR_LIFT_102B092A), 2u, (const CowU32[]){ param_1, iVar3 }, g->ecx, g->edx, g->eax, 8u);
        cow_bridge_10311f70(g, COW_IMG(COW_ADDR_LIFT_102B0961), 1u, (const CowU32[]){ iVar3 }, g->ecx, g->edx, g->eax, 4u);
        return;
      case 0xa0009:
        cow_bridge_102ac2a0(g, COW_IMG(COW_ADDR_LIFT_102B08FC), 2u, (const CowU32[]){ param_1, iVar3 }, g->ecx, g->edx, g->eax, 8u);
        cow_bridge_10311f70(g, COW_IMG(COW_ADDR_LIFT_102B0990), 1u, (const CowU32[]){ iVar3 }, g->ecx, g->edx, g->eax, 4u);
        return;
      }
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 2 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 3 push(es) [ebx, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebx], ret 0.
   Arguments: 0 register argument(s) [-], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_102b0860(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x102b0860: push ebx */
    { uint32_t A = (uint32_t)(g->esp + 0xCu); g->ebx = (uint32_t)(rd32(A)); }   /* 0x102b0861: register ebx, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x102b0865: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x102b0866: push edi */
    cow_lift_102b0860(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
