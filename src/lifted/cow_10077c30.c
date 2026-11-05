/* f_0x10077c30 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10077c30 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10077c30(Guest* g, CowU32 param_1)
{
    CowU8 bVar1;
    int iVar2;
    int iVar3;
    if ((((param_1 != (CowU32)0x0) && (bVar1 = rd8((uint32_t)param_1), bVar1 != 0)) &&
          ((bVar1 < 0x80 || (0x9f < bVar1)))) &&
         ((bVar1 < 0xe0 && (iVar2 = cow_bridge_1031471e(g, COW_IMG(COW_ADDR_LIFT_10077C71), 1u, (const CowU32[]){ bVar1 }, 0u, 0u, g->eax, 4u), iVar2 != 0)))) {
        bVar1 = cow_bridge_10313bb4(g, COW_IMG(COW_ADDR_LIFT_10077C7E), 1u, (const CowU32[]){ bVar1 }, 0u, 0u, g->eax, 4u);
        wr8((uint32_t)param_1, bVar1);
        iVar2 = 1;
        do {
          param_1 = param_1 + 1;
          bVar1 = rd8((uint32_t)param_1);
          if (bVar1 == 0) break;
          if ((0x7f < bVar1) && (bVar1 < 0xa0)) {
            g->eax = (CowU32)(0); return;
          }
          if (0xdf < bVar1) {
            g->eax = (CowU32)(0); return;
          }
          iVar3 = cow_bridge_1031471e(g, COW_IMG(COW_ADDR_LIFT_10077CB3), 1u, (const CowU32[]){ bVar1 }, 0u, 0u, g->eax, 4u);
          if (iVar3 == 0) {
            g->eax = (CowU32)(0); return;
          }
          bVar1 = cow_bridge_103145e4(g, COW_IMG(COW_ADDR_LIFT_10077CC0), 1u, (const CowU32[]){ bVar1 }, 0u, 0u, g->eax, 4u);
          wr8((uint32_t)param_1, bVar1);
          iVar2 = iVar2 + 1;
        } while (iVar2 < 0xf);
        if ((2 < iVar2) && (iVar2 < 0x10)) {
          g->eax = (CowU32)(0); return;
        }
      }
      g->eax = (CowU32)(0); return;
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [ebx], frame pointer no, 0 locals, pops [ebx], ret 0.
   Arguments: 0 register argument(s) [-], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10077c30(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x10077c30: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10077c31: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x10077c32: push edi */
    cow_lift_10077c30(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
