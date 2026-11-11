/* f_0x100e5490 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_100e5490 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_100e5490(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    CowU32 puVar2;
    CowU32 puVar3;
    CowU32 uVar4;
    if (param_1 < 0x11) {
        iVar1 = cow_bridge_100fc3c0(g, COW_IMG(COW_ADDR_LIFT_100E54A6), 3u, (const CowU32[]){ 83u, 0u, 0u }, g->ecx, g->edx, g->eax, 0u);
        if (iVar1 != 0) {
          if (param_1 != 0) {
            puVar2 = (CowU32)(iVar1 + 10);
            uVar4 = (CowU32)param_1;
            puVar3 = (CowU32)(param_2 + 5);
            do {
              wr8((uint32_t)(puVar2 + 1u * (uint32_t)(-1)), rd8((uint32_t)(puVar3 + 1u * (uint32_t)(-5))));
              wr8((uint32_t)(puVar2 + 1u * (uint32_t)(-2)), rd8((uint32_t)(puVar3 + 1u * (uint32_t)(-1))));
              wr8((uint32_t)puVar2, rd8((uint32_t)puVar3));
              wr16((uint32_t)(puVar2 + 2), rd16((uint32_t)(puVar3 + 1)));
              puVar2 = puVar2 + 8;
              uVar4 = uVar4 - 1;
              puVar3 = puVar3 + 8;
            } while (uVar4 != 0);
          }
          wr8((uint32_t)(iVar1 + 4), param_1);
          wr8((uint32_t)(iVar1 + 5), 3);
          wr8((uint32_t)(iVar1 + 6), (rd8((uint32_t)(iVar1 + 6)) ^ param_3) & 1 ^ rd8((uint32_t)(iVar1 + 6)));
          cow_bridge_100fc4d0(g, COW_IMG(COW_ADDR_LIFT_100E5515), 3u, (const CowU32[]){ iVar1, 0x88, 0 }, g->ecx, g->edx, g->eax, 12u);
          g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(1) & 0xffu)); return;
        }
      }
      g->eax = (CowU32)(0); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 3 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [esi, ebx], ret 0.
   Arguments: 0 register argument(s) [-], 3 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_100e5490(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x100e5490: push ebx */
    { uint32_t A = (uint32_t)(g->esp + 0x8u); g->ebx = (uint32_t)(rd32(A)); }   /* 0x100e5491: register ebx, replayed as the entry ran it */
    cow_lift_100e5490(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 3 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
