/* f_0x100b2570 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_100b2570 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_100b2570(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3, CowU32 param_4, CowU32 param_5)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */

    if (rd32(COW_IMG(COW_ADDR_LIFT_10663888)) != 0) {
        if (((param_1 != rd32(COW_IMG(COW_ADDR_LIFT_104882B4))) || (param_2 != rd32(COW_IMG(COW_ADDR_LIFT_104896E6)))) ||
           ((-1 < param_3 && (param_3 != rd32(COW_IMG(COW_ADDR_LIFT_104897F6)))))) {
          if (rd32(COW_IMG(COW_ADDR_LIFT_104896E6)) != 0) {
            cow_bridge_1015e910(g, COW_IMG(COW_ADDR_LIFT_100B25C3), 1u, (const CowU32[]){ 271962816u }, 274864184u, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10663888)), 0u);
          }
          cow_bridge_101f78e0(g, COW_IMG(COW_ADDR_LIFT_100B25D5), 5u, (const CowU32[]){ param_1, param_2, param_3, param_4, param_5 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10663888)), 20u);
          wr32(COW_IMG(COW_ADDR_LIFT_104882B4), (char)param_1);
          wr32(COW_IMG(COW_ADDR_LIFT_104896E6), (short)param_2);
          wr32(COW_IMG(COW_ADDR_LIFT_104897F6), (short)param_3);
        }
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 5 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 3 push(es) [ebx, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebx], ret 0.
   Arguments: 0 register argument(s) [-], 5 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_100b2570(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0xcu));
    CowU32 param_5 = rd32((uint32_t)(sp0 + 4u + 0x10u));
    g->eax = rd32(COW_IMG(COW_ADDR_LIFT_10663888));   /* 0x100b2570: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x100b2575: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x100b2576: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x100b2577: push edi */
    cow_lift_100b2570(g, param_1, param_2, param_3, param_4, param_5);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
