/* f_0x10223240 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10223240 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10223240(Guest* g, CowU32 param_1, CowU32 param_2, int32_t param_3, int32_t param_4)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    CowU32 uVar2;
    CowU32 uVar3;
    CowU32 uVar4;
    int iVar5;
    CowU32 uVar6;
    CowU32 uVar7;
    int iStack_8;
    uVar2 = (-(CowU32)(param_2 != '\0') & 0x900) + 0x200;
      if ((((param_1 == (CowU32)0x0) || (rd8((uint32_t)param_1) == '\0')) || (rd32(COW_IMG(COW_ADDR_LIFT_1066714C)) == 0)) ||
         (uVar4 = -(CowU32)(param_2 != '\0') & 0x700, uVar2 <= uVar4)) {
        g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(0xffffffff) & 0xffu)); return;
      }
      iStack_8 = uVar4 * 0x30;
      do {
        uVar6 = (CowU32)rd16((uint32_t)(iStack_8 + rd32(COW_IMG(COW_ADDR_LIFT_1066714C))));
        if (uVar6 != 0) {
          if ((param_3 != 0) && (param_4 != 0)) {
            iVar5 = 0;
            if (0 < param_4) {
              do {
                if ((rd16((uint32_t)(param_3 + iVar5 * 2)) == uVar6) &&
                   ((param_2 == '\0' || (cVar1 = cow_bridge_102231f0(g, COW_IMG(COW_ADDR_LIFT_102232E8), 1u, (const CowU32[]){ uVar6 }, g->ecx, g->edx, g->eax, 0u), cVar1 != '\0')))) break;
                iVar5 = iVar5 + 1;
              } while (iVar5 < param_4);
            }
            if (iVar5 == param_4) goto L_1022332a;
          }
          uVar7 = uVar4;
          cow_bridge_10223930(g, COW_IMG(COW_ADDR_LIFT_10223302), 1u, (const CowU32[]){ uVar4 }, g->ecx, g->edx, g->eax, 0u);
          uVar3 = cow_bridge_10223a90(g, COW_IMG(COW_ADDR_LIFT_10223309), 0u, (const CowU32[]){ 0u }, uVar7, g->edx, g->eax, 0u);
          uVar7 = uVar4;
          cow_bridge_10223930(g, COW_IMG(COW_ADDR_LIFT_10223310), 2u, (const CowU32[]){ uVar4, uVar3 }, g->ecx, g->edx, g->eax, 0u);
          uVar3 = cow_bridge_10223b10(g, COW_IMG(COW_ADDR_LIFT_10223317), 0u, (const CowU32[]){ 0u }, uVar7, g->edx, g->eax, 0u);
          cVar1 = cow_bridge_indirect(g, COW_IMG(COW_ADDR_LIFT_10662F60), COW_IMG(COW_ADDR_LIFT_10223323), 2u, (const CowU32[]){ param_1, uVar3 }, g->ecx, g->edx, g->eax, 12u);
          if (cVar1 != '\0') {
            g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(uVar6) & 0xffu)); return;
          }
        }
    L_1022332a:
        uVar4 = uVar4 + 1;
        iStack_8 = iStack_8 + 0x30;
        if ((int)uVar2 <= (int)uVar4) {
          g->eax = (CowU32)(0xffffffff); return;
        }
      } while( 1 );
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 4 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 4 push(es) [ebx, ebp, esi, edi], frame pointer no, 8 locals, pops [edi, esi, ebp, ebx], ret 0.
   Arguments: 0 register argument(s) [-], 4 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10223240(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0xcu));
    g->esp -= 0x8u;                      /* 0x10223240: 8 bytes of locals */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x10223243: push ebx */
    { uint32_t A = (uint32_t)(g->esp + 0x14u); g->ebx = (g->ebx & 0xFFFFFF00u) | (uint8_t)(rd8(A)); }   /* 0x10223244: register ebx, replayed as the entry ran it */
    { g->eax = (g->eax & 0xFFFFFF00u) | (uint8_t)((uint8_t)g->ebx); }   /* 0x10223248: register eax, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->esp + 0x10u); g->edx = (uint32_t)(rd32(A)); }   /* 0x1022324a: register edx, replayed as the entry ran it */
    { { uint8_t a = (uint8_t)g->eax; uint8_t r = (uint8_t)(0u - a); g->eax = (g->eax & 0xFFFFFF00u) | (uint8_t)(r); }; }   /* 0x1022324e: register eax, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* push ebp (from the epilogue's pops) */
    g->esp -= 4u; wr32(g->esp, g->esi); /* push esi (from the epilogue's pops) */
    g->esp -= 4u; wr32(g->esp, g->edi); /* push edi (from the epilogue's pops) */
    cow_lift_10223240(g, param_1, param_2, param_3, param_4);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
