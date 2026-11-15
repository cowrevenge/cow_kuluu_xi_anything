/* f_0x10105930 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10105930 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10105930(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 puVar1;
    int iVar2;
    CowU32 piVar3;
    int iVar4;
    iVar4 = 0;
      piVar3 = COW_IMG(COW_ADDR_LIFT_10331D78);
      puVar1 = rd32(COW_IMG(COW_ADDR_LIFT_10331D7C));
      do {
        if (puVar1 == (CowU32)0x0) {
    L_1010596a:
          wr32((uint32_t)param_3, iVar4);
          g->eax = (CowU32)(rd32((uint32_t)piVar3)); return;
        }
        iVar4 = cow_bridge_10105520(g, COW_IMG(COW_ADDR_LIFT_10105957), 3u, (const CowU32[]){ param_1, param_2, rd32((uint32_t)(piVar3 + 4u * (uint32_t)(1))) }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10331D7C)), 0u);
        if (iVar4 != 0) {
          if (((0 < rd32((uint32_t)piVar3)) && (rd32((uint32_t)piVar3) < 0x180)) &&
             ((iVar2 = cow_bridge_100fc6d0(g, COW_IMG(COW_ADDR_LIFT_10105989), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10331D7C)), 0u), iVar2 == 0 ||
              (((CowU8)(1 << ((CowU8)rd32((uint32_t)piVar3) & 7)) & rd8((uint32_t)((rd32((uint32_t)piVar3) >> 3) + iVar2))) == 0)))) {
            wr32((uint32_t)param_3, 0);
            g->eax = (CowU32)(-1); return;
          }
          goto L_1010596a;
        }
        puVar1 = (CowU32)rd32((uint32_t)(piVar3 + 4u * (uint32_t)(3)));
        piVar3 = piVar3 + 4u * (uint32_t)(2);
      } while( 1 );
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 3 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [ebx], frame pointer no, 0 locals, pops [ebx], ret 0.
   Arguments: 0 register argument(s) [-], 3 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10105930(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    g->eax = rd32(COW_IMG(COW_ADDR_LIFT_10331D7C));   /* 0x10105930: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x10105935: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x10105936: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10105937: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x10105938: push edi */
    g->edi = 0u;   /* 0x10105939: the value the entry loaded and the decompiler dropped */
    cow_lift_10105930(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 3 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
