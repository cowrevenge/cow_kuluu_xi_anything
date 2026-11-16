/* f_0x101eef90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_101eef90(Guest* g)
{
    double d13;
    double d14;
    double d21;
    double d22;
    double d7;
    double d8;
    uint32_t eax;
    uint32_t ecx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t23;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd32(sp0 + 4u) == 0u)
    {
        loc_4 = self;
        goto L_101ef08e;
    }
    esi = rd32(sp0 + 4u);
    t1 = rd8(esi + 5u);
    wr32(sp0 + 4u, t1);
    if (!(rd16(esi) & 1u))
    {
        eax = (t1 & 0xffff0000u) | rd16(esi);
        goto L_101ef05f;
    }
    eax = (t1 & 0xffff0000u) | rd16(esi);
    if ((eax & 0x2400u) == 0u)
    {
        ecx = eax & 0x2400u;
        goto L_101ef008;
    }
    ecx = eax & 0x2400u;
    t2 = rd32(sp0 + 4u);
    wrf32(sp0 + 4u, (float)(double)(int32_t)t2);
    t3 = ((-((eax & 0x2000u) != 0u) & 0xffffff00u) | (-((eax & 0x2000u) != 0u) & 0xf7u)) + 0xcu;
    g->ecx = ecx;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t4 = cow_call_regs(g, COW_IMG(0x10014cf0u), t3, g->ecx, g->edx, 1, 0);
    t5 = g->ecx;
    t6 = g->edx;
    d7 = cow_take_float(g);
    d8 = fr(g, (double)rdf32(sp0 + 4u) - fr(g, fr(g, d7 * (double)rdf32(COW_IMG(0x10329a08u))) * (double)(int32_t)t3));
    fpush(g, d8);
    t9 = cow_call_regs(g, COW_IMG(0x10311c6cu), t4, g->ecx, g->edx, 1, 0);
    if ((int32_t)t9 >= 0)
    {
        eax = t9;
        loc_4 = t3;
        goto L_101ef08b;
    }
    loc_4 = t3;
    wr8(esi + 1u, rd8(esi + 1u) & 0xdbu);
    wr8(esi + 5u, 0u);
    return;
L_101ef008: ;
    g->ecx = ecx;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t10 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
    t11 = g->ecx;
    t12 = g->edx;
    d13 = cow_take_float(g);
    g->ecx = t11;
    d14 = fr(g, fr(g, fr(g, d13 * (double)rdf32(COW_IMG(0x10329a08u))) * (double)rdf32(COW_IMG(0x1033a058u))) + (double)(int32_t)rd32(sp0 + 4u));
    fpush(g, d14);
    t15 = cow_call_regs(g, COW_IMG(0x10311c6cu), t10, g->ecx, g->edx, 1, 0);
    t16 = g->ecx;
    if ((int32_t)t15 <= 128)
    {
        eax = t15;
        loc_4 = self;
        goto L_101ef08b;
    }
    ecx = t16;
    if ((rd16(esi) & 4u) == 0u)
    {
        ecx = (ecx & 0xffff0000u) | rd16(esi);
        goto L_101ef044;
    }
    ecx = (ecx & 0xffff0000u) | rd16(esi);
    wr8(esi + 5u, 0x80u);
    wr16(esi, (uint16_t)((ecx & 0xffff00ffu) | (ecx >> 8u | 4u) << 8u));
    return;
L_101ef044: ;
    if ((ecx & 0x1000u) == 0u)
    {
        eax = 0x80u;
        loc_4 = self;
        goto L_101ef08b;
    }
    wr8(esi + 5u, 0x80u);
    wr16(esi, (uint16_t)((ecx & 0xffff00ffu) | (ecx >> 8u | 0x20u) << 8u));
    return;
L_101ef05f: ;
    t17 = rd32(sp0 + 4u);
    wrf32(sp0 + 4u, (float)(double)(int32_t)t17);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t18 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
    t19 = g->ecx;
    t20 = g->edx;
    d21 = cow_take_float(g);
    d22 = fr(g, (double)rdf32(sp0 + 4u) - fr(g, fr(g, d21 * (double)rdf32(COW_IMG(0x10329a08u))) * (double)rdf32(COW_IMG(0x1033a058u))));
    fpush(g, d22);
    t23 = cow_call_regs(g, COW_IMG(0x10311c6cu), t18, g->ecx, g->edx, 1, 0);
    if ((int32_t)t23 >= 0)
    {
        eax = t23;
        loc_4 = self;
    }
    else
    {
        wr8(esi + 1u, rd8(esi + 1u) & 0xfbu);
        eax = 0u;
        loc_4 = self;
    }
L_101ef08b: ;
    wr8(esi + 5u, (uint8_t)eax);
L_101ef08e: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101eef90(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101eef90(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
