/* f_0x102a45d0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_102a45d0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_102a45d0(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU8 bVar1;
    CowU32 uVar2;
    int iVar3;
    CowU32 pbVar4;
    CowU32 pbVar5;
    _Bool bVar6;
      
      if (rd32(COW_IMG(COW_ADDR_LIFT_109A2858)) == 0) {
        wr32(COW_IMG(COW_ADDR_LIFT_109A2858), cow_bridge_102a4010(g, COW_IMG(COW_ADDR_LIFT_102A45E1), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u));
        pbVar4 = (CowU32)(rd32(COW_IMG(COW_ADDR_LIFT_109A2858)) + 0x40);
        do {
          bVar1 = rd8((uint32_t)param_1);
          param_1 = param_1 + 1;
          wr8((uint32_t)pbVar4, bVar1);
          pbVar4 = pbVar4 + 1;
        } while (bVar1 != 0);
      }
      else {
        pbVar4 = (CowU32)(rd32(COW_IMG(COW_ADDR_LIFT_109A2858)) + 0x40);
        pbVar5 = param_1;
        do {
          bVar1 = rd8((uint32_t)pbVar4);
          bVar6 = bVar1 < rd8((uint32_t)pbVar5);
          if (bVar1 != rd8((uint32_t)pbVar5)) {
    L_102a462c:
            iVar3 = (1 - (CowU32)bVar6) - (CowU32)(bVar6 != 0);
            goto L_102a4631;
          }
          if (bVar1 == 0) break;
          bVar1 = rd8((uint32_t)(pbVar4 + 1u * (uint32_t)(1)));
          bVar6 = bVar1 < rd8((uint32_t)(pbVar5 + 1u * (uint32_t)(1)));
          if (bVar1 != rd8((uint32_t)(pbVar5 + 1u * (uint32_t)(1)))) goto L_102a462c;
          pbVar4 = pbVar4 + 2;
          pbVar5 = pbVar5 + 2;
        } while (bVar1 != 0);
        iVar3 = 0;
    L_102a4631:
        if (iVar3 == 0) {
          g->eax = (CowU32)(rd32(COW_IMG(COW_ADDR_LIFT_109A2858))); return;
        }
        wr32(COW_IMG(COW_ADDR_LIFT_109A2858), cow_bridge_102a4010(g, COW_IMG(COW_ADDR_LIFT_102A4640), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u));
        pbVar4 = (CowU32)(rd32(COW_IMG(COW_ADDR_LIFT_109A2858)) + 0x40);
        do {
          bVar1 = rd8((uint32_t)param_1);
          param_1 = param_1 + 1;
          wr8((uint32_t)pbVar4, bVar1);
          pbVar4 = pbVar4 + 1;
        } while (bVar1 != 0);
      }
      uVar2 = cow_bridge_102a46f0(g, COW_IMG(COW_ADDR_LIFT_102A4666), 2u, (const CowU32[]){ rd32(COW_IMG(COW_ADDR_LIFT_109A2858)) + 0x24, rd32(COW_IMG(COW_ADDR_LIFT_109A2858)) + 0x40 }, g->ecx, g->edx, g->eax, 0u);
      wr32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_109A2858)) + 0x3c), uVar2);
      if ((int32_t)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_109A2858)) + 0x3c)) == 0) {
        g->eax = (CowU32)(0); return;
      }
      wr32((uint32_t)((int32_t)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_109A2858)) + 0x3c)) + 0x2c), 0);
      uVar2 = cow_bridge_1031f0f0(g, COW_IMG(COW_ADDR_LIFT_102A469B), 3u, (const CowU32[]){ rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_109A2858)) + 0x24)), 0, 1 }, g->ecx, g->edx, g->eax, 0u);
      wr32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_109A2858)) + 0x28), uVar2);
      cow_bridge_1031f0f0(g, COW_IMG(COW_ADDR_LIFT_102A46C5), 3u, (const CowU32[]){ rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_109A2858)) + 0x24)), (int32_t)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_109A2858)) + 0x28)) +
                   (int32_t)rd32((uint32_t)((int32_t)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_109A2858)) + 0x3c)) + 0x24)) *
                   (int32_t)rd32((uint32_t)((int32_t)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_109A2858)) + 0x3c)) + 0x1c)) * 4, 1 }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_102a4800(g, COW_IMG(COW_ADDR_LIFT_102A46D4), 1u, (const CowU32[]){ rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_109A2858)) + 0x3c)) }, g->ecx, g->edx, g->eax, 0u);
      g->eax = (CowU32)(rd32(COW_IMG(COW_ADDR_LIFT_109A2858))); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [edi, ebp], ret 0.
   Arguments: 0 register argument(s) [-], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_102a45d0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    const CowU32 cow_in_ebp = g->ebp;   /* ebp as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x102a45d0: push ebp */
    g->ebp = rd32(COW_IMG(COW_ADDR_LIFT_109A2858));   /* 0x102a45d1: the value the entry loaded and the decompiler dropped */
    cow_lift_102a45d0(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->ebp = cow_in_ebp;   /* every ret of the entry hands ebp back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 4 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
