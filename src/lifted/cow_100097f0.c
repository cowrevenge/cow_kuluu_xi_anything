/* f_0x100097f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_100097f0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(COW_IMG(0x10456bf8u)) == 0u)
    {
        eax = rd32(COW_IMG(0x10456bf8u));
        edx = in_edx;
        goto L_1000984d;
    }
    if (arg1 > 6u)
    {
        ecx = self;
        edx = in_edx;
        esi = 0u;
        goto L_10009828;
    }
    t1 = rd32(COW_IMG(0x10009854u) + arg1 * 4u);
    switch (t1 - RD)
    {
    case 0x1000980fu: goto L_1000980f;
    case 0x10009813u: goto L_10009813;
    case 0x1000981au: goto L_1000981a;
    default: rt_fatal(g, COW_IMG(0x10009808u), "switch");
    }
    return 0;
L_1000980f: ;
    ecx = self;
    edx = in_edx;
    esi = 0u;
L_10009828: ;
    if (rd32(esi * 4u + self + 0xa04u) != 0u)
    {
        eax = rd32(esi * 4u + self + 0xa04u);
    }
    else
    {
        eax = rd32(esi * 4u + self + 0xa04u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t6 = cow_thiscall(g, rd32(COW_IMG(0x1032937cu)), ecx, 2, eax, 0x7f00u);
        t7 = g->ecx;
        t8 = g->edx;
        wr32(esi * 4u + self + 0xa04u, t6);
        eax = t6;
        ecx = t7;
        edx = t8;
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t9 = cow_thiscall(g, rd32(COW_IMG(0x10329380u)), ecx, 1, eax);
    t10 = g->edx;
    eax = t9;
    edx = t10;
L_1000984d: ;
    g->edx = edx;
    return eax;
L_10009813: ;
    ecx = self;
    edx = in_edx;
    esi = 1u;
    goto L_10009828;
L_1000981a: ;
    g->edx = in_edx;
    t2 = rd32(COW_IMG(0x104e1d4cu));
    g->esp = sp0 - 8u;
    t3 = cow_call_regs(g, COW_IMG(0x101245c0u), arg1, t2, g->edx, 1, 0);
    t4 = g->ecx;
    t5 = g->edx;
    ecx = t4;
    edx = t5;
    esi = (uint32_t)(int16_t)t3;
    goto L_10009828;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100097f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100097f0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
