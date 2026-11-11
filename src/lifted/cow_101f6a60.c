/* f_0x101f6a60 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101f6a60 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101f6a60(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    short sVar1;
    int iVar2;
    char cVar3;
    int iVar4;
    int iVar5;
    CowU32 uVar6;
    int iVar7;
    int iVar8;
    int iStack_8;
    cow_bridge_indirect(g, rd32((uint32_t)(g->eax + 0x54u)), COW_IMG(COW_ADDR_LIFT_101F6A71), 2u, (const CowU32[]){ param_1, g->esi }, g->ecx, g->edx, g->eax, 0u);
      if ((short)rd32((uint32_t)(param_1 + 4u * (uint32_t)(8))) == 0) {
        if (rd32((uint32_t)(param_1 + 4u * (uint32_t)(0xf))) != 0) {
          cow_bridge_10129f00(g, COW_IMG(COW_ADDR_LIFT_101F6AB2), 5u, (const CowU32[]){ (int)(char)rd32((uint32_t)(param_1 + 4u * (uint32_t)(0x11))) + (int)(char)rd32((uint32_t)(param_1 + 4u * (uint32_t)(0xb))) + (int)(short)rd32((uint32_t)(param_1 + 4u * (uint32_t)(10))), (int)rd8((uint32_t)((int)param_1 + 0x45)) + (int)rd8((uint32_t)((int)param_1 + 0x2d)) +
                       (int)rd16((uint32_t)((int)param_1 + 0x2a)), rd32((uint32_t)(param_1 + 4u * (uint32_t)(0xf))), 0, 0x80804040 }, g->ecx, g->edx, g->eax, 20u);
          return;
        }
      }
      else {
        iVar4 = (int)(char)rd32((uint32_t)(param_1 + 4u * (uint32_t)(0xb))) + (int)(short)rd32((uint32_t)(param_1 + 4u * (uint32_t)(10)));
        iStack_8 = (int)rd16((uint32_t)((int)param_1 + 0x1a));
        iVar7 = (int)rd8((uint32_t)((int)param_1 + 0x2d)) + (int)rd16((uint32_t)((int)param_1 + 0x2a));
        if (iStack_8 < (short)rd32((uint32_t)(param_1 + 4u * (uint32_t)(7)))) {
          do {
            iVar5 = cow_bridge_101f7100(g, COW_IMG(COW_ADDR_LIFT_101F6B06), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
            if (((iStack_8 == iVar5) && (rd32((uint32_t)(param_1 + 4u * (uint32_t)(0xd))) == 0)) && (-1 < (char)rd32((uint32_t)(param_1 + 4u * (uint32_t)(0x12))))) {
              iVar8 = 0;
              iVar5 = g->ecx;
              if (0 < rd16((uint32_t)((int)param_1 + 0x16))) {
                do {
                  iVar2 = rd32((uint32_t)(param_1 + 4u * (uint32_t)(0xc)));
                  sVar1 = rd16((uint32_t)(iVar2 + iVar8 * 2));
                  iVar5 = (((uint32_t)((short)((CowU32)iVar5 >> 0x10)) & 0xffffu) << 16 | ((uint32_t)(sVar1) & 0xffffu));
                  uVar6 = (((uint32_t)((short)((CowU32)iVar2 >> 0x10)) & 0xffffu) << 16 | ((uint32_t)(rd16((uint32_t)(iVar2 + 2 + iVar8 * 2)) - sVar1) & 0xffffu));
                  if ((char)rd32((uint32_t)(param_1 + 4u * (uint32_t)(0x12))) == iVar8) {
                    cow_bridge_101f4bb0(g, COW_IMG(COW_ADDR_LIFT_101F6B55), 6u, (const CowU32[]){ param_1, iVar8, iVar5 + iVar4, iVar7, uVar6, 0x80803040 }, g->ecx, g->edx, g->eax, 0u);
                    iVar5 = g->ecx;
                  }
                  else {
                    cow_bridge_101f4b80(g, COW_IMG(COW_ADDR_LIFT_101F6B68), 5u, (const CowU32[]){ param_1, iVar8, iVar5 + iVar4, iVar7, uVar6 }, g->ecx, g->edx, g->eax, 0u);
                    iVar5 = g->ecx;
                  }
                  iVar8 = iVar8 + 1;
                } while (iVar8 < rd16((uint32_t)((int)param_1 + 0x16)));
              }
            }
            else {
              iVar8 = 0;
              iVar5 = g->ecx;
              if (0 < rd16((uint32_t)((int)param_1 + 0x16))) {
                do {
                  sVar1 = rd16((uint32_t)(rd32((uint32_t)(param_1 + 4u * (uint32_t)(0xc))) + iVar8 * 2));
                  cow_bridge_101f4b80(g, COW_IMG(COW_ADDR_LIFT_101F6B9F), 5u, (const CowU32[]){ param_1, iVar8, (((uint32_t)((short)((CowU32)iVar5 >> 0x10)) & 0xffffu) << 16 | ((uint32_t)(sVar1) & 0xffffu)) + iVar4, iVar7, rd16((uint32_t)(rd32((uint32_t)(param_1 + 4u * (uint32_t)(0xc))) + 2 + iVar8 * 2)) - sVar1 }, g->ecx, g->edx, g->eax, 0u);
                  iVar5 = (int)rd16((uint32_t)((int)param_1 + 0x16));
                  iVar8 = iVar8 + 1;
                } while (iVar8 < iVar5);
              }
            }
            iVar7 = iVar7 + rd16((uint32_t)((int)param_1 + 0x26));
            iStack_8 = iStack_8 + 1;
          } while (iStack_8 < (short)rd32((uint32_t)(param_1 + 4u * (uint32_t)(7))));
        }
        if (rd32((uint32_t)(param_1 + 4u * (uint32_t)(0xd))) != 0) {
          if (rd8((uint32_t)((int)param_1 + 0x49)) == '\0') {
            cow_bridge_1011fb60(g, COW_IMG(COW_ADDR_LIFT_101F6C25), 5u, (const CowU32[]){ (int)rd8((uint32_t)((int)param_1 + 0x2e)) + (int)(short)rd32((uint32_t)(param_1 + 4u * (uint32_t)(10))), (rd16((uint32_t)(rd32((uint32_t)(param_1 + 4u * (uint32_t)(2))) + 0x4c)) + -1) * (int)rd16((uint32_t)((int)param_1 + 0x26)) +
                         (int)rd8((uint32_t)((int)param_1 + 0x2f)) + (int)rd16((uint32_t)((int)param_1 + 0x2a)), 0x80808080, 0, 0 }, g->ecx, g->edx, g->eax, 0u);
          }
          else {
            cVar3 = cow_bridge_1015edd0(g, COW_IMG(COW_ADDR_LIFT_101F6BE9), 1u, (const CowU32[]){ rd32((uint32_t)(param_1 + 4u * (uint32_t)(2))) }, 274864184u, g->edx, g->eax, 0u);
            if (cVar3 != '\0') {
              cow_bridge_1011fb60(g, COW_IMG(COW_ADDR_LIFT_101F6C5C), 5u, (const CowU32[]){ (int)rd8((uint32_t)((int)param_1 + 0x2e)) + (int)(short)rd32((uint32_t)(param_1 + 4u * (uint32_t)(10))), (rd16((uint32_t)(rd32((uint32_t)(param_1 + 4u * (uint32_t)(2))) + 0x4c)) + -1) * (int)rd16((uint32_t)((int)param_1 + 0x26)) +
                           (int)rd8((uint32_t)((int)param_1 + 0x2f)) + (int)rd16((uint32_t)((int)param_1 + 0x2a)), 0x80808080, 0, 0 }, g->ecx, g->edx, g->eax, 0u);
              return;
            }
          }
        }
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 8 locals, pops [-], ret 0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101f6a60(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    g->esp -= 0x8u;                      /* 0x101f6a60: 8 bytes of locals */
    g->esi = g->ecx;   /* 0x101f6a64: the value the entry loaded and the decompiler dropped */
    { uint32_t A = (uint32_t)(g->esi + 0x46u); g->ecx = (g->ecx & 0xFFFFFF00u) | (uint8_t)(rd8(A)); }   /* 0x101f6a66: register ecx, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->esi); g->eax = (uint32_t)(rd32(A)); }   /* 0x101f6a69: register eax, replayed as the entry ran it */
    g->ecx = g->esi;   /* 0x101f6a6c: the value the entry loaded and the decompiler dropped */
    cow_lift_101f6a60(g, param_1);


    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 3 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
