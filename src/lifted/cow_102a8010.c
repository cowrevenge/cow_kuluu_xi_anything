/* f_0x102a8010 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_102a8010 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_102a8010(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    CowU32 piVar2;
    char cVar3;
    int iVar4;
    CowU32 uVar5;
    int iVar6;
    int iVar7;
    int local_8;
    piVar2 = param_1;
      iVar4 = cow_bridge_10275d60(g, COW_IMG(COW_ADDR_LIFT_102A8039), 4u, (const CowU32[]){ rd32((uint32_t)(param_1 + 4u * (uint32_t)(0x184))) * rd32((uint32_t)(param_1 + 4u * (uint32_t)(0x18b))), 1, COW_IMG(COW_ADDR_LIFT_103BE434), 0x36c }, g->ecx, g->edx, g->eax, 0u);
      uVar5 = (CowU32)rd16((uint32_t)(param_1 + 4u * (uint32_t)(0x181)));
      iVar6 = 0;
      param_1 = (CowU32)rd32((uint32_t)param_1);
      local_8 = iVar4;
      if (uVar5 != 0) {
        do {
          if (iVar6 == uVar5 - 1) {
            iVar7 = rd32((uint32_t)(piVar2 + 4u * (uint32_t)(0x184))) - rd32((uint32_t)(piVar2 + 4u * (uint32_t)(0x18e))) * iVar6;
          }
          else {
            iVar7 = rd32((uint32_t)(piVar2 + 4u * (uint32_t)(0x18e)));
          }
          iVar1 = rd32((uint32_t)(piVar2 + 4u * (uint32_t)(0x18b)));
          cVar3 = cow_bridge_102a8100(g, COW_IMG(COW_ADDR_LIFT_102A8086), 1u, (const CowU32[]){ piVar2 }, g->ecx, g->edx, g->eax, 4u);
          if ((cVar3 == '\0') || (cVar3 = cow_bridge_indirect(g, COW_IMG(COW_ADDR_LIFT_109A2870), COW_IMG(COW_ADDR_LIFT_102A809E), 3u, (const CowU32[]){ param_1, local_8, iVar7 * iVar1 }, g->ecx, g->edx, g->eax, 12u), cVar3 == '\0')
             ) break;
          local_8 = local_8 + iVar7 * iVar1;
          uVar5 = (CowU32)rd16((uint32_t)(piVar2 + 4u * (uint32_t)(0x181)));
          param_1 = (CowU32)((int)param_1 + (CowU32)rd16((uint32_t)(rd32((uint32_t)(piVar2 + 4u * (uint32_t)(0x182))) + iVar6 * 2)));
          iVar6 = iVar6 + 1;
        } while (iVar6 < (int)uVar5);
      }
      cow_bridge_10276110(g, COW_IMG(COW_ADDR_LIFT_102A80E9), 3u, (const CowU32[]){ rd32((uint32_t)piVar2), COW_IMG(COW_ADDR_LIFT_103BE434), 0x380 }, g->ecx, g->edx, g->eax, 12u);
      wr32((uint32_t)piVar2, iVar4);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 3 push(es) [ebx, esi, edi], frame pointer no, 8 locals, pops [edi, esi, ebx], ret 0.
   Arguments: 0 register argument(s) [-], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_102a8010(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->esp -= 0x8u;                      /* 0x102a8010: 8 bytes of locals */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x102a8013: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x102a8014: push esi */
    { uint32_t A = (uint32_t)(g->esp + 0x14u); g->esi = (uint32_t)(rd32(A)); }   /* 0x102a8015: register esi, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x102a8019: push edi */
    cow_lift_102a8010(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
