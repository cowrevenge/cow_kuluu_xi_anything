/* f_0x100aea40 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_100aea40 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_100aea40(Guest* g)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    char cVar2;
    int iVar3;
    CowU16 extraout_var;
    CowU32 piVar4;
    wr32(COW_IMG(COW_ADDR_LIFT_1048990C), 0);
      if (rd32(COW_IMG(COW_ADDR_LIFT_10487E48)) == '\0') {
        g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(1) & 0xffu)); return;
      }
      iVar3 = cow_bridge_100aec60(g, COW_IMG(COW_ADDR_LIFT_100AEA5B), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      if (iVar3 == -1) {
        cow_bridge_100aeb80(g, COW_IMG(COW_ADDR_LIFT_100AEA6C), 1u, (const CowU32[]){ (((uint32_t)(0xffff) & 0xffffu) << 16 | ((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104897E8))) & 0xffffu)) }, g->ecx, g->edx, g->eax, 4u);
      }
      else {
        wr32(COW_IMG(COW_ADDR_LIFT_1048990C), 1);
        iVar3 = cow_bridge_100ae350(g, COW_IMG(COW_ADDR_LIFT_100AEA81), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        if (iVar3 == -1) {
          cow_bridge_100ae1e0(g, COW_IMG(COW_ADDR_LIFT_100AEA93), 1u, (const CowU32[]){ (((uint32_t)(extraout_var) & 0xffffu) << 16 | ((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104886D8))) & 0xffffu)) }, g->ecx, g->edx, g->eax, 4u);
          g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(0) & 0xffu)); return;
        }
        wr32(COW_IMG(COW_ADDR_LIFT_1048990C), 2);
        iVar3 = cow_bridge_100ae350(g, COW_IMG(COW_ADDR_LIFT_100AEAA8), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        if (iVar3 == 1) {
          cow_bridge_1008a890(g, COW_IMG(COW_ADDR_LIFT_100AEABF), 2u, (const CowU32[]){ rd32(COW_IMG(COW_ADDR_LIFT_10489908)), rd32(COW_IMG(COW_ADDR_LIFT_104897F0)) }, g->ecx, g->edx, g->eax, 8u);
        }
        wr32(COW_IMG(COW_ADDR_LIFT_1048990C), 3);
        iVar3 = cow_bridge_100aec60(g, COW_IMG(COW_ADDR_LIFT_100AEAD1), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        if (iVar3 != 0) {
          iVar3 = cow_bridge_100ae350(g, COW_IMG(COW_ADDR_LIFT_100AEADA), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          if (iVar3 != 0) {
            cVar2 = cow_bridge_100aeea0(g, COW_IMG(COW_ADDR_LIFT_100AEAE3), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
            if (cVar2 == '\0') {
              cow_bridge_100aecc0(g, COW_IMG(COW_ADDR_LIFT_100AEAEC), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
              g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(0) & 0xffu)); return;
            }
            wr32(COW_IMG(COW_ADDR_LIFT_1048990C), 4);
            iVar3 = 0;
            piVar4 = COW_IMG(COW_ADDR_LIFT_10480AF0);
            do {
              iVar1 = rd32((uint32_t)piVar4);
              if (((iVar1 != 0) && ((rd32((uint32_t)(iVar1 + 0x120)) >> 7 & 1) != 0)) &&
                 (rd8((uint32_t)(rd32((uint32_t)(iVar1 + 0xd4)) + 0x25b)) == '\0')) {
                wr32((uint32_t)(iVar1 + 0x24), rd32((uint32_t)(iVar1 + 4)));
                wr32((uint32_t)(iVar1 + 0x28), rd32((uint32_t)(iVar1 + 8)));
                wr32((uint32_t)(iVar1 + 0x2c), rd32((uint32_t)(iVar1 + 0xc)));
                cow_bridge_100bcdd0(g, COW_IMG(COW_ADDR_LIFT_100AEB45), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
                iVar3 = iVar3 + 1;
              }
              piVar4 = piVar4 + 1;
            } while ((int)piVar4 < 0x10482ef0);
            if (iVar3 == 0) {
              wr32(COW_IMG(COW_ADDR_LIFT_10488B00), 1);
              wr32(COW_IMG(COW_ADDR_LIFT_10485A70), rd32(COW_IMG(COW_ADDR_LIFT_104886B8)));
              wr32(COW_IMG(COW_ADDR_LIFT_1048990C), 5);
              g->eax = (CowU32)(1); return;
            }
          }
        }
      }
      g->eax = (CowU32)((g->eax & 0xffff0000u) | ((CowU32)(0) & 0xffffu)); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 0 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [-], ret 0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_100aea40(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */

    { uint32_t A = (uint32_t)(COW_IMG(COW_ADDR_LIFT_10487E48) + RD); g->eax = (g->eax & 0xFFFFFF00u) | (uint8_t)(rd8(A)); }   /* 0x100aea40: register eax, replayed as the entry ran it */
    cow_lift_100aea40(g);


    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 2 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
