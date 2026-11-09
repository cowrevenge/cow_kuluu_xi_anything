/* f_0x10187600 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10187600 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10187600(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */

    if ((rd32((uint32_t)(param_1 + 0x10)) == 0) && ((rd8((uint32_t)rd32((uint32_t)((param_1 + 0x18)))) & 1) == 0)) {
        wr32((uint32_t)(param_1 + 0x14c), rd32((uint32_t)(param_1 + 0xa4)));
        wr32((uint32_t)(param_1 + 0x150), rd32((uint32_t)(param_1 + 0xa8)));
        wr32((uint32_t)(param_1 + 0x154), rd32((uint32_t)(param_1 + 0xac)));
        wr32((uint32_t)(param_1 + 0x158), rd32((uint32_t)(param_1 + 0xb0)));
        wr32((uint32_t)(param_1 + 0x15c), rd32((uint32_t)(param_1 + 0xb4)));
        wr32((uint32_t)(param_1 + 0x160), rd32((uint32_t)(param_1 + 0xb8)));
        wr32((uint32_t)(param_1 + 0x164), rd32((uint32_t)(param_1 + 0xbc)));
        wr32((uint32_t)(param_1 + 0x168), rd32((uint32_t)(param_1 + 0xc0)));
        wr32((uint32_t)(param_1 + 0x16c), rd32((uint32_t)(param_1 + 0xe4)));
        wr32((uint32_t)(param_1 + 0x170), rd32((uint32_t)(param_1 + 0xe8)));
        wr32((uint32_t)(param_1 + 0x174), rd32((uint32_t)(param_1 + 0xec)));
        wr32((uint32_t)(param_1 + 0x178), rd32((uint32_t)(param_1 + 0xf0)));
        wr32((uint32_t)(param_1 + 0x17c), rd32((uint32_t)(param_1 + 0x24)));
        wr32((uint32_t)(param_1 + 0x180), rd32((uint32_t)(param_1 + 0x28)));
        wr32((uint32_t)(param_1 + 0x184), rd32((uint32_t)(param_1 + 0x2c)));
        wr32((uint32_t)(param_1 + 0x188), rd32((uint32_t)(param_1 + 0x30)));
        wr32((uint32_t)(param_1 + 0x18c), rd32((uint32_t)(param_1 + 0x34)));
        wr32((uint32_t)(param_1 + 400), rd32((uint32_t)(param_1 + 0x38)));
        wr32((uint32_t)(param_1 + 0x194), rd32((uint32_t)(param_1 + 0x3c)));
        wr32((uint32_t)(param_1 + 0x198), rd32((uint32_t)(param_1 + 0x40)));
        wr32((uint32_t)(param_1 + 0x19c), rd32((uint32_t)(param_1 + 100)));
        wr32((uint32_t)(param_1 + 0x1a0), rd32((uint32_t)(param_1 + 0x68)));
        wr32((uint32_t)(param_1 + 0x1a4), rd32((uint32_t)(param_1 + 0x6c)));
        wr32((uint32_t)(param_1 + 0x1a8), rd32((uint32_t)(param_1 + 0x70)));
        return;
      }
      cow_bridge_10187720(g, COW_IMG(COW_ADDR_LIFT_1018771F), 1u, (const CowU32[]){ rd32(COW_IMG(COW_ADDR_LIFT_1065CB18)) }, g->ecx, g->edx, g->eax, 0u);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [-], ret 0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10187600(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    { uint32_t A = (uint32_t)(g->ecx + 0x10u); g->eax = (uint32_t)(rd32(A)); }   /* 0x10187600: register eax, replayed as the entry ran it */
    cow_lift_10187600(g, param_1);


    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
