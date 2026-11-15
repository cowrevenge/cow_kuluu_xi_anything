/* f_0x101d1000 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101d1000 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101d1000(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    CowU8 uVar2;
    CowU32 this;
    int iVar3;
    uVar2 = 0;
      this = (CowU32)cow_bridge_1002c890(g, COW_IMG(COW_ADDR_LIFT_101D100E), 1u, (const CowU32[]){ 3324u }, g->ecx, g->edx, g->eax, 4u);
      if (this != (CowU32)0x0) {
        iVar3 = cow_bridge_101d08c0(g, COW_IMG(COW_ADDR_LIFT_101D101C), 0u, (const CowU32[]){ 0u }, this, g->edx, g->eax, 0u);
        if (iVar3 != 0) {
          cVar1 = cow_bridge_101d1060(g, COW_IMG(COW_ADDR_LIFT_101D1032), 3u, (const CowU32[]){ iVar3, 0x200, 0x17e }, g->ecx, g->edx, g->eax, 12u);
          uVar2 = 0;
          if (cVar1 != '\0') {
            uVar2 = cow_bridge_101d10c0(g, COW_IMG(COW_ADDR_LIFT_101D1044), 2u, (const CowU32[]){ iVar3, param_1 }, g->ecx, g->edx, g->eax, 8u);
          }
          cow_bridge_101d08d0(g, COW_IMG(COW_ADDR_LIFT_101D1050), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_1002c8b0(g, COW_IMG(COW_ADDR_LIFT_101D1056), 1u, (const CowU32[]){ iVar3 }, g->ecx, g->edx, g->eax, 4u);
        }
      }
      g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(uVar2) & 0xffu)); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 2 push(es) [ebx, esi], frame pointer no, 0 locals, pops [esi, ebx], ret 0.
   Arguments: 0 register argument(s) [-], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101d1000(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x101d1000: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x101d1001: push esi */
    cow_lift_101d1000(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
