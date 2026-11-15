/* f_0x102bacf0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_102bacf0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_102bacf0(Guest* g)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    int iVar2;
    int iVar3;
    CowU32 uVar4;
    iVar3 = 0;
      uVar4 = 0;
      do {
        if (uVar4 == 0) {
          wr32(COW_IMG(COW_ADDR_LIFT_109F8220), 0x103c2530);
    L_102bad19:
                        
                        
          iVar3 = 0xe;
        }
        else {
          wr32((uint32_t)(COW_IMG(COW_ADDR_LIFT_109F8220) + uVar4 * 0xc), (int32_t)rd32((uint32_t)(uVar4 * 0xc + 0x109f8214)) + (iVar3 + 0x31) * iVar3 * 4);
          if (uVar4 < 6) goto L_102bad19;
        }
        iVar2 = uVar4 * 0xc;
        iVar1 = (int32_t)rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_109F8220) + iVar2)) + iVar3 * 4;
        uVar4 = uVar4 + 1;
        wr32((uint32_t)(COW_IMG(COW_ADDR_LIFT_109F8224) + iVar2), iVar1);
        wr32((uint32_t)(iVar2 + 0x109f8228), iVar3 * 0xc0 + iVar1);
        if (5 < (int)uVar4) {
          return;
        }
      } while( 1 );
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 0 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 2 push(es) [ebx, esi], frame pointer no, 0 locals, pops [esi, ebx], ret 0.
   Arguments: 0 register argument(s) [-], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_102bacf0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */

    g->ecx = 0u;   /* 0x102bacf0: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x102bacf2: push ebx */
    g->edx = 0u;   /* 0x102bacf3: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x102bacf5: push esi */
    cow_lift_102bacf0(g);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
