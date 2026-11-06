/* f_0x10130080 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10130080 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10130080(Guest* g, CowU32 param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 puVar1;
    CowU32 puVar2;
    if ((-1 < param_2) && (param_2 < 8)) {
        puVar1 = (CowU32)(rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) + (param_2 * 9 + 0x58fb) * 8);
        puVar2 = (CowU32)(param_1 + 0x14 + param_2 * 0x34);
        switch(rd32((uint32_t)puVar1)) {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 8:
        case 9:
        case 10:
        case 0xb:
        case 0xc:
        case 0xd:
        case 0xe:
        case 0xf:
        case 0x10:
          wr8((uint32_t)puVar2, 0);
          wr32((uint32_t)(puVar2 + 4), rd32((uint32_t)puVar1));
          wr16((uint32_t)(puVar2 + 8), rd16((uint32_t)(puVar1 + 8)));
          wr32((uint32_t)(puVar2 + 0xc), rd32((uint32_t)(puVar1 + 4u * (uint32_t)(10))));
          wr32((uint32_t)(puVar2 + 0x10), rd32((uint32_t)(puVar1 + 4u * (uint32_t)(7))));
          wr32((uint32_t)(puVar2 + 0x14), rd32((uint32_t)(puVar1 + 4u * (uint32_t)(1))));
          wr32((uint32_t)(puVar2 + 0x18), rd32((uint32_t)(puVar1 + 4u * (uint32_t)(2))));
          wr32((uint32_t)(puVar2 + 0x1c), rd32((uint32_t)(puVar1 + 4u * (uint32_t)(3))));
          wr32((uint32_t)(puVar2 + 0x20), rd32((uint32_t)(puVar1 + 4u * (uint32_t)(4))));
        }
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 2 parameter(s), cleanup 4 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [esi], frame pointer no, 0 locals, pops [esi], ret 4.
   Arguments: 1 register argument(s) [ecx], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10130080(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->eax = param_2;   /* 0x10130080: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10130084: push esi */
    cow_lift_10130080(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
