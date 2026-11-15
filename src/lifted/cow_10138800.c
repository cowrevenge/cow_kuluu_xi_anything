/* f_0x10138800 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10138800 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10138800(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 pbVar1;
    int iVar2;
    int iVar3;
    CowU32 puVar4;
    CowU32 piVar5;
    CowU32 puVar6;
    CowU32 puVar7;
    int iVar8;
    int iVar9;
    CowU32 puVar10;
    CowU32 local_4;
    iVar2 = cow_bridge_10193850(g, COW_IMG(COW_ADDR_LIFT_10138813), 1u, (const CowU32[]){ 180u }, param_1, g->edx, g->eax, 4u);
      iVar9 = 0;
      iVar8 = 0;
      iVar3 = cow_bridge_10138700(g, COW_IMG(COW_ADDR_LIFT_10138829), 1u, (const CowU32[]){ 0u }, param_1, g->edx, g->eax, 0u);
      if ((int8_t)rd8((uint32_t)(iVar3 + 1)) != '\v') {
        local_4 = (CowU32)((int)param_1 + 0x68);
        do {
          if (iVar2 == 0) {
            iVar3 = cow_bridge_10138700(g, COW_IMG(COW_ADDR_LIFT_10138846), 1u, (const CowU32[]){ iVar9 }, g->ecx, g->edx, g->eax, 0u);
            if ((int8_t)rd8((uint32_t)(iVar3 + 1)) != '\x01') goto L_1013884c;
          }
          else {
    L_1013884c:
            iVar8 = iVar8 + 1;
            puVar4 = (CowU32)cow_bridge_10138700(g, COW_IMG(COW_ADDR_LIFT_10138862), 1u, (const CowU32[]){ iVar9 }, g->ecx, g->edx, g->eax, 0u);
            wr16((uint32_t)local_4, rd16((uint32_t)puVar4));
            local_4 = local_4 + 2u * (uint32_t)(1);
          }
          iVar9 = iVar9 + 1;
          iVar3 = cow_bridge_10138700(g, COW_IMG(COW_ADDR_LIFT_10138872), 1u, (const CowU32[]){ iVar9 }, g->ecx, g->edx, g->eax, 0u);
        } while ((int8_t)rd8((uint32_t)(iVar3 + 1)) != '\v');
      }
      wr8((uint32_t)((int)param_1 + iVar8 * 2 + 0x68), 0xb);
      wr8((uint32_t)((int)param_1 + iVar8 * 2 + 0x69), 0xb);
      piVar5 = (CowU32)cow_bridge_101c8c30(g, COW_IMG(COW_ADDR_LIFT_10138889), 1u, (const CowU32[]){ 15u }, g->ecx, g->edx, g->eax, 4u);
      puVar10 = COW_IMG(COW_ADDR_LIFT_10333B4C);
      puVar6 = (CowU32)((int)param_1 + 0x80);
      do {
        iVar2 = 0;
        puVar7 = puVar6;
        do {
          pbVar1 = puVar10 + iVar2;
          iVar2 = iVar2 + 1;
          puVar6 = puVar7 + 4u * (uint32_t)(1);
          wr32((uint32_t)puVar7, rd32((uint32_t)(rd32((uint32_t)piVar5) + (CowU32)rd8((uint32_t)pbVar1) * 4)));
          puVar7 = puVar6;
        } while (iVar2 < 2);
        puVar10 = puVar10 + 2;
      } while ((int)puVar10 < 0x10333b62);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 4 push(es) [ebx, ebp, esi, edi], frame pointer no, 8 locals, pops [edi, esi, ebp, ebx], ret 0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10138800(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    g->esp -= 0x8u;                      /* 0x10138800: 8 bytes of locals */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x10138803: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x10138804: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10138805: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x10138806: push edi */
    cow_lift_10138800(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
