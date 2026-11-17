/* f_0x101cf350 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
void cow_fn_101cf350(Guest* g)
{
    double d4;
    double d8;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t2;
    uint32_t t3;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t9;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    g->eax = arg1;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t1 = cow_cdecl(g, COW_IMG(0x101cce50u), 1, arg1);
    t2 = g->ecx;
    t3 = g->edx;
    g->ecx = t2;
    g->edx = t3;
    d4 = fr(g, (double)(int32_t)rd32(sp0 + 8u) - (double)rdf32(t1));
    fpush(g, d4);
    t5 = cow_call_regs(g, COW_IMG(0x10311c6cu), t1, g->ecx, g->edx, 1, 0);
    t6 = g->ecx;
    t7 = g->edx;
    d8 = fr(g, (double)(int32_t)arg3 - (double)rdf32(t1 + 8u));
    fpush(g, d8);
    t9 = cow_call_regs(g, COW_IMG(0x10311c6cu), t5, g->ecx, g->edx, 1, 0);
    if (arg4 == 0x80ff6060u)
    {
        edx = -rd16(arg3 * 8u + self + rd32(sp0 + 8u) * 0xd0u + 6u);
        ebx = t5;
        ebp = t9;
        wr32(sp0 + 8u, edx);
        x0 = fr(g, fr(g, (double)(int32_t)rd32(sp0 + 8u) * (double)rdf32(COW_IMG(0x10329a18u))) - (double)rdf32(COW_IMG(0x1032a85cu)));
    }
    else
    {
        edx = -rd16(arg3 * 8u + self + rd32(sp0 + 8u) * 0xd0u + 6u);
        ebx = t5;
        ebp = t9;
        wr32(sp0 + 8u, edx);
        x0 = fr(g, fr(g, (double)(int32_t)rd32(sp0 + 8u) * (double)rdf32(COW_IMG(0x10329a18u))) - (double)rdf32(COW_IMG(0x1032d42cu)));
    }
    wrf32(sp0 + 8u, (float)x0);
    t10 = rd32(sp0 + 8u);
    g->ebx = ebx;
    g->eax = t10;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t11 = cow_stdcall(g, COW_IMG(0x101cf410u), 5, ebx, ebp, arg4, t10, 0u);
    t12 = g->edx;
    if (arg4 != 0x808080ffu)
    {
        edx = t12;
    }
    else
    {
        eax = t11;
        edx = t12;
        t13 = rd32(sp0 + 8u);
        g->ebx = ebx;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        cow_stdcall(g, COW_IMG(0x101cf410u), 5, ebx, ebp, arg4, t13, 0x3d4ccccdu);
        t14 = g->edx;
        edx = t14;
    }
    g->ebx = in_ebx;
    g->edx = edx;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101cf350(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101cf350(g);
    g->esp = sp0;
    rt_return(g, g->eax, 16u);
}
/* COW_ADAPTER END */
