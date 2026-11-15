/* f_0x10226650 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10226650 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10226650(Guest* g, CowU32 param_1, int32_t param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 puVar1;
    char cVar2;
    CowU32 uVar3;
    int iVar4;
    int iVar5;
    iVar5 = 0;
      cow_bridge_10221a30(g, COW_IMG(COW_ADDR_LIFT_1022665D), 0u, (const CowU32[]){ 0u }, param_1, g->edx, g->eax, 0u);
      cow_bridge_10221900(g, COW_IMG(COW_ADDR_LIFT_1022666E), 4u, (const CowU32[]){ 270690016u, 64u, g->esi, 12u }, g->edi, g->edx, g->eax, 0u);
      iVar4 = 0;
      do {
        uVar3 = cow_bridge_10226600(g, COW_IMG(COW_ADDR_LIFT_10226676), 1u, (const CowU32[]){ iVar4 }, g->ecx, g->edx, g->eax, 0u);
        cVar2 = cow_bridge_102264e0(g, COW_IMG(COW_ADDR_LIFT_10226680), 1u, (const CowU32[]){ uVar3 }, g->ecx, g->edx, g->eax, 8u);
        if ((((cVar2 != '\0') && (-1 < iVar5)) && (iVar5 < (int32_t)rd32((uint32_t)((int)param_1 + 0x44)))) &&
           (puVar1 = (CowU32)((int32_t)rd32((uint32_t)((int)param_1 + 0x20)) + iVar5 * 8), puVar1 != (CowU32)0x0
           )) {
          iVar5 = iVar5 + 1;
          wr32((uint32_t)puVar1, uVar3);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < 0x40);
      cow_bridge_10221a80(g, COW_IMG(COW_ADDR_LIFT_102266B1), 2u, (const CowU32[]){ iVar5, 0 }, param_1, g->edx, g->eax, 0u);
      wr32((uint32_t)((int)param_1 + 0x58), 1);
      if (iVar5 <= param_2) {
        param_2 = iVar5 + -1;
      }
      cow_bridge_10221b90(g, COW_IMG(COW_ADDR_LIFT_102266CB), 1u, (const CowU32[]){ param_2 }, param_1, g->edx, g->eax, 0u);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 2 parameter(s), cleanup 4 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 4 push(es) [ecx, ebx, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebx, ecx], ret 4.
   Arguments: 1 register argument(s) [ecx], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10226650(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->esp -= 4u; wr32(g->esp, g->ecx); /* 0x10226650: push ecx */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x10226651: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10226652: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x10226653: push edi */
    g->edi = g->ecx;   /* 0x10226654: the value the entry loaded and the decompiler dropped */
    g->esi = 0u;   /* 0x10226656: the value the entry loaded and the decompiler dropped */
    cow_lift_10226650(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ecx = v; } /* pop ecx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
