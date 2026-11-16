/* f_0x100565a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_100565a0(Guest* g)
{
    double d11;
    double d12;
    double d14;
    double d15;
    double d16;
    double d18;
    double d19;
    double d20;
    double d22;
    double d23;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    double loc_10_f;
    double loc_1c_f;
    double loc_20_f;
    uint32_t loc_34;
    double loc_38_f;
    uint32_t loc_4;
    uint32_t loc_40;
    double loc_c_f;
    uint32_t t1;
    uint32_t t10;
    uint32_t t13;
    uint32_t t17;
    uint32_t t2;
    uint32_t t21;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    double x0;
    double x1;
    double x2;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 104u);

    wr32(sp0 - 0x44u, in_ebx);
    wr32(sp0 - 0x48u, in_ebp);
    wr32(sp0 - 0x4cu, in_esi);
    wr32(sp0 - 0x50u, in_edi);
    if (rd8(self + 0x1b4u) == 0u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(self + 0x1b4u);
        edx = in_edx;
    }
    else
    {
        eax = (in_eax & 0xffffff00u) | rd8(self + 0x1b4u);
        t1 = (uint32_t)(int8_t)rd8(self + 0x1b5u) * ((uint32_t)(int8_t)eax * 2u + 2u);
        wr32(sp0 - 0x54u, t1);
        t2 = (uint32_t)(int8_t)eax * 2u + 2u;
        wr32(sp0 - 0x3cu, t2);
        g->edx = in_edx;
        g->esp = sp0 - 0x50u;
        cow_stdcall(g, COW_IMG(0x10044010u), 1, t1);
        t3 = g->edx;
        t4 = cow_thiscall(g, COW_IMG(0x10044130u), rd32(COW_IMG(0x1047bba0u)), 0);
        if ((int8_t)rd8(self + 0x1b5u) <= 0)
        {
            eax = (t4 & 0xffffff00u) | rd8(self + 0x1b5u);
            ebp = t2;
            esi = t4;
        }
        else
        {
            esi = t4;
            wr32(sp0 - 0x40u, sp0 - 0x30u);
            edx = sp0 - 0x30u;
            ebx = 0u;
            ebp = self + 0x1a4u;
            loc_40 = sp0 - 0x30u;
L_100565ff: ;
            wr32(sp0 - 0x54u, rd32(ebp));
            g->eax = rd32(ebp);
            g->edx = edx;
            t5 = rd32(ebp);
            g->esp = sp0 - 0x50u;
            t6 = cow_thiscall(g, COW_IMG(0x1003e280u), loc_40, 1, t5);
            t7 = g->edx;
            t8 = rd32(sp0 - 0x40u) + 4u;
            wr32(sp0 - 0x40u, t8);
            if ((int32_t)(ebx + 1u) < (int8_t)rd8(self + 0x1b5u))
            {
                edx = t7;
                ebx = ebx + 1u;
                ebp = ebp + 4u;
                loc_40 = t8;
                goto L_100565ff;
            }
            eax = t6;
            ebp = rd32(sp0 - 0x3cu);
        }
        t9 = (uint32_t)(int8_t)rd8(self + 0x1b4u);
        wr32(sp0 - 0x40u, t9);
        t10 = (uint32_t)(int8_t)rd8(self + 0x1b5u) - 1u;
        wr32(sp0 - 0x34u, t10);
        d11 = (double)(float)fr(g, (double)rdf32(COW_IMG(0x1032a3b0u)) / (double)(int32_t)t9);
        wrf32(sp0 - 0x38u, (float)d11);
        if ((int32_t)((uint32_t)(int8_t)rd8(self + 0x1b5u) - 1u) <= 0)
        {
            edx = t9;
            ebx = t10;
        }
        else
        {
            ebx = t10;
            loc_34 = t10;
            loc_38_f = d11;
            wr32(sp0 - 0x18u, 0u);
            wr32(sp0 - 8u, 0u);
            wr32(sp0 - 0x40u, ebx);
            eax = self + 0x198u;
            ecx = sp0 - 0x2cu;
            loc_40 = ebx;
            x1 = fr(g, cos(rdf64(COW_IMG(0x1032a108u))));
            x0 = fr(g, sin(rdf64(COW_IMG(0x1032a108u))));
L_10056685: ;
            d12 = (double)(float)fr(g, x0 * (double)rdf32(eax - 4u));
            wrf32(sp0 - 0x20u, (float)d12);
            t13 = rd32(ecx - 4u);
            d14 = fr(g, x1 * (double)rdf32(eax - 4u));
            d15 = (double)rdf32(COW_IMG(0x103295d8u));
            wr32(esi, cow_f2bits(d12));
            wrf32(sp0 - 0x1cu, (float)(double)(float)d14);
            wr32(esi + 4u, cow_f2bits((double)(float)d14));
            wr32(esi + 8u, 0u);
            wr32(esi + 0xcu, t13);
            wr32(sp0 - 4u, rd32(ecx));
            d16 = (double)(float)fr(g, x0 * (double)rdf32(eax));
            wrf32(sp0 - 0x10u, (float)d16);
            t17 = rd32(ecx);
            d18 = fr(g, x1 * (double)rdf32(eax));
            wr32(esi + 0x10u, cow_f2bits(d16));
            wrf32(sp0 - 0xcu, (float)(double)(float)d18);
            wr32(esi + 0x14u, cow_f2bits((double)(float)d18));
            wr32(esi + 0x18u, 0u);
            wr32(esi + 0x1cu, t17);
            if ((int8_t)rd8(self + 0x1b4u) <= 1)
            {
                ebp = t13;
                esi = esi + 0x20u;
                loc_20_f = d12;
                loc_1c_f = (double)(float)d14;
                loc_4 = t17;
                loc_10_f = d16;
                loc_c_f = (double)(float)d18;
                x2 = d15;
                goto L_10056756;
            }
            edx = 1u;
            ebp = t13;
            esi = esi + 0x20u;
            loc_20_f = d12;
            loc_1c_f = (double)(float)d14;
            loc_4 = t17;
            loc_10_f = d16;
            loc_c_f = (double)(float)d18;
            x2 = d15;
L_10056703: ;
            d19 = fr(g, fr(g, sin(x2)) * (double)rdf32(eax - 4u));
            wrf32(esi, (float)d19);
            d20 = fr(g, fr(g, cos(x2)) * (double)rdf32(eax - 4u));
            wr32(esi + 8u, 0u);
            wrf32(esi + 4u, (float)d20);
            t21 = rd32(ecx - 4u);
            wr32(esi + 0xcu, t21);
            d22 = fr(g, fr(g, sin(x2)) * (double)rdf32(eax));
            wrf32(esi + 0x10u, (float)d22);
            d23 = fr(g, fr(g, cos(x2)) * (double)rdf32(eax));
            wr32(esi + 0x18u, 0u);
            wrf32(esi + 0x14u, (float)d23);
            wr32(esi + 0x1cu, rd32(ecx));
            if ((int32_t)(edx + 1u) < (int8_t)rd8(self + 0x1b4u))
            {
                edx = edx + 1u;
                esi = esi + 0x20u;
                x2 = fr(g, x2 + loc_38_f);
                goto L_10056703;
            }
            esi = esi + 0x20u;
            x2 = fr(g, x2 + loc_38_f);
L_10056756: ;
            wr32(esi, cow_f2bits(loc_20_f));
            wr32(esi + 4u, cow_f2bits(loc_1c_f));
            wr32(esi + 8u, 0u);
            wr32(esi + 0xcu, ebp);
            wr32(esi + 0x10u, cow_f2bits(loc_10_f));
            wr32(esi + 0x14u, cow_f2bits(loc_c_f));
            wr32(esi + 0x18u, 0u);
            wr32(esi + 0x1cu, loc_4);
            wr32(sp0 - 0x40u, loc_40 - 1u);
            if (loc_40 != 1u)
            {
                eax = eax + 4u;
                ecx = ecx + 4u;
                esi = esi + 0x20u;
                loc_40 = loc_40 - 1u;
                goto L_10056685;
            }
            eax = eax + 4u;
            edx = loc_40 - 1u;
            ebx = loc_34;
            ebp = rd32(sp0 - 0x3cu);
        }
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x50u;
        t24 = cow_stdcall(g, COW_IMG(0x100441a0u), 0);
        t25 = g->edx;
        if (rd8(COW_IMG(0x1047bca8u)) & 1u)
        {
            eax = (t24 & 0xffffff00u) | rd8(COW_IMG(0x1047bca8u));
            edx = t25;
        }
        else
        {
            eax = (t24 & 0xffffff00u) | rd8(COW_IMG(0x1047bca8u));
            edx = t25;
            wr8(COW_IMG(0x1047bca8u), (uint8_t)(eax | 1u));
            g->edx = (edx & 0xffffff00u) | (uint8_t)(eax | 1u);
            g->esp = sp0 - 0x50u;
            cow_thiscall(g, COW_IMG(0x1006ad90u), COW_IMG(0x1047bcacu), 0);
            t26 = g->ecx;
            t27 = g->edx;
            wr32(sp0 - 0x54u, COW_IMG(0x10056840u));
            g->edx = t27;
            t28 = cow_cdecl(g, COW_IMG(0x103134c6u), 1, COW_IMG(0x10056840u));
            t29 = g->edx;
            eax = t28;
            edx = t29;
        }
        wr32(sp0 - 0x54u, COW_IMG(0x10353810u));
        g->esp = sp0 - 0x50u;
        cow_fastcall(g, COW_IMG(0x1006af90u), COW_IMG(0x1047bcacu), edx, 1, COW_IMG(0x10353810u));
        t30 = rd32(self + 0xf8u);
        wr32(sp0 - 0x54u, t30);
        wr32(sp0 - 0x58u, 0x3cu);
        t31 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
        wr32(sp0 - 0x5cu, t31);
        g->eax = t31;
        g->edx = t30;
        t32 = cow_thiscall(g, rd32(rd32(t31) + 0xc8u), rd32(t31), 3, t31, 0x3cu, t30);
        t33 = g->edx;
        if ((int32_t)ebx <= 0)
        {
            eax = t32;
            edx = t33;
        }
        else
        {
            eax = t32;
            edx = t33;
            esi = 0u;
            edi = ebp - 2u;
L_10056820: ;
            wr32(sp0 - 0x54u, 0xffffffffu);
            wr32(sp0 - 0x58u, 0u);
            wr32(sp0 - 0x5cu, 5u);
            wr32(sp0 - 0x60u, edi);
            wr32(sp0 - 0x64u, esi);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x50u;
            t34 = cow_thiscall(g, COW_IMG(0x10043f40u), rd32(COW_IMG(0x1047bba0u)), 5, esi, edi, 5u, 0u, 0xffffffffu);
            t35 = g->edx;
            if (ebx != 1u)
            {
                eax = t34;
                edx = t35;
                ebx = ebx - 1u;
                esi = ebp + esi;
                goto L_10056820;
            }
            eax = t34;
            edx = t35;
        }
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100565a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100565a0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
