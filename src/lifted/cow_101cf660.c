/* f_0x101cf660 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101cf660 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101cf660(Guest* g, int32_t param_1, int32_t param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    short sVar1;
    CowU32 pbVar2;
    CowU32 pbVar3;
    CowU32 uVar4;
    int iVar5;
    int iVar6;
    CowU32 piVar7;
    CowU32 psVar8;
    if (param_2 < 0) {
        iVar5 = 5000;
      }
      else {
        if (param_2 < 0x65) {
          if (param_2 < 0x32) {
            iVar5 = (int)(5000 / (int64_t)param_2);
            goto L_101cf692;
          }
        }
        else {
          param_2 = 100;
        }
        iVar5 = (100 - param_2) * 2;
      }
    L_101cf692:
      pbVar2 = (CowU32)(param_1 + 0x65c);
      iVar6 = 0;
      pbVar3 = pbVar2;
      do {
        uVar4 = ((int32_t)rd32((uint32_t)((int)COW_IMG(COW_ADDR_LIFT_1037E430) + iVar6)) * iVar5 + 0x32U) / 100;
        if (uVar4 == 0) {
          uVar4 = 1;
        }
        else if (0xff < uVar4) {
          uVar4 = 0xff;
        }
        wr8((uint32_t)(pbVar3 + 1u * (uint32_t)(-0x40)), (CowU8)uVar4);
        uVar4 = ((int32_t)rd32((uint32_t)((int)COW_IMG(COW_ADDR_LIFT_1037E530) + iVar6)) * iVar5 + 0x32U) / 100;
        if (uVar4 == 0) {
          uVar4 = 1;
        }
        else if (0xff < uVar4) {
          uVar4 = 0xff;
        }
        wr8((uint32_t)pbVar3, (CowU8)uVar4);
        iVar6 = iVar6 + 4;
        pbVar3 = pbVar3 + 1;
      } while ((int)(pbVar3 + (-0x65c - param_1)) < 0x40);
      cow_bridge_101d0a40(g, COW_IMG(COW_ADDR_LIFT_101CF732), 1u, (const CowU32[]){ 219u }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_101d0a20(g, COW_IMG(COW_ADDR_LIFT_101CF73C), 1u, (const CowU32[]){ 67u }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_101d09c0(g, COW_IMG(COW_ADDR_LIFT_101CF746), 1u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      piVar7 = COW_IMG(COW_ADDR_LIFT_1037E330);
      do {
        cow_bridge_101d09c0(g, COW_IMG(COW_ADDR_LIFT_101CF75F), 1u, (const CowU32[]){ rd8((uint32_t)(rd32((uint32_t)piVar7) + 0x61c + param_1)) }, g->ecx, g->edx, g->eax, 0u);
        piVar7 = piVar7 + 4u * (uint32_t)(1);
      } while ((int)piVar7 < 0x1037e430);
      cow_bridge_101d0a40(g, COW_IMG(COW_ADDR_LIFT_101CF777), 1u, (const CowU32[]){ 219u }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_101d0a20(g, COW_IMG(COW_ADDR_LIFT_101CF781), 1u, (const CowU32[]){ 67u }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_101d09c0(g, COW_IMG(COW_ADDR_LIFT_101CF78B), 1u, (const CowU32[]){ 1u }, g->ecx, g->edx, g->eax, 0u);
      piVar7 = COW_IMG(COW_ADDR_LIFT_1037E330);
      do {
        cow_bridge_101d09c0(g, COW_IMG(COW_ADDR_LIFT_101CF7A4), 1u, (const CowU32[]){ rd8((uint32_t)(rd32((uint32_t)piVar7) + 0x65c + param_1)) }, g->ecx, g->edx, g->eax, 0u);
        piVar7 = piVar7 + 4u * (uint32_t)(1);
      } while ((int)piVar7 < 0x1037e430);
      pbVar3 = (CowU32)(param_1 + 0x61c);
      psVar8 = COW_IMG(COW_ADDR_LIFT_1037E630);
      do {
        sVar1 = rd16((uint32_t)psVar8);
        psVar8 = psVar8 + 2u * (uint32_t)(1);
        wr8((uint32_t)pbVar3, (CowU8)((int)((int)sVar1 * (CowU32)rd8((uint32_t)pbVar3) + 0x400) >> 0xb));
        pbVar3 = pbVar3 + 1;
      } while ((int)(pbVar3 + (-0x61c - param_1)) < 0x40);
      psVar8 = COW_IMG(COW_ADDR_LIFT_1037E630);
      do {
        sVar1 = rd16((uint32_t)psVar8);
        psVar8 = psVar8 + 2u * (uint32_t)(1);
        wr8((uint32_t)pbVar2, (CowU8)((int)((int)sVar1 * (CowU32)rd8((uint32_t)pbVar2) + 0x400) >> 0xb));
        pbVar2 = pbVar2 + 1;
      } while ((int)(pbVar2 + (-0x65c - param_1)) < 0x40);
      return;
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
void cow_adapter_101cf660(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x101cf660: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x101cf661: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x101cf662: push esi */
    g->esi = g->ecx;   /* 0x101cf663: the value the entry loaded and the decompiler dropped */
    { uint32_t A = (uint32_t)(g->esp + 0x10u); g->ecx = (uint32_t)(rd32(A)); }   /* 0x101cf665: register ecx, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x101cf669: push edi */
    cow_lift_101cf660(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
