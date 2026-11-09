/* f_0x1028a820 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1028a820 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

int cow_lift_1028a820(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU16 uVar1;
    CowU32 uVar2;
    int iVar3;
    CowU32 uVar4;
    int iVar5;
    CowU32 uVar6;
    _Bool bVar7;
      
      if (rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1099D200)) + 0xa04)) != 0) {
        { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
        { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
        { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
        { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
        cow_bridge_tail_1029bb80(g, g->ecx, g->edx, g->eax);
        return 1;
      }
      if (param_1 != rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1099D200)) + 0x9a0))) {
        cow_bridge_1028ab70(g, COW_IMG(COW_ADDR_LIFT_1028A84F), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_1099D200)), 0u);
      }
      wr32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1099D200)) + 0x9a0), param_1);
      if (param_3 == (CowU32)0x0) {
        uVar2 = cow_bridge_10275eb0(g, COW_IMG(COW_ADDR_LIFT_1028A88A), 4u, (const CowU32[]){ rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1099D200)) + 0x950)), param_2 * 4, COW_IMG(COW_ADDR_LIFT_103B98A8), 0x11a }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_1099D200)), 0u);
        wr32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1099D200)) + 0x950), uVar2);
        iVar3 = 0;
        if (0 < (int)param_2) {
          do {
            wr32((uint32_t)(rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1099D200)) + 0x950)) + iVar3 * 4), iVar3);
            iVar3 = iVar3 + 1;
          } while (iVar3 < (int)param_2);
        }
        param_3 = rd16((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1099D200)) + 0x950));
      }
      while( 1 ) {
        if (param_2 == 0) {
          return 0;
        }
        if (rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1099D200)) + 0x998)) == 0) {
          cow_bridge_1028aa90(g, COW_IMG(COW_ADDR_LIFT_1028A8E6), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_1099D200)), 0u);
        }
        iVar3 = rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1099D200)) + 0x998));
        if ((int)(iVar3 + param_2) < 0x3e9) {
          uVar4 = param_2;
        }
        else {
          uVar4 = 1000 - iVar3;
          if (((((int)uVar4 < 3) && (((param_1 == 4 || (param_1 == 5)) || (param_1 == 6)))) ||
              (((int)uVar4 < 2 && ((param_1 == 2 || (param_1 == 3)))))) ||
             (((int)uVar4 < 1 && (param_1 == 1)))) {
            if (iVar3 != 0) {
              cow_bridge_1028ab70(g, COW_IMG(COW_ADDR_LIFT_1028A942), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_1099D200)), 0u);
              cow_bridge_1028aa90(g, COW_IMG(COW_ADDR_LIFT_1028A947), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_1099D200)), 0u);
            }
            iVar3 = rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1099D200)) + 0x998));
            uVar4 = 1000U - iVar3;
            if ((int)param_2 <= (int)(1000U - iVar3)) {
              uVar4 = param_2;
            }
          }
          if (param_1 == 4) {
            uVar4 = uVar4 - (int)uVar4 % 3;
          }
          else if (param_1 == 2) {
            uVar6 = uVar4 & 0x80000001;
            if ((int)uVar6 < 0) {
              uVar6 = (uVar6 - 1 | 0xfffffffe) + 1;
            }
            uVar4 = uVar4 - uVar6;
          }
        }
        param_2 = param_2 - uVar4;
        if ((iVar3 != 0) && (param_1 == 5)) {
          wr16((uint32_t)(rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1099D200)) + 0x99c)) + iVar3 * 2), rd16((uint32_t)(rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1099D200)) + 0x99c)) + -2 + iVar3 * 2)));
          wr16((uint32_t)(rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1099D200)) + 0x99c)) + 2 + rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1099D200)) + 0x998)) * 2), rd16((uint32_t)param_3));
          wr32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1099D200)) + 0x998), rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1099D200)) + 0x998)) + 2);
        }
        iVar3 = 0;
        if (0 < (int)uVar4) {
          do {
            uVar1 = rd16((uint32_t)param_3);
            iVar5 = rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1099D200)) + 0x998)) + iVar3;
            param_3 = param_3 + 2;
            iVar3 = iVar3 + 1;
            wr16((uint32_t)(rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1099D200)) + 0x99c)) + iVar5 * 2), uVar1);
          } while (iVar3 < (int)uVar4);
        }
        uVar6 = uVar4 & 0x80000001;
        bVar7 = uVar6 == 0;
        if ((int)uVar6 < 0) {
          bVar7 = (uVar6 - 1 | 0xfffffffe) == 0xffffffff;
        }
        if ((bVar7) || (param_1 != 5)) {
          wr32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1099D200)) + 0x998), rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1099D200)) + 0x998)) + uVar4);
        }
        else {
          wr16((uint32_t)(rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1099D200)) + 0x99c)) + (rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1099D200)) + 0x998)) + iVar3) * 2), rd16((uint32_t)(param_3 + 2u * (uint32_t)(-2))));
          wr32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1099D200)) + 0x998), rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1099D200)) + 0x998)) + uVar4 + 1);
        }
        if (param_2 == 0) break;
        if (param_1 == 5) {
          param_3 = param_3 + -4;
          param_2 = param_2 + 2;
        }
        else if (param_1 == 3) {
          param_3 = param_3 + -2;
          param_2 = param_2 + 1;
        }
      }
      return 0;
    return 0;   /* fell through: no tail call taken, run the epilogue */
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 3 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 4 push(es) [ebx, ebp, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebp, ebx], ret 0.
   Arguments: 0 register argument(s) [-], 3 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1028a820(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    g->eax = rd32(COW_IMG(COW_ADDR_LIFT_1099D200));   /* 0x1028a820: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x1028a825: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x1028a826: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1028a827: push esi */
    { uint32_t A = (uint32_t)(g->eax + 0xA04u); g->ecx = (uint32_t)(rd32(A)); }   /* 0x1028a828: register ecx, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x1028a82e: push edi */
    if (cow_lift_1028a820(g, param_1, param_2, param_3)) {
        /* INTRA-BODY TAIL CALL out of 1 site(s): 0x1028a837 -> jmp 0x1029bb80 (pops edi+esi+ebp+ebx). The target's own `ret` returned for this
           entry, so the pops, the esp restore and rt_return below describe a `ret` this path never
           executed. Returning here is what keeps the frame whole. */
        return;
    }

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
