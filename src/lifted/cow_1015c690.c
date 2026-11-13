/* f_0x1015c690 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1015c690 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1015c690(Guest* g, int32_t param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */

    wr32((uint32_t)(param_1 + 0x14b8), param_1 + 0xb0);
      wr32((uint32_t)(param_1 + 0x14bc), param_1 + 0xb4);
      wr32((uint32_t)(param_1 + 0x14c0), param_1 + 0xb8);
      wr32((uint32_t)(param_1 + 0x14b4), param_1 + 0xba);
      wr32((uint32_t)(param_1 + 0x14c4), param_1 + 0xbe);
      wr32((uint32_t)(param_1 + 0x14d0), param_1 + 0xc0);
      wr32((uint32_t)(param_1 + 0x14d8), param_1 + 0xc4);
      wr32((uint32_t)(param_1 + 0x14dc), param_1 + 200);
      wr32((uint32_t)(param_1 + 0x14fc), param_1 + 0xd0);
      wr32((uint32_t)(param_1 + 0x1500), param_1 + 0xd2);
      wr32((uint32_t)(param_1 + 0x1504), param_1 + 0xd4);
      wr32((uint32_t)(param_1 + 0x14e4), param_1 + 0xd6);
      wr32((uint32_t)(param_1 + 0x14f4), param_1 + 0xbc);
      wr32((uint32_t)(param_1 + 0x151c), param_1 + 0xdc);
      wr32((uint32_t)(param_1 + 0x1520), param_1 + 0xdd);
      wr32((uint32_t)(param_1 + 0x14d4), param_1 + 0xc2);
      wr32((uint32_t)(param_1 + 0x1524), param_1 + 0xde);
      wr32((uint32_t)(param_1 + 0x1528), param_1 + 0xe0);
      wr32((uint32_t)(param_1 + 0x14e0), param_1 + 0xcc);
      wr32((uint32_t)(param_1 + 0x1534), param_1 + 0xe4);
      wr32((uint32_t)(param_1 + 0x154c), param_1 + 0xe7);
      wr32((uint32_t)(param_1 + 0x14f8), 0);
      wr32((uint32_t)(param_1 + 0x1508), 0);
      wr32((uint32_t)(param_1 + 0x1538), 0);
      wr32((uint32_t)(param_1 + 0x153c), 0);
      wr32((uint32_t)(param_1 + 0x1540), 0);
      wr32((uint32_t)(param_1 + 0x1544), 0);
      wr32((uint32_t)(param_1 + 0x1548), 0);
      wr32((uint32_t)(param_1 + 0x152c), 0);
      wr32((uint32_t)(param_1 + 0x1554), 0);
      wr32((uint32_t)(param_1 + 0x1558), 0);
      wr32((uint32_t)(param_1 + 0x155c), 0);
      wr32((uint32_t)(param_1 + 0x1560), 0);
      wr32((uint32_t)(param_1 + 0x1564), 0);
      wr32((uint32_t)(param_1 + 0x1568), 0);
      wr32((uint32_t)(param_1 + 0x156c), 0);
      wr32((uint32_t)(param_1 + 0x1570), 0);
      wr32((uint32_t)(param_1 + 0x1574), 0);
      wr32((uint32_t)(param_1 + 0x1578), 0);
      wr32((uint32_t)(param_1 + 0x157c), 0);
      wr32((uint32_t)(param_1 + 0x1588), 0);
      wr32((uint32_t)(param_1 + 0x158c), 0);
      wr32((uint32_t)(param_1 + 0x1590), 0);
      wr32((uint32_t)(param_1 + 0x1594), 0);
      wr32((uint32_t)(param_1 + 0x1598), 0);
      wr32((uint32_t)(param_1 + 0x1584), param_1 + 0xe8);
      wr32((uint32_t)(param_1 + 0x1550), param_1 + 0xe6);
      wr32((uint32_t)(param_1 + 0x159c), param_1 + 0xe9);
      wr32((uint32_t)(param_1 + 0x15a0), param_1 + 0xea);
      wr32((uint32_t)(param_1 + 0x15a4), param_1 + 0xeb);
      wr32((uint32_t)(param_1 + 0x14e8), param_1 + 0x334);
      wr32((uint32_t)(param_1 + 0x14ec), param_1 + 0x330);
      wr32((uint32_t)(param_1 + 0x14f0), param_1 + 0x14af);
      cow_bridge_1015be00(g, COW_IMG(COW_ADDR_LIFT_1015C84B), 3u, (const CowU32[]){ param_1, param_1 + 0xec, 1 }, (g->esi + 816u), (g->esi + 5295u), (g->esi + 236u), 12u);
      wr32((uint32_t)(param_1 + 0x1518), param_1 + 0xd8);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 2 push(es) [esi, edi], frame pointer no, 0 locals, pops [edi, esi], ret 0.
   Arguments: 0 register argument(s) [-], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1015c690(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1015c690: push esi */
    { uint32_t A = (uint32_t)(g->esp + 0x8u); g->esi = (uint32_t)(rd32(A)); }   /* 0x1015c691: register esi, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x1015c695: push edi */
    { g->edi = (uint32_t)((uint32_t)(g->esi + 0xB4u)); }   /* 0x1015c696: register edi, replayed as the entry ran it */
    { g->eax = (uint32_t)((uint32_t)(g->esi + 0xB0u)); }   /* 0x1015c69c: register eax, replayed as the entry ran it */
    cow_lift_1015c690(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
