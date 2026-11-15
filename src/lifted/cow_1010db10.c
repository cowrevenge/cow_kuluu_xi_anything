/* f_0x1010db10 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1010db10 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1010db10(Guest* g, int32_t param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 pbVar1;
    CowU8 bVar2;
    char cVar3;
    CowU32 uVar4;
    int iVar5;
    int iVar6;
    CowU32 pbVar7;
    CowU32 puVar8;
    int iStack_20;
    CowU32 auStack_18[6];
    if ((int32_t)rd32((uint32_t)(param_1 + 4)) == 0) {
        pbVar7 = (CowU32)0x0;
      }
      else {
        pbVar7 = rd8((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 4)) + 4));
      }
      if ((pbVar7 != (CowU32)0x0) && (rd8((uint32_t)pbVar7) != 0)) {
        iVar5 = 0;
        do {
          if (0 < iVar5) break;
          bVar2 = rd8((uint32_t)pbVar7);
          while (bVar2 != 0) {
            if (bVar2 == 0x2e) {
              if (rd8((uint32_t)pbVar7) != 0) {
                pbVar7 = pbVar7 + 1;
              }
              break;
            }
            pbVar1 = pbVar7 + 1;
            pbVar7 = pbVar7 + 1;
            bVar2 = rd8((uint32_t)pbVar1);
          }
          iVar5 = iVar5 + 1;
        } while (rd8((uint32_t)pbVar7) != 0);
      }
      puVar8 = auStack_18 + 3;
      iStack_20 = 3;
      do {
        wr32((uint32_t)puVar8, 0);
        if (((pbVar7 != (CowU32)0x0) && (rd8((uint32_t)pbVar7) != 0)) && (rd8((uint32_t)pbVar7) != 0x2e)) {
          iVar5 = 5;
          do {
            wr32((uint32_t)puVar8, rd32((uint32_t)puVar8) << 6);
            if ((rd8((uint32_t)pbVar7) != 0) && (cVar3 = cow_bridge_1010e680(g, COW_IMG(COW_ADDR_LIFT_1010DB9B), 2u, (const CowU32[]){ rd8((uint32_t)pbVar7), 0x2e }, g->ecx, g->edx, g->eax, 0u), cVar3 == '\0')) {
              bVar2 = rd8((uint32_t)pbVar7);
              if (bVar2 < 0x61) {
                uVar4 = bVar2 - 0x20;
              }
              else {
                uVar4 = bVar2 - 0x40;
              }
              pbVar7 = pbVar7 + 1;
              wr32((uint32_t)puVar8, rd32((uint32_t)puVar8) | uVar4 & 0x3f);
            }
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        puVar8 = puVar8 + 4u * (uint32_t)(1);
        iStack_20 = iStack_20 + -1;
      } while (iStack_20 != 0);
      iVar5 = (int32_t)rd32((uint32_t)(param_1 + 4));
      if (iVar5 == 0) {
        pbVar7 = (CowU32)0x0;
      }
      else {
        pbVar7 = rd8((uint32_t)(iVar5 + 4));
      }
      if ((pbVar7 != (CowU32)0x0) && (rd8((uint32_t)pbVar7) != 0)) {
        iVar6 = 0;
        do {
          if (-1 < iVar6) break;
          bVar2 = rd8((uint32_t)pbVar7);
          while (bVar2 != 0) {
            if (bVar2 == 0x2e) {
              if (rd8((uint32_t)pbVar7) != 0) {
                pbVar7 = pbVar7 + 1;
              }
              break;
            }
            pbVar1 = pbVar7 + 1;
            pbVar7 = pbVar7 + 1;
            bVar2 = rd8((uint32_t)pbVar1);
          }
          iVar5 = (((uint32_t)(((CowU32)iVar5 >> 8)) & 0xffffffu) << 8 | ((uint32_t)(rd8((uint32_t)pbVar7)) & 0xffu));
          iVar6 = iVar6 + 1;
        } while (rd8((uint32_t)pbVar7) != 0);
      }
      puVar8 = auStack_18;
      param_1 = 3;
      do {
        wr32((uint32_t)puVar8, 0);
        if (((pbVar7 != (CowU32)0x0) && (rd8((uint32_t)pbVar7) != 0)) &&
           (cVar3 = cow_bridge_1010e680(g, COW_IMG(COW_ADDR_LIFT_1010DC3C), 2u, (const CowU32[]){ (((uint32_t)(((CowU32)iVar5 >> 8)) & 0xffffffu) << 8 | ((uint32_t)(rd8((uint32_t)pbVar7)) & 0xffu)), 0x2e }, g->ecx, g->edx, g->eax, 0u), cVar3 == '\0')) {
          iVar5 = 5;
          do {
            wr32((uint32_t)puVar8, rd32((uint32_t)puVar8) << 6);
            if ((rd8((uint32_t)pbVar7) != 0) && (cVar3 = cow_bridge_1010e680(g, COW_IMG(COW_ADDR_LIFT_1010DC5E), 2u, (const CowU32[]){ rd8((uint32_t)pbVar7), 0x2e }, g->ecx, g->edx, g->eax, 0u), cVar3 == '\0')) {
              bVar2 = rd8((uint32_t)pbVar7);
              if (bVar2 < 0x61) {
                uVar4 = bVar2 - 0x20;
              }
              else {
                uVar4 = bVar2 - 0x40;
              }
              pbVar7 = pbVar7 + 1;
              wr32((uint32_t)puVar8, rd32((uint32_t)puVar8) | uVar4 & 0x3f);
            }
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        puVar8 = puVar8 + 4u * (uint32_t)(1);
        iVar5 = param_1 + -1;
        param_1 = iVar5;
      } while (iVar5 != 0);
      cow_bridge_1010d8e0(g, COW_IMG(COW_ADDR_LIFT_1010DCA8), 2u, (const CowU32[]){ auStack_18, auStack_18 + 3 }, g->ecx, g->edx, g->eax, 0u);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 1 parameter(s), cleanup 4 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 3 push(es) [ebx, esi, edi], frame pointer no, 32 locals, pops [edi, esi, ebx], ret 4.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1010db10(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    g->esp -= 0x20u;                      /* 0x1010db10: 32 bytes of locals */
    { uint32_t A = (uint32_t)(g->esp + 0x24u); g->eax = (uint32_t)(rd32(A)); }   /* 0x1010db13: register eax, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x1010db17: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1010db18: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x1010db19: push edi */
    { uint32_t A = (uint32_t)(g->eax + 0x4u); g->eax = (uint32_t)(rd32(A)); }   /* 0x1010db1a: register eax, replayed as the entry ran it */
    cow_lift_1010db10(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
