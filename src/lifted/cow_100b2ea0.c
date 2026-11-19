/* f_0x100b2ea0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100b2ea0(Guest* g)
{
    double d10;
    double d11;
    double d12;
    double d13;
    double d14;
    double d17;
    double d18;
    double d2;
    double d21;
    double d22;
    double d23;
    double d24;
    double d25;
    double d26;
    double d3;
    double d32;
    double d36;
    double d38;
    double d4;
    double d45;
    double d7;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    double loc_10_f;
    double loc_14_f;
    double loc_18_f;
    uint32_t loc_1c;
    double loc_c_f;
    uint32_t t1;
    uint32_t t15;
    uint32_t t16;
    uint32_t t19;
    uint32_t t20;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t30;
    uint32_t t31;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t37;
    uint32_t t39;
    uint32_t t40;
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
    uint32_t t44;
    uint32_t t5;
    uint32_t t6;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 52u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100b2ec3u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x1cu); goto E_100b2ec3;
    case 0x100b2ecau: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x1cu); goto E_100b2eca;
    case 0x100b2f3eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); loc_14_f = rdf32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); g->esi = rd32(sp0 - 0x1cu); goto E_100b2f3e;
    case 0x100b2f6eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; goto E_100b2f6e;
    case 0x100b300cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); loc_14_f = rdf32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); g->esi = rd32(sp0 - 0x1cu); goto E_100b300c;
    case 0x100b3068u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); loc_14_f = rdf32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); goto E_100b3068;
    case 0x100b30a7u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x1cu); goto E_100b30a7;
    case 0x100b3136u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); loc_14_f = rdf32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); goto E_100b3136;
    case 0x100b314bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); loc_14_f = rdf32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); goto E_100b314b;
    case 0x100b316fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); loc_14_f = rdf32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); goto E_100b316f;
    case 0x100b31adu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); loc_14_f = rdf32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); goto E_100b31ad;
    case 0x100b31c2u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); loc_14_f = rdf32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); goto E_100b31c2;
    case 0x100b31d0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; goto E_100b31d0;
    case 0x100b31d4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; goto E_100b31d4;
    case 0x100b31e4u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); loc_14_f = rdf32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); goto E_100b31e4;
    default: break;
    }
#endif

    COW_AT(100b2ea0)
    wr32(sp0 - 0x1cu, in_esi);
    t1 = rd8(rd16(self + 0x256u) + rd32(self + 0x20u) + 1u);
    if (t1 == 0u)
    {
        eax = t1;
        edx = t1;
    COW_AT(100b30a7)
        g->eax = eax;
        g->esp = sp0 - 0x1cu;
        t28 = cow_fastcall(g, COW_IMG(0x1008af20u), rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u), edx, 0);
        t29 = g->edx;
        wr32(sp0 - 0x20u, 2u);
        t30 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 2u);
        wr32(sp0 - 4u, t30);
        wr32(sp0 - 0x20u, 4u);
        t31 = rd16(self + 0x258u);
        d32 = fr(g, (double)(int32_t)t30 * (double)rdf32(COW_IMG(0x1032a22cu)));
        wrf32(self + t31 * 0x20u + 0x28u, (float)d32);
        g->edx = t31 << 5u;
        t33 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 4u);
        t34 = g->edx;
        wr32(sp0 - 4u, t33);
        wr32(sp0 - 0x20u, 6u);
        t35 = rd16(self + 0x258u);
        d36 = fr(g, (double)(int32_t)t33 * (double)rdf32(COW_IMG(0x1032a22cu)));
        wrf32(self + t35 * 0x20u + 0x30u, (float)d36);
        g->eax = t35 << 5u;
        t37 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 6u);
        wr32(sp0 - 4u, t37);
        d38 = fr(g, (double)(int32_t)t37 * (double)rdf32(COW_IMG(0x1032a22cu)));
        wrf32(self + rd16(self + 0x258u) * 0x20u + 0x2cu, (float)d38);
        wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 8u));
        loc_1c = in_esi;
        loc_18_f = (double)rdf32(sp0 - 0x18u);
    }
    else
    {
        eax = t1;
    COW_AT(100b2ec3)
        if (eax != 1u)
        {
            loc_1c = in_esi;
            loc_18_f = (double)rdf32(sp0 - 0x18u);
        }
        else
        {
    COW_AT(100b2eca)
            d2 = fr(g, (double)rdf32(self + rd16(self + 0x258u) * 0x20u + 0x28u) - (double)rdf32(rd32(self + 0x260u) + 0x140u));
            wrf32(sp0 - 0x14u, (float)(double)(float)d2);
            d3 = fr(g, (double)rdf32(self + rd16(self + 0x258u) * 0x20u + 0x2cu) - (double)rdf32(rd32(self + 0x260u) + 0x144u));
            wrf32(sp0 - 0x18u, (float)(double)(float)d3);
            d4 = fr(g, (double)rdf32(self + rd16(self + 0x258u) * 0x20u + 0x30u) - (double)rdf32(rd32(self + 0x260u) + 0x148u));
            wrf32(sp0 - 0x10u, (float)(double)(float)d4);
            t5 = rd16(self + 0x258u);
            t6 = rd32(rd32(COW_IMG(0x1065cb04u)) + 0x1acu);
            wrf32(rd32(self + 0x260u) + 0x154u, (float)fr(g, atan2(-d4, (double)(float)d2)));
            d7 = (double)(float)fr(g, sqrt(fr(g, fr(g, (double)(float)d4 * (double)(float)d4) + fr(g, (double)(float)d2 * (double)(float)d2))));
            wrf32(sp0 - 0xcu, (float)d7);
            if (t6 == 0u)
            {
                loc_18_f = (double)(float)d3;
                goto L_100b300c;
            }
            ecx = self + t5 * 0x20u;
            loc_14_f = (double)(float)d2;
            loc_18_f = (double)(float)d3;
            loc_10_f = (double)(float)d4;
            loc_c_f = d7;
    COW_AT(100b2f3e)
            t8 = rd32(rd32(self + 0x260u) + 0x168u);
            wr32(sp0 - 8u, t8);
            g->esp = sp0 - 0x1cu;
            t9 = cow_call_regs(g, COW_IMG(0x10014cf0u), t8, g->ecx, g->edx, 1, 0);
            d10 = cow_take_float(g);
            d11 = fr(g, fr(g, d10 * (double)rdf32(sp0 - 8u)) * (double)rdf32(COW_IMG(0x1032b160u)));
            d12 = (double)rdf32(sp0 - 0xcu);
            if ((cow_fsw(g, d11, d12, 0u) & 0x100u) == 0u)
            {
                loc_18_f = (double)rdf32(sp0 - 0x18u);
                goto L_100b300c;
            }
    COW_AT(100b2f6e)
            d13 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / (double)rdf32(sp0 - 0xcu));
            wrf32(sp0 - 0xcu, (float)(double)(float)d13);
            d14 = fr(g, d13 * (double)rdf32(sp0 - 0x18u));
            wrf32(sp0 - 0x18u, (float)(double)(float)d14);
            t15 = rd32(rd32(self + 0x260u) + 0x140u);
            wr32(sp0 - 4u, t15);
            t16 = rd32(rd32(self + 0x260u) + 0x168u);
            wr32(sp0 - 8u, t16);
            g->esp = sp0 - 0x1cu;
            cow_call_regs(g, COW_IMG(0x10014cf0u), rd32(self + 0x260u), g->ecx, g->edx, 1, 0);
            d17 = cow_take_float(g);
            d18 = fr(g, fr(g, fr(g, fr(g, d17 * (double)rdf32(sp0 - 8u)) * (double)rdf32(COW_IMG(0x1032b160u))) * fr(g, (double)rdf32(sp0 - 0xcu) * (double)rdf32(sp0 - 0x14u))) + (double)rdf32(sp0 - 4u));
            wrf32(rd32(self + 0x260u) + 0x140u, (float)d18);
            t19 = rd32(rd32(self + 0x260u) + 0x148u);
            wr32(sp0 - 8u, t19);
            t20 = rd32(rd32(self + 0x260u) + 0x168u);
            wr32(sp0 - 4u, t20);
            cow_call_regs(g, COW_IMG(0x10014cf0u), rd32(self + 0x260u), g->ecx, g->edx, 1, 0);
            d21 = cow_take_float(g);
            d22 = fr(g, fr(g, fr(g, fr(g, d21 * (double)rdf32(sp0 - 4u)) * (double)rdf32(COW_IMG(0x1032b160u))) * fr(g, (double)rdf32(sp0 - 0xcu) * (double)rdf32(sp0 - 0x10u))) + (double)rdf32(sp0 - 8u));
            wrf32(rd32(self + 0x260u) + 0x148u, (float)d22);
            loc_1c = rd32(sp0 - 0x1cu);
            loc_18_f = (double)rdf32(sp0 - 0x18u);
L_100b3068: ;
    COW_AT(100b3068)
            d26 = (double)rdf32(self + rd16(self + 0x258u) * 0x20u + 0x2cu);
            wrf32(rd32(self + 0x260u) + 0x144u, (float)d26);
            t27 = rd16(self + 2u);
            wr8(self + 0x25au, 1u);
            wr32(rd32(COW_IMG(0x10480af0u) + t27 * 4u) + 0x124u, rd32(rd32(COW_IMG(0x10480af0u) + t27 * 4u) + 0x124u) | 0x20000u);
        }
    }
    COW_AT(100b3136)
    if (rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) != 0u)
    {
        eax = rd16(self + 2u);
        ecx = rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u);
    COW_AT(100b314b)
        wr32(sp0 - 0x20u, in_edi);
        t39 = rd32(ecx + 0x120u);
        if (!((rd32(ecx + 0x128u) >> 0xeu | t39 >> 0x15u | t39 >> 0x14u) & 1u))
        {
    COW_AT(100b316f)
            t40 = rd32(rd32(self + 0x260u) + 0x144u);
            wr32(sp0 - 8u, t40);
            t41 = rd32(rd32(self + 0x260u) + 0x148u);
            wr32(sp0 - 4u, t41);
            t42 = rd32(rd32(self + 0x260u) + 0x140u);
            wr32(sp0 - 0xcu, t42);
            wr32(sp0 - 0x20u, sp0 - 0x18u);
            if (eax != (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)))
            {
                eax = t40;
                ecx = t42;
                edx = t41;
    COW_AT(100b31c2)
                wr32(sp0 - 0x24u, edx);
                wr32(sp0 - 0x28u, eax);
                wr32(sp0 - 0x2cu, ecx);
                g->eax = eax;
                g->esp = sp0 - 0x1cu;
                t44 = cow_thiscall(g, COW_IMG(0x10181300u), rd32(COW_IMG(0x10631f24u)), 4, ecx, eax, edx, sp0 - 0x18u);
                eax = t44;
            }
            else
            {
                eax = t40;
                ecx = t42;
                edx = t41;
    COW_AT(100b31ad)
                wr32(sp0 - 0x24u, 0x42480000u);
                wr32(sp0 - 0x28u, edx);
                wr32(sp0 - 0x2cu, eax);
                wr32(sp0 - 0x30u, ecx);
                g->eax = eax;
                g->esp = sp0 - 0x1cu;
                t43 = cow_thiscall(g, COW_IMG(0x10181290u), rd32(COW_IMG(0x10631f24u)), 5, ecx, eax, edx, 0x42480000u, sp0 - 0x18u);
                eax = t43;
            }
    COW_AT(100b31d0)
            if ((uint8_t)eax != 1u)
            {
                loc_1c = rd32(sp0 - 0x1cu);
            }
            else
            {
    COW_AT(100b31d4)
                d45 = (double)rdf32(sp0 - 0x18u);
                wrf32(rd32(self + 0x260u) + 0x144u, (float)d45);
                loc_1c = rd32(sp0 - 0x1cu);
            }
        }
    }
    COW_AT(100b31e4)
    g->esi = loc_1c;
    g->edi = in_edi;
    return;
L_100b300c: ;
    COW_AT(100b300c)
    d23 = (double)rdf32(self + rd16(self + 0x258u) * 0x20u + 0x28u);
    wrf32(rd32(self + 0x260u) + 0x140u, (float)d23);
    d24 = (double)rdf32(self + rd16(self + 0x258u) * 0x20u + 0x2cu);
    wrf32(rd32(self + 0x260u) + 0x144u, (float)d24);
    d25 = (double)rdf32(self + rd16(self + 0x258u) * 0x20u + 0x30u);
    wrf32(rd32(self + 0x260u) + 0x148u, (float)d25);
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 2u));
    loc_1c = in_esi;
    goto L_100b3068;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100b2ea0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100b2ec3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x100b2ecau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x100b2f3eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_10_f;
        double loc_14_f;
        double loc_18_f;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x100b2f6eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x100b300cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_10_f;
        double loc_14_f;
        double loc_18_f;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x100b3068u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        double loc_10_f;
        double loc_14_f;
        double loc_18_f;
        uint32_t loc_1c;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x100b30a7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x100b3136u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        double loc_10_f;
        double loc_14_f;
        double loc_18_f;
        uint32_t loc_1c;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x100b314bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        double loc_10_f;
        double loc_14_f;
        double loc_18_f;
        uint32_t loc_1c;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x100b316fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        double loc_10_f;
        double loc_14_f;
        double loc_18_f;
        uint32_t loc_1c;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x100b31adu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        double loc_10_f;
        double loc_14_f;
        double loc_18_f;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 0x20u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x100b31c2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        double loc_10_f;
        double loc_14_f;
        double loc_18_f;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 0x20u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x100b31d0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x20u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x100b31d4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x20u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x100b31e4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        double loc_10_f;
        double loc_14_f;
        double loc_18_f;
        uint32_t loc_1c;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100b2ea0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_100b2ea0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
