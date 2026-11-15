/* f_0x10210720 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10210720 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10210720(Guest* g)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 uVar1;
    int iVar2;
    cow_bridge_indirect(g, rd32((uint32_t)(g->eax + 0x8u)), COW_IMG(COW_ADDR_LIFT_1021072A), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_1013a8d0(g, COW_IMG(COW_ADDR_LIFT_10210737), 1u, (const CowU32[]){ 0xffffffff }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_1015e790(g, COW_IMG(COW_ADDR_LIFT_1021074D), 2u, (const CowU32[]){ rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10578204)) + 8)), 1 }, 274864184u, g->edx, g->eax, 0u);
      cow_bridge_1013bf40(g, COW_IMG(COW_ADDR_LIFT_10210754), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      iVar2 = rd32(COW_IMG(COW_ADDR_LIFT_10664514));
      uVar1 = rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10664514)) + 8));
      wr8((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10664514)) + 0x3a), 0);
      wr32((uint32_t)(iVar2 + 0x14), 0);
      cow_bridge_1015e790(g, COW_IMG(COW_ADDR_LIFT_10210771), 2u, (const CowU32[]){ uVar1, 1 }, 274864184u, g->edx, g->eax, 0u);
      iVar2 = rd32(COW_IMG(COW_ADDR_LIFT_10664510));
      wr8((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10664510)) + 0x3a), 0);
      wr32((uint32_t)(iVar2 + 0x14), 0);
      cow_bridge_1015e790(g, COW_IMG(COW_ADDR_LIFT_1021078C), 2u, (const CowU32[]){ rd32((uint32_t)(iVar2 + 8)), 1 }, 274864184u, g->edx, g->eax, 0u);
      if (rd32(COW_IMG(COW_ADDR_LIFT_1057847C)) != 0) {
        cow_bridge_10150cc0(g, COW_IMG(COW_ADDR_LIFT_1021079E), 2u, (const CowU32[]){ 0u, 2u }, g->ecx, g->edx, g->eax, 0u);
      }
      if (rd32(COW_IMG(COW_ADDR_LIFT_105781F8)) != 0) {
        cow_bridge_1013a320(g, COW_IMG(COW_ADDR_LIFT_102107B0), 2u, (const CowU32[]){ 0, 2 }, g->ecx, g->edx, g->eax, 0u);
      }
      cow_bridge_1015e910(g, COW_IMG(COW_ADDR_LIFT_102107BF), 1u, (const CowU32[]){ 272037656u }, 274864184u, g->edx, g->eax, 0u);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 0 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 2 push(es) [ebx, esi], frame pointer no, 0 locals, pops [esi, ebx], ret 0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10210720(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */

    { uint32_t A = (uint32_t)(g->ecx + 0x54u); g->ecx = (uint32_t)(rd32(A)); }   /* 0x10210720: register ecx, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x10210723: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10210724: push esi */
    { uint32_t A = (uint32_t)(g->ecx); g->eax = (uint32_t)(rd32(A)); }   /* 0x10210725: register eax, replayed as the entry ran it */
    cow_lift_10210720(g);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
