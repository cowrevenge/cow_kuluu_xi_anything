/* f_0x102579d0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_102579d0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_102579d0(Guest* g, int32_t param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU8 bVar1;
    CowU32 pbVar2;
    int iVar3;
    CowU32 uVar4;
    CowU32 pbVar5;
    int iVar6;
    _Bool bVar7;
      
      pbVar5 = COW_IMG(COW_ADDR_LIFT_1033CE74);
      pbVar2 = param_2;
      do {
        bVar1 = rd8((uint32_t)pbVar2);
        bVar7 = bVar1 < rd8((uint32_t)pbVar5);
        if (bVar1 != rd8((uint32_t)pbVar5)) {
    L_10257a09:
          iVar3 = (1 - (CowU32)bVar7) - (CowU32)(bVar7 != 0);
          goto L_10257a0e;
        }
        if (bVar1 == 0) break;
        bVar1 = rd8((uint32_t)(pbVar2 + 1u * (uint32_t)(1)));
        bVar7 = bVar1 < rd8((uint32_t)(pbVar5 + 1u * (uint32_t)(1)));
        if (bVar1 != rd8((uint32_t)(pbVar5 + 1u * (uint32_t)(1)))) goto L_10257a09;
        pbVar2 = pbVar2 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
    L_10257a0e:
      uVar4 = 0;
      if (iVar3 == 0) {
        wr8((uint32_t)(param_1 + 4), param_2);
        if ((int16_t)rd16((uint32_t)(param_2 + 8)) == 0x10) {
          wr8((uint32_t)(param_1 + 0xc), param_2 + 0x40);
          return;
        }
        if ((int16_t)rd16((uint32_t)(param_2 + 8)) != 1) {
          cow_bridge_10257330(g, COW_IMG(COW_ADDR_LIFT_10257A3E), 1u, (const CowU32[]){ param_2 }, g->ecx, g->edx, g->eax, 4u);
        }
        iVar3 = (int32_t)rd32((uint32_t)(param_1 + 4));
        if (((int16_t)rd16((uint32_t)(iVar3 + 0xc)) == 3) && ((int16_t)rd16((uint32_t)(iVar3 + 0xe)) == 0)) {
          if ((int32_t)rd32((uint32_t)(iVar3 + 0x1c)) == 0) {
            wr32((uint32_t)(param_1 + 0xc), iVar3 + 0x40);
          }
          else {
            iVar6 = iVar3 + 0x40;
            wr32((uint32_t)(param_1 + 8), iVar6);
            wr32((uint32_t)(param_1 + 0xc), iVar6 + (int32_t)rd32((uint32_t)(iVar3 + 0x28)) * 8);
            cow_bridge_10257300(g, COW_IMG(COW_ADDR_LIFT_10257A81), 3u, (const CowU32[]){ rd16((uint32_t)(iVar3 + 10)), iVar6, (int32_t)rd32((uint32_t)(iVar3 + 0x28)) << 3 }, g->ecx, g->edx, g->eax, 12u);
          }
          iVar3 = (int32_t)rd32((uint32_t)(param_1 + 4));
          if ((int32_t)rd32((uint32_t)(iVar3 + 0x28)) != 0) {
            do {
              if ((int32_t)rd32((uint32_t)(iVar3 + 0x1c)) == 0) {
                iVar3 = (int32_t)rd32((uint32_t)(iVar3 + 0x20));
                iVar6 = iVar3 * uVar4;
              }
              else {
                if ((int16_t)rd16((uint32_t)(iVar3 + 8)) != 1) {
                  cow_bridge_102573e0(g, COW_IMG(COW_ADDR_LIFT_10257AAE), 1u, (const CowU32[]){ (int32_t)rd32((uint32_t)(param_1 + 8)) + uVar4 * 8 }, g->ecx, g->edx, g->eax, 4u);
                }
                iVar3 = (int32_t)rd32((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 8)) + 4 + uVar4 * 8));
                iVar6 = (int32_t)rd32((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 8)) + uVar4 * 8));
              }
              iVar6 = iVar6 + (int32_t)rd32((uint32_t)(param_1 + 0xc));
              cow_bridge_10257300(g, COW_IMG(COW_ADDR_LIFT_10257ADE), 3u, (const CowU32[]){ rd16((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 4)) + 10)), iVar6, iVar3 }, g->ecx, g->edx, g->eax, 0u);
              if ((int16_t)rd16((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 4)) + 8)) != 1) {
                cow_bridge_10257400(g, COW_IMG(COW_ADDR_LIFT_10257AF1), 1u, (const CowU32[]){ iVar6 }, g->ecx, g->edx, g->eax, 4u);
              }
              iVar3 = (int32_t)rd32((uint32_t)(param_1 + 4));
              uVar4 = uVar4 + 1;
            } while (uVar4 < rd32((uint32_t)(iVar3 + 0x28)));
            return;
          }
        }
        else {
          wr32((uint32_t)(param_1 + 4), 0);
        }
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx+edx), stdcall, 2 parameter(s), cleanup 8 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 4 push(es) [ebx, ebp, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebp, ebx], ret 8.
   Arguments: 2 register argument(s) [ecx, edx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_102579d0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = g->edx;   /* edx argument */
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    const CowU32 cow_in_ebp = g->ebp;   /* ebp as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x102579d0: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x102579d1: push ebp */
    { uint32_t A = (uint32_t)(g->esp + 0xCu); g->ebp = (uint32_t)(rd32(A)); }   /* 0x102579d2: register ebp, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x102579d6: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x102579d7: push edi */
    g->edi = g->ecx;   /* 0x102579d8: the value the entry loaded and the decompiler dropped */
    g->esi = COW_IMG(COW_ADDR_LIFT_1033CE74);   /* 0x102579da: the value the entry loaded and the decompiler dropped */
    cow_lift_102579d0(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->ebp = cow_in_ebp;   /* every ret of the entry hands ebp back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
