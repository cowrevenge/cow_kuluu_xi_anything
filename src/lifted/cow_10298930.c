/* f_0x10298930 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10298930 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10298930(Guest* g, int32_t param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 puVar1;
    int iVar2;
    CowU32 uVar3;
    int iVar4;
    CowU32 uVar5;
    CowU32 puVar6;
    CowU32 puVar7;
    int local_8;
    uVar5 = (int32_t)rd32((uint32_t)(param_1 + 0x24)) * (int32_t)rd32((uint32_t)(param_1 + 0x1c));
      if (0 < (int)uVar5) {
        puVar1 = (CowU32)cow_bridge_10275da0(g, COW_IMG(COW_ADDR_LIFT_1029895B), 4u, (const CowU32[]){ 1, uVar5, COW_IMG(COW_ADDR_LIFT_103BBC70), 0x12d }, g->ecx, g->edx, g->eax, 0u);
        if (puVar1 == (CowU32)0x0) {
          cow_bridge_102858b0(g, COW_IMG(COW_ADDR_LIFT_1029897C), 3u, (const CowU32[]){ 272316316u, 272350320u, 304u }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_102858b0(g, COW_IMG(COW_ADDR_LIFT_10298987), 2u, (const CowU32[]){ COW_IMG(COW_ADDR_LIFT_103BBDB8), uVar5 }, g->ecx, g->edx, g->eax, 20u);
          return;
        }
        local_8 = (int32_t)rd32((uint32_t)(param_1 + 0x20)) / 2;
        if (0 < local_8) {
          iVar4 = ((int32_t)rd32((uint32_t)(param_1 + 0x20)) + -1) * uVar5;
          iVar2 = 0;
          do {
            puVar6 = (CowU32)((int32_t)rd32((uint32_t)(param_1 + 0x28)) + iVar2);
            puVar7 = puVar1;
            for (uVar3 = uVar5 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
              wr32((uint32_t)puVar7, rd32((uint32_t)puVar6));
              puVar6 = puVar6 + 4u * (uint32_t)(1);
              puVar7 = puVar7 + 4u * (uint32_t)(1);
            }
            for (uVar3 = uVar5 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
              wr8((uint32_t)puVar7, rd8((uint32_t)puVar6));
              puVar6 = (CowU32)((int)puVar6 + 1);
              puVar7 = (CowU32)((int)puVar7 + 1);
            }
            puVar6 = (CowU32)(iVar4 + (int32_t)rd32((uint32_t)(param_1 + 0x28)));
            puVar7 = (CowU32)((int32_t)rd32((uint32_t)(param_1 + 0x28)) + iVar2);
            for (uVar3 = uVar5 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
              wr32((uint32_t)puVar7, rd32((uint32_t)puVar6));
              puVar6 = puVar6 + 4u * (uint32_t)(1);
              puVar7 = puVar7 + 4u * (uint32_t)(1);
            }
            iVar2 = iVar2 + uVar5;
            for (uVar3 = uVar5 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
              wr8((uint32_t)puVar7, rd8((uint32_t)puVar6));
              puVar6 = (CowU32)((int)puVar6 + 1);
              puVar7 = (CowU32)((int)puVar7 + 1);
            }
            puVar6 = puVar1;
            puVar7 = (CowU32)((int32_t)rd32((uint32_t)(param_1 + 0x28)) + iVar4);
            for (uVar3 = uVar5 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
              wr32((uint32_t)puVar7, rd32((uint32_t)puVar6));
              puVar6 = puVar6 + 4u * (uint32_t)(1);
              puVar7 = puVar7 + 4u * (uint32_t)(1);
            }
            for (uVar3 = uVar5 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
              wr8((uint32_t)puVar7, rd8((uint32_t)puVar6));
              puVar6 = (CowU32)((int)puVar6 + 1);
              puVar7 = (CowU32)((int)puVar7 + 1);
            }
            iVar4 = iVar4 - uVar5;
            local_8 = local_8 + -1;
          } while (local_8 != 0);
        }
        cow_bridge_10276110(g, COW_IMG(COW_ADDR_LIFT_10298A2D), 3u, (const CowU32[]){ puVar1, COW_IMG(COW_ADDR_LIFT_103BBC70), 0x13e }, g->ecx, g->edx, g->eax, 12u);
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 12 locals, pops [esi, edi, ebp, ebx], ret 0.
   Arguments: 0 register argument(s) [-], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10298930(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    const CowU32 cow_in_ebp = g->ebp;   /* ebp as the entry was called with */
    g->esp -= 0xcu;                      /* 0x10298930: 12 bytes of locals */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x10298933: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x10298934: push ebp */
    { uint32_t A = (uint32_t)(g->esp + 0x18u); g->ebp = (uint32_t)(rd32(A)); }   /* 0x10298935: register ebp, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x10298939: push edi */
    { uint32_t A = (uint32_t)(g->ebp + 0x24u); g->ebx = (uint32_t)(rd32(A)); }   /* 0x1029893a: register ebx, replayed as the entry ran it */
    cow_lift_10298930(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->ebp = cow_in_ebp;   /* every ret of the entry hands ebp back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 4 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
