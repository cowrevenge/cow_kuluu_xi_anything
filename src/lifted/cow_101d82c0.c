/* f_0x101d82c0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101d82c0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101d82c0(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 this_00;
    CowU16 uVar1;
    int iVar2;
    if (((int32_t)rd32((uint32_t)((int)param_1 + 0x38)) != 0) && ((int8_t)rd8((uint32_t)((int)param_1 + 0x898)) != '\x01')) {
        iVar2 = cow_bridge_1020a420(g, COW_IMG(COW_ADDR_LIFT_101D82D8), 0u, (const CowU32[]){ 0u }, param_1, g->edx, g->eax, 0u);
        if (iVar2 != 0) {
          wr16((uint32_t)((int)param_1 + 0x8a0), rd16((uint32_t)(iVar2 + 4)));
        }
        uVar1 = cow_bridge_101f7100(g, COW_IMG(COW_ADDR_LIFT_101D82EE), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        wr16((uint32_t)((int)param_1 + 0x89e), uVar1);
      }
      this_00 = rd32(COW_IMG(COW_ADDR_LIFT_10578204));
      cow_bridge_1015e790(g, COW_IMG(COW_ADDR_LIFT_101D830C), 2u, (const CowU32[]){ rd32((uint32_t)((int)rd32(COW_IMG(COW_ADDR_LIFT_10578204)) + 8)), 1 }, 274864184u, g->edx, g->eax, 0u);
      cow_bridge_1013bf40(g, COW_IMG(COW_ADDR_LIFT_101D8313), 0u, (const CowU32[]){ 0u }, this_00, g->edx, g->eax, 0u);
      cow_bridge_1015e910(g, COW_IMG(COW_ADDR_LIFT_101D8322), 1u, (const CowU32[]){ 272100924u }, 274864184u, g->edx, g->eax, 0u);
      cow_bridge_1015e910(g, COW_IMG(COW_ADDR_LIFT_101D8331), 1u, (const CowU32[]){ 272101004u }, 274864184u, g->edx, g->eax, 0u);
      cow_bridge_1015e910(g, COW_IMG(COW_ADDR_LIFT_101D8340), 1u, (const CowU32[]){ 272100984u }, 274864184u, g->edx, g->eax, 0u);
      cow_bridge_1015e910(g, COW_IMG(COW_ADDR_LIFT_101D834F), 1u, (const CowU32[]){ 272100964u }, 274864184u, g->edx, g->eax, 0u);
      cow_bridge_1015e910(g, COW_IMG(COW_ADDR_LIFT_101D835E), 1u, (const CowU32[]){ 272100944u }, 274864184u, g->edx, g->eax, 0u);
      if ((int32_t)rd32((uint32_t)((int)param_1 + 0x8bc)) != 0) {
        cow_bridge_10311bf0(g, COW_IMG(COW_ADDR_LIFT_101D836F), 1u, (const CowU32[]){ (int32_t)rd32((uint32_t)((int)param_1 + 0x8bc)) }, g->ecx, g->edx, g->eax, 4u);
        wr32((uint32_t)((int)param_1 + 0x8bc), 0);
      }
      if ((int32_t)rd32((uint32_t)((int)param_1 + 0x8b8)) != 0) {
        cow_bridge_10311bf0(g, COW_IMG(COW_ADDR_LIFT_101D838C), 1u, (const CowU32[]){ (int32_t)rd32((uint32_t)((int)param_1 + 0x8b8)) }, g->ecx, g->edx, g->eax, 4u);
        wr32((uint32_t)((int)param_1 + 0x8b8), 0);
      }
      cow_bridge_10150cc0(g, COW_IMG(COW_ADDR_LIFT_101D83A8), 2u, (const CowU32[]){ 0u, 2u }, g->ecx, g->edx, g->eax, 0u);
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
void cow_adapter_101d82c0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x101d82c0: push esi */
    g->esi = g->ecx;   /* 0x101d82c1: the value the entry loaded and the decompiler dropped */
    { uint32_t A = (uint32_t)(g->esi + 0x38u); g->eax = (uint32_t)(rd32(A)); }   /* 0x101d82c3: register eax, replayed as the entry ran it */
    cow_lift_101d82c0(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 1 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
