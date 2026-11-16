/* f_0x101c7980 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_101c7980(Guest* g)
{
    double d12;
    double d4;
    double d8;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t13;
    uint32_t t14;
    uint32_t t2;
    uint32_t t3;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    t1 = rd32(rd32(self + 0xcu) + rd32(rd32(sp0 + 4u)) * 4u);
    t2 = (uint8_t)(t1 >> 8u) * 2u;
    t3 = (uint8_t)(t1 >> 0x10u) * 2u;
    eax = (uint8_t)t1 * 2u;
    edx = rd32(self + 0xcu);
    ebp = t3;
    esi = 1u;
    edi = t2;
    loc_4 = t1;
L_101c79bb: ;
    if ((int32_t)rd32(esi * 4u + rd32(sp0 + 4u)) >= 0)
    {
        ecx = rd32(esi * 4u + rd32(sp0 + 4u));
        ecx = rd32(ecx * 4u + edx);
    }
    else
    {
        ecx = loc_4;
    }
    if ((int32_t)(esi + 1u) < 5)
    {
        eax = eax + (uint8_t)ecx;
        ebp = ebp + (uint8_t)(ecx >> 0x10u);
        esi = esi + 1u;
        edi = edi + (uint8_t)(ecx >> 8u);
        goto L_101c79bb;
    }
    eax = eax + (uint8_t)ecx;
    ebp = ebp + (uint8_t)(ecx >> 0x10u);
    edi = edi + (uint8_t)(ecx >> 8u);
    ecx = (uint8_t)(ecx >> 0x10u);
    wr32(sp0 + 4u, eax);
    g->ecx = ecx;
    g->edx = edx;
    d4 = fr(g, fr(g, (double)(int32_t)rd32(sp0 + 4u) * (double)rdf32(COW_IMG(0x10337d24u))) + (double)rdf32(COW_IMG(0x10329a08u)));
    fpush(g, d4);
    g->esp = sp0 - 0x18u;
    t5 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t6 = g->ecx;
    t7 = g->edx;
    if ((int32_t)t5 <= 255)
    {
        eax = t5;
        ecx = t6;
        edx = t7;
        esi = t5;
        loc_8 = ebp;
        loc_4 = edi;
    }
    else
    {
        eax = t5;
        ecx = t6;
        edx = t7;
        loc_8 = ebp;
        loc_4 = edi;
        esi = 0xffu;
    }
    g->ecx = ecx;
    g->edx = edx;
    d8 = fr(g, fr(g, (double)(int32_t)loc_4 * (double)rdf32(COW_IMG(0x10337d24u))) + (double)rdf32(COW_IMG(0x10329a08u)));
    fpush(g, d8);
    g->esp = sp0 - 0x18u;
    t9 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t10 = g->ecx;
    t11 = g->edx;
    if ((int32_t)t9 <= 255)
    {
        eax = t9;
        ecx = t10;
        edx = t11;
        ebx = t9;
    }
    else
    {
        eax = t9;
        ecx = t10;
        edx = t11;
        ebx = 0xffu;
    }
    d12 = fr(g, fr(g, (double)(int32_t)loc_8 * (double)rdf32(COW_IMG(0x10337d24u))) + (double)rdf32(COW_IMG(0x10329a08u)));
    fpush(g, d12);
    g->esp = sp0 - 0x18u;
    t13 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    if ((int32_t)t13 <= 255)
    {
        eax = t13;
    }
    else
    {
        eax = 0xffu;
    }
    t14 = ((uint8_t)eax << 8u | (uint8_t)ebx) << 8u | (uint8_t)esi;
    return t14;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101c7980(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101c7980(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
