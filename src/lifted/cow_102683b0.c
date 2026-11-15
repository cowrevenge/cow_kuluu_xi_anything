/* f_0x102683b0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_102683b0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_102683b0(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3, CowU32 param_4, CowU32 param_5)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */

    cow_bridge_10266fd0(g, COW_IMG(COW_ADDR_LIFT_102683C9), 2u, (const CowU32[]){ param_2, param_3 }, param_1, g->edx, param_3, 0u);
      wr32((uint32_t)((int)param_1 + 0x18), 0);
      wr32((uint32_t)((int)param_1 + 0x1c), 0);
      wr32((uint32_t)((int)param_1 + 0x20), 0);
      wr32((uint32_t)((int)param_1 + 0x24), 0);
      wr32((uint32_t)((int)param_1 + 0x28), 0);
      wr32((uint32_t)((int)param_1 + 0x2c), 0);
      wr32((uint32_t)((int)param_1 + 0x38), param_5);
      wr32((uint32_t)((int)param_1 + 0x28), 0xffffffff);
      wr32((uint32_t)((int)param_1 + 0x2c), 0x7fffffff);
      wr32((uint32_t)((int)param_1 + 0x30), 0);
      wr32((uint32_t)((int)param_1 + 0x34), 0x3ff00000);
      g->eax = (CowU32)(param_1); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 5 parameter(s), cleanup 16 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [ebp], frame pointer yes, 0 locals, pops [ebp], ret 16.
   Arguments: 1 register argument(s) [ecx], 4 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_102683b0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    CowU32 param_5 = rd32((uint32_t)(sp0 + 4u + 0xcu));
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x102683b0: push ebp */
    g->ebp = g->esp;                       /* 0x102683b1: mov ebp, esp */
    { uint32_t a = g->esp; uint32_t b = (uint32_t)0xFFFFFFF8u; uint32_t r = (uint32_t)(a & b); g->esp = (uint32_t)(r); }   /* 0x102683b3: register esp, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->ecx); /* 0x102683b6: push ecx */
    g->eax = param_3;   /* 0x102683b7: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x102683ba: push esi */
    g->esi = g->ecx;   /* 0x102683bb: the value the entry loaded and the decompiler dropped */
    g->ecx = param_2;   /* 0x102683bd: the value the entry loaded and the decompiler dropped */
    g->ecx = g->esi;   /* 0x102683c2: the value the entry loaded and the decompiler dropped */
    cow_lift_102683b0(g, param_1, param_2, param_3, param_4, param_5);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    g->ecx = (CowU32)(0u);   /* the entry left ecx here on its way to the ret */
    g->edx = (CowU32)(param_5);   /* what edx holds at every ret of the entry */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 16u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 2 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
