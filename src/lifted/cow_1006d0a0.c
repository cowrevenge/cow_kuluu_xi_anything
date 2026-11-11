/* f_0x1006d0a0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1006d0a0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1006d0a0(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    CowU32 puVar2;
    if ((rd32(COW_IMG(COW_ADDR_LIFT_1047CDD8)) & 1) == 0) {
        wr32(COW_IMG(COW_ADDR_LIFT_1047CDD8), rd32(COW_IMG(COW_ADDR_LIFT_1047CDD8)) | 1);
        wr32(COW_IMG(COW_ADDR_LIFT_1047CAF0), 0x3f800000);
        wr32(COW_IMG(COW_ADDR_LIFT_1047CAF4), 0);
        wr32(COW_IMG(COW_ADDR_LIFT_1047CAF8), 0);
        wr32(COW_IMG(COW_ADDR_LIFT_1047CAFC), 0);
        wr32(COW_IMG(COW_ADDR_LIFT_1047CB00), 0);
        wr32(COW_IMG(COW_ADDR_LIFT_1047CB04), 0x3f800000);
        wr32(COW_IMG(COW_ADDR_LIFT_1047CB08), 0);
        wr32(COW_IMG(COW_ADDR_LIFT_1047CB0C), 0);
        wr32(COW_IMG(COW_ADDR_LIFT_1047CB10), 0);
        wr32(COW_IMG(COW_ADDR_LIFT_1047CB14), 0);
        wr32(COW_IMG(COW_ADDR_LIFT_1047CB18), 0x3f800000);
        wr32(COW_IMG(COW_ADDR_LIFT_1047CB1C), 0);
        wr32(COW_IMG(COW_ADDR_LIFT_1047CB20), 0);
        wr32(COW_IMG(COW_ADDR_LIFT_1047CB24), 0);
        wr32(COW_IMG(COW_ADDR_LIFT_1047CB28), 0);
        wr32(COW_IMG(COW_ADDR_LIFT_1047CB2C), 0x3f800000);
        cow_bridge_103134c6(g, COW_IMG(COW_ADDR_LIFT_1006D164), 1u, (const CowU32[]){ 268882304u }, g->ecx, g->edx, g->eax, 4u);
      }
      puVar2 = COW_IMG(COW_ADDR_LIFT_1047CAF0);
      for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
        wr32((uint32_t)param_1, rd32((uint32_t)puVar2));
        puVar2 = puVar2 + 1;
        param_1 = param_1 + 1;
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx+edx), stdcall, 1 parameter(s), cleanup 4 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [edi, esi], ret 4.
   Arguments: 2 register argument(s) [ecx, edx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1006d0a0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    { uint32_t A = (uint32_t)(COW_IMG(COW_ADDR_LIFT_1047CDD8) + RD); g->ecx = (g->ecx & 0xFFFFFF00u) | (uint8_t)(rd8(A)); }   /* 0x1006d0a0: register ecx, replayed as the entry ran it */
    { g->eax = (g->eax & 0xFFFFFF00u) | (uint8_t)(0x1u); }   /* 0x1006d0a6: register eax, replayed as the entry ran it */
    cow_lift_1006d0a0(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 2 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
