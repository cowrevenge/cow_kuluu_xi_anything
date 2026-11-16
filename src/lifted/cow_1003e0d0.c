/* f_0x1003e0d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_1003e0d0(Guest* g)
{
    double d10;
    double d15;
    double d2;
    double d6;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_8;
    uint32_t t1;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t16;
    uint32_t t17;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    t1 = rd8(self + 2u);
    d2 = fr(g, (double)(int32_t)t1 * (double)rdf32(rd32(sp0 + 8u)));
    if (!(d2 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (t1 & 0xffff0000u) | (uint16_t)cow_fsw(g, d2, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        edi = rd32(sp0 + 8u);
        loc_8 = t1;
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
        edi = rd32(sp0 + 8u);
        loc_8 = t1;
        x0 = d2;
        eax = 0u;
        edx = in_edx;
    }
    t5 = rd8(self + 1u);
    wr32(sp0 + 8u, t5);
    d6 = fr(g, (double)(int32_t)rd32(sp0 + 8u) * (double)rdf32(edi + 4u));
    if (!(d6 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        ecx = t5;
        loc_8 = (loc_8 & 0xff00ffffu) | (uint8_t)eax << 0x10u;
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
        loc_8 = (loc_8 & 0xff00ffffu) | (uint8_t)eax << 0x10u;
        x0 = d6;
        eax = 0u;
    }
    t9 = rd8(self);
    wr32(sp0 + 8u, t9);
    d10 = fr(g, (double)(int32_t)rd32(sp0 + 8u) * (double)rdf32(edi + 8u));
    if (!(d10 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        edx = t9;
        loc_8 = (loc_8 & 0xffff00ffu) | (uint8_t)eax << 8u;
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d10, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        x0 = d10;
        g->ecx = ecx;
        g->edx = edx;
        fpush(g, x0);
        g->esp = sp0 - 0x10u;
        t11 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
        t12 = g->ecx;
        t13 = g->edx;
        eax = (uint8_t)t11;
        ecx = t12;
        edx = t13;
    }
    else
    {
        edx = t9;
        loc_8 = (loc_8 & 0xffff00ffu) | (uint8_t)eax << 8u;
        x0 = d10;
        eax = 0u;
    }
    t14 = rd8(self + 3u);
    wr32(sp0 + 8u, t14);
    d15 = fr(g, (double)(int32_t)rd32(sp0 + 8u) * (double)rdf32(edi + 0xcu));
    if (!(d15 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        loc_8 = (loc_8 & 0xffffff00u) | (uint8_t)eax;
        eax = (t14 & 0xffff0000u) | (uint16_t)cow_fsw(g, d15, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        x0 = d15;
        goto L_1003e1a3;
    }
    loc_8 = (loc_8 & 0xffffff00u) | (uint8_t)eax;
    x0 = d15;
    wr32(arg1, loc_8 & 0xffffffu);
    return;
L_1003e1a3: ;
    fpush(g, x0);
    g->esp = sp0 - 8u;
    t16 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t17 = (loc_8 & 0xffffffu) | (uint8_t)t16 << 0x18u;
    wr32(arg1, t17);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1003e0d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1003e0d0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
