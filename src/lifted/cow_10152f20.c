/* f_0x10152f20 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10152f20 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

int cow_lift_10152f20(Guest* g, CowU32 param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    CowU32 uVar2;
    uVar2 = 0;
      do {
        if (rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10371DA8) + 4u * (uint32_t)(uVar2 * 2))) == param_1) {
          if (rd32((uint32_t)(uVar2 * 8 + 0x10371dac)) != 0) {
            cVar1 = cow_bridge_10257b30(g, COW_IMG(COW_ADDR_LIFT_10152F55), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
            if (cVar1 != '\0') {
              cow_bridge_10257970(g, COW_IMG(COW_ADDR_LIFT_10152F6A), 1u, (const CowU32[]){ param_2 }, g->ecx, g->edx, g->eax, 0u);
              return 0;
            }
          }
          break;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < 0x1c);
      if (rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10578548) + 4u * (uint32_t)(param_1))) == 0) {
        return 0;
      }
      cow_bridge_tail_101530c0(g, g->ecx, g->edx, g->eax);
      return 1;
    return 0;   /* fell through: no tail call taken, run the epilogue */
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 2 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 2 push(es) [esi, edi], frame pointer no, 0 locals, pops [edi, esi], ret 0.
   Arguments: 0 register argument(s) [-], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10152f20(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10152f20: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x10152f21: push edi */
    { uint32_t A = (uint32_t)(g->esp + 0xCu); g->edi = (uint32_t)(rd32(A)); }   /* 0x10152f22: register edi, replayed as the entry ran it */
    g->esi = 0u;   /* 0x10152f26: the value the entry loaded and the decompiler dropped */
    if (cow_lift_10152f20(g, param_1, param_2)) {
        /* INTRA-BODY TAIL CALL out of 1 site(s): 0x10152f73 -> jmp 0x101530c0. The target's own `ret` returned for this
           entry, so the pops, the esp restore and rt_return below describe a `ret` this path never
           executed. Returning here is what keeps the frame whole. */
        return;
    }

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
