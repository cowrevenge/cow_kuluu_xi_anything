/* f_0x100378b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_100378b0(Guest* g)
{
    double d14;
    double d6;
    double d7;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t15;
    uint32_t t16;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(COW_IMG(0x10463948u)) == 0u)
    {
        ecx = rd32(COW_IMG(0x10463948u));
        edx = in_edx;
    }
    else
    {
        ecx = rd32(COW_IMG(0x10463948u));
        g->edx = in_edx;
        g->esp = sp0;
        cow_thiscall(g, rd32(rd32(ecx) + 0x18u), ecx, 1, 1u);
        t1 = g->ecx;
        t2 = g->edx;
        wr32(COW_IMG(0x10463948u), 0u);
        ecx = t1;
        edx = t2;
    }
    if (rd32(COW_IMG(0x10463944u)) == arg1)
    {
        eax = rd32(COW_IMG(0x10463944u));
    }
    else
    {
        eax = rd32(COW_IMG(0x10463944u));
        if (rd32(COW_IMG(0x1046393cu)) == 0u)
        {
            ecx = rd32(COW_IMG(0x1046393cu));
        }
        else
        {
            ecx = rd32(COW_IMG(0x1046393cu));
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 8u;
            t3 = cow_stdcall(g, COW_IMG(0x102467c0u), 2, 0xffffffffu, 0u);
            t4 = g->ecx;
            t5 = g->edx;
            eax = t3;
            ecx = t4;
            edx = t5;
        }
    }
    d6 = fr(g, (double)rdf32(COW_IMG(0x103517f8u)) * (double)rdf32(COW_IMG(0x103517f4u)));
    wr32(COW_IMG(0x10463944u), arg1);
    g->ecx = ecx;
    g->edx = edx;
    d7 = fr(g, d6 * (double)rdf32(COW_IMG(0x1032a34cu)));
    fpush(g, d7);
    g->esp = sp0 - 8u;
    t8 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t9 = g->ecx;
    t10 = g->edx;
    g->ecx = t9;
    g->edx = t10;
    t11 = cow_cdecl(g, COW_IMG(0x100382a0u), 2, arg1, t8);
    t12 = g->ecx;
    t13 = g->edx;
    if (rd32(COW_IMG(0x1046393cu)) != 0u)
    {
        eax = t11;
        ecx = t12;
        edx = t13;
        edi = rd32(COW_IMG(0x1046393cu));
        g->edx = edx;
        d14 = fr(g, fr(g, (double)rdf32(COW_IMG(0x103517f8u)) * (double)rdf32(COW_IMG(0x103517f4u))) * (double)rdf32(COW_IMG(0x1032a34cu)));
        fpush(g, d14);
        g->esp = sp0 - 0xcu;
        t15 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
        t16 = g->edx;
        g->esp = sp0 - 8u;
        cow_stdcall(g, COW_IMG(0x10246790u), 3, 0xffffffffu, t15, 0u);
    }
    wr32(COW_IMG(0x10463940u), arg1);
    wr8(COW_IMG(0x10463909u), 1u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100378b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100378b0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
