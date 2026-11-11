/* f_0x10211370 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10211370 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10211370(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 uVar2;
    _Bool bVar1;
      
      if (rd32((uint32_t)(param_1 + 0x40)) != 0) {
        cow_bridge_10037b90(g, COW_IMG(COW_ADDR_LIFT_1021137F), 0u, (const CowU32[]){ 0u }, param_1, g->edx, g->eax, 0u);
      }
      if (rd32((uint32_t)(param_1 + 0x14)) == (CowU32)0x0) {
        cow_bridge_1015e790(g, COW_IMG(COW_ADDR_LIFT_10211396), 2u, (const CowU32[]){ rd32((uint32_t)(param_1 + 8)), 1 }, 274864184u, g->edx, g->eax, 0u);
        return;
      }
      bVar1 = rd16((uint32_t)(rd32((uint32_t)(param_1 + 8)) + 0x4c)) != 1;
      if (bVar1) {
        uVar2 = rd32((uint32_t)(param_1 + 0x18));
      }
      else {
        uVar2 = rd32((uint32_t)(param_1 + 0x18));
      }
      cow_bridge_indirect(g, rd32((uint32_t)((param_1 + 0x14u))), COW_IMG(COW_ADDR_LIFT_102113B2), 2u, (const CowU32[]){ uVar2, !bVar1 }, g->ecx, g->edx, g->eax, 0u);
      if (rd8((uint32_t)(param_1 + 0x3a)) == '\0') {
        wr32((uint32_t)(param_1 + 0x14), 0);
        cow_bridge_1015e910(g, COW_IMG(COW_ADDR_LIFT_102113D2), 1u, (const CowU32[]){ 272037400u }, 274864184u, g->edx, g->eax, 0u);
        cow_bridge_1015e790(g, COW_IMG(COW_ADDR_LIFT_102113E2), 2u, (const CowU32[]){ rd32((uint32_t)(param_1 + 8)), 1 }, 274864184u, g->edx, g->eax, 0u);
        return;
      }
      cow_bridge_1015e790(g, COW_IMG(COW_ADDR_LIFT_102113EF), 2u, (const CowU32[]){ rd32((uint32_t)(param_1 + 8)), 1 }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_1015e350(g, COW_IMG(COW_ADDR_LIFT_10211401), 3u, (const CowU32[]){ param_1 + 0x20, 1, 0 }, 274864184u, g->edx, g->eax, 0u);
      wr8((uint32_t)(param_1 + 0x3a), 0);
      if (rd8((uint32_t)(param_1 + 0x3b)) == '\0') {
        cow_bridge_10118e90(g, COW_IMG(COW_ADDR_LIFT_10211416), 1u, (const CowU32[]){ 2u }, g->ecx, g->edx, g->eax, 0u);
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [esi], frame pointer no, 0 locals, pops [esi], ret 0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10211370(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10211370: push esi */
    g->esi = g->ecx;   /* 0x10211371: the value the entry loaded and the decompiler dropped */
    { uint32_t A = (uint32_t)(g->esi + 0x40u); g->eax = (uint32_t)(rd32(A)); }   /* 0x10211373: register eax, replayed as the entry ran it */
    cow_lift_10211370(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 1 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
