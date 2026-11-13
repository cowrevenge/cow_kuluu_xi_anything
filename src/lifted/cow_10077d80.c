/* f_0x10077d80 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10077d80 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10077d80(Guest* g)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int aiStack_18[6];
    if ((rd32(COW_IMG(COW_ADDR_LIFT_10485F7A)) != 0) && (rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10480AF0) + 4u * (uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10485F7A))))) != 0)) {
        iVar4 = 0;
        iVar2 = cow_bridge_100e8b80(g, COW_IMG(COW_ADDR_LIFT_10077DA7), 1u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 4u);
        while (iVar2 != 0) {
          aiStack_18[iVar4] = (int32_t)rd32((uint32_t)(iVar2 + 0x14));
          iVar2 = cow_bridge_100e8c70(g, COW_IMG(COW_ADDR_LIFT_10077DBA), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          iVar4 = iVar4 + 1;
        }
        iVar2 = 0;
        do {
          iVar1 = rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10480AF0) + 4u * (uint32_t)(iVar2)));
          if ((iVar1 != 0) && ((int32_t)rd32((uint32_t)(iVar1 + 0xa0)) != 0)) {
            iVar3 = 0;
            if (0 < iVar4) {
              do {
                if (((((int32_t)rd32((uint32_t)(iVar1 + 0x188)) == aiStack_18[iVar3]) && (iVar1 != 0)) &&
                    ((int32_t)rd32((uint32_t)(iVar1 + 0x170)) != 2)) && ((int32_t)rd32((uint32_t)(iVar1 + 0x170)) != 3)) {
                  g->eax = (CowU32)(rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10480AF0) + 4u * (uint32_t)(iVar2)))); return;
                }
                iVar3 = iVar3 + 1;
              } while (iVar3 < iVar4);
            }
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 < 0x900);
      }
      g->eax = (CowU32)(0); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 0 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 3 push(es) [ebx, esi, edi], frame pointer no, 24 locals, pops [edi, esi, ebx], ret 0.
   Arguments: 0 register argument(s) [-], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10077d80(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */

    { uint32_t A = (uint32_t)(COW_IMG(COW_ADDR_LIFT_10485F7A) + RD); g->eax = (g->eax & 0xFFFF0000u) | (uint16_t)(rd16(A)); }   /* 0x10077d80: register eax, replayed as the entry ran it */
    g->esp -= 0x18u;                      /* 0x10077d86: 24 bytes of locals */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* push ebx (from the epilogue's pops) */
    g->esp -= 4u; wr32(g->esp, g->esi); /* push esi (from the epilogue's pops) */
    g->esp -= 4u; wr32(g->esp, g->edi); /* push edi (from the epilogue's pops) */
    cow_lift_10077d80(g);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
