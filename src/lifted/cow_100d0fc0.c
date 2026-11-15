/* f_0x100d0fc0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_100d0fc0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_100d0fc0(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar2;
    int iVar3;
    CowU32 uVar4;
    _Bool bVar1;
      
      iVar2 = cow_bridge_indirect(g, rd32((uint32_t)(g->eax + 0x394u)), COW_IMG(COW_ADDR_LIFT_100D0FCD), 0u, (const CowU32[]){ 0u }, param_1, g->edx, g->eax, 0u);
      iVar3 = cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(param_1)) + 0x378u))), COW_IMG(COW_ADDR_LIFT_100D0FD9), 0u, (const CowU32[]){ 0u }, g->esi, g->edx, g->eax, 0u);
      if ((iVar3 == 0) && (iVar3 = cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(param_1)) + 0x36cu))), COW_IMG(COW_ADDR_LIFT_100D0FE7), 0u, (const CowU32[]){ 0u }, g->esi, g->edx, g->eax, 0u), iVar3 == 0)) {
        bVar1 = 0;
      }
      else {
        bVar1 = 1;
      }
      iVar3 = cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(param_1)) + 0x3a4u))), COW_IMG(COW_ADDR_LIFT_100D0FFE), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      if (iVar2 == 0) {
        if (bVar1) {
          cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(param_1)) + 0x298u))), COW_IMG(COW_ADDR_LIFT_100D1030), 3u, (const CowU32[]){ 0x74696e69, param_1, 0 }, g->ecx, g->edx, 829321059u, 0u);
          return;
        }
        if (iVar3 == 0) {
          return;
        }
      }
      else {
        if (rd32((uint32_t)(param_1 + 4u * (uint32_t)(0x1c))) == 0) {
          return;
        }
        uVar4 = rd32((uint32_t)(rd32((uint32_t)(param_1 + 4u * (uint32_t)(0x1c))) + 0x134)) >> 0x15 & 0xf;
        if (uVar4 != 2) {
          if (uVar4 == 3) {
            cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(param_1)) + 0x298u))), COW_IMG(COW_ADDR_LIFT_100D104D), 3u, (const CowU32[]){ 0x316e6f63, param_1, 0 }, g->ecx, g->edx, 1953066601u, 0u);
            return;
          }
          return;
        }
      }
      cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(param_1)) + 0x298u))), COW_IMG(COW_ADDR_LIFT_100D106A), 3u, (const CowU32[]){ 0x306e6f63, param_1, 0 }, g->ecx, g->edx, 812543843u, 0u);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 1 parameter(s), cleanup 8 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 3 push(es) [ebx, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebx], ret 8.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_100d0fc0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x100d0fc0: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x100d0fc1: push esi */
    g->esi = g->ecx;   /* 0x100d0fc2: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x100d0fc4: push edi */
    { uint32_t A = (uint32_t)(g->esi); g->eax = (uint32_t)(rd32(A)); }   /* 0x100d0fc5: register eax, replayed as the entry ran it */
    cow_lift_100d0fc0(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
