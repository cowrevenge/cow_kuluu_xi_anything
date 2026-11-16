/* f_0x102b50e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=f64 stack_args=0 */
void cow_fn_102b50e0(Guest* g)
{
    double d11;
    double d14;
    double d16;
    double d19;
    double d20;
    double d5;
    double d9;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t12;
    uint32_t t13;
    uint32_t t15;
    uint32_t t17;
    uint32_t t18;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if ((int32_t)(rd32(sp0 + 0x10u) & 0x8000007fu) >= 0)
    {
        eax = rd32(sp0 + 0x10u) & 0x8000007fu;
    }
    else
    {
        eax = rd32(sp0 + 0x10u) & 0x8000007fu;
        eax = (eax - 1u | 0xffffff80u) + 1u;
    }
    if ((int32_t)(arg3 + rd32(COW_IMG(0x103c01b0u) + eax * 4u) & 0x8000007fu) >= 0)
    {
        ecx = arg3 + rd32(COW_IMG(0x103c01b0u) + eax * 4u) & 0x8000007fu;
    }
    else
    {
        ecx = arg3 + rd32(COW_IMG(0x103c01b0u) + eax * 4u) & 0x8000007fu;
        ecx = (ecx - 1u | 0xffffff80u) + 1u;
    }
    if ((int32_t)(arg2 + rd32(COW_IMG(0x103c01b0u) + ecx * 4u) & 0x8000007fu) >= 0)
    {
        edx = arg2 + rd32(COW_IMG(0x103c01b0u) + ecx * 4u) & 0x8000007fu;
    }
    else
    {
        edx = arg2 + rd32(COW_IMG(0x103c01b0u) + ecx * 4u) & 0x8000007fu;
        edx = (edx - 1u | 0xffffff80u) + 1u;
    }
    if ((int32_t)(arg1 + rd32(COW_IMG(0x103c01b0u) + edx * 4u) & 0x8000007fu) >= 0)
    {
        eax = arg1 + rd32(COW_IMG(0x103c01b0u) + edx * 4u) & 0x8000007fu;
    }
    else
    {
        eax = arg1 + rd32(COW_IMG(0x103c01b0u) + edx * 4u) & 0x8000007fu;
        eax = (eax - 1u | 0xffffff80u) + 1u;
    }
    t1 = rd32(arg5 + 0xcu);
    g->eax = arg5;
    g->ecx = rd32(COW_IMG(0x103c01b0u) + eax * 4u) << 4u;
    t2 = rd32(COW_IMG(0x103c01b0u) + eax * 4u);
    g->esp = sp0;
    t3 = cow_cdecl(g, COW_IMG(0x102b4f30u), 1, t1);
    t4 = g->ecx;
    d5 = cow_take_float(g);
    t6 = rd32(t3 + 8u);
    wrf32(sp0 + 0x10u, (float)d5);
    g->ecx = t4;
    g->esp = sp0 - 4u;
    t7 = cow_cdecl(g, COW_IMG(0x102b4f30u), 1, t6);
    t8 = g->ecx;
    d9 = cow_take_float(g);
    t10 = rd32(t7);
    d11 = fr(g, d9 * (double)rdf32(sp0 + 0x10u));
    wrf32(sp0 + 0x10u, (float)d11);
    g->ecx = t8;
    g->esp = sp0 - 8u;
    t12 = cow_cdecl(g, COW_IMG(0x102b4f30u), 1, t10);
    t13 = g->ecx;
    d14 = cow_take_float(g);
    t15 = rd32(t12 + 4u);
    d16 = fr(g, d14 * (double)rdf32(sp0 + 0x10u));
    wrf32(sp0 + 0x10u, (float)d16);
    g->ecx = t13;
    g->esp = sp0 - 0xcu;
    t17 = cow_cdecl(g, COW_IMG(0x102b4f30u), 1, t15);
    t18 = g->ecx;
    d19 = cow_take_float(g);
    d20 = fr(g, fr(g, d19 * (double)rdf32(sp0 + 0x10u)) * fr(g, fr(g, fr(g, fr(g, (double)rdf32(COW_IMG(0x103c0fbcu) + t18) * (double)rdf32(t17 + 0xcu)) + fr(g, (double)rdf32(COW_IMG(0x103c0fb8u) + t18) * (double)rdf32(t17 + 8u))) + fr(g, (double)rdf32(COW_IMG(0x103c0fb0u) + t18) * (double)rdf32(t17))) + fr(g, (double)rdf32(COW_IMG(0x103c0fb4u) + t18) * (double)rdf32(t17 + 4u))));
    fpush(g, d20);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102b50e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102b50e0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
