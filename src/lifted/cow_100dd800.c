/* f_0x100dd800 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_100dd800 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_100dd800(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3, CowU32 param_4, CowU32 param_5, CowU32 param_6)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU8 local_68[88];
    CowU32 local_10;
    CowU32 local_c;
    CowU32 local_8;
    CowU32 local_4;
    if (param_2 < 0x10) {
        g->eax = (CowU32)(0xffffffff); return;
      }
      cow_bridge_100dde90(g, COW_IMG(COW_ADDR_LIFT_100DD81D), 1u, (const CowU32[]){ local_68 }, g->ecx, g->edx, param_2, 0u);
      cow_bridge_100ddec0(g, COW_IMG(COW_ADDR_LIFT_100DD831), 3u, (const CowU32[]){ local_68, param_3, param_4 }, g->ecx, g->edx, param_2, 0u);
      cow_bridge_100ddec0(g, COW_IMG(COW_ADDR_LIFT_100DD84B), 3u, (const CowU32[]){ local_68, param_5, param_6 }, g->ecx, g->edx, param_2, 0u);
      cow_bridge_100ddf60(g, COW_IMG(COW_ADDR_LIFT_100DD855), 1u, (const CowU32[]){ local_68 }, g->ecx, g->edx, param_2, 0u);
      wr32((uint32_t)param_1, 0);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(1)), 0);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(2)), 0);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(3)), 0);
      wr32((uint32_t)param_1, local_10);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(1)), local_c);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(2)), local_8);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(3)), local_4);
      g->eax = (CowU32)(0x10); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 6 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [-], ret 0.
   Arguments: 0 register argument(s) [-], 6 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_100dd800(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0xcu));
    CowU32 param_5 = rd32((uint32_t)(sp0 + 4u + 0x10u));
    CowU32 param_6 = rd32((uint32_t)(sp0 + 4u + 0x14u));
    g->eax = param_2;   /* 0x100dd800: the value the entry loaded and the decompiler dropped */
    g->esp -= 0x68u;                      /* 0x100dd804: 104 bytes of locals */
    cow_lift_100dd800(g, param_1, param_2, param_3, param_4, param_5, param_6);


    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
