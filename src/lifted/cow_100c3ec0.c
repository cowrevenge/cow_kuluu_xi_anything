/* f_0x100c3ec0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_100c3ec0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_100c3ec0(Guest* g, CowU32 param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 this_00;
    int iVar1;
    CowU32 uVar2;
    CowU32 uVar3;
    CowU32 local_4;
    cow_bridge_100c41b0(g, COW_IMG(COW_ADDR_LIFT_100C3ED1), 1u, (const CowU32[]){ g->eax }, param_1, g->edx, param_2, 0u);
      wr32((uint32_t)param_1, COW_IMG(COW_ADDR_LIFT_103306A0));
      uVar3 = 0x3ff;
      iVar1 = rd32(COW_IMG(COW_ADDR_LIFT_10481AEC));
      while ((iVar1 != 0 && (uVar3 = uVar3 - 1, uVar3 != 0))) {
        iVar1 = rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10480AF0) + 4u * (uint32_t)(uVar3)));
      }
      this_00 = (CowU32)cow_bridge_1002c890(g, COW_IMG(COW_ADDR_LIFT_100C3EFD), 1u, (const CowU32[]){ 684u }, g->ecx, g->edx, param_2, 4u);
      if (this_00 == (CowU32)0x0) {
        iVar1 = 0;
      }
      else {
        iVar1 = cow_bridge_1008a120(g, COW_IMG(COW_ADDR_LIFT_100C3F0B), 0u, (const CowU32[]){ 0u }, this_00, g->edx, param_2, 0u);
      }
      wr32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10480AF0) + 4u * (uint32_t)(uVar3)), iVar1);
      wr8((uint32_t)(iVar1 + 0xee), 3);
      cow_bridge_10093430(g, COW_IMG(COW_ADDR_LIFT_100C3F2E), 1u, (const CowU32[]){ 271963780u }, (CowU32)rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10480AF0) + 4u * (uint32_t)(uVar3))), g->edx, param_2, 0u);
      wr32((uint32_t)((int)param_1 + 0x70), rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10480AF0) + 4u * (uint32_t)(uVar3))));
      wr32((uint32_t)(rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10480AF0) + 4u * (uint32_t)(uVar3))) + 0xa0), param_1);
      wr32((uint32_t)(rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10480AF0) + 4u * (uint32_t)(uVar3))) + 0x120), rd32((uint32_t)(rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10480AF0) + 4u * (uint32_t)(uVar3))) + 0x120)) | 0x200);
      uVar2 = local_4 & 0xffffff | 0x4000000;
      iVar1 = rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10480AF0) + 4u * (uint32_t)(uVar3)));
      wr32((uint32_t)(iVar1 + 0x74), uVar3);
      wr32((uint32_t)(iVar1 + 0x78), uVar2 ^ (uVar2 ^ uVar3) & 0xffffff);
      wr32((uint32_t)(rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10480AF0) + 4u * (uint32_t)(uVar3))) + 0x130), rd32((uint32_t)(rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10480AF0) + 4u * (uint32_t)(uVar3))) + 0x130)) | 8);
      g->eax = (CowU32)(param_1); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 2 parameter(s), cleanup 4 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 2 push(es) [esi, edi], frame pointer no, 8 locals, pops [edi, esi], ret 4.
   Arguments: 1 register argument(s) [ecx], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_100c3ec0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    g->eax = param_2;   /* 0x100c3ec0: the value the entry loaded and the decompiler dropped */
    g->esp -= 0x8u;                      /* 0x100c3ec4: 8 bytes of locals */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x100c3ec7: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x100c3ec8: push edi */
    g->edi = g->ecx;   /* 0x100c3eca: the value the entry loaded and the decompiler dropped */
    cow_lift_100c3ec0(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
