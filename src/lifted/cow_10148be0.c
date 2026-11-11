/* f_0x10148be0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10148be0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10148be0(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    CowU32 puVar2;
    CowU32 psVar3;
    int iVar4;
    cVar1 = cow_bridge_10146310(g, COW_IMG(COW_ADDR_LIFT_10148BE8), 0u, (const CowU32[]){ 0u }, param_1, g->edx, g->eax, 0u);
      if ((cVar1 == '\0') || (rd8((uint32_t)(param_1 + 0x14)) != '\0')) {
        if (rd8((uint32_t)(param_1 + 0x14)) == '\x01') {
          if (rd8((uint32_t)(param_1 + 0x15)) == '\0') {
            cow_bridge_10148b20(g, COW_IMG(COW_ADDR_LIFT_10148C9F), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          }
          if (((rd8((uint32_t)(param_1 + 0x14)) == '\x01') && (rd8((uint32_t)(param_1 + 0x16)) == '\0')) &&
             (0x62 < rd32(COW_IMG(COW_ADDR_LIFT_10485641)))) {
            cVar1 = cow_bridge_10097e80(g, COW_IMG(COW_ADDR_LIFT_10148CDB), 1u, (const CowU32[]){ 3361u }, g->ecx, g->edx, g->eax, 4u);
            if (cVar1 != '\0') {
              cow_bridge_10118b60(g, COW_IMG(COW_ADDR_LIFT_10148C35), 2u, (const CowU32[]){ 11u, 3u }, g->ecx, g->edx, g->eax, 0u);
              wr8((uint32_t)(param_1 + 0x16), 1);
            }
          }
        }
        return;
      }
      iVar4 = 0;
      puVar2 = COW_IMG(COW_ADDR_LIFT_104856A6);
      do {
        if ((-1 < (short)rd16((uint32_t)puVar2)) || ((rd16((uint32_t)puVar2) & 0x7fff) != 0)) {
          iVar4 = iVar4 + 1;
        }
        puVar2 = puVar2 + 1;
      } while ((int)puVar2 < 0x104856e4);
      if (iVar4 != 0) {
        cVar1 = cow_bridge_10097d50(g, COW_IMG(COW_ADDR_LIFT_10148C25), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        if (cVar1 == '\0') {
          cow_bridge_10118b60(g, COW_IMG(COW_ADDR_LIFT_10148C6F), 2u, (const CowU32[]){ 11u, 4u }, g->ecx, g->edx, g->eax, 0u);
        }
      }
      iVar4 = 0;
      puVar2 = COW_IMG(COW_ADDR_LIFT_104856E4);
      do {
        if ((-1 < (short)rd16((uint32_t)puVar2)) || ((rd16((uint32_t)puVar2) & 0x7fff) != 0)) {
          iVar4 = iVar4 + 1;
        }
        puVar2 = puVar2 + 1;
      } while ((int)puVar2 < 0x10485704);
      if (iVar4 != 0) {
        cVar1 = cow_bridge_10097d50(g, COW_IMG(COW_ADDR_LIFT_10148C5F), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        if (cVar1 == '\0') {
          cow_bridge_10118b60(g, COW_IMG(COW_ADDR_LIFT_10148C98), 2u, (const CowU32[]){ 11u, 5u }, g->ecx, g->edx, g->eax, 0u);
        }
      }
      iVar4 = 0;
      psVar3 = COW_IMG(COW_ADDR_LIFT_10485704);
      do {
        if (rd16((uint32_t)psVar3) != -1) {
          iVar4 = iVar4 + 1;
        }
        psVar3 = psVar3 + 1;
      } while ((int)psVar3 < 0x10485722);
      if (iVar4 != 0) {
        cow_bridge_10118b60(g, COW_IMG(COW_ADDR_LIFT_10148CEE), 2u, (const CowU32[]){ 11u, 13u }, g->ecx, g->edx, g->eax, 0u);
      }
      cow_bridge_10148b20(g, COW_IMG(COW_ADDR_LIFT_10148CBB), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      wr8((uint32_t)(param_1 + 0x14), 1);
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
void cow_adapter_10148be0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10148be0: push esi */
    g->esi = g->ecx;   /* 0x10148be1: the value the entry loaded and the decompiler dropped */
    cow_lift_10148be0(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
