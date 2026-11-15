/* f_0x101410d0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101410d0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101410d0(Guest* g, CowU32 param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    char cVar2;
    CowU32 uVar3;
    CowU32 uVar4;
    CowU16 uVar6;
    CowU32 puVar5;
    int iVar7;
    int iVar8;
    iVar1 = (int)param_2;
      uVar4 = rd32((uint32_t)(param_1 + 4u * (uint32_t)(2)));
      if (((uVar4 != 0) && (-1 < (int)param_2)) && ((int)param_2 < 4)) {
        param_2 = param_1 + 4u * (uint32_t)(7);
        iVar8 = 0;
        iVar7 = 0;
        puVar5 = param_1;
        do {
          uVar6 = (CowU16)((CowU32)puVar5 >> 0x10);
          if (rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_103701A8) + 4u * (uint32_t)(iVar1 * 8 + iVar7))) == -1) break;
          if (rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_103701A8) + 4u * (uint32_t)(iVar1 * 8 + iVar7))) == '\a') {
            cVar2 = cow_bridge_1013eff0(g, COW_IMG(COW_ADDR_LIFT_10141120), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
            uVar6 = (CowU16)((CowU32)g->ecx >> 0x10);
            puVar5 = g->ecx;
            if (cVar2 != '\0') goto L_10141128;
          }
          else {
    L_10141128:
            uVar3 = cow_bridge_10118ad0(g, COW_IMG(COW_ADDR_LIFT_1014113B), 1u, (const CowU32[]){ (((uint32_t)(uVar6) & 0xffffu) << 16 | ((uint32_t)((short)(char)rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_103701A8) + 4u * (uint32_t)(iVar1 * 8 + iVar7)))) & 0xffffu)) + 1 }, g->ecx, g->edx, g->eax, 0u);
            iVar8 = iVar8 + 1;
            wr32((uint32_t)param_2, uVar3);
            puVar5 = param_2 + 4u * (uint32_t)(1);
            wr32((uint32_t)(COW_IMG(COW_ADDR_LIFT_103701C4) + iVar8 * 4), (int)(char)rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_103701A8) + 4u * (uint32_t)(iVar1 * 8 + iVar7))));
            param_2 = puVar5;
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < 8);
        iVar1 = rd32((uint32_t)(param_1 + 4u * (uint32_t)(2)));
        uVar4 = 0;
        if (iVar1 != 0) {
          wr16((uint32_t)(iVar1 + 0x58), (short)iVar8);
          uVar4 = cow_bridge_10118db0(g, COW_IMG(COW_ADDR_LIFT_10141179), 2u, (const CowU32[]){ (((uint32_t)((short)((CowU32)iVar1 >> 0x10)) & 0xffffu) << 16 | ((uint32_t)(rd16((uint32_t)(rd32((uint32_t)(param_1 + 4u * (uint32_t)(2))) + 0x4c))) & 0xffffu)), 0 }, g->ecx, g->edx, g->eax, 0u);
        }
        if (iVar8 != 0) {
          uVar4 = cow_bridge_10141030(g, COW_IMG(COW_ADDR_LIFT_10141186), 1u, (const CowU32[]){ iVar8 + -1 }, g->ecx, g->edx, g->eax, 0u);
          g->eax = (CowU32)(uVar4); return;
        }
      }
      g->eax = (CowU32)(uVar4 & 0xffffff00); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 2 parameter(s), cleanup 4 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [ebx, ecx], ret 4.
   Arguments: 1 register argument(s) [ecx], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101410d0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_ebp = g->ebp;   /* ebp as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->ecx); /* 0x101410d0: push ecx */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x101410d1: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x101410d2: push ebp */
    g->ebp = g->ecx;   /* 0x101410d3: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x101410d5: push edi */
    cow_lift_101410d0(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ecx = v; } /* pop ecx */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->ebp = cow_in_ebp;   /* every ret of the entry hands ebp back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 5 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
