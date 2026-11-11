/* f_0x102f1b36 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_102f1b36 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_102f1b36(Guest* g, CowU32 param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    int iVar2;
    CowU32 pbVar3;
    int iVar4;
    CowU32 uVar5;
    int iVar6;
    int local_8;
    iVar2 = param_1;
      cVar1 = rd8((uint32_t)(param_1 + 0x116));
      if ((rd32((uint32_t)(param_1 + 0x60)) & 0x602000) != 0) {
        cow_bridge_102f182d(g, COW_IMG(COW_ADDR_LIFT_102F1B56), 1u, (const CowU32[]){ g->esi }, param_1, g->edx, g->eax, 0u);
        if (cVar1 == '\x03') {
          uVar5 = (CowU32)rd16((uint32_t)(param_1 + 0x108));
          if (uVar5 != 0) {
            pbVar3 = (CowU32)(rd32((uint32_t)(param_1 + 0x104)) + 2);
            do {
              wr8((uint32_t)(pbVar3 + 1u * (uint32_t)(-2)), rd8((uint32_t)((CowU32)rd8((uint32_t)(pbVar3 + 1u * (uint32_t)(-2))) + rd32((uint32_t)(param_1 + 0x138)))));
              wr8((uint32_t)(pbVar3 + 1u * (uint32_t)(-1)), rd8((uint32_t)((CowU32)rd8((uint32_t)(pbVar3 + 1u * (uint32_t)(-1))) + rd32((uint32_t)(param_1 + 0x138)))));
              wr8((uint32_t)pbVar3, rd8((uint32_t)((CowU32)rd8((uint32_t)pbVar3) + rd32((uint32_t)(param_1 + 0x138)))));
              pbVar3 = pbVar3 + 3;
              uVar5 = uVar5 - 1;
            } while (uVar5 != 0);
          }
        }
      }
      if (((rd8((uint32_t)(param_1 + 0x60)) & 8) != 0) && (cVar1 == '\x03')) {
        pbVar3 = (CowU32)(param_1 + 0x152);
        iVar6 = 8 - (CowU32)rd8((uint32_t)(param_1 + 0x150));
        param_1 = 8 - (CowU32)rd8((uint32_t)(param_1 + 0x151));
        local_8 = 8 - (CowU32)rd8((uint32_t)pbVar3);
        if ((iVar6 < 0) || (8 < iVar6)) {
          iVar6 = 0;
        }
        if ((param_1 < 0) || (8 < param_1)) {
          param_1 = 0;
        }
        if ((local_8 < 0) || (8 < local_8)) {
          local_8 = 0;
        }
        if (rd16((uint32_t)(iVar2 + 0x108)) != 0) {
          iVar4 = 0;
          uVar5 = (CowU32)rd16((uint32_t)(iVar2 + 0x108));
          do {
            pbVar3 = (CowU32)(iVar4 + rd32((uint32_t)(iVar2 + 0x104)));
            wr8((uint32_t)pbVar3, rd8((uint32_t)pbVar3) >> ((CowU8)iVar6 & 0x1f));
            pbVar3 = (CowU32)(iVar4 + 1 + rd32((uint32_t)(iVar2 + 0x104)));
            wr8((uint32_t)pbVar3, rd8((uint32_t)pbVar3) >> ((CowU8)param_1 & 0x1f));
            pbVar3 = (CowU32)(iVar4 + 2 + rd32((uint32_t)(iVar2 + 0x104)));
            wr8((uint32_t)pbVar3, rd8((uint32_t)pbVar3) >> ((CowU8)local_8 & 0x1f));
            iVar4 = iVar4 + 3;
            uVar5 = uVar5 - 1;
          } while (uVar5 != 0);
        }
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 2 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [edi, esi, ebx], ret 0.
   Arguments: 1 register argument(s) [ecx], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_102f1b36(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x102f1b36: push ebp */
    g->ebp = g->esp;                       /* 0x102f1b37: mov ebp, esp */
    g->esp -= 4u; wr32(g->esp, g->ecx); /* 0x102f1b39: push ecx */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x102f1b3a: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x102f1b3b: push esi */
    g->esi = param_2;   /* 0x102f1b3c: the value the entry loaded and the decompiler dropped */
    cow_lift_102f1b36(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    { g->esp = g->ebp; g->ebp = rd32(g->esp); g->esp += 4u; } /* leave */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 5 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
