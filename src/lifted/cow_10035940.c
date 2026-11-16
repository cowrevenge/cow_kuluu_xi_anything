/* f_0x10035940 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10035940(Guest* g)
{
    double d10;
    double d4;
    double d5;
    double d6;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    double loc_4_f;
    uint32_t t1;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t3;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;

    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_call_regs(g, COW_IMG(0x10014cf0u), in_eax, g->ecx, g->edx, 1, 0);
    t2 = g->ecx;
    t3 = g->edx;
    d4 = cow_take_float(g);
    d5 = fr(g, (double)rdf32(self + 0x38u) - d4);
    d6 = (double)rdf32(COW_IMG(0x103295d8u));
    wrf32(self + 0x38u, (float)d5);
    if (!(d5 < d6))
    {
        ecx = t2;
        edx = t3;
        x0 = d5;
        goto L_1003596c;
    }
    edx = t3;
    x0 = d5;
    g->eax = rd32(self);
    g->edx = edx;
    t7 = rd32(self);
    g->esp = sp0 - 8u;
    t8 = cow_thiscall(g, rd32(t7 + 0x18u), self, 1, 1u);
    t9 = g->edx;
    g->edx = t9;
    return (t8 & 0xffffff00u) | 1u;
L_1003596c: ;
    d10 = (double)(float)fr(g, fr(g, fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - fr(g, x0 / (double)rdf32(self + 0x3cu))) * fr(g, (double)rdf32(self + 0x44u) - (double)rdf32(self + 0x40u))) + (double)rdf32(self + 0x40u));
    if (rd32(self + 0x34u) - 1u > 7u)
    {
        eax = rd32(self + 0x34u) - 1u;
        loc_4_f = d10;
        goto L_100359d9;
    }
    eax = rd32(self + 0x34u) - 1u;
    loc_4_f = d10;
    t11 = rd32(COW_IMG(0x100359e0u) + eax * 4u);
    switch (t11 - RD)
    {
    case 0x10035996u: goto L_10035996;
    case 0x100359a8u: goto L_100359a8;
    case 0x100359bau: goto L_100359ba;
    case 0x100359ccu: goto L_100359cc;
    case 0x100359d9u: goto L_100359d9;
    default: rt_fatal(g, COW_IMG(0x1003598fu), "switch");
    }
    return 0;
L_10035996: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t18 = cow_cdecl(g, COW_IMG(0x100360a0u), 1, cow_f2bits(loc_4_f));
    t19 = g->edx;
    g->edx = t19;
    return t18 & 0xffffff00u;
L_100359a8: ;
    g->eax = eax;
    g->edx = cow_f2bits(loc_4_f);
    g->esp = sp0 - 8u;
    t16 = cow_cdecl(g, COW_IMG(0x10036050u), 1, cow_f2bits(loc_4_f));
    t17 = g->edx;
    g->edx = t17;
    return t16 & 0xffffff00u;
L_100359ba: ;
    g->eax = cow_f2bits(loc_4_f);
    g->edx = edx;
    g->esp = sp0 - 8u;
    t14 = cow_cdecl(g, COW_IMG(0x10035fb0u), 1, cow_f2bits(loc_4_f));
    t15 = g->edx;
    g->edx = t15;
    return t14 & 0xffffff00u;
L_100359cc: ;
    g->edx = edx;
    g->esp = sp0;
    t12 = cow_call_regs(g, COW_IMG(0x100360f0u), eax, cow_f2bits(loc_4_f), g->edx, 1, 3, cow_f2bits(loc_4_f), in_esi, cow_f2bits(loc_4_f));
    t13 = g->edx;
    eax = t12;
    edx = t13;
L_100359d9: ;
    g->edx = edx;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10035940(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10035940(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
