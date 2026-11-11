/* f_0x101a33e0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101a33e0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101a33e0(Guest* g)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    int iVar2;
    iVar2 = 0;
      if (rd32(COW_IMG(COW_ADDR_LIFT_10485F7A)) != 0) {
        iVar2 = rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10480AF0) + 4u * (uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10485F7A)))));
      }
      if ((((((rd32((uint32_t)rd32(COW_IMG(COW_ADDR_LIFT_10456A28))) != 0x60) || (cVar1 = cow_bridge_1015dce0(g, COW_IMG(COW_ADDR_LIFT_101A3411), 0u, (const CowU32[]){ 0u }, 274864184u, g->edx, g->eax, 0u), cVar1 != '\0')) ||
            (rd8((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1057876C)) + 0x59)) != '\0')) ||
           ((rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1057876C)) + 0xc4)) != 0 ||
            ((rd32(COW_IMG(COW_ADDR_LIFT_106631D4)) != 0 && (rd16((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_106631D4)) + 0x1c)) != 0)))))) ||
          (cVar1 = cow_bridge_10087070(g, COW_IMG(COW_ADDR_LIFT_101A3452), 1u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 4u), cVar1 != '\0')) ||
         ((iVar2 != 0 && ((rd32((uint32_t)(iVar2 + 0x170)) == 2 || (rd32((uint32_t)(iVar2 + 0x170)) == 3)))))) {
        g->eax = (CowU32)((g->eax & 0xffff0000u) | ((CowU32)(0) & 0xffffu)); return;
      }
      cVar1 = cow_bridge_1015edb0(g, COW_IMG(COW_ADDR_LIFT_101A347F), 0u, (const CowU32[]){ 0u }, 274864184u, g->edx, g->eax, 0u);
      if (((cVar1 == '\0') && (rd16((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1057876C)) + 0x68)) == 0)) ||
         ((((cVar1 = cow_bridge_1015ed80(g, COW_IMG(COW_ADDR_LIFT_101A34A3), 1u, (const CowU32[]){ rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10578170)) + 8)) }, 274864184u, g->edx, g->eax, 0u), cVar1 != '\0' ||
            (cVar1 = cow_bridge_1015ed80(g, COW_IMG(COW_ADDR_LIFT_101A34BB), 1u, (const CowU32[]){ rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_106627A0)) + 8)) }, 274864184u, g->edx, g->eax, 0u), cVar1 != '\0')) ||
           (cVar1 = cow_bridge_1015ed80(g, COW_IMG(COW_ADDR_LIFT_101A34D3), 1u, (const CowU32[]){ rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_106627A4)) + 8)) }, 274864184u, g->edx, g->eax, 0u), cVar1 != '\0')) ||
          (cVar1 = cow_bridge_1015ed80(g, COW_IMG(COW_ADDR_LIFT_101A34EA), 1u, (const CowU32[]){ rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10578250)) + 8)) }, 274864184u, g->edx, g->eax, 0u), cVar1 != '\0')))) {
        g->eax = (CowU32)((g->eax & 0xffff0000u) | ((CowU32)(1) & 0xffffu)); return;
      }
      g->eax = (CowU32)(0); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 0 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [esi], frame pointer no, 0 locals, pops [esi], ret 0.
   Arguments: 0 register argument(s) [-], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101a33e0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */

    { uint32_t A = (uint32_t)(COW_IMG(COW_ADDR_LIFT_10485F7A) + RD); g->eax = (g->eax & 0xFFFF0000u) | (uint16_t)(rd16(A)); }   /* 0x101a33e0: register eax, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x101a33e6: push esi */
    g->esi = 0u;   /* 0x101a33e7: the value the entry loaded and the decompiler dropped */
    cow_lift_101a33e0(g);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
