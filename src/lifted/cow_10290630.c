/* f_0x10290630 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10290630 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10290630(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3, CowU32 param_4, CowU32 param_5)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 uVar1;
    int iVar2;
    int extraout_EDX;
    int iVar3;
    if (0 < param_2) {
        if (rd32((uint32_t)(param_1 + 0x18)) == 0) {
          uVar1 = cow_bridge_10275da0(g, COW_IMG(COW_ADDR_LIFT_1029065E), 4u, (const CowU32[]){ 1, param_2 * 0xc, COW_IMG(COW_ADDR_LIFT_103BA694), 2000 }, g->ecx, g->edx, param_2, 16u);
          wr32((uint32_t)(param_1 + 0x18), uVar1);
        }
        else {
          cow_bridge_102858b0(g, COW_IMG(COW_ADDR_LIFT_10290670), 1u, (const CowU32[]){ 272345824u }, g->ecx, g->edx, param_2, 4u);
        }
      }
      if (0 < param_3) {
        if (rd32((uint32_t)(param_1 + 0x24)) == 0) {
          uVar1 = cow_bridge_10275da0(g, COW_IMG(COW_ADDR_LIFT_10290698), 4u, (const CowU32[]){ 1, param_3 * 0xc, COW_IMG(COW_ADDR_LIFT_103BA694), 0x7dd }, g->ecx, g->edx, param_2, 16u);
          wr32((uint32_t)(param_1 + 0x24), uVar1);
        }
        else {
          cow_bridge_102858b0(g, COW_IMG(COW_ADDR_LIFT_102906AA), 1u, (const CowU32[]){ 272345752u }, g->ecx, g->edx, param_2, 4u);
        }
        if (rd32((uint32_t)(param_1 + 0x28)) == 0) {
          uVar1 = cow_bridge_10275da0(g, COW_IMG(COW_ADDR_LIFT_102906C4), 4u, (const CowU32[]){ 1, param_3, COW_IMG(COW_ADDR_LIFT_103BA694), 0x7e6 }, g->ecx, g->edx, param_2, 16u);
          wr32((uint32_t)(param_1 + 0x28), uVar1);
        }
        else {
          cow_bridge_102858b0(g, COW_IMG(COW_ADDR_LIFT_102906D6), 1u, (const CowU32[]){ 272345680u }, g->ecx, g->edx, param_2, 4u);
        }
      }
      if (0 < param_4) {
        if (rd32((uint32_t)(param_1 + 0x48)) == 0) {
          uVar1 = cow_bridge_10275da0(g, COW_IMG(COW_ADDR_LIFT_10290701), 4u, (const CowU32[]){ 1, param_4 * 0x2c, COW_IMG(COW_ADDR_LIFT_103BA694), 0x7f3 }, g->ecx, g->edx, param_2, 16u);
          wr32((uint32_t)(param_1 + 0x48), uVar1);
          wr32((uint32_t)(param_1 + 0x44), param_4);
          if (0 < param_4) {
            iVar3 = 0;
            do {
              cow_bridge_1028efd0(g, COW_IMG(COW_ADDR_LIFT_1029071D), 1u, (const CowU32[]){ rd32((uint32_t)(param_1 + 0x48)) + iVar3 }, g->ecx, g->edx, param_2, 0u);
              iVar3 = iVar3 + 0x2c;
            } while (extraout_EDX + 1 < rd32((uint32_t)(param_1 + 0x44)));
          }
        }
        else {
          cow_bridge_102858b0(g, COW_IMG(COW_ADDR_LIFT_10290737), 1u, (const CowU32[]){ 272345616u }, g->ecx, g->edx, param_2, 4u);
        }
      }
      if (0 < param_5) {
        if (rd32((uint32_t)(param_1 + 0x40)) == 0) {
          uVar1 = cow_bridge_10275da0(g, COW_IMG(COW_ADDR_LIFT_10290767), 4u, (const CowU32[]){ 1, param_5 * 0x30, COW_IMG(COW_ADDR_LIFT_103BA694), 0x805 }, g->ecx, g->edx, param_2, 16u);
          iVar3 = 0;
          wr32((uint32_t)(param_1 + 0x40), uVar1);
          wr32((uint32_t)(param_1 + 0x34), param_5);
          if (0 < param_5) {
            iVar2 = 0;
            do {
              iVar3 = iVar3 + 1;
              wr32((uint32_t)(iVar2 + rd32((uint32_t)(param_1 + 0x40))), 0);
              wr32((uint32_t)(iVar2 + 4 + rd32((uint32_t)(param_1 + 0x40))), 0);
              wr32((uint32_t)(iVar2 + 8 + rd32((uint32_t)(param_1 + 0x40))), 0);
              wr32((uint32_t)(iVar2 + 0xc + rd32((uint32_t)(param_1 + 0x40))), 0xffffffff);
              wr32((uint32_t)(iVar2 + 0x10 + rd32((uint32_t)(param_1 + 0x40))), 0);
              wr32((uint32_t)(iVar2 + 0x14 + rd32((uint32_t)(param_1 + 0x40))), 0);
              wr8((uint32_t)(iVar2 + 0x24 + rd32((uint32_t)(param_1 + 0x40))), 0);
              wr32((uint32_t)(iVar2 + 0x18 + rd32((uint32_t)(param_1 + 0x40))), 0x40000000);
              wr32((uint32_t)(iVar2 + 0x28 + rd32((uint32_t)(param_1 + 0x40))), 0);
              iVar2 = iVar2 + 0x30;
            } while (iVar3 < rd32((uint32_t)(param_1 + 0x34)));
            return;
          }
        }
        else {
          cow_bridge_102858b0(g, COW_IMG(COW_ADDR_LIFT_102907D9), 1u, (const CowU32[]){ 272345544u }, g->ecx, g->edx, param_2, 4u);
        }
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 5 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [edi, esi, ebx], ret 0.
   Arguments: 0 register argument(s) [-], 5 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10290630(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0xcu));
    CowU32 param_5 = rd32((uint32_t)(sp0 + 4u + 0x10u));
    g->eax = param_2;   /* 0x10290630: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x10290634: push ebx */
    g->ebx = 0u;   /* 0x10290635: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10290637: push esi */
    { uint32_t A = (uint32_t)(g->esp + 0xCu); g->esi = (uint32_t)(rd32(A)); }   /* 0x10290638: register esi, replayed as the entry ran it */
    cow_lift_10290630(g, param_1, param_2, param_3, param_4, param_5);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
