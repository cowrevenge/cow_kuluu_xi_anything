/* f_0x100368b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100368b0(Guest* g)
{
    double d20;
    double d24;
    double d28;
    double d32;
    double d4;
    double d5;
    double d8;
    double d9;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
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
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 32u);

    wr32(sp0 - 0x14u, in_esi);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    t1 = cow_call_regs(g, COW_IMG(0x10014cf0u), in_eax, g->ecx, g->edx, 1, 0);
    t2 = g->ecx;
    t3 = g->edx;
    d4 = cow_take_float(g);
    d5 = fr(g, (double)rdf32(self + 0x110u) - d4);
    if (!(d5 < (double)rdf32(COW_IMG(0x1032961cu))))
    {
        ecx = t2;
        edx = t3;
    }
    else
    {
        eax = (t1 & 0xffff0000u) | (uint16_t)cow_fsw(g, d5, (double)rdf32(COW_IMG(0x1032961cu)), 0u);
        ecx = t2;
        edx = t3;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
        t6 = g->ecx;
        t7 = g->edx;
        d8 = cow_take_float(g);
        d9 = fr(g, d8 + (double)rdf32(COW_IMG(0x1032961cu)));
        wrf32(self + 0x110u, (float)d9);
        ecx = t6;
        edx = t7;
    }
    if (rd32(self + 0xfcu) == 0u) goto L_100368fb;
    eax = rd32(self + 0xfcu);
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t10 = cow_fastcall(g, COW_IMG(0x10044ae0u), self, edx, 0);
    t11 = g->ecx;
    t12 = g->edx;
    if ((uint8_t)t10 == 0u)
    {
        ecx = t11;
        edx = t12;
        goto L_100368fb;
    }
    eax = t10;
    edx = t12;
    g->esi = rd32(sp0 - 0x14u);
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_100368fb: ;
    t13 = rd32(self + 0x198u);
    wr32(self + 0x138u, 0u);
    if (t13 == 0u)
    {
        eax = t13;
    }
    else
    {
        eax = t13;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t14 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
        t15 = g->edx;
        wr32(sp0 - 0x18u, t14 + 0x60u);
        wr32(sp0 - 0x1cu, sp0 - 0x10u);
        g->eax = sp0 - 0x10u;
        g->edx = t15;
        t16 = rd32(self + 0x198u);
        t17 = cow_thiscall(g, COW_IMG(0x10056160u), t16 + 0x30u, 2, sp0 - 0x10u, t14 + 0x60u);
        t18 = g->ecx;
        t19 = g->edx;
        d20 = cow_take_float(g);
        g->ecx = t18;
        g->edx = t19;
        t21 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
        t22 = g->ecx;
        t23 = g->edx;
        d24 = (double)(float)fr(g, (double)rdf32(sp0 - 0x10u) + (double)rdf32(t21 + 0x60u));
        wrf32(sp0 - 0x10u, (float)d24);
        g->ecx = t22;
        g->edx = t23;
        t25 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
        t26 = g->ecx;
        t27 = g->edx;
        d28 = (double)(float)fr(g, (double)rdf32(sp0 - 0xcu) + (double)rdf32(t25 + 0x64u));
        wrf32(sp0 - 0xcu, (float)d28);
        t29 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
        t30 = rd32(sp0 - 0x10u);
        t31 = rd32(sp0 - 0xcu);
        d32 = fr(g, (double)rdf32(sp0 - 8u) + (double)rdf32(t29 + 0x68u));
        wr32(self + 0x54u, t30);
        wr32(self + 0x58u, t31);
        wrf32(self + 0x5cu, (float)d32);
        eax = t29;
        edx = t31;
    }
    g->edx = edx;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100368b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100368b0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
