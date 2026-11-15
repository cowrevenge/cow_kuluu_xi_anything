/* f_0x10149690 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10149690 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10149690(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    int iVar2;
    CowU32 uVar3;
    int iVar4;
    iVar2 = cow_bridge_100e4c60(g, COW_IMG(COW_ADDR_LIFT_1014969F), 1u, (const CowU32[]){ g->eax }, param_1, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)), 0u);
      if ((int32_t)rd32((uint32_t)((int)param_1 + 0x58)) != iVar2) {
        cVar1 = cow_bridge_101f7100(g, COW_IMG(COW_ADDR_LIFT_101496B2), 0u, (const CowU32[]){ 0u }, g->esi, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)), 0u);
        wr32((uint32_t)((int)param_1 + 0x58), iVar2);
        wr8((uint32_t)((int)param_1 + 0x53), cVar1 + '\x01');
      }
      if ((int8_t)rd8((uint32_t)((int)param_1 + 0x53)) != '\0') {
        cow_bridge_10149490(g, COW_IMG(COW_ADDR_LIFT_101496C8), 0u, (const CowU32[]){ 0u }, param_1, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)), 0u);
      }
      if ((int8_t)rd8((uint32_t)((int)param_1 + 0x50)) == '\0') {
        iVar2 = cow_bridge_101f7100(g, COW_IMG(COW_ADDR_LIFT_101496D6), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)), 0u);
        iVar2 = iVar2 + 1;
      }
      else {
        iVar2 = cow_bridge_10149070(g, COW_IMG(COW_ADDR_LIFT_101496E0), 0u, (const CowU32[]){ 0u }, param_1, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)), 0u);
      }
      wr16((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_106636A0)) + 0x2a), 0xc);
      uVar3 = cow_bridge_101610c0(g, COW_IMG(COW_ADDR_LIFT_101496FA), 1u, (const CowU32[]){ iVar2 }, rd32(COW_IMG(COW_ADDR_LIFT_106218FC)), g->edx, rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)), 0u);
      cow_bridge_101ec330(g, COW_IMG(COW_ADDR_LIFT_10149706), 1u, (const CowU32[]){ uVar3 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)), 0u);
      iVar4 = rd32(COW_IMG(COW_ADDR_LIFT_106636A0));
      wr32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_106636A0)) + 0x30), COW_IMG(COW_ADDR_LIFT_10149650));
      wr32((uint32_t)(iVar4 + 0x38), iVar2);
      if ((rd32(COW_IMG(COW_ADDR_LIFT_1057841C)) != 0) && ((int8_t)rd8((uint32_t)((int)param_1 + 0x50)) == '\0')) {
        uVar3 = cow_bridge_10149070(g, COW_IMG(COW_ADDR_LIFT_1014972C), 0u, (const CowU32[]){ 0u }, param_1, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)), 0u);
        iVar4 = cow_bridge_101f7100(g, COW_IMG(COW_ADDR_LIFT_10149735), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)), 0u);
        iVar2 = rd32(COW_IMG(COW_ADDR_LIFT_1057841C));
        wr32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1057841C)) + 0x14), iVar4 + 1);
        wr32((uint32_t)(iVar2 + 0x18), uVar3);
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 1 parameter(s), cleanup 4 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 2 push(es) [esi, edi], frame pointer no, 0 locals, pops [edi, esi], ret 4.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10149690(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    g->eax = rd32(COW_IMG(COW_ADDR_LIFT_104DFD98));   /* 0x10149690: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10149695: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x10149696: push edi */
    g->esi = g->ecx;   /* 0x10149698: the value the entry loaded and the decompiler dropped */
    cow_lift_10149690(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
