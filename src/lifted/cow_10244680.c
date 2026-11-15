/* f_0x10244680 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10244680 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10244680(Guest* g, CowU32 param_1, int32_t param_2, CowU32 param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 puVar1;
    CowU16 uVar2;
    int iVar3;
    CowU32 uVar4;
    CowU16 extraout_var;
    CowU16 extraout_var_00;
    int iVar5;
    CowU32 puVar6;
    uint64_t uVar7;
    if (param_2 == 0x1c8) {
        uVar7 = cow_bridge_1000d230(g, COW_IMG(COW_ADDR_LIFT_102446A3), 2u, (const CowU32[]){ rd32((uint32_t)param_1), rd32((uint32_t)((int)param_1 + 4)) }, g->ecx, param_1, param_3, 0u);
        wr64((uint32_t)param_1, uVar7);
        uVar7 = cow_bridge_1000d230(g, COW_IMG(COW_ADDR_LIFT_102446B5), 2u, (const CowU32[]){ rd32((uint32_t)(param_1 + 8u * (uint32_t)(1))), rd32((uint32_t)((int)param_1 + 0xc)) }, g->ecx, g->edx, param_3, 0u);
        puVar1 = param_1 + 8u * (uint32_t)(2);
        wr64((uint32_t)(param_1 + 8u * (uint32_t)(1)), uVar7);
        iVar3 = cow_bridge_101c8c50(g, COW_IMG(COW_ADDR_LIFT_102446C9), 2u, (const CowU32[]){ puVar1, 0x1b8 }, g->ecx, g->edx, param_3, 24u);
        iVar5 = 0x14;
        puVar6 = puVar1;
        do {
          uVar2 = cow_bridge_1000d100(g, COW_IMG(COW_ADDR_LIFT_102446E0), 1u, (const CowU32[]){ rd16((uint32_t)puVar6) }, g->ecx, g->edx, param_3, 0u);
          wr16((uint32_t)puVar6, uVar2);
          uVar2 = cow_bridge_1000d100(g, COW_IMG(COW_ADDR_LIFT_102446ED), 1u, (const CowU32[]){ (((uint32_t)(extraout_var_00) & 0xffffu) << 16 | ((uint32_t)(rd16((uint32_t)((int)puVar6 + 2))) & 0xffffu)) }, g->ecx, g->edx, param_3, 0u);
          wr16((uint32_t)((int)puVar6 + 2), uVar2);
          puVar6 = (CowU32)((int)puVar6 + 0x16);
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        if (iVar3 == (int32_t)rd32((uint32_t)(param_1 + 8u * (uint32_t)(1)))) {
          uVar4 = cow_bridge_101c8c50(g, COW_IMG(COW_ADDR_LIFT_10244714), 2u, (const CowU32[]){ puVar1, 0x1b8 }, g->ecx, g->edx, param_3, 8u);
          wr32((uint32_t)(param_1 + 8u * (uint32_t)(1)), uVar4);
          wr32((uint32_t)((int)param_1 + 0xc), 0);
          return;
        }
      }
      else {
        uVar4 = cow_bridge_1000d150(g, COW_IMG(COW_ADDR_LIFT_10244732), 1u, (const CowU32[]){ rd32((uint32_t)param_1) }, g->ecx, g->edx, param_3, 0u);
        wr32((uint32_t)param_1, uVar4);
        uVar4 = cow_bridge_1000d150(g, COW_IMG(COW_ADDR_LIFT_1024473D), 1u, (const CowU32[]){ rd32((uint32_t)((int)param_1 + 4)) }, g->ecx, g->edx, param_3, 0u);
        puVar1 = param_1 + 8u * (uint32_t)(1);
        wr32((uint32_t)((int)param_1 + 4), uVar4);
        iVar3 = cow_bridge_101c8c50(g, COW_IMG(COW_ADDR_LIFT_1024474E), 2u, (const CowU32[]){ puVar1, 0x1b8 }, g->ecx, g->edx, param_3, 16u);
        iVar5 = 0x14;
        puVar6 = puVar1;
        do {
          uVar2 = cow_bridge_1000d100(g, COW_IMG(COW_ADDR_LIFT_10244765), 1u, (const CowU32[]){ rd16((uint32_t)puVar6) }, g->ecx, g->edx, param_3, 0u);
          wr16((uint32_t)puVar6, uVar2);
          uVar2 = cow_bridge_1000d100(g, COW_IMG(COW_ADDR_LIFT_10244772), 1u, (const CowU32[]){ (((uint32_t)(extraout_var) & 0xffffu) << 16 | ((uint32_t)(rd16((uint32_t)((int)puVar6 + 2))) & 0xffffu)) }, g->ecx, g->edx, param_3, 0u);
          wr16((uint32_t)((int)puVar6 + 2), uVar2);
          puVar6 = (CowU32)((int)puVar6 + 0x16);
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        if (iVar3 == (int32_t)rd32((uint32_t)((int)param_1 + 4))) {
          uVar4 = cow_bridge_101c8c50(g, COW_IMG(COW_ADDR_LIFT_10244795), 2u, (const CowU32[]){ puVar1, 0x1b8 }, g->ecx, g->edx, param_3, 0u);
          wr32((uint32_t)((int)param_1 + 4), uVar4);
        }
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(edx), cdecl, 3 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 4 push(es) [ebx, ebp, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebp, ebx], ret 0.
   Arguments: 1 register argument(s) [edx], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10244680(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->edx;   /* edx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    g->eax = param_3;   /* 0x10244680: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x10244684: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x10244685: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10244686: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* push edi (from the epilogue's pops) */
    cow_lift_10244680(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
