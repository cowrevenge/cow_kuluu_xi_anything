/* f_0x1002da70 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1002da70 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1002da70(Guest* g, int32_t param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU16 uVar1;
    int iVar2;
    CowU32 puVar3;
    CowU32 puVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int local_4;
    iVar2 = cow_bridge_10028640(g, COW_IMG(COW_ADDR_LIFT_1002DA88), 2u, (const CowU32[]){ param_1 * 0x1e, 4 }, param_1, g->edx, g->eax, 0u);
      iVar7 = 0;
      iVar6 = param_1 * 3;
      if (param_1 != 0) {
        local_4 = param_1;
        puVar3 = param_2;
        do {
          iVar5 = 3;
          puVar4 = puVar3;
          do {
            uVar1 = rd16((uint32_t)puVar4);
            puVar4 = puVar4 + 2u * (uint32_t)(1);
            wr16((uint32_t)(iVar2 + iVar7 * 2), uVar1);
            iVar7 = iVar7 + 1;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
          iVar5 = 0xc;
          puVar4 = puVar3 + 2u * (uint32_t)(3);
          do {
            uVar1 = rd16((uint32_t)puVar4);
            puVar4 = puVar4 + 2u * (uint32_t)(1);
            wr16((uint32_t)(iVar2 + iVar6 * 2), uVar1);
            iVar6 = iVar6 + 1;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
          puVar3 = puVar3 + 2u * (uint32_t)(0xf);
          local_4 = local_4 + -1;
        } while (local_4 != 0);
      }
      iVar6 = param_1 * 0xf;
      if (iVar6 != 0) {
        iVar7 = iVar2 - (int)param_2;
        do {
          wr16((uint32_t)param_2, rd16((uint32_t)(iVar7 + (int)param_2)));
          param_2 = param_2 + 2u * (uint32_t)(1);
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      cow_bridge_10028700(g, COW_IMG(COW_ADDR_LIFT_1002DB0A), 1u, (const CowU32[]){ iVar2 }, g->ecx, g->edx, g->eax, 4u);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 2 parameter(s), cleanup 8 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [edi, esi, ebx, ecx], ret 8.
   Arguments: 1 register argument(s) [ecx], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1002da70(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->esp -= 4u; wr32(g->esp, g->ecx); /* 0x1002da70: push ecx */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x1002da71: push ebx */
    { uint32_t A = (uint32_t)(g->esp + 0xCu); g->ebx = (uint32_t)(rd32(A)); }   /* 0x1002da72: register ebx, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1002da76: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x1002da77: push edi */
    { g->eax = (uint32_t)((uint32_t)(g->ebx + g->ebx * 2)); }   /* 0x1002da78: register eax, replayed as the entry ran it */
    cow_lift_1002da70(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ecx = v; } /* pop ecx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 5 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
