/* f_0x1007b820 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1007b820 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1007b820(Guest* g, CowU32 param_1, CowU32 param_2, int32_t param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    int iVar2;
    CowU32 puVar3;
    cVar1 = cow_bridge_101cc0d0(g, COW_IMG(COW_ADDR_LIFT_1007B82B), 2u, (const CowU32[]){ 127u, 0u }, g->ecx, g->edx, g->eax, 8u);
      if (cVar1 == '\0') {
        g->eax = (CowU32)(param_3); return;
      }
      cVar1 = cow_bridge_101cbdf0(g, COW_IMG(COW_ADDR_LIFT_1007B840), 1u, (const CowU32[]){ 1u }, g->ecx, g->edx, g->eax, 4u);
      if (cVar1 == '\0') {
        cow_bridge_10129d90(g, COW_IMG(COW_ADDR_LIFT_1007B854), 1u, (const CowU32[]){ 16u }, g->ecx, g->edx, g->eax, 0u);
        g->eax = (CowU32)(param_3); return;
      }
      iVar2 = cow_bridge_10223240(g, COW_IMG(COW_ADDR_LIFT_1007B86F), 4u, (const CowU32[]){ rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_103551E0)) + 4)), 0, 0, 0 }, g->ecx, g->edx, g->eax, 0u);
      puVar3 = (CowU32)cow_bridge_1007a1c0(g, COW_IMG(COW_ADDR_LIFT_1007B886), 4u, (const CowU32[]){ rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_103551E0)) + 8)), 0, 1, 0 }, g->ecx, g->edx, g->eax, 0u);
      if (((puVar3 == (CowU32)0x0) || (iVar2 < 0)) || (0x1ff < iVar2)) {
        g->eax = (CowU32)(-param_3); return;
      }
      if (rd32(COW_IMG(COW_ADDR_LIFT_1047D498)) != '\0') {
        cow_bridge_10223760(g, COW_IMG(COW_ADDR_LIFT_1007B8AA), 1u, (const CowU32[]){ iVar2 }, g->ecx, g->edx, g->eax, 0u);
        g->eax = (CowU32)(param_3); return;
      }
      cow_bridge_10223760(g, COW_IMG(COW_ADDR_LIFT_1007B8BB), 1u, (const CowU32[]){ 0xffffffff }, g->ecx, g->edx, g->eax, 4u);
      if (iVar2 == 0) {
        iVar2 = 0;
      }
      else if (0xff < iVar2) {
        iVar2 = iVar2 + 0x2000;
      }
      cow_bridge_100780a0(g, COW_IMG(COW_ADDR_LIFT_1007B8E5), 5u, (const CowU32[]){ rd32((uint32_t)puVar3), rd32((uint32_t)(puVar3 + 4u * (uint32_t)(1))), 7, iVar2, 0 }, g->ecx, g->edx, g->eax, 0u);
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
void cow_adapter_1007b820(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1007b820: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x1007b821: push edi */
    cow_lift_1007b820(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 1 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
