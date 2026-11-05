/* f_0x10159eb0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10159eb0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10159eb0(Guest* g, CowU32 param_1)
{
    int iVar1;
    CowU32 uVar2;
    int iVar3;
    if (rd32(COW_IMG(COW_ADDR_LIFT_1062180C)) != 0) {
        uVar2 = rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1062180C)) + 4));
        iVar3 = 0;
        if (uVar2 != 0xffffffff) {
          iVar1 = rd32(COW_IMG(COW_ADDR_LIFT_1062180C));
          do {
            if ((uVar2 <= param_1) && (param_1 < rd32((uint32_t)(iVar1 + 8)))) {
              g->eax = (CowU32)(rd32(COW_IMG(COW_ADDR_LIFT_1062180C)) + iVar3 * 0x14); return;
            }
            uVar2 = rd32((uint32_t)(iVar1 + 0x18));
            iVar1 = iVar1 + 0x14;
            iVar3 = iVar3 + 1;
          } while (uVar2 != 0xffffffff);
        }
      }
      g->eax = (CowU32)(rd32(COW_IMG(COW_ADDR_LIFT_1062180C)) + iVar3 * 0x14); return;
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [edi, esi, ebx], ret 0.
   Arguments: 0 register argument(s) [-], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10159eb0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x10159eb0: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10159eb1: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x10159eb2: push edi */
    g->edi = rd32(COW_IMG(COW_ADDR_LIFT_1062180C));   /* 0x10159eb3: the value the entry loaded and the decompiler dropped */
    cow_lift_10159eb0(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 3 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
