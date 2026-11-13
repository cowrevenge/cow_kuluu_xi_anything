/* f_0x101d0210 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101d0210 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101d0210(Guest* g, int32_t param_1, CowU32 param_2, CowU32 param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 puVar1;
    int iVar2;
    int iVar3;
    CowU16 uVar4;
    int iVar5;
    int iVar6;
    CowU32 uVar7;
    int iVar8;
    CowU32 uVar9;
    CowU32 local_4;
    if (param_3 == (CowU32)0x0) {
        param_3 = (CowU32)(param_1 + 0x6ac);
        iVar6 = param_1 + 0x69c;
        iVar3 = param_1 + 0x8bc;
        puVar1 = (CowU32)(param_1 + 0x8dc);
      }
      else {
        param_3 = (CowU32)(param_1 + 0x7bc);
        iVar6 = param_1 + 0x7ac;
        iVar3 = param_1 + 0xadc;
        puVar1 = (CowU32)(param_1 + 0xafc);
      }
      iVar5 = rd32((uint32_t)param_2);
      iVar2 = iVar5;
      if (iVar5 < 0) {
        iVar2 = -iVar5;
        iVar5 = iVar5 + -1;
      }
      iVar8 = 0;
      for (; iVar2 != 0; iVar2 = iVar2 >> 1) {
        iVar8 = iVar8 + 1;
      }
      cow_bridge_101d0970(g, COW_IMG(COW_ADDR_LIFT_101D028B), 2u, (const CowU32[]){ (((uint32_t)((short)((CowU32)iVar3 >> 0x10)) & 0xffffu) << 16 | ((uint32_t)(rd16((uint32_t)(iVar3 + iVar8 * 2))) & 0xffffu)), (int)(int8_t)rd8((uint32_t)(iVar8 + iVar6)) }, g->ecx, g->edx, param_3, 0u);
      if (iVar8 != 0) {
        cow_bridge_101d0970(g, COW_IMG(COW_ADDR_LIFT_101D0299), 2u, (const CowU32[]){ iVar5, iVar8 }, g->ecx, g->edx, param_3, 0u);
      }
      uVar7 = 0;
      local_4 = COW_IMG(COW_ADDR_LIFT_1037E334);
      do {
        iVar6 = rd32((uint32_t)(param_2 + 4u * (uint32_t)(rd32((uint32_t)local_4))));
        uVar4 = (CowU16)((CowU32)param_3 >> 0x10);
        if (iVar6 == 0) {
          uVar7 = uVar7 + 1;
        }
        else {
          if (0xf < (int)uVar7) {
            uVar9 = uVar7 >> 4;
            uVar7 = uVar7 + uVar9 * -0x10;
            do {
              cow_bridge_101d0970(g, COW_IMG(COW_ADDR_LIFT_101D02E8), 2u, (const CowU32[]){ (((uint32_t)(uVar4) & 0xffffu) << 16 | ((uint32_t)(rd16((uint32_t)(puVar1 + 2u * (uint32_t)(0xf0)))) & 0xffffu)), (int)rd8((uint32_t)(param_3 + 1u * (uint32_t)(0xf0))) }, g->ecx, g->edx, param_3, 0u);
              uVar9 = uVar9 - 1;
            } while (uVar9 != 0);
          }
          iVar3 = iVar6;
          if (iVar6 < 0) {
            iVar3 = -iVar6;
            iVar6 = iVar6 + -1;
          }
          iVar5 = 1;
          while (iVar3 = iVar3 >> 1, iVar3 != 0) {
            iVar5 = iVar5 + 1;
          }
          iVar3 = uVar7 * 0x10 + iVar5;
          cow_bridge_101d0970(g, COW_IMG(COW_ADDR_LIFT_101D0323), 2u, (const CowU32[]){ (((uint32_t)((short)((CowU32)iVar3 >> 0x10)) & 0xffffu) << 16 | ((uint32_t)(rd16((uint32_t)(puVar1 + 2u * (uint32_t)(iVar3)))) & 0xffffu)), (int)rd8((uint32_t)(param_3 + 1u * (uint32_t)(iVar3))) }, g->ecx, g->edx, param_3, 0u);
          cow_bridge_101d0970(g, COW_IMG(COW_ADDR_LIFT_101D032D), 2u, (const CowU32[]){ iVar6, iVar5 }, g->ecx, g->edx, param_3, 0u);
          uVar7 = 0;
        }
        local_4 = local_4 + 4u * (uint32_t)(1);
      } while ((int)local_4 < 0x1037e430);
      if (0 < (int)uVar7) {
        cow_bridge_101d0970(g, COW_IMG(COW_ADDR_LIFT_101D0367), 2u, (const CowU32[]){ (((uint32_t)(uVar4) & 0xffffu) << 16 | ((uint32_t)(rd16((uint32_t)puVar1)) & 0xffffu)), (int)rd8((uint32_t)param_3) }, g->ecx, g->edx, param_3, 0u);
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 3 parameter(s), cleanup 8 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 8 locals, pops [esi], ret 8.
   Arguments: 1 register argument(s) [ecx], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101d0210(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    g->eax = param_3;   /* 0x101d0210: the value the entry loaded and the decompiler dropped */
    g->esp -= 0x8u;                      /* 0x101d0214: 8 bytes of locals */
    cow_lift_101d0210(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 4 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
