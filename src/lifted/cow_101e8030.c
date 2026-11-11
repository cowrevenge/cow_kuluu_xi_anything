/* f_0x101e8030 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101e8030 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101e8030(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    int iVar2;
    CowU32 puVar3;
    CowU32 pbVar4;
    CowU32 puVar5;
    iVar2 = cow_bridge_100dc130(g, COW_IMG(COW_ADDR_LIFT_101E8035), 0u, (const CowU32[]){ 0u }, g->ecx, param_1, g->eax, 0u);
      if (0x78 < (CowU32)(iVar2 - rd32(COW_IMG(COW_ADDR_LIFT_1066358C)))) {
        cVar1 = cow_bridge_10098010(g, COW_IMG(COW_ADDR_LIFT_101E8058), 3u, (const CowU32[]){ 270434544u, 270434816u, 270434912u }, g->ecx, g->edx, g->eax, 12u);
        if (cVar1 != '\0') {
          wr32(COW_IMG(COW_ADDR_LIFT_10663588), 0);
          wr32(COW_IMG(COW_ADDR_LIFT_10663644), 0);
          if (rd32(COW_IMG(COW_ADDR_LIFT_105781F8)) != 0) {
            cow_bridge_10221270(g, COW_IMG(COW_ADDR_LIFT_101E8084), 1u, (const CowU32[]){ 2u }, g->ecx, g->edx, g->eax, 0u);
          }
          puVar3 = COW_IMG(COW_ADDR_LIFT_1037FD52);
          do {
            wr8((uint32_t)puVar3, 8);
            puVar3 = puVar3 + 0x20;
          } while ((int)puVar3 < 0x103811f2);
          pbVar4 = COW_IMG(COW_ADDR_LIFT_10381210);
          do {
            wr8((uint32_t)pbVar4, rd8((uint32_t)pbVar4) & 0xfb);
            wr8((uint32_t)(pbVar4 + 1u * (uint32_t)(2)), 8);
            wr8((uint32_t)(pbVar4 + 1u * (uint32_t)(3)), 8);
            pbVar4 = pbVar4 + 0x20;
          } while ((int)pbVar4 < 0x103812b0);
          puVar5 = COW_IMG(COW_ADDR_LIFT_10381830);
          do {
            wr32((uint32_t)(puVar5 + 4u * (uint32_t)(1)), rd32((uint32_t)(puVar5 + 4u * (uint32_t)(1))) & 0xfd);
            wr32((uint32_t)(puVar5 + 4u * (uint32_t)(2)), 0xff);
            wr32((uint32_t)(puVar5 + 4u * (uint32_t)(3)), 8);
            puVar5 = puVar5 + 0x20;
          } while ((int)puVar5 < 0x10381b70);
          pbVar4 = COW_IMG(COW_ADDR_LIFT_10381B90);
          do {
            wr8((uint32_t)pbVar4, rd8((uint32_t)pbVar4) & 0xfb);
            wr8((uint32_t)(pbVar4 + 1u * (uint32_t)(2)), 3);
            wr8((uint32_t)(pbVar4 + 1u * (uint32_t)(3)), 3);
            pbVar4 = pbVar4 + 0x20;
          } while ((int)pbVar4 < 0x10381c90);
        }
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(edx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [-], ret 0.
   Arguments: 1 register argument(s) [edx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101e8030(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->edx;   /* edx argument */

    cow_lift_101e8030(g, param_1);


    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
