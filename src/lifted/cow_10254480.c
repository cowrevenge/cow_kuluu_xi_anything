/* f_0x10254480 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10254480 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10254480(Guest* g, int32_t param_1, CowU32 param_2, CowU32 param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    CowU32 uVar2;
    CowU32 uVar3;
    CowU32 pcVar4;
    if (param_3 == 0) {
        uVar2 = 0xffffffff;
        pcVar4 = param_2;
        do {
          if (uVar2 == 0) break;
          uVar2 = uVar2 - 1;
          cVar1 = rd8((uint32_t)pcVar4);
          pcVar4 = pcVar4 + 1;
        } while (cVar1 != '\0');
        uVar2 = ~uVar2 - 1;
        cVar1 = cow_bridge_10255260(g, COW_IMG(COW_ADDR_LIFT_102544AA), 2u, (const CowU32[]){ uVar2, 1 }, param_1, g->edx, 0u, 0u);
        if (cVar1 != '\0') {
          pcVar4 = rd8((uint32_t)(param_1 + 4));
          for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
            wr32((uint32_t)pcVar4, rd32((uint32_t)param_2));
            param_2 = param_2 + 4;
            pcVar4 = pcVar4 + 4;
          }
          for (uVar3 = uVar2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
            wr8((uint32_t)pcVar4, rd8((uint32_t)param_2));
            param_2 = param_2 + 1;
            pcVar4 = pcVar4 + 1;
          }
          wr32((uint32_t)(param_1 + 8), uVar2);
          wr8((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 4)) + uVar2), 0);
        }
        goto L_1025452d;
      }
      uVar2 = cow_bridge_102554a0(g, COW_IMG(COW_ADDR_LIFT_102544D4), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      if (uVar2 < param_3) {
        cow_bridge_10326e60(g, COW_IMG(COW_ADDR_LIFT_102544DD), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      }
      if ((((int32_t)rd32((uint32_t)(param_1 + 4)) == 0) ||
          (cVar1 = (int8_t)rd8((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 4)) + -1)), cVar1 == '\0')) || (cVar1 == -1)) {
        if ((0x1f < rd32((uint32_t)(param_1 + 0xc))) || (rd32((uint32_t)(param_1 + 0xc)) < param_3)) {
          cow_bridge_10255380(g, COW_IMG(COW_ADDR_LIFT_10254504), 1u, (const CowU32[]){ 1u }, g->ecx, g->edx, g->eax, 0u);
          goto L_10254504;
        }
      }
      else {
    L_10254504:
        cow_bridge_102554b0(g, COW_IMG(COW_ADDR_LIFT_1025450C), 1u, (const CowU32[]){ param_3 }, g->ecx, g->edx, g->eax, 0u);
      }
      pcVar4 = rd8((uint32_t)(param_1 + 4));
      for (uVar2 = param_3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        wr32((uint32_t)pcVar4, rd32((uint32_t)param_2));
        param_2 = param_2 + 4;
        pcVar4 = pcVar4 + 4;
      }
      for (uVar2 = param_3 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        wr8((uint32_t)pcVar4, rd8((uint32_t)param_2));
        param_2 = param_2 + 1;
        pcVar4 = pcVar4 + 1;
      }
      wr32((uint32_t)(param_1 + 8), param_3);
      wr8((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 4)) + param_3), 0);
    L_1025452d:
      wr16((uint32_t)(param_1 + 0x10), (int16_t)rd16((uint32_t)(param_1 + 8)) + 1);
      wr32((uint32_t)(param_1 + 0x18), 0);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 3 parameter(s), cleanup 8 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 4 push(es) [ebx, ebp, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebp, ebx], ret 8.
   Arguments: 1 register argument(s) [ecx], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10254480(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x10254480: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x10254481: push ebp */
    { uint32_t A = (uint32_t)(g->esp + 0x10u); g->ebp = (uint32_t)(rd32(A)); }   /* 0x10254482: register ebp, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10254486: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* push edi (from the epilogue's pops) */
    cow_lift_10254480(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
