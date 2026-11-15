/* f_0x10287300 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10287300 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10287300(Guest* g, int32_t param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 uVar1;
    int iVar2;
    int iVar3;
    CowU32 uVar4;
    if (rd32(COW_IMG(COW_ADDR_LIFT_109A2788)) != 0) {
        uVar1 = cow_bridge_10313de9(g, COW_IMG(COW_ADDR_LIFT_10287316), 1u, (const CowU32[]){ g->esi }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_109A2788)), 0u);
        cow_bridge_10314d95(g, COW_IMG(COW_ADDR_LIFT_10287327), 3u, (const CowU32[]){ rd32(COW_IMG(COW_ADDR_LIFT_109A2788)), COW_IMG(COW_ADDR_LIFT_103B8728), uVar1 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_109A2788)), 16u);
      }
      iVar2 = cow_bridge_10313de9(g, COW_IMG(COW_ADDR_LIFT_10287330), 1u, (const CowU32[]){ param_2 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_109A2788)), 0u);
      cow_bridge_102860e0(g, COW_IMG(COW_ADDR_LIFT_1028733D), 2u, (const CowU32[]){ param_1, param_2 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_109A2788)), 0u);
      cow_bridge_10287270(g, COW_IMG(COW_ADDR_LIFT_10287347), 2u, (const CowU32[]){ rd32((uint32_t)(param_1 + 0x14)), param_2 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_109A2788)), 0u);
      cow_bridge_10287270(g, COW_IMG(COW_ADDR_LIFT_10287351), 2u, (const CowU32[]){ rd32((uint32_t)(param_1 + 0x18)), param_2 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_109A2788)), 0u);
      cow_bridge_10287270(g, COW_IMG(COW_ADDR_LIFT_1028735B), 2u, (const CowU32[]){ rd32((uint32_t)(param_1 + 0x1c)), param_2 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_109A2788)), 0u);
      cow_bridge_10287270(g, COW_IMG(COW_ADDR_LIFT_10287365), 2u, (const CowU32[]){ rd32((uint32_t)(param_1 + 0x20)), param_2 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_109A2788)), 0u);
      cow_bridge_10287270(g, COW_IMG(COW_ADDR_LIFT_1028736F), 2u, (const CowU32[]){ rd32((uint32_t)(param_1 + 0x24)), param_2 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_109A2788)), 0u);
      cow_bridge_10287270(g, COW_IMG(COW_ADDR_LIFT_10287379), 2u, (const CowU32[]){ rd32((uint32_t)(param_1 + 0x28)), param_2 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_109A2788)), 0u);
      cow_bridge_10287270(g, COW_IMG(COW_ADDR_LIFT_10287383), 2u, (const CowU32[]){ rd32((uint32_t)(param_1 + 0x2c)), param_2 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_109A2788)), 0u);
      cow_bridge_10287270(g, COW_IMG(COW_ADDR_LIFT_10287390), 2u, (const CowU32[]){ rd32((uint32_t)(param_1 + 0x30)), param_2 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_109A2788)), 0u);
      if ((int8_t)rd8((uint32_t)(param_1 + 0x34)) != '\0') {
        wr8((uint32_t)(param_1 + 0x34), 1);
      }
      cow_bridge_10285fb0(g, COW_IMG(COW_ADDR_LIFT_102873AA), 2u, (const CowU32[]){ (CowU32)rd8((uint32_t)(param_1 + 0x34)), param_2 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_109A2788)), 0u);
      iVar3 = cow_bridge_10313de9(g, COW_IMG(COW_ADDR_LIFT_102873B0), 1u, (const CowU32[]){ param_2 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_109A2788)), 0u);
      if (iVar3 - iVar2 == 0x38) {
        g->eax = (CowU32)(0xff); return;
      }
      cow_bridge_102858b0(g, COW_IMG(COW_ADDR_LIFT_102873C4), 1u, (const CowU32[]){ 272336636u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_109A2788)), 0u);
      iVar3 = cow_bridge_10313de9(g, COW_IMG(COW_ADDR_LIFT_102873CA), 1u, (const CowU32[]){ param_2 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_109A2788)), 0u);
      cow_bridge_102858b0(g, COW_IMG(COW_ADDR_LIFT_102873D9), 3u, (const CowU32[]){ COW_IMG(COW_ADDR_LIFT_103B81E4), 0x38, iVar3 - iVar2 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_109A2788)), 0u);
      uVar4 = cow_bridge_102755e0(g, COW_IMG(COW_ADDR_LIFT_102873E1), 2u, (const CowU32[]){ param_1, 0x38 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_109A2788)), 28u);
      g->eax = (CowU32)(uVar4 & 0xffffff00); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 2 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [ebx], frame pointer no, 0 locals, pops [ebx], ret 0.
   Arguments: 0 register argument(s) [-], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10287300(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    g->eax = rd32(COW_IMG(COW_ADDR_LIFT_109A2788));   /* 0x10287300: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x10287305: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10287306: push esi */
    { uint32_t A = (uint32_t)(g->esp + 0x10u); g->esi = (uint32_t)(rd32(A)); }   /* 0x10287307: register esi, replayed as the entry ran it */
    cow_lift_10287300(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 2 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
