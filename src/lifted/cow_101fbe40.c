/* f_0x101fbe40 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101fbe40 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101fbe40(Guest* g, int32_t param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    CowU32 pcVar2;
    CowU32 pcVar3;
    if (param_2 != '\0') {
        if ((int32_t)rd32((uint32_t)(param_1 + 0x38)) != 0) {
          pcVar2 = (CowU32)cow_bridge_101c5e50(g, COW_IMG(COW_ADDR_LIFT_101FBE59), 1u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          pcVar3 = (CowU32)(param_1 + 0x3c);
          do {
            cVar1 = rd8((uint32_t)pcVar2);
            pcVar2 = pcVar2 + 1;
            wr8((uint32_t)pcVar3, cVar1);
            pcVar3 = pcVar3 + 1;
          } while (cVar1 != '\0');
        }
        if (rd32(COW_IMG(COW_ADDR_LIFT_10663888)) != 0) {
          cow_bridge_101f8e30(g, COW_IMG(COW_ADDR_LIFT_101FBE7F), 3u, (const CowU32[]){ 0, rd32((uint32_t)(param_1 + 0x14)), param_1 + 0x3c }, g->ecx, g->edx, g->eax, 0u);
        }
      }
      if (rd32((uint32_t)(param_1 + 0x38)) != (CowU32)0x0) {
        cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(rd32((uint32_t)((param_1 + 0x38u))))) + 0xcu))), COW_IMG(COW_ADDR_LIFT_101FBE8D), 1u, (const CowU32[]){ 1u }, g->ecx, g->edx, g->eax, 0u);
        wr32((uint32_t)(param_1 + 0x38), 0);
      }
      cow_bridge_101c6870(g, COW_IMG(COW_ADDR_LIFT_101FBEA1), 1u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      if ((int32_t)rd32((uint32_t)(param_1 + 8)) != 0) {
        wr8((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 8)) + 0x61), 1);
        wr8((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 8)) + 0x62), 1);
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 2 parameter(s), cleanup 4 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [esi], frame pointer no, 0 locals, pops [esi], ret 4.
   Arguments: 1 register argument(s) [ecx], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101fbe40(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    { uint32_t A = (uint32_t)(g->esp + 0x4u); g->eax = (g->eax & 0xFFFFFF00u) | (uint8_t)(rd8(A)); }   /* 0x101fbe40: register eax, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x101fbe44: push esi */
    cow_lift_101fbe40(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
