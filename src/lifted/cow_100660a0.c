/* f_0x100660a0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_100660a0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_100660a0(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 piVar1;
    CowU8 bVar2;
    CowU32 pbVar3;
    int iVar4;
    CowU32 puVar5;
    CowU32 pbVar6;
    int iVar7;
    _Bool bVar8;
      
      iVar7 = 0;
      if (rd32(COW_IMG(COW_ADDR_LIFT_10353C24)) != 0x13) {
        puVar5 = COW_IMG(COW_ADDR_LIFT_10353C24);
        do {
          pbVar3 = rd8((uint32_t)(puVar5 + -0xc));
          pbVar6 = param_2;
          do {
            bVar2 = rd8((uint32_t)pbVar3);
            bVar8 = bVar2 < rd8((uint32_t)pbVar6);
            if (bVar2 != rd8((uint32_t)pbVar6)) {
    L_100660e2:
              iVar4 = (1 - (CowU32)bVar8) - (CowU32)(bVar8 != 0);
              goto L_100660e7;
            }
            if (bVar2 == 0) break;
            bVar2 = rd8((uint32_t)(pbVar3 + 1u * (uint32_t)(1)));
            bVar8 = bVar2 < rd8((uint32_t)(pbVar6 + 1u * (uint32_t)(1)));
            if (bVar2 != rd8((uint32_t)(pbVar6 + 1u * (uint32_t)(1)))) goto L_100660e2;
            pbVar3 = pbVar3 + 2;
            pbVar6 = pbVar6 + 2;
          } while (bVar2 != 0);
          iVar4 = 0;
    L_100660e7:
          if (iVar4 == 0) {
            iVar7 = iVar7 * 0x10;
            wr32((uint32_t)param_1, rd32((uint32_t)(iVar7 + 0x10353c18)));
            wr32((uint32_t)(param_1 + 4u * (uint32_t)(1)), rd32((uint32_t)(iVar7 + 0x10353c1c)));
            wr32((uint32_t)(param_1 + 4u * (uint32_t)(2)), rd32((uint32_t)(iVar7 + 0x10353c20)));
            wr32((uint32_t)(param_1 + 4u * (uint32_t)(3)), rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10353C24) + iVar7)));
            return;
          }
          piVar1 = (CowU32)(puVar5 + 0x10);
          puVar5 = puVar5 + 0x10;
          iVar7 = iVar7 + 1;
        } while (rd32((uint32_t)piVar1) != 0x13);
      }
      iVar7 = iVar7 * 0x10;
      wr32((uint32_t)(iVar7 + 0x10353c18), param_2);
      wr32((uint32_t)param_1, rd32((uint32_t)(iVar7 + 0x10353c18)));
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(1)), rd32((uint32_t)(iVar7 + 0x10353c1c)));
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(2)), rd32((uint32_t)(iVar7 + 0x10353c20)));
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(3)), rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10353C24) + iVar7)));
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 3 parameter(s), cleanup 8 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [ebx], frame pointer no, 0 locals, pops [ebx], ret 8.
   Arguments: 1 register argument(s) [ecx], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_100660a0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    g->eax = rd32(COW_IMG(COW_ADDR_LIFT_10353C24));   /* 0x100660a0: the value the entry loaded and the decompiler dropped */
    g->edx = param_3;   /* 0x100660a5: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x100660a9: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x100660aa: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x100660ab: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x100660ac: push edi */
    g->edi = 0u;   /* 0x100660ad: the value the entry loaded and the decompiler dropped */
    cow_lift_100660a0(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->eax = (CowU32)(param_2);   /* what eax holds at every ret of the entry */
    g->edx = (CowU32)(param_2);   /* what edx holds at every ret of the entry */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 3 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
