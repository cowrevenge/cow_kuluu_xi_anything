/* f_0x10109af0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10109af0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10109af0(Guest* g, int32_t param_1, int32_t param_2, CowU32 param_3, CowU32 param_4)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 pbVar1;
    CowU8 bVar2;
    int iVar3;
    CowU32 uVar4;
    CowU32 pbVar5;
    CowU16 uVar6;
    CowU16 uVar7;
    _Bool bVar8;
      
      uVar7 = 0;
      iVar3 = (int32_t)rd32((uint32_t)(param_1 + 4));
      if ((iVar3 != 0) && (1 < rd16((uint32_t)(iVar3 + 2)))) {
        cow_bridge_101092c0(g, COW_IMG(COW_ADDR_LIFT_10109B0F), 1u, (const CowU32[]){ rd32((uint32_t)(iVar3 + 4)) }, param_1, g->edx, g->eax, 0u);
      }
      uVar4 = rd32((uint32_t)(param_1 + 4));
      if (uVar4 != 0) {
        pbVar5 = rd8((uint32_t)(uVar4 + 4));
        if (pbVar5 == (CowU32)0x0) goto L_10109c38;
        if (uVar4 != 0) goto L_10109b2f;
      }
      pbVar5 = (CowU32)0x0;
    L_10109b2f:
      bVar2 = rd8((uint32_t)pbVar5);
      uVar4 = (((uint32_t)((uVar4 >> 8)) & 0xffffffu) << 8 | ((uint32_t)(bVar2) & 0xffu));
      uVar6 = uVar7;
      do {
        uVar7 = uVar6;
        if ((bVar2 == 0) || (param_3 <= uVar6)) break;
        while( 1 ) {
          iVar3 = cow_bridge_103147f1(g, COW_IMG(COW_ADDR_LIFT_10109B53), 1u, (const CowU32[]){ uVar4 & 0xff }, g->ecx, g->edx, g->eax, 4u);
          if (iVar3 == 0) break;
          pbVar1 = pbVar5 + 1;
          uVar4 = (((uint32_t)(((CowU32)iVar3 >> 8)) & 0xffffffu) << 8 | ((uint32_t)(rd8((uint32_t)pbVar1)) & 0xffu));
          pbVar5 = pbVar5 + 1;
          if (rd8((uint32_t)pbVar1) == 0) goto L_10109c30;
        }
        bVar2 = rd8((uint32_t)pbVar5);
        uVar4 = 0;
        if (bVar2 == 0) break;
        if (bVar2 == 0x22) {
          wr8((uint32_t)pbVar5, 0);
          pbVar5 = pbVar5 + 1;
          wr8((uint32_t)(param_2 + (CowU32)uVar6 * 4), pbVar5);
          bVar2 = rd8((uint32_t)pbVar5);
          while (uVar4 = 0, bVar2 != 0) {
            if (bVar2 == 0x22) {
              bVar8 = rd8((uint32_t)pbVar5) == 0;
              goto L_10109c20;
            }
            if ((((char)bVar2 < '\0') && (rd8((uint32_t)(pbVar5 + 1u * (uint32_t)(1))) != 0)) || ((bVar2 == 0x5c && (rd8((uint32_t)(pbVar5 + 1u * (uint32_t)(1))) != 0)))) {
              pbVar5 = pbVar5 + 1;
            }
            pbVar1 = pbVar5 + 1;
            pbVar5 = pbVar5 + 1;
            bVar2 = rd8((uint32_t)pbVar1);
          }
        }
        else {
          if ((param_4 != 0) && (param_4 == bVar2)) break;
          uVar7 = uVar6 + 1;
          wr8((uint32_t)(param_2 + (CowU32)uVar6 * 4), pbVar5);
          bVar2 = rd8((uint32_t)pbVar5);
          while ((uVar4 = (CowU32)bVar2, bVar2 != 0 && (uVar4 = cow_bridge_103147f1(g, COW_IMG(COW_ADDR_LIFT_10109BDF), 1u, (const CowU32[]){ uVar4 }, g->ecx, g->edx, g->eax, 4u), uVar4 == 0))) {
            bVar2 = rd8((uint32_t)pbVar5);
            uVar4 = 0;
            if (bVar2 == 0x22) break;
            if (((char)bVar2 < '\0') && (rd8((uint32_t)(pbVar5 + 1u * (uint32_t)(1))) != 0)) {
              pbVar5 = pbVar5 + 1;
            }
            else if ((bVar2 == 0x5c) && (rd8((uint32_t)(pbVar5 + 1u * (uint32_t)(1))) != 0)) {
              pbVar5 = pbVar5 + 1;
            }
            else if (param_4 == bVar2) break;
            bVar2 = rd8((uint32_t)(pbVar5 + 1u * (uint32_t)(1)));
            pbVar5 = pbVar5 + 1;
          }
          bVar2 = rd8((uint32_t)pbVar5);
          uVar4 = (((uint32_t)((uVar4 >> 8)) & 0xffffffu) << 8 | ((uint32_t)(bVar2) & 0xffu));
          if (param_4 == bVar2) goto L_10109c35;
          if (bVar2 == 0) break;
          bVar8 = bVar2 == 0x22;
    L_10109c20:
          if (!bVar8) {
            wr8((uint32_t)pbVar5, 0);
            pbVar5 = pbVar5 + 1;
          }
        }
        uVar6 = uVar6 + 1;
        bVar2 = rd8((uint32_t)pbVar5);
        uVar4 = (((uint32_t)((uVar4 >> 8)) & 0xffffffu) << 8 | ((uint32_t)(bVar2) & 0xffu));
      } while( 1 );
    L_10109c30:
      if (rd8((uint32_t)pbVar5) == 0x22) {
    L_10109c35:
        wr8((uint32_t)pbVar5, 0);
      }
    L_10109c38:
      if (uVar7 < param_3) {
        wr32((uint32_t)(param_2 + (CowU32)uVar7 * 4), 0);
      }
      g->eax = (CowU32)((((uint32_t)((short)(uVar4 >> 0x10)) & 0xffffu) << 16 | ((uint32_t)(uVar7) & 0xffffu))); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 4 parameter(s), cleanup 12 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 4 push(es) [ebx, ebp, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebp, ebx], ret 12.
   Arguments: 1 register argument(s) [ecx], 3 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10109af0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x10109af0: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x10109af1: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10109af2: push esi */
    g->esi = g->ecx;   /* 0x10109af3: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x10109af5: push edi */
    g->edi = 0u;   /* 0x10109af6: the value the entry loaded and the decompiler dropped */
    { uint32_t A = (uint32_t)(g->esi + 0x4u); g->eax = (uint32_t)(rd32(A)); }   /* 0x10109af8: register eax, replayed as the entry ran it */
    cow_lift_10109af0(g, param_1, param_2, param_3, param_4);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
