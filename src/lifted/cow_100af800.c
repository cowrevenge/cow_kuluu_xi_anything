/* f_0x100af800 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_100af800 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_100af800(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3, CowU32 param_4)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 puVar1;
    int iVar2;
    iVar2 = cow_bridge_100afa90(g, COW_IMG(COW_ADDR_LIFT_100AF80D), 1u, (const CowU32[]){ param_2 }, param_1, g->edx, param_2, 0u);
      iVar2 = iVar2 + param_4;
      if (-1 < (char)((CowU32)iVar2 >> 8)) {
        if (iVar2 < 0x800) {
          if (iVar2 < 0x40) {
            puVar1 = (CowU32)(rd32((uint32_t)(param_1 + 0x260)) + iVar2 * 4);
            wr32((uint32_t)puVar1, rd32((uint32_t)param_3));
            wr32((uint32_t)(puVar1 + 4u * (uint32_t)(1)), rd32((uint32_t)(param_3 + 4u * (uint32_t)(1))));
            wr32((uint32_t)(puVar1 + 4u * (uint32_t)(2)), rd32((uint32_t)(param_3 + 4u * (uint32_t)(2))));
            wr32((uint32_t)(puVar1 + 4u * (uint32_t)(3)), rd32((uint32_t)(param_3 + 4u * (uint32_t)(3))));
            return;
          }
          cow_bridge_10017d20(g, COW_IMG(COW_ADDR_LIFT_100AF830), 2u, (const CowU32[]){ COW_IMG(COW_ADDR_LIFT_1035D148), iVar2 }, g->ecx, g->edx, param_2, 8u);
          return;
        }
        if (iVar2 < 0x1100) {
          iVar2 = iVar2 + -0x1000;
          if ((iVar2 < 0x50) && (-1 < iVar2)) {
            wr32((uint32_t)(COW_IMG(COW_ADDR_LIFT_104887F8) + iVar2 * 4), rd32((uint32_t)param_3));
            wr32((uint32_t)(COW_IMG(COW_ADDR_LIFT_104887FC) + 4u * (uint32_t)(iVar2)), rd32((uint32_t)(param_3 + 4u * (uint32_t)(1))));
            wr32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10488800) + 4u * (uint32_t)(iVar2)), rd32((uint32_t)(param_3 + 4u * (uint32_t)(2))));
            wr32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10488804) + 4u * (uint32_t)(iVar2)), rd32((uint32_t)(param_3 + 4u * (uint32_t)(3))));
            return;
          }
          cow_bridge_10017d20(g, COW_IMG(COW_ADDR_LIFT_100AF8A3), 2u, (const CowU32[]){ COW_IMG(COW_ADDR_LIFT_1035D128), iVar2 }, g->ecx, g->edx, param_2, 8u);
          return;
        }
        if (iVar2 < 0x1200) {
          iVar2 = iVar2 + -0x1100;
          if ((iVar2 < 0x30) && (-1 < iVar2)) {
            wr32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10488A00) + 4u * (uint32_t)(iVar2)), rd32((uint32_t)param_3));
            wr32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10488A04) + 4u * (uint32_t)(iVar2)), rd32((uint32_t)(param_3 + 4u * (uint32_t)(1))));
            wr32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10488A08) + iVar2 * 4), rd32((uint32_t)(param_3 + 4u * (uint32_t)(2))));
            wr32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10488A0C) + iVar2 * 4), rd32((uint32_t)(param_3 + 4u * (uint32_t)(3))));
            return;
          }
          cow_bridge_10017d20(g, COW_IMG(COW_ADDR_LIFT_100AF8EF), 2u, (const CowU32[]){ COW_IMG(COW_ADDR_LIFT_1035D100), iVar2 }, g->ecx, g->edx, param_2, 8u);
          return;
        }
        if (iVar2 < 0x1800) {
          iVar2 = iVar2 + -0x1700;
          if ((iVar2 < 0x10) && (-1 < iVar2)) {
            wr32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10488980) + 4u * (uint32_t)(iVar2)), rd32((uint32_t)param_3));
            wr32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10488984) + 4u * (uint32_t)(iVar2)), rd32((uint32_t)(param_3 + 4u * (uint32_t)(1))));
            wr32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10488988) + iVar2 * 4), rd32((uint32_t)(param_3 + 4u * (uint32_t)(2))));
            wr32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1048898C) + iVar2 * 4), rd32((uint32_t)(param_3 + 4u * (uint32_t)(3))));
            return;
          }
          cow_bridge_10017d20(g, COW_IMG(COW_ADDR_LIFT_100AF93B), 2u, (const CowU32[]){ COW_IMG(COW_ADDR_LIFT_1035D0DC), iVar2 }, g->ecx, g->edx, param_2, 8u);
          return;
        }
      }
      cow_bridge_10017d20(g, COW_IMG(COW_ADDR_LIFT_100AF94D), 2u, (const CowU32[]){ COW_IMG(COW_ADDR_LIFT_1035D1F4), iVar2 }, g->ecx, g->edx, param_2, 8u);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 4 parameter(s), cleanup 12 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [esi], frame pointer no, 0 locals, pops [esi], ret 12.
   Arguments: 1 register argument(s) [ecx], 3 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_100af800(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    g->eax = param_2;   /* 0x100af800: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x100af804: push esi */
    g->esi = g->ecx;   /* 0x100af806: the value the entry loaded and the decompiler dropped */
    cow_lift_100af800(g, param_1, param_2, param_3, param_4);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
