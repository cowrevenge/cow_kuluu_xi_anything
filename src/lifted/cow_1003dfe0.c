/* f_0x1003dfe0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_1003dfe0(Guest* g)
{
    double d14;
    double d2;
    double d6;
    double d9;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_8;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t15;
    uint32_t t16;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t7;
    uint32_t t8;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    t1 = rd8(self + 2u);
    d2 = fr(g, (double)(int32_t)t1 * (double)rdf32(sp0 + 8u));
    if (!(d2 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (t1 & 0xffff0000u) | (uint16_t)cow_fsw(g, d2, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        x0 = d2;
        g->edx = in_edx;
        fpush(g, x0);
        g->esp = sp0 - 0x10u;
        t3 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
        t4 = g->edx;
        eax = (uint8_t)t3;
        edx = t4;
    }
    else
    {
        x0 = d2;
        eax = 0u;
        edx = in_edx;
    }
    t5 = rd8(self + 1u);
    d6 = fr(g, (double)(int32_t)t5 * (double)rdf32(sp0 + 8u));
    if (!(d6 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        ecx = t5;
        loc_8 = (rd32(sp0 - 8u) & 0xff00ffffu) | (uint8_t)eax << 0x10u;
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d6, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        x0 = d6;
        g->ecx = ecx;
        fpush(g, x0);
        g->esp = sp0 - 0x10u;
        t7 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
        t8 = g->ecx;
        eax = (uint8_t)t7;
        ecx = t8;
    }
    else
    {
        ecx = t5;
        loc_8 = (rd32(sp0 - 8u) & 0xff00ffffu) | (uint8_t)eax << 0x10u;
        x0 = d6;
        eax = 0u;
    }
    d9 = fr(g, (double)(int32_t)rd8(self) * (double)rdf32(sp0 + 8u));
    if (!(d9 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        edx = rd8(self);
        loc_8 = (loc_8 & 0xffff00ffu) | (uint8_t)eax << 8u;
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d9, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        x0 = d9;
        g->ecx = ecx;
        g->edx = edx;
        fpush(g, x0);
        g->esp = sp0 - 0x10u;
        t10 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
        t11 = g->ecx;
        t12 = g->edx;
        eax = (uint8_t)t10;
        ecx = t11;
        edx = t12;
    }
    else
    {
        edx = rd8(self);
        loc_8 = (loc_8 & 0xffff00ffu) | (uint8_t)eax << 8u;
        x0 = d9;
        eax = 0u;
    }
    t13 = rd8(self + 3u);
    d14 = fr(g, (double)(int32_t)t13 * (double)rdf32(sp0 + 8u));
    if (!(d14 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        loc_8 = (loc_8 & 0xffffff00u) | (uint8_t)eax;
        eax = (t13 & 0xffff0000u) | (uint16_t)cow_fsw(g, d14, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        x0 = d14;
        goto L_1003e0b2;
    }
    loc_8 = (loc_8 & 0xffffff00u) | (uint8_t)eax;
    x0 = d14;
    wr32(arg1, loc_8 & 0xffffffu);
    return;
L_1003e0b2: ;
    fpush(g, x0);
    g->esp = sp0 - 0xcu;
    t15 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t16 = (loc_8 & 0xffffffu) | (uint8_t)t15 << 0x18u;
    wr32(arg1, t16);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1003dfe0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1003dfe0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
