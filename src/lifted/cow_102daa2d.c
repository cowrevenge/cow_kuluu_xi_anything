/* f_0x102daa2d - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_102daa2d (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_102daa2d(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3, CowU32 param_4, CowU32 param_5, CowU32 param_6)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    int iVar2;
    cow_bridge_102ea7f9(g, COW_IMG(COW_ADDR_LIFT_102DAA42), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      if (param_4 != (CowU32)0x0) {
        wr32((uint32_t)param_4, 0);
      }
      if (param_5 != (CowU32)0x0) {
        wr32((uint32_t)param_5, 0);
      }
      if (param_6 != (CowU32)0x0) {
        wr32((uint32_t)param_6, 0);
      }
      iVar1 = cow_bridge_102ecc67(g, COW_IMG(COW_ADDR_LIFT_102DAA79), 8u, (const CowU32[]){ param_1, param_2, 0, 1, param_3, param_4, param_5, param_6 }, g->ecx, g->edx, g->eax, 0u);
      iVar2 = 0;
      if (iVar1 < 0) {
        iVar2 = iVar1;
      }
      cow_bridge_102ea8a2(g, COW_IMG(COW_ADDR_LIFT_102DAA8A), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      g->eax = (CowU32)(iVar2); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: stdcall, 6 parameter(s), cleanup 24 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [esi], ret 24.
   Arguments: 0 register argument(s) [-], 6 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_102daa2d(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0xcu));
    CowU32 param_5 = rd32((uint32_t)(sp0 + 4u + 0x10u));
    CowU32 param_6 = rd32((uint32_t)(sp0 + 4u + 0x14u));
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_ebp = g->ebp;   /* ebp as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x102daa2d: push ebp */
    g->ebp = g->esp;                       /* 0x102daa2e: mov ebp, esp */
    g->esp -= 0x3e8u;                      /* 0x102daa30: 1000 bytes of locals */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x102daa36: push esi */
    { g->ecx = (uint32_t)((uint32_t)(g->ebp + 0xFFFFFC18u)); }   /* 0x102daa37: register ecx, replayed as the entry ran it */
    cow_lift_102daa2d(g, param_1, param_2, param_3, param_4, param_5, param_6);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { g->esp = g->ebp; g->ebp = rd32(g->esp); g->esp += 4u; } /* leave */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->ebp = cow_in_ebp;   /* every ret of the entry hands ebp back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 24u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 2 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
