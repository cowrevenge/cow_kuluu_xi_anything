/* f_0x102559e0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_102559e0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_102559e0(Guest* g, int32_t param_1, CowU32 param_2, CowU32 param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 puVar1;
    char cVar2;
    CowU32 uVar3;
    CowU32 uVar4;
    int iVar5;
    CowU32 pcVar6;
    CowU32 pcVar7;
    if (rd32((uint32_t)(param_1 + 8)) < param_2) {
        cow_bridge_1032708c(g, COW_IMG(COW_ADDR_LIFT_102559F6), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      }
      pcVar6 = rd8((uint32_t)(param_1 + 4));
      if (((pcVar6 != (CowU32)0x0) && (cVar2 = rd8((uint32_t)(pcVar6 + 1u * (uint32_t)(-1))), cVar2 != '\0')) && (cVar2 != -1)) {
        wr8((uint32_t)(pcVar6 + 1u * (uint32_t)(-1)), cVar2 + -1);
        uVar3 = 0xffffffff;
        wr32((uint32_t)(param_1 + 4), 0);
        wr32((uint32_t)(param_1 + 8), 0);
        wr32((uint32_t)(param_1 + 0xc), 0);
        pcVar7 = pcVar6;
        do {
          if (uVar3 == 0) break;
          uVar3 = uVar3 - 1;
          cVar2 = rd8((uint32_t)pcVar7);
          pcVar7 = pcVar7 + 1;
        } while (cVar2 != '\0');
        uVar3 = ~uVar3 - 1;
        cVar2 = cow_bridge_10255260(g, COW_IMG(COW_ADDR_LIFT_10255A32), 2u, (const CowU32[]){ 0u, 1u }, g->ecx, g->edx, 0u, 0u);
        if (cVar2 != '\0') {
          pcVar7 = rd8((uint32_t)(param_1 + 4));
          for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
            wr32((uint32_t)pcVar7, rd32((uint32_t)pcVar6));
            pcVar6 = pcVar6 + 4;
            pcVar7 = pcVar7 + 4;
          }
          for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
            wr8((uint32_t)pcVar7, rd8((uint32_t)pcVar6));
            pcVar6 = pcVar6 + 1;
            pcVar7 = pcVar7 + 1;
          }
          cow_bridge_102559c0(g, COW_IMG(COW_ADDR_LIFT_10255A51), 1u, (const CowU32[]){ uVar3 }, g->ecx, g->edx, g->eax, 0u);
        }
      }
      uVar3 = (int32_t)rd32((uint32_t)(param_1 + 8)) - param_2;
      if (uVar3 < param_3) {
        param_3 = uVar3;
      }
      if (param_3 == 0) {
        g->eax = (CowU32)(param_1); return;
      }
      iVar5 = (int32_t)rd32((uint32_t)(param_1 + 4)) + param_2;
      cow_bridge_10314a10(g, COW_IMG(COW_ADDR_LIFT_10255A84), 3u, (const CowU32[]){ iVar5, iVar5 + param_3, uVar3 - param_3 }, g->ecx, g->edx, g->eax, 0u);
      param_3 = (int32_t)rd32((uint32_t)(param_1 + 8)) - param_3;
      if (0xfffffffd < param_3) {
        cow_bridge_10326e60(g, COW_IMG(COW_ADDR_LIFT_10255A96), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      }
      puVar1 = rd8((uint32_t)(param_1 + 4));
      if (((puVar1 == (CowU32)0x0) || (cVar2 = rd8((uint32_t)(puVar1 + 1u * (uint32_t)(-1))), cVar2 == '\0')) || (cVar2 == -1)) {
        if (param_3 == 0) {
          if (puVar1 == (CowU32)0x0) {
            g->eax = (CowU32)(param_1); return;
          }
          wr32((uint32_t)(param_1 + 8), 0);
          wr8((uint32_t)puVar1, 0);
          g->eax = (CowU32)(param_1); return;
        }
        if (param_3 <= rd32((uint32_t)(param_1 + 0xc))) goto L_10255ae7;
      }
      else if (param_3 == 0) {
        wr8((uint32_t)(puVar1 + 1u * (uint32_t)(-1)), cVar2 + -1);
        cow_bridge_10255380(g, COW_IMG(COW_ADDR_LIFT_10255ABA), 1u, (const CowU32[]){ 0 }, g->ecx, g->edx, g->eax, 0u);
        g->eax = (CowU32)(param_1); return;
      }
      cow_bridge_102554b0(g, COW_IMG(COW_ADDR_LIFT_10255AE7), 1u, (const CowU32[]){ param_3 }, g->ecx, g->edx, g->eax, 0u);
    L_10255ae7:
      wr32((uint32_t)(param_1 + 8), param_3);
      wr8((uint32_t)(param_3 + (int32_t)rd32((uint32_t)(param_1 + 4))), 0);
      g->eax = (CowU32)(param_1); return;
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
void cow_adapter_102559e0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x102559e0: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x102559e1: push ebp */
    g->ebp = g->ecx;   /* 0x102559e2: the value the entry loaded and the decompiler dropped */
    { uint32_t A = (uint32_t)(g->esp + 0xCu); g->ecx = (uint32_t)(rd32(A)); }   /* 0x102559e4: register ecx, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x102559e8: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x102559e9: push edi */
    { uint32_t A = (uint32_t)(g->ebp + 0x8u); g->eax = (uint32_t)(rd32(A)); }   /* 0x102559ea: register eax, replayed as the entry ran it */
    cow_lift_102559e0(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
