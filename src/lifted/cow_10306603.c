/* f_0x10306603 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10306603 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10306603(Guest* g, int32_t param_1, CowU32 param_2, CowU32 param_3, CowU32 param_4, int32_t param_5, CowU32 param_6)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */

    cow_bridge_indirect(g, rd32((uint32_t)(g->ecx + 0xcu)), COW_IMG(COW_ADDR_LIFT_10306629), 4u, (const CowU32[]){ param_1, param_2, rd32((uint32_t)param_3), param_5 + rd32((uint32_t)param_6) * 4 }, g->ecx, g->edx, g->eax, 16u);
      wr32((uint32_t)param_6, rd32((uint32_t)param_6) + 1);
      wr32((uint32_t)param_3, rd32((uint32_t)param_3) + 1);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 6 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 3 push(es) [ebp, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebp], ret 0.
   Arguments: 0 register argument(s) [-], 6 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10306603(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0xcu));
    CowU32 param_5 = rd32((uint32_t)(sp0 + 4u + 0x10u));
    CowU32 param_6 = rd32((uint32_t)(sp0 + 4u + 0x14u));
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x10306603: push ebp */
    g->ebp = g->esp;                       /* 0x10306604: mov ebp, esp */
    g->eax = param_1;   /* 0x10306606: the value the entry loaded and the decompiler dropped */
    { uint32_t A = (uint32_t)(g->eax + 0x19Cu); g->ecx = (uint32_t)(rd32(A)); }   /* 0x10306609: register ecx, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1030660f: push esi */
    g->esi = param_6;   /* 0x10306610: the value the entry loaded and the decompiler dropped */
    { uint32_t A = (uint32_t)(g->esi); g->edx = (uint32_t)(rd32(A)); }   /* 0x10306613: register edx, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x10306615: push edi */
    g->edi = param_5;   /* 0x10306616: the value the entry loaded and the decompiler dropped */
    { g->edx = (uint32_t)((uint32_t)(g->edi + g->edx * 4)); }   /* 0x10306619: register edx, replayed as the entry ran it */
    g->edi = param_3;   /* 0x1030661c: the value the entry loaded and the decompiler dropped */
    cow_lift_10306603(g, param_1, param_2, param_3, param_4, param_5, param_6);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
