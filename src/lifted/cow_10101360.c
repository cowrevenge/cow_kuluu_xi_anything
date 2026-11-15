/* f_0x10101360 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10101360 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10101360(Guest* g, int32_t param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    short sVar1;
    CowU32 uVar2;
    int iVar3;
    int iVar4;
    CowU32 uVar5;
    CowU32 uVar6;
    CowU32 uVar7;
    int iVar8;
    iVar3 = (int)param_2;
      iVar4 = cow_bridge_10101350(g, COW_IMG(COW_ADDR_LIFT_1010136B), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      wr32((uint32_t)(param_1 + 0x134), rd32((uint32_t)((int)param_2 + 4)) & 3);
      wr32((uint32_t)(param_1 + 0x138), rd32((uint32_t)((int)param_2 + 4)) >> 0x12 & 0x1f);
      uVar2 = ((rd32((uint32_t)((int)param_2 + 4)) >> 0x17 & 3) + 3) * 5;
      uVar7 = 0x1e;
      if (uVar2 < 0x1f) {
        uVar7 = uVar2;
      }
      wr32((uint32_t)(param_1 + 0x140), uVar7);
      uVar2 = rd32((uint32_t)((int)param_2 + 4));
      uVar6 = uVar2 >> 0x12 & 0x1f;
      if (uVar6 == uVar7) {
        wr32((uint32_t)(param_1 + 0x13c), 0);
      }
      else {
        wr32((uint32_t)(param_1 + 0x13c), (CowU32)rd16((uint32_t)(iVar4 + ((uVar2 >> 0x1a & 3) * 0x20 + uVar6) * 2)) - (uVar2 >> 2 & 0xffff));
      }
      wr32((uint32_t)(param_1 + 0x154), rd32((uint32_t)(iVar4 + 0x88 + (int16_t)rd16((uint32_t)((int)param_2 + 8)) * 0xc)));
      uVar5 = g->ecx;
      if ((int16_t)rd16((uint32_t)((int)param_2 + 8)) != 0) {
        param_2 = (CowU32)(param_1 + 0x144);
        iVar8 = 0;
        do {
          sVar1 = (int16_t)rd16((uint32_t)(iVar4 + 0x80 + (iVar8 + (int16_t)rd16((uint32_t)(iVar3 + 8)) * 6) * 2));
          if (sVar1 == 0) {
            g->eax = (CowU32)(uVar5); return;
          }
          uVar5 = cow_bridge_10101470(g, COW_IMG(COW_ADDR_LIFT_10101447), 4u, (const CowU32[]){ param_1, iVar3, iVar4 + 0x3080 + sVar1 * 0x4c, uVar5 }, g->ecx, g->edx, g->eax, 0u);
          iVar8 = iVar8 + 1;
          wr32((uint32_t)param_2, uVar5);
          param_2 = param_2 + 4u * (uint32_t)(1);
        } while (iVar8 < 4);
      }
      g->eax = (CowU32)(uVar5); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 2 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [ebx], frame pointer no, 0 locals, pops [ebx], ret 0.
   Arguments: 0 register argument(s) [-], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10101360(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x10101360: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x10101361: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10101362: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x10101363: push edi */
    g->ecx = 0u;   /* 0x10101364: the value the entry loaded and the decompiler dropped */
    cow_lift_10101360(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 3 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
