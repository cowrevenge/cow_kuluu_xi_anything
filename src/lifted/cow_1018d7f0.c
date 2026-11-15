/* f_0x1018d7f0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1018d7f0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1018d7f0(Guest* g, int32_t param_1, CowU32 param_2, int32_t param_3, CowU32 param_4, int32_t param_5)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    if ((0xf < param_5) || (param_5 == 0)) {
        g->eax = (CowU32)(0); return;
      }
      iVar3 = 0;
      iVar2 = 0;
      if (((int32_t)(0) < (int32_t)((int32_t)rd32((uint32_t)(param_1 + 0x88))))) {
        iVar4 = param_1 + 0x8c;
        do {
          if (param_3 <= iVar3) goto L_1018d869;
          iVar1 = cow_bridge_10325d40(g, COW_IMG(COW_ADDR_LIFT_1018D837), 3u, (const CowU32[]){ param_4, iVar4, param_5 }, g->ecx, g->edx, param_5, 12u);
          if (iVar1 == 0) {
            iVar1 = cow_bridge_1018db10(g, COW_IMG(COW_ADDR_LIFT_1018D851), 4u, (const CowU32[]){ param_2, iVar3, param_3, iVar4 }, g->ecx, g->edx, param_5, 0u);
            iVar3 = iVar3 + iVar1;
          }
          iVar2 = iVar2 + 1;
          iVar4 = iVar4 + 0x10;
        } while (((int32_t)(iVar2) < (int32_t)((int32_t)rd32((uint32_t)(param_1 + 0x88)))));
      }
      if (iVar3 < param_3) {
        if ((rd32(COW_IMG(COW_ADDR_LIFT_1057876C)) != 0) && (iVar2 = cow_bridge_101598b0(g, COW_IMG(COW_ADDR_LIFT_1018D881), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, param_5, 0u), iVar2 != 0)) {
          iVar4 = cow_bridge_101598b0(g, COW_IMG(COW_ADDR_LIFT_1018D890), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, param_5, 0u);
          iVar2 = iVar4 + 0x214;
          if ((int16_t)rd16((uint32_t)(iVar4 + 0x210)) == 0) {
            iVar2 = iVar4 + 0x7c;
          }
          if ((iVar2 != 0) && (iVar4 = cow_bridge_10325d40(g, COW_IMG(COW_ADDR_LIFT_1018D8B7), 3u, (const CowU32[]){ param_4, iVar2, param_5 }, g->ecx, g->edx, param_5, 12u), iVar4 == 0)) {
            iVar2 = cow_bridge_1018db10(g, COW_IMG(COW_ADDR_LIFT_1018D8CD), 4u, (const CowU32[]){ param_2, iVar3, param_3, iVar2 }, g->ecx, g->edx, param_5, 0u);
            iVar3 = iVar3 + iVar2;
          }
        }
        if (param_3 <= iVar3) {
          g->eax = (CowU32)(iVar3); return;
        }
        if (rd32(COW_IMG(COW_ADDR_LIFT_106643A8)) != 0) {
          iVar2 = 0;
          do {
            if (param_3 <= iVar3) {
              g->eax = (CowU32)(iVar3); return;
            }
            iVar4 = cow_bridge_10202c90(g, COW_IMG(COW_ADDR_LIFT_1018D8F9), 1u, (const CowU32[]){ iVar2 }, g->ecx, g->edx, param_5, 0u);
            if ((iVar4 != 0) && (iVar1 = cow_bridge_10325d40(g, COW_IMG(COW_ADDR_LIFT_1018D90F), 3u, (const CowU32[]){ param_4, iVar4, param_5 }, g->ecx, g->edx, param_5, 12u), iVar1 == 0)) {
              iVar4 = cow_bridge_1018db10(g, COW_IMG(COW_ADDR_LIFT_1018D929), 4u, (const CowU32[]){ param_2, iVar3, param_3, iVar4 }, g->ecx, g->edx, param_5, 0u);
              iVar3 = iVar3 + iVar4;
            }
            iVar2 = iVar2 + 1;
          } while (iVar2 < 0x12);
        }
        g->eax = (CowU32)(iVar3); return;
      }
    L_1018d869:
      g->eax = (CowU32)(iVar3); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 5 parameter(s), cleanup 16 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [ebx], frame pointer no, 0 locals, pops [ebx], ret 16.
   Arguments: 1 register argument(s) [ecx], 4 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1018d7f0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    CowU32 param_5 = rd32((uint32_t)(sp0 + 4u + 0xcu));
    g->eax = param_5;   /* 0x1018d7f0: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x1018d7f4: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x1018d7f5: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1018d7f6: push esi */
    cow_lift_1018d7f0(g, param_1, param_2, param_3, param_4, param_5);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 16u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 3 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
