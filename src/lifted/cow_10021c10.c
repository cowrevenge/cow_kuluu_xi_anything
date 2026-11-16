/* f_0x10021c10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10021c10(Guest* g)
{
    double d21;
    double d22;
    double d7;
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
    uint32_t t20;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 228u);

    wr32(sp0 - 0xc4u, in_ebx);
    wr32(sp0 - 0xc8u, in_esi);
    wr32(sp0 - 0xccu, in_edi);
    wr32(sp0 - 0xd0u, self + 0x50u);
    wr32(sp0 - 0xd4u, sp0 - 0x90u);
    g->eax = sp0 - 0x90u;
    g->edx = in_edx;
    g->esp = sp0 - 0xccu;
    t1 = cow_cdecl(g, COW_IMG(0x10026eb0u), 2, sp0 - 0x90u, self + 0x50u);
    t2 = g->edx;
    wr32(sp0 - 0xd8u, self + 0x44u);
    wr32(sp0 - 0xdcu, self + 0x50u);
    wr32(sp0 - 0xe0u, sp0 - 0xc0u);
    g->edx = t2;
    g->esp = sp0 - 0xd4u;
    cow_cdecl(g, COW_IMG(0x10027120u), 3, sp0 - 0xc0u, self + 0x50u, self + 0x44u);
    t3 = g->edx;
    g->edx = t3;
    g->esp = sp0 - 0xccu;
    t4 = cow_thiscall(g, COW_IMG(0x10027990u), sp0 - 0x80u, 0);
    t5 = g->edx;
    cow_thiscall(g, COW_IMG(0x100279b0u), sp0 - 0x80u, 0);
    t6 = rd32(self + 0x5cu);
    wr32(sp0 - 0xa8u, t6);
    wr32(sp0 - 0xd0u, t6);
    d7 = (double)(float)fr(g, atan2(-(double)rdf32(sp0 - 0xc0u), -(double)rdf32(sp0 - 0xb8u)));
    wrf32(sp0 - 0xacu, (float)d7);
    g->eax = t6;
    g->edx = t6;
    t8 = cow_thiscall(g, COW_IMG(0x10027c20u), sp0 - 0x80u, 1, t6);
    t9 = g->edx;
    t10 = rd32(sp0 - 0xacu);
    wr32(sp0 - 0xd0u, t10);
    g->edx = t9;
    t11 = cow_thiscall(g, COW_IMG(0x10027bd0u), sp0 - 0x80u, 1, t10);
    t12 = g->edx;
    wr32(sp0 - 0xd0u, 0u);
    cow_thiscall(g, COW_IMG(0x10027b80u), sp0 - 0x80u, 1, 0u);
    t13 = g->ecx;
    wr32(sp0 - 0xd0u, self + 0xa8u);
    wr32(sp0 - 0xd4u, sp0 - 0xa0u);
    g->eax = sp0 - 0xa0u;
    g->edx = self + 0xa8u;
    t14 = cow_cdecl(g, COW_IMG(0x10026eb0u), 2, sp0 - 0xa0u, self + 0xa8u);
    t15 = g->edx;
    wr32(sp0 - 0xd0u, sp0 - 0xa0u);
    t16 = cow_thiscall(g, COW_IMG(0x10028290u), sp0 - 0x80u, 1, sp0 - 0xa0u);
    t17 = g->ecx;
    wr32(sp0 - 0xd0u, sp0 - 0xc0u);
    g->ecx = t17;
    g->edx = sp0 - 0xc0u;
    t18 = cow_call_regs(g, COW_IMG(0x100274b0u), t16, g->ecx, g->edx, 1, 1, sp0 - 0xc0u);
    t19 = g->ecx;
    t20 = g->edx;
    d21 = (double)rdf32(self + 0x7cu);
    if (d21 == (double)rdf32(COW_IMG(0x103295d8u)))
    {
        eax = (t18 & 0xffff0000u) | (uint16_t)cow_fsw(g, d21, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    }
    else
    {
        ecx = t19;
        edx = t20;
        wr32(sp0 - 0xd0u, sp0 - 0xc0u);
        d22 = (double)(float)fr(g, fr(g, (double)rdf32(self + 0x84u) * (double)rdf32(self + 0x7cu)) + (double)rdf32(sp0 - 0xbcu));
        wrf32(sp0 - 0xbcu, (float)d22);
        g->esp = sp0 - 0xccu;
        t23 = cow_call_regs(g, COW_IMG(0x100274b0u), sp0 - 0xc0u, g->ecx, g->edx, 1, 1, sp0 - 0xc0u);
        eax = t23;
    }
    wr32(sp0 - 0xd0u, sp0 - 0xc0u);
    wr32(sp0 - 0xd4u, self + 0x44u);
    wr32(sp0 - 0xd8u, sp0 - 0x90u);
    g->esp = sp0 - 0xccu;
    cow_cdecl(g, COW_IMG(0x10026fa0u), 3, sp0 - 0x90u, self + 0x44u, sp0 - 0xc0u);
    wr32(sp0 - 0xd0u, sp0 - 0xa0u);
    wr32(sp0 - 0xd4u, sp0 - 0x90u);
    wr32(sp0 - 0xd8u, self + 0x44u);
    wr32(sp0 - 0xdcu, sp0 - 0x40u);
    g->ecx = sp0 - 0x90u;
    g->edx = sp0 - 0x40u;
    cow_stdcall(g, COW_IMG(0x102d8019u), 4, sp0 - 0x40u, self + 0x44u, sp0 - 0x90u, sp0 - 0xa0u);
    t24 = g->ecx;
    t25 = g->edx;
    wr32(sp0 - 0xd0u, sp0 - 0x40u);
    g->edx = t25;
    g->esp = sp0 - 0xbcu;
    t26 = cow_cdecl(g, COW_IMG(0x1006ca60u), 5, sp0 - 0x40u, in_edi, in_esi, in_ebx, rd32(sp0 - 0xc0u));
    t27 = g->edx;
    if ((uint8_t)t26 == 0u)
    {
        eax = t26;
        edx = t27;
    }
    else
    {
        eax = t26;
        edx = t27;
        wr32(sp0 - 0xd0u, sp0 - 0x40u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xccu;
        t28 = cow_thiscall(g, COW_IMG(0x100279f0u), self + 4u, 1, sp0 - 0x40u);
        t29 = g->edx;
        eax = t28;
        edx = t29;
    }
    g->esp = sp0 - 0xccu;
    cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    g->ebx = rd32(sp0 - 0xc4u);
    g->esi = rd32(sp0 - 0xc8u);
    g->edi = rd32(sp0 - 0xccu);
    return self + 4u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10021c10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10021c10(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
