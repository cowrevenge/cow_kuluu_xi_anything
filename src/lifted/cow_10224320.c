/* f_0x10224320 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10224320 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10224320(Guest* g, int32_t param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU16 uVar1;
    CowU32 uVar2;
    CowU32 uVar3;
    int iVar4;
    CowU32 puVar5;
    CowU32 puVar6;
    int iVar7;
    CowU32 puVar8;
    CowU32 puVar9;
    iVar4 = rd32(COW_IMG(COW_ADDR_LIFT_10667150));
      iVar7 = (int32_t)rd32((uint32_t)(param_1 + 0x30));
      if ((iVar7 < 0) || (((int32_t)((int32_t)rd32((uint32_t)(param_1 + 0x44))) <= (int32_t)(iVar7)))) {
        puVar6 = (CowU32)0x0;
      }
      else {
        puVar6 = (CowU32)((int32_t)rd32((uint32_t)(param_1 + 0x20)) + iVar7 * 8);
      }
      iVar7 = (int32_t)rd32((uint32_t)(param_1 + 0x6c));
      if ((iVar7 < 0) || (((int32_t)((int32_t)rd32((uint32_t)(param_1 + 0x44))) <= (int32_t)(iVar7)))) {
        puVar5 = (CowU32)0x0;
      }
      else {
        puVar5 = (CowU32)((int32_t)rd32((uint32_t)(param_1 + 0x20)) + iVar7 * 8);
      }
      if ((puVar6 != (CowU32)0x0) && (puVar5 != (CowU32)0x0)) {
        uVar2 = rd32((uint32_t)puVar5);
        uVar3 = rd32((uint32_t)puVar6);
        uVar1 = rd16((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10667150)) + 0x160 + uVar2 * 2));
        puVar9 = (CowU32)(rd32(COW_IMG(COW_ADDR_LIFT_10667150)) + 0x160 + uVar2 * 2);
        if (uVar2 < uVar3) {
          puVar8 = (CowU32)(rd32(COW_IMG(COW_ADDR_LIFT_10667150)) + 0x162 + uVar2 * 2);
          for (iVar7 = uVar3 - uVar2; iVar7 != 0; iVar7 = iVar7 + -1) {
            wr16((uint32_t)puVar9, rd16((uint32_t)puVar8));
            puVar8 = puVar8 + 2u * (uint32_t)(1);
            puVar9 = puVar9 + 2u * (uint32_t)(1);
          }
        }
        else if (uVar3 < uVar2) {
          iVar7 = uVar2 - uVar3;
          do {
            wr16((uint32_t)puVar9, rd16((uint32_t)(puVar9 + 2u * (uint32_t)(-1))));
            puVar9 = puVar9 + 2u * (uint32_t)(-1);
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
        }
        wr16((uint32_t)(iVar4 + 0x160 + uVar3 * 2), uVar1);
        cow_bridge_102240b0(g, COW_IMG(COW_ADDR_LIFT_102243C4), 2u, (const CowU32[]){ rd32((uint32_t)(param_1 + 100)), rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10667150)) + 0x1760)) }, g->ecx, g->edx, g->eax, 0u);
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [edi, ebx, ebp, ecx], ret 0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10224320(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->ecx); /* 0x10224320: push ecx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x10224321: push ebp */
    g->ebp = g->ecx;   /* 0x10224322: the value the entry loaded and the decompiler dropped */
    { uint32_t A = (uint32_t)(g->ebp + 0x30u); g->eax = (uint32_t)(rd32(A)); }   /* 0x10224324: register eax, replayed as the entry ran it */
    cow_lift_10224320(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ecx = v; } /* pop ecx */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 5 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
