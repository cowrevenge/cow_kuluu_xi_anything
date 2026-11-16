/* f_0x102b4e80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=f64 stack_args=4 */
void cow_fn_102b4e80(Guest* g)
{
    double d10;
    double d11;
    double d4;
    double d7;
    double d9;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t5;
    uint32_t t6;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((int32_t)(rd32(sp0 + 0xcu) & 0x8000007fu) >= 0)
    {
        eax = rd32(sp0 + 0xcu) & 0x8000007fu;
    }
    else
    {
        eax = rd32(sp0 + 0xcu) & 0x8000007fu;
        eax = (eax - 1u | 0xffffff80u) + 1u;
    }
    if ((int32_t)(arg2 + rd32(COW_IMG(0x103c01b0u) + eax * 4u) & 0x8000007fu) >= 0)
    {
        ecx = arg2 + rd32(COW_IMG(0x103c01b0u) + eax * 4u) & 0x8000007fu;
    }
    else
    {
        ecx = arg2 + rd32(COW_IMG(0x103c01b0u) + eax * 4u) & 0x8000007fu;
        ecx = (ecx - 1u | 0xffffff80u) + 1u;
    }
    if ((int32_t)(arg1 + rd32(COW_IMG(0x103c01b0u) + ecx * 4u) & 0x8000007fu) >= 0)
    {
        edx = arg1 + rd32(COW_IMG(0x103c01b0u) + ecx * 4u) & 0x8000007fu;
    }
    else
    {
        edx = arg1 + rd32(COW_IMG(0x103c01b0u) + ecx * 4u) & 0x8000007fu;
        edx = (edx - 1u | 0xffffff80u) + 1u;
    }
    t1 = rd32(arg4 + 8u);
    g->edx = edx;
    t2 = rd32(COW_IMG(0x103c01b0u) + edx * 4u);
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x102b4f30u), 1, t1);
    t3 = g->edx;
    d4 = cow_take_float(g);
    t5 = rd32(arg4);
    wrf32(sp0 + 0xcu, (float)d4);
    g->ecx = t5;
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x102b4f30u), 1, t5);
    t6 = g->ecx;
    d7 = cow_take_float(g);
    t8 = rd32(arg4 + 4u);
    d9 = fr(g, d7 * (double)rdf32(sp0 + 0xcu));
    wrf32(sp0 + 0xcu, (float)d9);
    g->esp = sp0 - 0x10u;
    cow_cdecl(g, COW_IMG(0x102b4f30u), 1, t8);
    d10 = cow_take_float(g);
    d11 = fr(g, fr(g, d10 * (double)rdf32(sp0 + 0xcu)) * fr(g, fr(g, fr(g, (double)rdf32(COW_IMG(0x103c03b8u) + t2 * 0xcu) * (double)rdf32(arg4 + 8u)) + fr(g, (double)rdf32(COW_IMG(0x103c03b0u) + t2 * 0xcu) * (double)rdf32(arg4))) + fr(g, (double)rdf32(COW_IMG(0x103c03b4u) + t2 * 0xcu) * (double)rdf32(arg4 + 4u))));
    fpush(g, d11);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102b4e80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102b4e80(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
