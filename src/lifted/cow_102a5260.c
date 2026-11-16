/* f_0x102a5260 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_102a5260(Guest* g)
{
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 140u);

    wr32(sp0 - 0x54u, in_esi);
    if (rd32(sp0 + 8u) != 0u)
    {
        esi = rd32(sp0 + 8u);
        goto L_102a5292;
    }
    wr32(sp0 - 0x58u, 0x2b5u);
    wr32(sp0 - 0x5cu, COW_IMG(0x103bdbd4u));
    wr32(sp0 - 0x60u, COW_IMG(0x103b379cu));
    g->eax = in_eax;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x58u;
    t1 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bdbd4u));
    t2 = g->ecx;
    t3 = g->edx;
    wr32(sp0 - 0x64u, COW_IMG(0x103bb514u));
    g->esp = sp0 - 0x5cu;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bb514u), COW_IMG(0x103b379cu));
    return;
L_102a5292: ;
    wr32(sp0 - 0x58u, esi);
    wr32(sp0 - 0x5cu, 1u);
    wr32(sp0 - 0x60u, 4u);
    wr32(sp0 - 0x64u, sp0 + 8u);
    wr32(sp0 + 8u, 2u);
    g->esp = sp0 - 0x54u;
    cow_cdecl(g, COW_IMG(0x10292200u), 4, sp0 + 8u, 4u, 1u, esi);
    t4 = rd32(sp0 + 8u);
    wr32(sp0 - 0x68u, t4);
    wr32(sp0 - 0x6cu, COW_IMG(0x103bdd7cu));
    wr32(sp0 - 0x70u, sp0 - 0x50u);
    g->ecx = t4;
    g->edx = sp0 - 0x50u;
    g->esp = sp0 - 0x5cu;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x50u, COW_IMG(0x103bdd7cu), t4, sp0 + 8u, 4u);
    t5 = g->ecx;
    t6 = g->edx;
    wr32(sp0 - 0x74u, esi);
    wr32(sp0 - 0x78u, 0x50u);
    wr32(sp0 - 0x7cu, 1u);
    wr32(sp0 - 0x80u, sp0 - 0x50u);
    g->edx = t6;
    g->esp = sp0 - 0x70u;
    cow_cdecl(g, COW_IMG(0x10292200u), 4, sp0 - 0x50u, 1u, 0x50u, esi);
    t7 = g->edx;
    wr32(sp0 - 0x84u, esi);
    wr32(sp0 - 0x88u, arg1);
    g->esp = sp0 - 0x6cu;
    cow_cdecl(g, COW_IMG(0x102a52f0u), 7, arg1, esi, sp0 - 0x50u, 1u, 0x50u, rd32(sp0 - 0x74u), sp0 - 0x50u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102a5260(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102a5260(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
