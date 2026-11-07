/* f_0x102361b0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_102361b0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_102361b0(Guest* g)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    CowU32 piVar2;
    int iVar3;
    CowU32 piVar4;
    CowU32 puVar5;
    CowU32 piVar6;
    wr32(COW_IMG(COW_ADDR_LIFT_10668EFC), 0);
      puVar5 = COW_IMG(COW_ADDR_LIFT_10668F18);
      for (iVar3 = 0x20; iVar3 != 0; iVar3 = iVar3 + -1) {
        wr32((uint32_t)puVar5, 0);
        puVar5 = puVar5 + 1;
      }
      wr32(COW_IMG(COW_ADDR_LIFT_10668F98), 0);
      piVar4 = COW_IMG(COW_ADDR_LIFT_10387718);
      wr32(COW_IMG(COW_ADDR_LIFT_10668F9C), 0);
      piVar6 = COW_IMG(COW_ADDR_LIFT_10668F18);
      wr32(COW_IMG(COW_ADDR_LIFT_10668FA0), 0);
      wr32(COW_IMG(COW_ADDR_LIFT_10668FA4), 0);
      wr32(COW_IMG(COW_ADDR_LIFT_10668FA8), 0);
      do {
        iVar3 = rd32((uint32_t)piVar6);
        piVar2 = COW_IMG(COW_ADDR_LIFT_10668F98);
        do {
          iVar1 = rd32((uint32_t)piVar4);
          iVar3 = iVar3 + iVar1;
          wr32((uint32_t)piVar2, rd32((uint32_t)piVar2) + iVar1);
          piVar2 = piVar2 + 1;
          wr32(COW_IMG(COW_ADDR_LIFT_10668EFC), rd32(COW_IMG(COW_ADDR_LIFT_10668EFC)) + iVar1);
          piVar4 = piVar4 + 1;
        } while ((int)piVar2 < 0x10668fac);
        wr32((uint32_t)piVar6, iVar3);
        piVar6 = piVar6 + 1;
      } while ((int)piVar6 < 0x10668f98);
      return;
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
void cow_adapter_102361b0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */

    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x102361b0: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x102361b1: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x102361b2: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x102361b3: push edi */
    g->ebx = 0u;   /* 0x102361b4: the value the entry loaded and the decompiler dropped */
    g->ecx = 32u;   /* 0x102361b6: the value the entry loaded and the decompiler dropped */
    g->eax = 0u;   /* 0x102361bb: the value the entry loaded and the decompiler dropped */
    g->edi = COW_IMG(COW_ADDR_LIFT_10668F18);   /* 0x102361bd: the value the entry loaded and the decompiler dropped */
    cow_lift_102361b0(g);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
