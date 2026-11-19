/* f_0x100c47f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100c47f0(Guest* g)
{
    double d12;
    double d13;
    double d14;
    double d15;
    double d16;
    double d17;
    double d23;
    double d24;
    double d25;
    double d26;
    double d27;
    double d28;
    double d29;
    double d30;
    double d31;
    double d32;
    double d33;
    double d34;
    double d35;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    double loc_1c_f;
    double loc_24_f;
    uint32_t loc_28;
    uint32_t loc_2c;
    uint32_t loc_30;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t3;
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
    uint32_t t44;
    uint32_t t45;
    uint32_t t46;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 72u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100c483eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x30u); in_ebp = rd32(sp0 - 0x2cu); in_ebx = rd32(sp0 - 0x28u); g->ebp = rd32(sp0 - 0x2cu); g->ebx = rd32(sp0 - 0x28u); g->esi = rd32(sp0 - 0x30u); goto E_100c483e;
    case 0x100c484cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x30u); in_ebp = rd32(sp0 - 0x2cu); in_ebx = rd32(sp0 - 0x28u); g->ebp = rd32(sp0 - 0x2cu); g->ebx = rd32(sp0 - 0x28u); g->esi = rd32(sp0 - 0x30u); goto E_100c484c;
    case 0x100c485au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x30u); in_ebp = rd32(sp0 - 0x2cu); in_ebx = rd32(sp0 - 0x28u); g->ebp = rd32(sp0 - 0x2cu); g->ebx = rd32(sp0 - 0x28u); g->esi = rd32(sp0 - 0x30u); goto E_100c485a;
    case 0x100c4894u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; in_edi = g->edi; loc_24_f = rdf32(sp0 - 0x24u); goto E_100c4894;
    case 0x100c489bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; in_edi = rd32(sp0 - 0x34u); loc_24_f = rdf32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x34u); goto E_100c489b;
    case 0x100c48d4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; in_edi = rd32(sp0 - 0x34u); loc_24_f = rdf32(sp0 - 0x24u); loc_1c_f = rdf32(sp0 - 0x1cu); g->edi = rd32(sp0 - 0x34u); goto E_100c48d4;
    case 0x100c48e2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; in_edi = rd32(sp0 - 0x34u); loc_24_f = rdf32(sp0 - 0x24u); loc_1c_f = rdf32(sp0 - 0x1cu); g->edi = rd32(sp0 - 0x34u); goto E_100c48e2;
    case 0x100c48f3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; in_edi = rd32(sp0 - 0x34u); loc_24_f = rdf32(sp0 - 0x24u); loc_1c_f = rdf32(sp0 - 0x1cu); g->edi = rd32(sp0 - 0x34u); goto E_100c48f3;
    case 0x100c4901u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; in_edi = rd32(sp0 - 0x34u); loc_24_f = rdf32(sp0 - 0x24u); loc_1c_f = rdf32(sp0 - 0x1cu); g->edi = rd32(sp0 - 0x34u); goto E_100c4901;
    case 0x100c493fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_24_f = rdf32(sp0 - 0x24u); goto E_100c493f;
    case 0x100c4940u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_24_f = rdf32(sp0 - 0x24u); goto E_100c4940;
    case 0x100c4955u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_24_f = rdf32(sp0 - 0x24u); goto E_100c4955;
    case 0x100c4967u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_24_f = rdf32(sp0 - 0x24u); goto E_100c4967;
    case 0x100c497au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_24_f = rdf32(sp0 - 0x24u); goto E_100c497a;
    case 0x100c498cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_24_f = rdf32(sp0 - 0x24u); goto E_100c498c;
    case 0x100c49a1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_24_f = rdf32(sp0 - 0x24u); goto E_100c49a1;
    case 0x100c49b3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_24_f = rdf32(sp0 - 0x24u); goto E_100c49b3;
    case 0x100c49c6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_24_f = rdf32(sp0 - 0x24u); goto E_100c49c6;
    case 0x100c49d8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_24_f = rdf32(sp0 - 0x24u); goto E_100c49d8;
    case 0x100c49edu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_24_f = rdf32(sp0 - 0x24u); goto E_100c49ed;
    case 0x100c49ffu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_24_f = rdf32(sp0 - 0x24u); goto E_100c49ff;
    case 0x100c4a16u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_24_f = rdf32(sp0 - 0x24u); goto E_100c4a16;
    case 0x100c4a2du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x30u); in_ebp = rd32(sp0 - 0x2cu); in_ebx = rd32(sp0 - 0x28u); g->ebp = rd32(sp0 - 0x2cu); g->ebx = rd32(sp0 - 0x28u); g->esi = rd32(sp0 - 0x30u); goto E_100c4a2d;
    case 0x100c4a37u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x30u); in_ebp = rd32(sp0 - 0x2cu); in_ebx = rd32(sp0 - 0x28u); g->ebp = rd32(sp0 - 0x2cu); g->ebx = rd32(sp0 - 0x28u); g->esi = rd32(sp0 - 0x30u); goto E_100c4a37;
    case 0x100c4a4eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; in_edi = g->edi; goto E_100c4a4e;
    case 0x100c4a53u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; in_edi = g->edi; goto E_100c4a53;
    case 0x100c4a60u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; in_edi = g->edi; goto E_100c4a60;
    case 0x100c4a6au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; in_edi = g->edi; goto E_100c4a6a;
    case 0x100c4a7cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; in_edi = g->edi; goto E_100c4a7c;
    case 0x100c4a83u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; in_edi = g->edi; loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); goto E_100c4a83;
    case 0x100c4ab3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24_f = rdf32(sp0 - 0x24u); goto E_100c4ab3;
    case 0x100c4ac7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24_f = rdf32(sp0 - 0x24u); goto E_100c4ac7;
    case 0x100c4ad1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24_f = rdf32(sp0 - 0x24u); goto E_100c4ad1;
    case 0x100c4adbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24_f = rdf32(sp0 - 0x24u); goto E_100c4adb;
    case 0x100c4af0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24_f = rdf32(sp0 - 0x24u); goto E_100c4af0;
    default: break;
    }
#endif

    COW_AT(100c47f0)
    wr32(sp0 - 0x28u, in_ebx);
    wr32(sp0 - 0x2cu, in_ebp);
    wr32(sp0 - 0x30u, in_esi);
    g->esp = sp0 - 0x30u;
    t1 = cow_call_regs(g, COW_IMG(0x100a57f0u), in_eax, self, g->edx, 1, 0);
    t2 = rd32(self + 0xd4u);
    wr32(self + 0x734u, t2);
    t3 = rd32(self + 0xd8u);
    t4 = rd32(self + 0x5c4u);
    wr32(self + 0x738u, t3);
    t5 = rd32(self + 0xdcu);
    wr32(self + 0x740u, 0x3f800000u);
    wr32(self + 0x73cu, t5);
    if (t4 == 0u)
    {
        ebx = (in_ebx & 0xffffff00u) | (uint8_t)t1;
        loc_28 = in_ebx;
        loc_2c = in_ebp;
        loc_30 = in_esi;
        goto L_100c4a83;
    }
    eax = t4;
    ebx = (in_ebx & 0xffffff00u) | (uint8_t)t1;
    COW_AT(100c483e)
    if (rd8(self + 0x779u) == 0u)
    {
        loc_28 = in_ebx;
        loc_2c = in_ebp;
        loc_30 = in_esi;
        goto L_100c4a83;
    }
    eax = (eax & 0xffffff00u) | rd8(self + 0x779u);
    COW_AT(100c484c)
    if (rd8(self + 0x778u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x778u);
        goto L_100c4a2d;
    }
    COW_AT(100c485a)
    t6 = rd32(self + 0xe4u);
    wr32(sp0 - 0x10u, t6);
    t7 = rd32(self + 0xe8u);
    wr32(sp0 - 0xcu, t7);
    t8 = rd32(self + 0xecu);
    wr32(sp0 - 8u, t8);
    g->ecx = t7;
    g->edx = t8;
    g->esp = sp0 - 0x30u;
    t9 = cow_call_regs(g, COW_IMG(0x10014cf0u), t6, g->ecx, g->edx, 1, 0);
    t10 = g->ecx;
    t11 = g->edx;
    d12 = cow_take_float(g);
    wrf32(sp0 - 0x24u, (float)(double)(float)d12);
    if ((cow_fsw(g, d12, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d12, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u;
        edx = t11;
        edi = in_edi;
    }
    else
    {
        eax = cow_fsw(g, d12, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u;
        ecx = t10;
        edx = t11;
        loc_24_f = (double)(float)d12;
    COW_AT(100c4894)
        wr32(sp0 - 0x34u, in_edi);
L_100c489b: ;
    COW_AT(100c489b)
        d13 = fr(g, (double)rdf32(sp0 - 0x10u) - (double)rdf32(self + 0x744u));
        wrf32(sp0 - 0x20u, (float)(double)(float)d13);
        d14 = fr(g, (double)rdf32(sp0 - 0xcu) - (double)rdf32(self + 0x748u));
        wrf32(sp0 - 0x1cu, (float)(double)(float)d14);
        d15 = fr(g, (double)rdf32(sp0 - 8u) - (double)rdf32(self + 0x74cu));
        wrf32(sp0 - 0x18u, (float)(double)(float)d15);
        if ((cow_fsw(g, (double)(float)d14, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, (double)(float)d14, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
            loc_1c_f = (double)(float)d14;
        }
        else
        {
            eax = cow_fsw(g, (double)(float)d14, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
            loc_1c_f = (double)(float)d14;
    COW_AT(100c48d4)
            d16 = fr(g, loc_1c_f - (double)rdf32(COW_IMG(0x10329d2cu)));
            wrf32(sp0 - 0x1cu, (float)(double)(float)d16);
            loc_1c_f = (double)(float)d16;
        }
    COW_AT(100c48e2)
        if (loc_1c_f < (double)rdf32(COW_IMG(0x10329d28u)))
        {
    COW_AT(100c48f3)
            d17 = fr(g, loc_1c_f + (double)rdf32(COW_IMG(0x10329d2cu)));
            wrf32(sp0 - 0x1cu, (float)(double)(float)d17);
        }
    COW_AT(100c4901)
        wr32(sp0 - 0x38u, 0x3e000000u);
        wr32(sp0 - 0x3cu, sp0 - 0x20u);
        g->eax = sp0 - 0x20u;
        g->edx = edx;
        g->esp = sp0 - 0x34u;
        t18 = cow_cdecl(g, COW_IMG(0x100272b0u), 2, sp0 - 0x20u, 0x3e000000u);
        t19 = g->edx;
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        wr32(sp0 - 0x44u, self + 0x744u);
        g->ecx = sp0 - 0x20u;
        g->edx = t19;
        g->esp = sp0 - 0x3cu;
        t20 = cow_cdecl(g, COW_IMG(0x10026f20u), 2, self + 0x744u, sp0 - 0x20u);
        t21 = g->ecx;
        t22 = g->edx;
        d23 = fr(g, (double)rdf32(sp0 - 0x24u) - (double)rdf32(COW_IMG(0x1032961cu)));
        wrf32(sp0 - 0x24u, (float)(double)(float)d23);
        if ((cow_fsw(g, d23, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u) == 0u)
        {
            eax = cow_fsw(g, d23, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u;
            ecx = t21;
            edx = t22;
            loc_24_f = (double)(float)d23;
            goto L_100c489b;
        }
        eax = cow_fsw(g, d23, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u;
        edx = t22;
    COW_AT(100c493f)
        edi = rd32(sp0 - 0x34u);
    }
    COW_AT(100c4940)
    d24 = (double)rdf32(self + 0x744u);
    if ((cow_fsw(g, d24, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d24, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    }
    else
    {
        eax = cow_fsw(g, d24, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    COW_AT(100c4955)
        d25 = fr(g, (double)rdf32(self + 0x744u) - (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(self + 0x744u, (float)d25);
    }
    COW_AT(100c4967)
    d26 = (double)rdf32(self + 0x744u);
    if (!(d26 < (double)rdf32(COW_IMG(0x10329d28u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d26, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d26, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    COW_AT(100c497a)
        d27 = fr(g, (double)rdf32(self + 0x744u) + (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(self + 0x744u, (float)d27);
    }
    COW_AT(100c498c)
    d28 = (double)rdf32(self + 0x748u);
    if ((cow_fsw(g, d28, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d28, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    }
    else
    {
        eax = cow_fsw(g, d28, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    COW_AT(100c49a1)
        d29 = fr(g, (double)rdf32(self + 0x748u) - (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(self + 0x748u, (float)d29);
    }
    COW_AT(100c49b3)
    d30 = (double)rdf32(self + 0x748u);
    if (!(d30 < (double)rdf32(COW_IMG(0x10329d28u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d30, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d30, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    COW_AT(100c49c6)
        d31 = fr(g, (double)rdf32(self + 0x748u) + (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(self + 0x748u, (float)d31);
    }
    COW_AT(100c49d8)
    d32 = (double)rdf32(self + 0x74cu);
    if ((cow_fsw(g, d32, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d32, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    }
    else
    {
        eax = cow_fsw(g, d32, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    COW_AT(100c49ed)
        d33 = fr(g, (double)rdf32(self + 0x74cu) - (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(self + 0x74cu, (float)d33);
    }
    COW_AT(100c49ff)
    d34 = (double)rdf32(self + 0x74cu);
    if (!(d34 < (double)rdf32(COW_IMG(0x10329d28u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d34, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_30 = rd32(sp0 - 0x30u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d34, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    COW_AT(100c4a16)
        d35 = fr(g, (double)rdf32(self + 0x74cu) + (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(self + 0x74cu, (float)d35);
        loc_28 = rd32(sp0 - 0x28u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_30 = rd32(sp0 - 0x30u);
    }
L_100c4ab3: ;
    COW_AT(100c4ab3)
    wr8(self + 0x779u, 1u);
    if (rd8(rd32(COW_IMG(0x104568fcu)) + 9u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(rd32(COW_IMG(0x104568fcu)) + 9u);
    }
    else
    {
        eax = (eax & 0xffffff00u) | rd8(rd32(COW_IMG(0x104568fcu)) + 9u);
        ecx = rd32(COW_IMG(0x104568fcu));
    COW_AT(100c4ac7)
        if (rd8(self + 0x103u) != 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(self + 0x103u);
        }
        else
        {
            eax = (eax & 0xffffff00u) | rd8(self + 0x103u);
    COW_AT(100c4ad1)
            if (rd8(self + 0x104u) != 0u)
            {
                eax = (eax & 0xffffff00u) | rd8(self + 0x104u);
            }
            else
            {
                eax = (eax & 0xffffff00u) | rd8(self + 0x104u);
    COW_AT(100c4adb)
                wr32(sp0 - 0x34u, self + 0x734u);
                wr32(sp0 - 0x38u, self + 0x34u);
                g->eax = eax;
                g->edx = self + 0x34u;
                g->esp = sp0 - 0x30u;
                t43 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, self + 0x34u, self + 0x734u);
                t44 = g->edx;
                wr32(sp0 - 0x34u, self + 0x734u);
                g->edx = t44;
                t45 = cow_thiscall(g, COW_IMG(0x100a57c0u), self, 1, self + 0x734u);
                t46 = g->edx;
                eax = t45;
                edx = t46;
                loc_28 = rd32(sp0 - 0x28u);
                loc_2c = rd32(sp0 - 0x2cu);
                loc_30 = rd32(sp0 - 0x30u);
            }
        }
    }
    COW_AT(100c4af0)
    g->ebx = loc_28;
    g->esi = loc_30;
    g->edi = edi;
    g->ebp = loc_2c;
    g->edx = edx;
    return (eax & 0xffffff00u) | (uint8_t)ebx;
L_100c4a2d: ;
    COW_AT(100c4a2d)
    if (rd8(self + 0x77au) != 0u)
    {
        loc_28 = in_ebx;
        loc_2c = in_ebp;
        loc_30 = in_esi;
    }
    else
    {
    COW_AT(100c4a37)
        wr32(sp0 - 0x34u, sp0 - 0x24u);
        g->edx = rd32(self);
        t36 = rd32(self);
        g->esp = sp0 - 0x30u;
        cow_thiscall(g, rd32(t36 + 0x1dcu), self, 1, sp0 - 0x24u);
        t37 = g->edx;
        if (rd32(sp0 - 0x24u) == 0u)
        {
            loc_28 = in_ebx;
            loc_2c = in_ebp;
            loc_30 = in_esi;
        }
        else
        {
            eax = rd32(sp0 - 0x24u);
            edx = t37;
    COW_AT(100c4a4e)
            if (rd32(eax) == 0u)
            {
                loc_28 = rd32(sp0 - 0x28u);
                loc_2c = rd32(sp0 - 0x2cu);
                loc_30 = rd32(sp0 - 0x30u);
            }
            else
            {
    COW_AT(100c4a53)
                g->eax = eax;
                g->esp = sp0 - 0x30u;
                t38 = cow_thiscall(g, COW_IMG(0x10071060u), sp0 - 0x24u, 0);
                if ((uint8_t)t38 == 0u)
                {
                    loc_28 = rd32(sp0 - 0x28u);
                    loc_2c = rd32(sp0 - 0x2cu);
                    loc_30 = rd32(sp0 - 0x30u);
                }
                else
                {
                    eax = t38;
    COW_AT(100c4a60)
                    if (rd16(self + 0xb2u) == 0u)
                    {
    COW_AT(100c4a6a)
                        wr32(sp0 - 0x34u, 0u);
                        wr32(sp0 - 0x38u, self);
                        wr32(sp0 - 0x3cu, 0x74696e69u);
                        g->esp = sp0 - 0x30u;
                        cow_thiscall(g, rd32(rd32(self) + 0x298u), self, 3, 0x74696e69u, self, 0u);
                    }
    COW_AT(100c4a7c)
                    wr8(self + 0x77au, 1u);
                    loc_28 = rd32(sp0 - 0x28u);
                    loc_2c = rd32(sp0 - 0x2cu);
                    loc_30 = rd32(sp0 - 0x30u);
                }
            }
        }
    }
L_100c4a83: ;
    COW_AT(100c4a83)
    t39 = rd32(self + 0xe4u);
    wr32(self + 0x744u, t39);
    t40 = rd32(self + 0xe8u);
    wr32(self + 0x748u, t40);
    t41 = rd32(self + 0xecu);
    wr32(self + 0x74cu, t41);
    t42 = rd32(self + 0xf0u);
    wr32(self + 0x750u, t42);
    eax = t42;
    edx = t41;
    edi = in_edi;
    goto L_100c4ab3;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100c47f0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100c483eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x30u);
        in_ebp = rd32(sp0 - 0x2cu);
        in_ebx = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x30u;
        g->ebp = self + 0x734u;
        (void)sp0;
        return 1;
    }
    case 0x100c484cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x30u);
        in_ebp = rd32(sp0 - 0x2cu);
        in_ebx = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x30u;
        g->ebp = self + 0x734u;
        (void)sp0;
        return 1;
    }
    case 0x100c485au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x30u);
        in_ebp = rd32(sp0 - 0x2cu);
        in_ebx = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x30u;
        g->ebp = self + 0x734u;
        (void)sp0;
        return 1;
    }
    case 0x100c4894u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        double loc_24_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        in_edi = g->edi;
        loc_24_f = rdf32(sp0 - 0x24u);
        g->esp = sp0 - 0x30u;
        g->ebp = self + 0x734u;
        (void)sp0;
        return 1;
    }
    case 0x100c489bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        double loc_24_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x34u);
        loc_24_f = rdf32(sp0 - 0x24u);
        g->esp = sp0 - 0x34u;
        g->ebp = self + 0x734u;
        g->edi = self + 0x744u;
        (void)sp0;
        return 1;
    }
    case 0x100c48d4u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        double loc_1c_f;
        double loc_24_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x34u);
        loc_24_f = rdf32(sp0 - 0x24u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        g->esp = sp0 - 0x34u;
        g->ebp = self + 0x734u;
        g->edi = self + 0x744u;
        (void)sp0;
        return 1;
    }
    case 0x100c48e2u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        double loc_1c_f;
        double loc_24_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x34u);
        loc_24_f = rdf32(sp0 - 0x24u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        g->esp = sp0 - 0x34u;
        g->ebp = self + 0x734u;
        g->edi = self + 0x744u;
        (void)sp0;
        return 1;
    }
    case 0x100c48f3u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        double loc_1c_f;
        double loc_24_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x34u);
        loc_24_f = rdf32(sp0 - 0x24u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        g->esp = sp0 - 0x34u;
        g->ebp = self + 0x734u;
        g->edi = self + 0x744u;
        (void)sp0;
        return 1;
    }
    case 0x100c4901u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        double loc_1c_f;
        double loc_24_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x34u);
        loc_24_f = rdf32(sp0 - 0x24u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        g->esp = sp0 - 0x34u;
        g->ebp = self + 0x734u;
        g->edi = self + 0x744u;
        (void)sp0;
        return 1;
    }
    case 0x100c493fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_24_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_24_f = rdf32(sp0 - 0x24u);
        g->esp = sp0 - 0x34u;
        g->ebp = self + 0x734u;
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        wr32(sp0 - 0x3cu, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x100c4940u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_24_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_24_f = rdf32(sp0 - 0x24u);
        g->esp = sp0 - 0x30u;
        g->ebp = self + 0x734u;
        (void)sp0;
        return 1;
    }
    case 0x100c4955u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_24_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_24_f = rdf32(sp0 - 0x24u);
        g->esp = sp0 - 0x30u;
        g->ebp = self + 0x734u;
        (void)sp0;
        return 1;
    }
    case 0x100c4967u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_24_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_24_f = rdf32(sp0 - 0x24u);
        g->esp = sp0 - 0x30u;
        g->ebp = self + 0x734u;
        (void)sp0;
        return 1;
    }
    case 0x100c497au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_24_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_24_f = rdf32(sp0 - 0x24u);
        g->esp = sp0 - 0x30u;
        g->ebp = self + 0x734u;
        (void)sp0;
        return 1;
    }
    case 0x100c498cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_24_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_24_f = rdf32(sp0 - 0x24u);
        g->esp = sp0 - 0x30u;
        g->ebp = self + 0x734u;
        (void)sp0;
        return 1;
    }
    case 0x100c49a1u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_24_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_24_f = rdf32(sp0 - 0x24u);
        g->esp = sp0 - 0x30u;
        g->ebp = self + 0x734u;
        (void)sp0;
        return 1;
    }
    case 0x100c49b3u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_24_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_24_f = rdf32(sp0 - 0x24u);
        g->esp = sp0 - 0x30u;
        g->ebp = self + 0x734u;
        (void)sp0;
        return 1;
    }
    case 0x100c49c6u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_24_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_24_f = rdf32(sp0 - 0x24u);
        g->esp = sp0 - 0x30u;
        g->ebp = self + 0x734u;
        (void)sp0;
        return 1;
    }
    case 0x100c49d8u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_24_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_24_f = rdf32(sp0 - 0x24u);
        g->esp = sp0 - 0x30u;
        g->ebp = self + 0x734u;
        (void)sp0;
        return 1;
    }
    case 0x100c49edu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_24_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_24_f = rdf32(sp0 - 0x24u);
        g->esp = sp0 - 0x30u;
        g->ebp = self + 0x734u;
        (void)sp0;
        return 1;
    }
    case 0x100c49ffu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_24_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_24_f = rdf32(sp0 - 0x24u);
        g->esp = sp0 - 0x30u;
        g->ebp = self + 0x734u;
        (void)sp0;
        return 1;
    }
    case 0x100c4a16u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_24_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_24_f = rdf32(sp0 - 0x24u);
        g->esp = sp0 - 0x30u;
        g->ebp = self + 0x734u;
        (void)sp0;
        return 1;
    }
    case 0x100c4a2du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x30u);
        in_ebp = rd32(sp0 - 0x2cu);
        in_ebx = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x30u;
        g->ebp = self + 0x734u;
        (void)sp0;
        return 1;
    }
    case 0x100c4a37u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x30u);
        in_ebp = rd32(sp0 - 0x2cu);
        in_ebx = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x30u;
        g->ebp = self + 0x734u;
        (void)sp0;
        return 1;
    }
    case 0x100c4a4eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x30u;
        g->ebp = self + 0x734u;
        wr32(sp0 - 0x34u, sp0 - 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x100c4a53u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x30u;
        g->ebp = self + 0x734u;
        wr32(sp0 - 0x34u, sp0 - 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x100c4a60u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x30u;
        g->ebp = self + 0x734u;
        wr32(sp0 - 0x34u, sp0 - 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x100c4a6au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x30u;
        g->ebp = self + 0x734u;
        wr32(sp0 - 0x34u, sp0 - 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x100c4a7cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x30u;
        g->ebp = self + 0x734u;
        (void)sp0;
        return 1;
    }
    case 0x100c4a83u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        in_edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x30u;
        g->ebp = self + 0x734u;
        (void)sp0;
        return 1;
    }
    case 0x100c4ab3u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_24_f;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24_f = rdf32(sp0 - 0x24u);
        g->esp = sp0 - 0x30u;
        g->ebp = self + 0x734u;
        (void)sp0;
        return 1;
    }
    case 0x100c4ac7u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_24_f;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24_f = rdf32(sp0 - 0x24u);
        g->esp = sp0 - 0x30u;
        g->ebp = self + 0x734u;
        (void)sp0;
        return 1;
    }
    case 0x100c4ad1u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_24_f;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24_f = rdf32(sp0 - 0x24u);
        g->esp = sp0 - 0x30u;
        g->ebp = self + 0x734u;
        (void)sp0;
        return 1;
    }
    case 0x100c4adbu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_24_f;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24_f = rdf32(sp0 - 0x24u);
        g->esp = sp0 - 0x30u;
        g->ebp = self + 0x734u;
        (void)sp0;
        return 1;
    }
    case 0x100c4af0u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double loc_24_f;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24_f = rdf32(sp0 - 0x24u);
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100c47f0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100c47f0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
