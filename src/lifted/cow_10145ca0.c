/* f_0x10145ca0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10145ca0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10145ca0(Guest* g, int32_t param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    int iVar2;
    CowU32 uVar3;
    cVar1 = cow_bridge_100ec470(g, COW_IMG(COW_ADDR_LIFT_10145CA8), 0u, (const CowU32[]){ 0u }, param_1, g->edx, g->eax, 0u);
      if (cVar1 == '\0') {
        if ((int32_t)rd32((uint32_t)(param_1 + 0x14)) == 0) {
          uVar3 = 5;
        }
        else {
          uVar3 = 4;
        }
        cow_bridge_10118b60(g, COW_IMG(COW_ADDR_LIFT_10145CC3), 2u, (const CowU32[]){ 5, uVar3 }, g->ecx, g->edx, g->eax, 0u);
      }
      cVar1 = cow_bridge_100eb940(g, COW_IMG(COW_ADDR_LIFT_10145CD0), 1u, (const CowU32[]){ rd32((uint32_t)rd32(COW_IMG(COW_ADDR_LIFT_10666E44))) }, g->ecx, g->edx, g->eax, 4u);
      if (cVar1 == '\0') {
        if ((int32_t)rd32((uint32_t)(param_1 + 0x14)) == 0) {
          uVar3 = 6;
        }
        else {
          uVar3 = 5;
        }
        cow_bridge_10118b60(g, COW_IMG(COW_ADDR_LIFT_10145CEE), 2u, (const CowU32[]){ 5, uVar3 }, g->ecx, g->edx, g->eax, 0u);
      }
      if ((int32_t)rd32((uint32_t)(param_1 + 0x14)) == 0) {
        cVar1 = cow_bridge_10097b40(g, COW_IMG(COW_ADDR_LIFT_10145CFA), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        if (cVar1 == '\0') {
          cow_bridge_10118b60(g, COW_IMG(COW_ADDR_LIFT_10145D0A), 2u, (const CowU32[]){ 5u, 1u }, g->ecx, g->edx, g->eax, 0u);
        }
      }
      iVar2 = cow_bridge_100f97a0(g, COW_IMG(COW_ADDR_LIFT_10145D16), 1u, (const CowU32[]){ rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) }, g->ecx, g->edx, g->eax, 4u);
      if (iVar2 == 0) {
        cow_bridge_10118b60(g, COW_IMG(COW_ADDR_LIFT_10145D2C), 2u, (const CowU32[]){ 5u, 2u }, g->ecx, g->edx, g->eax, 0u);
      }
      cVar1 = cow_bridge_100eb940(g, COW_IMG(COW_ADDR_LIFT_10145D39), 1u, (const CowU32[]){ rd32((uint32_t)rd32(COW_IMG(COW_ADDR_LIFT_10666E50))) }, g->ecx, g->edx, g->eax, 4u);
      if (cVar1 == '\0') {
        if ((int32_t)rd32((uint32_t)(param_1 + 0x14)) == 0) {
          uVar3 = 9;
        }
        else {
          uVar3 = 8;
        }
        cow_bridge_10118b60(g, COW_IMG(COW_ADDR_LIFT_10145D57), 2u, (const CowU32[]){ 5, uVar3 }, g->ecx, g->edx, g->eax, 0u);
      }
      cVar1 = cow_bridge_100eb940(g, COW_IMG(COW_ADDR_LIFT_10145D64), 1u, (const CowU32[]){ rd32((uint32_t)rd32(COW_IMG(COW_ADDR_LIFT_10666E54))) }, g->ecx, g->edx, g->eax, 4u);
      if (cVar1 == '\0') {
        if ((int32_t)rd32((uint32_t)(param_1 + 0x14)) == 0) {
          uVar3 = 10;
        }
        else {
          uVar3 = 9;
        }
        cow_bridge_10118b60(g, COW_IMG(COW_ADDR_LIFT_10145D82), 2u, (const CowU32[]){ 5, uVar3 }, g->ecx, g->edx, g->eax, 0u);
      }
      cVar1 = cow_bridge_100eb940(g, COW_IMG(COW_ADDR_LIFT_10145D8F), 1u, (const CowU32[]){ rd32((uint32_t)rd32(COW_IMG(COW_ADDR_LIFT_10666E58))) }, g->ecx, g->edx, g->eax, 4u);
      if (cVar1 == '\0') {
        if ((int32_t)rd32((uint32_t)(param_1 + 0x14)) == 0) {
          uVar3 = 0xb;
        }
        else {
          uVar3 = 10;
        }
        cow_bridge_10118b60(g, COW_IMG(COW_ADDR_LIFT_10145DAD), 2u, (const CowU32[]){ 5, uVar3 }, g->ecx, g->edx, g->eax, 0u);
      }
      cVar1 = cow_bridge_100eb940(g, COW_IMG(COW_ADDR_LIFT_10145DBA), 1u, (const CowU32[]){ rd32((uint32_t)rd32(COW_IMG(COW_ADDR_LIFT_10666E5C))) }, g->ecx, g->edx, g->eax, 4u);
      if (cVar1 == '\0') {
        if ((int32_t)rd32((uint32_t)(param_1 + 0x14)) == 0) {
          uVar3 = 0xc;
        }
        else {
          uVar3 = 0xb;
        }
        cow_bridge_10118b60(g, COW_IMG(COW_ADDR_LIFT_10145DD8), 2u, (const CowU32[]){ 5, uVar3 }, g->ecx, g->edx, g->eax, 0u);
      }
      cVar1 = cow_bridge_100eb940(g, COW_IMG(COW_ADDR_LIFT_10145DE5), 1u, (const CowU32[]){ rd32((uint32_t)rd32(COW_IMG(COW_ADDR_LIFT_10666E60))) }, g->ecx, g->edx, g->eax, 4u);
      if (cVar1 == '\0') {
        if ((int32_t)rd32((uint32_t)(param_1 + 0x14)) == 0) {
          uVar3 = 0xd;
        }
        else {
          uVar3 = 0xc;
        }
        cow_bridge_10118b60(g, COW_IMG(COW_ADDR_LIFT_10145E03), 2u, (const CowU32[]){ 5, uVar3 }, g->ecx, g->edx, g->eax, 0u);
      }
      cVar1 = cow_bridge_100eb940(g, COW_IMG(COW_ADDR_LIFT_10145E10), 1u, (const CowU32[]){ rd32((uint32_t)rd32(COW_IMG(COW_ADDR_LIFT_10666E64))) }, g->ecx, g->edx, g->eax, 4u);
      if (cVar1 == '\0') {
        if ((int32_t)rd32((uint32_t)(param_1 + 0x14)) == 0) {
          uVar3 = 0xe;
        }
        else {
          uVar3 = 0xd;
        }
        cow_bridge_10118b60(g, COW_IMG(COW_ADDR_LIFT_10145E2E), 2u, (const CowU32[]){ 5, uVar3 }, g->ecx, g->edx, g->eax, 0u);
      }
      cVar1 = cow_bridge_100eb940(g, COW_IMG(COW_ADDR_LIFT_10145E3B), 1u, (const CowU32[]){ rd32((uint32_t)rd32(COW_IMG(COW_ADDR_LIFT_10666E68))) }, g->ecx, g->edx, g->eax, 4u);
      if (cVar1 == '\0') {
        if ((int32_t)rd32((uint32_t)(param_1 + 0x14)) == 0) {
          cow_bridge_10118b60(g, COW_IMG(COW_ADDR_LIFT_10145E55), 2u, (const CowU32[]){ 5u, 15u }, g->ecx, g->edx, g->eax, 0u);
          return;
        }
        cow_bridge_10118b60(g, COW_IMG(COW_ADDR_LIFT_10145E60), 2u, (const CowU32[]){ 5u, 14u }, g->ecx, g->edx, g->eax, 0u);
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
void cow_adapter_10145ca0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10145ca0: push esi */
    g->esi = g->ecx;   /* 0x10145ca1: the value the entry loaded and the decompiler dropped */
    cow_lift_10145ca0(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
