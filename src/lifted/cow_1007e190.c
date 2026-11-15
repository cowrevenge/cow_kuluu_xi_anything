/* f_0x1007e190 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1007e190 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1007e190(Guest* g, CowU32 param_1, CowU32 param_2, int32_t param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    int iVar2;
    CowU32 uVar3;
    int iVar4;
    iVar2 = cow_bridge_10081550(g, COW_IMG(COW_ADDR_LIFT_1007E19C), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      if (iVar2 == 0) {
        g->eax = (CowU32)(param_3); return;
      }
      uVar3 = cow_bridge_1007a1c0(g, COW_IMG(COW_ADDR_LIFT_1007E1BD), 4u, (const CowU32[]){ rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_103551E0)) + 4)), 1, 0, 0 }, g->ecx, g->edx, g->eax, 0u);
      iVar4 = cow_bridge_1007e220(g, COW_IMG(COW_ADDR_LIFT_1007E1C3), 1u, (const CowU32[]){ uVar3 }, g->ecx, g->edx, g->eax, 0u);
      if (((iVar4 == 0) || (iVar4 == iVar2)) || (rd32((uint32_t)(iVar4 + 0x70)) == (CowU32)0x0)) {
        g->eax = (CowU32)(-param_3); return;
      }
      cVar1 = cow_bridge_10098210(g, COW_IMG(COW_ADDR_LIFT_1007E1DE), 1u, (const CowU32[]){ 1u }, rd32((uint32_t)(iVar4 + 0x70)), g->edx, g->eax, 0u);
      if (cVar1 == '\x01') {
        cow_bridge_100814f0(g, COW_IMG(COW_ADDR_LIFT_1007E1ED), 1u, (const CowU32[]){ iVar4 }, COW_IMG(COW_ADDR_LIFT_10487F74), g->edx, g->eax, 0u);
        cow_bridge_100a6070(g, COW_IMG(COW_ADDR_LIFT_1007E1F6), 1u, (const CowU32[]){ 1u }, g->ecx, g->edx, g->eax, 0u);
        g->eax = (CowU32)(param_3); return;
      }
      cow_bridge_10129e30(g, COW_IMG(COW_ADDR_LIFT_1007E20D), 1u, (const CowU32[]){ 165u }, g->ecx, g->edx, g->eax, 0u);
      g->eax = (CowU32)(param_3); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 3 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [esi], frame pointer no, 0 locals, pops [esi], ret 0.
   Arguments: 0 register argument(s) [-], 3 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1007e190(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1007e190: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x1007e191: push edi */
    g->ecx = COW_IMG(COW_ADDR_LIFT_1047D600);   /* 0x1007e192: the value the entry loaded and the decompiler dropped */
    cow_lift_1007e190(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 1 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
