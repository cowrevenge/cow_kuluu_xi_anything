/* f_0x10097b50 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10097b50 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10097b50(Guest* g)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU16 uVar1;
    CowU16 uVar2;
    CowU32 psVar3;
    int iVar4;
    int iVar5;
    CowU32 psVar6;
    if (((rd32(COW_IMG(COW_ADDR_LIFT_10485824)) & 1) != 0) && (rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) != 0)) {
        uVar1 = rd16((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) + 0x40d7c));
        iVar5 = 0;
        psVar6 = COW_IMG(COW_ADDR_LIFT_1035B680);
        do {
          iVar4 = 0;
          psVar3 = psVar6;
          do {
            uVar2 = uVar1;
            if (699 < uVar1) {
              uVar2 = uVar1 - 0x1bc;
            }
            if ((CowU32)uVar2 == (int)rd16((uint32_t)psVar3)) {
              g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(iVar5 * 8 + 0x1035b630) & 0xffu)); return;
            }
            iVar4 = iVar4 + 1;
            psVar3 = psVar3 + 1;
          } while (iVar4 < 4);
          psVar6 = psVar6 + 4;
          iVar5 = iVar5 + 1;
        } while ((int)psVar6 < 0x1035b6d0);
      }
      g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(0) & 0xffu)); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 0 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 4 push(es) [ebx, ebp, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebp, ebx], ret 0.
   Arguments: 0 register argument(s) [-], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10097b50(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */

    { uint32_t A = (uint32_t)(COW_IMG(COW_ADDR_LIFT_10485824) + RD); g->eax = (g->eax & 0xFFFFFF00u) | (uint8_t)(rd8(A)); }   /* 0x10097b50: register eax, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x10097b55: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x10097b56: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10097b57: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* push edi (from the epilogue's pops) */
    cow_lift_10097b50(g);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
