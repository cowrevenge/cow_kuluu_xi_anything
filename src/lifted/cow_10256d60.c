/* f_0x10256d60 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10256d60 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10256d60(Guest* g, int32_t param_1, int32_t param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 uVar1;
    char cVar2;
    int iVar3;
    CowU32 puVar4;
    CowU32 uVar5;
    int iVar6;
    int iVar7;
    CowU32 puVar8;
    uVar1 = rd32((uint32_t)(param_2 + 8));
      if (param_1 == param_2) {
        if (rd32((uint32_t)(param_1 + 8)) < uVar1) {
          cow_bridge_1032708c(g, COW_IMG(COW_ADDR_LIFT_10256D8A), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        }
        cow_bridge_10255b00(g, COW_IMG(COW_ADDR_LIFT_10256D91), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        iVar3 = (int32_t)rd32((uint32_t)(param_1 + 8)) - uVar1;
        iVar7 = -1;
        if ((iVar3 == -1) || (iVar7 = iVar3, iVar3 != 0)) {
          iVar6 = uVar1 + (int32_t)rd32((uint32_t)(param_1 + 4));
          cow_bridge_10314a10(g, COW_IMG(COW_ADDR_LIFT_10256DB3), 3u, (const CowU32[]){ iVar6, iVar6 + iVar7, iVar3 - iVar7 }, g->ecx, g->edx, g->eax, 0u);
          iVar7 = (int32_t)rd32((uint32_t)(param_1 + 8)) - iVar7;
          cVar2 = cow_bridge_10255260(g, COW_IMG(COW_ADDR_LIFT_10256DC5), 2u, (const CowU32[]){ iVar7, 0 }, g->ecx, g->edx, g->eax, 0u);
          if (cVar2 != '\0') {
            cow_bridge_102559c0(g, COW_IMG(COW_ADDR_LIFT_10256DD1), 1u, (const CowU32[]){ iVar7 }, g->ecx, g->edx, g->eax, 0u);
          }
        }
        cow_bridge_10255b00(g, COW_IMG(COW_ADDR_LIFT_10256DDC), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      }
      else {
        if (uVar1 != 0) {
          puVar4 = rd32((uint32_t)(param_2 + 4));
          if (puVar4 == (CowU32)0x0) {
            puVar4 = COW_IMG(COW_ADDR_LIFT_1033CE70);
          }
          if (rd8((uint32_t)((int)puVar4 + -1)) < 0xfe) {
            iVar7 = (int32_t)rd32((uint32_t)(param_1 + 4));
            if (iVar7 != 0) {
              cVar2 = (int8_t)rd8((uint32_t)(iVar7 + -1));
              if ((cVar2 == '\0') || (cVar2 == -1)) {
                cow_bridge_10311bf0(g, COW_IMG(COW_ADDR_LIFT_10256E1D), 1u, (const CowU32[]){ (CowU32)(iVar7 + -1) }, g->ecx, g->edx, g->eax, 4u);
              }
              else {
                wr8((uint32_t)(iVar7 + -1), cVar2 + -1);
              }
            }
            wr32((uint32_t)(param_1 + 4), 0);
            wr32((uint32_t)(param_1 + 8), 0);
            wr32((uint32_t)(param_1 + 0xc), 0);
            puVar4 = rd32((uint32_t)(param_2 + 4));
            if (puVar4 == (CowU32)0x0) {
              puVar4 = COW_IMG(COW_ADDR_LIFT_1033CE70);
            }
            wr32((uint32_t)(param_1 + 4), puVar4);
            wr32((uint32_t)(param_1 + 8), rd32((uint32_t)(param_2 + 8)));
            wr32((uint32_t)(param_1 + 0xc), rd32((uint32_t)(param_2 + 0xc)));
            wr8((uint32_t)((int)puVar4 + -1), (int8_t)rd8((uint32_t)((int)puVar4 + -1)) + '\x01');
            goto L_10256e89;
          }
        }
        cVar2 = cow_bridge_10255260(g, COW_IMG(COW_ADDR_LIFT_10256E58), 2u, (const CowU32[]){ uVar1, 1 }, g->ecx, g->edx, g->eax, 0u);
        if (cVar2 != '\0') {
          puVar4 = rd32((uint32_t)(param_2 + 4));
          if (puVar4 == (CowU32)0x0) {
            puVar4 = COW_IMG(COW_ADDR_LIFT_1033CE70);
          }
          puVar8 = rd32((uint32_t)(param_1 + 4));
          for (uVar5 = uVar1 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
            wr32((uint32_t)puVar8, rd32((uint32_t)puVar4));
            puVar4 = puVar4 + 4u * (uint32_t)(1);
            puVar8 = puVar8 + 4u * (uint32_t)(1);
          }
          for (uVar5 = uVar1 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            wr8((uint32_t)puVar8, rd8((uint32_t)puVar4));
            puVar4 = (CowU32)((int)puVar4 + 1);
            puVar8 = (CowU32)((int)puVar8 + 1);
          }
          wr32((uint32_t)(param_1 + 8), uVar1);
          wr8((uint32_t)(uVar1 + (int32_t)rd32((uint32_t)(param_1 + 4))), 0);
        }
      }
    L_10256e89:
      wr16((uint32_t)(param_1 + 0x10), rd16((uint32_t)(param_2 + 0x10)));
      wr16((uint32_t)(param_1 + 0x12), rd16((uint32_t)(param_2 + 0x12)));
      wr16((uint32_t)(param_1 + 0x14), rd16((uint32_t)(param_2 + 0x14)));
      wr16((uint32_t)(param_1 + 0x16), rd16((uint32_t)(param_2 + 0x16)));
      wr32((uint32_t)(param_1 + 0x18), rd32((uint32_t)(param_2 + 0x18)));
      g->eax = (CowU32)(param_1); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 2 parameter(s), cleanup 4 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 4 push(es) [ebx, ebp, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebp, ebx], ret 4.
   Arguments: 1 register argument(s) [ecx], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10256d60(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x10256d60: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x10256d61: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10256d62: push esi */
    { uint32_t A = (uint32_t)(g->esp + 0x10u); g->esi = (uint32_t)(rd32(A)); }   /* 0x10256d63: register esi, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x10256d67: push edi */
    g->ebp = g->ecx;   /* 0x10256d68: the value the entry loaded and the decompiler dropped */
    { uint32_t A = (uint32_t)(g->esi + 0x8u); g->eax = (uint32_t)(rd32(A)); }   /* 0x10256d6a: register eax, replayed as the entry ran it */
    g->ebx = g->eax;   /* 0x10256d6d: the value the entry loaded and the decompiler dropped */
    cow_lift_10256d60(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
