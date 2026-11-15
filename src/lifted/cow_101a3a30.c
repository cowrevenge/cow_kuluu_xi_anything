/* f_0x101a3a30 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101a3a30 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101a3a30(Guest* g, int32_t param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    int iVar2;
    cVar1 = cow_bridge_10123a70(g, COW_IMG(COW_ADDR_LIFT_101A3A43), 4u, (const CowU32[]){ 0x3e, 0x89, 4, 0xffffffff }, param_1, g->edx, g->eax, 16u);
      if (cVar1 == '\0') {
        cVar1 = cow_bridge_10123a70(g, COW_IMG(COW_ADDR_LIFT_101A3A5A), 4u, (const CowU32[]){ 0x3e, 0x8a, 4, 0xffffffff }, g->ecx, g->edx, g->eax, 16u);
        if (cVar1 == '\0') {
          cVar1 = cow_bridge_10123a70(g, COW_IMG(COW_ADDR_LIFT_101A3A6E), 4u, (const CowU32[]){ 0x3e, 0x76, 4, 0xffffffff }, g->ecx, g->edx, g->eax, 16u);
          if (cVar1 == '\0') {
            cVar1 = cow_bridge_10123a70(g, COW_IMG(COW_ADDR_LIFT_101A3A82), 4u, (const CowU32[]){ 0x3e, 0x77, 4, 0xffffffff }, g->ecx, g->edx, g->eax, 16u);
            if (cVar1 == '\0') {
              wr8((uint32_t)(param_1 + 0x28), 0);
              goto L_101a3a92;
            }
          }
        }
      }
      wr8((uint32_t)(param_1 + 0x28), 1);
    L_101a3a92:
      cVar1 = (int8_t)rd8((uint32_t)(param_1 + 0x29));
      if (cVar1 == '\x01') {
        iVar2 = cow_bridge_10118220(g, COW_IMG(COW_ADDR_LIFT_101A3AA7), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        if (iVar2 != 0) {
          wr8((uint32_t)(iVar2 + 0x44), 2);
          wr32((uint32_t)(iVar2 + 0x48), 0x14);
        }
        wr8((uint32_t)(param_1 + 0x29), 2);
      }
      else if (cVar1 == '\x02') {
        iVar2 = cow_bridge_10118220(g, COW_IMG(COW_ADDR_LIFT_101A3ACF), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        if ((iVar2 != 0) && ((int8_t)rd8((uint32_t)(iVar2 + 0x44)) == '\x01')) {
          wr8((uint32_t)(param_1 + 0x29), 3);
          cow_bridge_101a3d00(g, COW_IMG(COW_ADDR_LIFT_101A3AC3), 1u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          return;
        }
      }
      else if (cVar1 == '\x03') {
        iVar2 = cow_bridge_10118220(g, COW_IMG(COW_ADDR_LIFT_101A3AF2), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        if (iVar2 != 0) {
          wr8((uint32_t)(iVar2 + 0x44), 3);
          wr32((uint32_t)(iVar2 + 0x48), 0x14);
        }
        wr8((uint32_t)(param_1 + 0x29), 0);
        cow_bridge_101a3d00(g, COW_IMG(COW_ADDR_LIFT_101A3AE6), 1u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      }
      cow_bridge_101a3d00(g, COW_IMG(COW_ADDR_LIFT_101A3B0E), 1u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 1 parameter(s), cleanup 4 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [esi], frame pointer no, 0 locals, pops [esi], ret 4.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101a3a30(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x101a3a30: push esi */
    cow_lift_101a3a30(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
