/* f_0x1010dda0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1010dda0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1010dda0(Guest* g, CowU32 param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU8 bVar1;
    CowU32 uVar2;
    CowU32 uVar3;
    CowU32 puVar4;
    int iVar5;
    CowU32 pbVar6;
    int iVar7;
    CowU32 auStack_18[6];
    if (rd32((uint32_t)(param_2 + 4)) == 0) {
        pbVar6 = (CowU32)0x0;
      }
      else {
        pbVar6 = rd8((uint32_t)(rd32((uint32_t)(param_2 + 4)) + 4));
      }
      puVar4 = auStack_18;
      iVar5 = 3;
      do {
        wr32((uint32_t)puVar4, 0);
        if ((pbVar6 != (CowU32)0x0) && (rd8((uint32_t)pbVar6) != 0)) {
          uVar3 = 0;
          iVar7 = 5;
          do {
            bVar1 = rd8((uint32_t)pbVar6);
            uVar3 = uVar3 << 6;
            if (bVar1 != 0) {
              if (bVar1 < 0x61) {
                uVar2 = bVar1 - 0x20;
              }
              else {
                uVar2 = bVar1 - 0x40;
              }
              uVar3 = uVar3 | uVar2 & 0x3f;
              pbVar6 = pbVar6 + 1;
            }
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
          wr32((uint32_t)puVar4, uVar3);
        }
        puVar4 = puVar4 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      if (rd32((uint32_t)(param_1 + 4)) == 0) {
        pbVar6 = (CowU32)0x0;
      }
      else {
        pbVar6 = rd8((uint32_t)(rd32((uint32_t)(param_1 + 4)) + 4));
      }
      puVar4 = auStack_18 + 3;
      iVar5 = 3;
      do {
        wr32((uint32_t)puVar4, 0);
        if ((pbVar6 != (CowU32)0x0) && (rd8((uint32_t)pbVar6) != 0)) {
          uVar3 = 0;
          iVar7 = 5;
          do {
            bVar1 = rd8((uint32_t)pbVar6);
            uVar3 = uVar3 << 6;
            if (bVar1 != 0) {
              if (bVar1 < 0x61) {
                uVar2 = bVar1 - 0x20;
              }
              else {
                uVar2 = bVar1 - 0x40;
              }
              uVar3 = uVar3 | uVar2 & 0x3f;
              pbVar6 = pbVar6 + 1;
            }
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
          wr32((uint32_t)puVar4, uVar3);
        }
        puVar4 = puVar4 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      cow_bridge_1010dcc0(g, COW_IMG(COW_ADDR_LIFT_1010DE78), 2u, (const CowU32[]){ auStack_18 + 3, auStack_18 }, g->ecx, g->edx, g->eax, 0u);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: stdcall, 2 parameter(s), cleanup 8 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 4 push(es) [ebx, ebp, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebp, ebx], ret 8.
   Arguments: 0 register argument(s) [-], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1010dda0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    g->eax = param_2;   /* 0x1010dda0: the value the entry loaded and the decompiler dropped */
    g->esp -= 0x18u;                      /* 0x1010dda4: 24 bytes of locals */
    { uint32_t A = (uint32_t)(g->eax + 0x4u); g->eax = (uint32_t)(rd32(A)); }   /* 0x1010dda7: register eax, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x1010ddaa: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x1010ddab: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1010ddac: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* push edi (from the epilogue's pops) */
    cow_lift_1010dda0(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
