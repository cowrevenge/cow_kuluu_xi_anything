/* f_0x1022ca30 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1022ca30 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1022ca30(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    char cVar2;
    short sVar3;
    iVar1 = rd32((uint32_t)(param_1 + 0x6c));
      sVar3 = (short)param_2;
      if (iVar1 == 0) {
        if (sVar3 != 5) {
          if (sVar3 == 6) {
            cow_bridge_1015e790(g, COW_IMG(COW_ADDR_LIFT_1022CABD), 2u, (const CowU32[]){ rd32((uint32_t)(param_1 + 8)), 1 }, 274864184u, g->edx, g->eax, 0u);
            return;
          }
          if (sVar3 != 8) {
            cow_bridge_10222150(g, COW_IMG(COW_ADDR_LIFT_1022CA65), 2u, (const CowU32[]){ param_2, param_3 }, g->esi, g->edx, g->eax, 0u);
            return;
          }
          if (((int32_t)(rd32((uint32_t)(param_1 + 0x40))) < (int32_t)(1))) {
            return;
          }
          if (rd32((uint32_t)(param_1 + 0xc0)) == 0) {
            return;
          }
          cow_bridge_102211b0(g, COW_IMG(COW_ADDR_LIFT_1022CA8E), 1u, (const CowU32[]){ 2u }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_1015db80(g, COW_IMG(COW_ADDR_LIFT_1022CAA3), 2u, (const CowU32[]){ rd32((uint32_t)(rd32((uint32_t)(param_1 + 0xc0)) + 8)), 0 }, 274864184u, g->edx, g->eax, 0u);
          cow_bridge_10037e90(g, COW_IMG(COW_ADDR_LIFT_1022CAA8), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          return;
        }
        if (((int32_t)(rd32((uint32_t)(param_1 + 0x40))) < (int32_t)(1))) {
          return;
        }
        cVar2 = cow_bridge_1022c7a0(g, COW_IMG(COW_ADDR_LIFT_1022CAD1), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        if (cVar2 == '\0') {
          cow_bridge_10037c50(g, COW_IMG(COW_ADDR_LIFT_1022CADE), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          return;
        }
      }
      else {
        if (sVar3 != 5) {
          if (sVar3 != 6) {
            cow_bridge_10222150(g, COW_IMG(COW_ADDR_LIFT_1022CAFB), 2u, (const CowU32[]){ param_2, param_3 }, g->ecx, g->edx, g->eax, 0u);
            return;
          }
          if (iVar1 == 2) {
            wr32((uint32_t)(param_1 + 0x6c), 1);
            wr8((uint32_t)(param_1 + 0xbc), 0);
            return;
          }
          cow_bridge_102211b0(g, COW_IMG(COW_ADDR_LIFT_1022CB27), 1u, (const CowU32[]){ 2u }, g->ecx, g->edx, g->eax, 0u);
          if (rd32((uint32_t)(param_1 + 0xc0)) != 0) {
            cow_bridge_1015db80(g, COW_IMG(COW_ADDR_LIFT_1022CB40), 2u, (const CowU32[]){ rd32((uint32_t)(rd32((uint32_t)(param_1 + 0xc0)) + 8)), 0 }, 274864184u, g->edx, g->eax, 0u);
          }
          wr32((uint32_t)(param_1 + 0x6c), 0);
          return;
        }
        if (iVar1 == 1) {
          wr32((uint32_t)(param_1 + 0x6c), 2);
          wr32((uint32_t)(param_1 + 0x70), rd32((uint32_t)(param_1 + 0x30)));
          wr8((uint32_t)(param_1 + 0xbc), 0);
          cow_bridge_10037b90(g, COW_IMG(COW_ADDR_LIFT_1022CB65), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          return;
        }
        cow_bridge_1022c8e0(g, COW_IMG(COW_ADDR_LIFT_1022CB71), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        wr32((uint32_t)(param_1 + 0x6c), 1);
        wr8((uint32_t)(param_1 + 0xbc), 0);
      }
      cow_bridge_10037b90(g, COW_IMG(COW_ADDR_LIFT_1022CB83), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 3 parameter(s), cleanup 8 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 2 push(es) [ebx, esi], frame pointer no, 0 locals, pops [esi, ebx], ret 8.
   Arguments: 1 register argument(s) [ecx], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1022ca30(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x1022ca30: push ebx */
    { uint32_t A = (uint32_t)(g->esp + 0x8u); g->edx = (uint32_t)(rd32(A)); }   /* 0x1022ca31: register edx, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1022ca35: push esi */
    g->esi = g->ecx;   /* 0x1022ca36: the value the entry loaded and the decompiler dropped */
    g->ebx = 0u;   /* 0x1022ca38: the value the entry loaded and the decompiler dropped */
    { uint32_t A = (uint32_t)(g->esi + 0x6Cu); g->eax = (uint32_t)(rd32(A)); }   /* 0x1022ca3a: register eax, replayed as the entry ran it */
    cow_lift_1022ca30(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
