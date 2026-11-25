/* f_0x10075700 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_10075700(Guest* g)
{
    double d1;
    double d17;
    double d18;
    double d25;
    double d27;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_18;
    double loc_4_f;
    double loc_c_f;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t26;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    double x0;
    double x1;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10075713u: in_eax = g->eax; ecx = g->ecx; self = g->esi; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_10075713;
    case 0x10075724u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_10075724;
    case 0x1007572bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1007572b;
    case 0x1007572eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1007572e;
    case 0x10075749u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_10075749;
    case 0x10075751u: eax = g->eax; ecx = g->ecx; self = g->esi; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_10075751;
    case 0x10075758u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_10075758;
    case 0x10075774u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_10075774;
    case 0x1007577du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1007577d;
    case 0x10075781u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_10075781;
    case 0x10075784u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_10075784;
    case 0x1007579bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1007579b;
    case 0x100757a4u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_100757a4;
    case 0x100757b9u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_100757b9;
    case 0x100757c3u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_100757c3;
    case 0x100757c6u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_100757c6;
    case 0x100757dau: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_100757da;
    case 0x1007581au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_4_f = rdf32(sp0 - 4u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1007581a;
    case 0x10075825u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_4_f = rdf32(sp0 - 4u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_10075825;
    case 0x10075836u: eax = g->eax; edx = g->edx; esi = g->esi; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_4_f = rdf32(sp0 - 4u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_10075836;
    case 0x10075843u: eax = g->eax; ecx = g->ecx; esi = g->esi; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_4_f = rdf32(sp0 - 4u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_10075843;
    case 0x100758a2u: eax = g->eax; ecx = g->ecx; esi = g->esi; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_4_f = rdf32(sp0 - 4u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_100758a2;
    case 0x100758a6u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_4_f = rdf32(sp0 - 4u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_100758a6;
    case 0x100758b1u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_4_f = rdf32(sp0 - 4u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_100758b1;
    case 0x100758cbu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_4_f = rdf32(sp0 - 4u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_100758cb;
    case 0x100758e2u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_4_f = rdf32(sp0 - 4u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_100758e2;
    case 0x100758fau: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_4_f = rdf32(sp0 - 4u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_100758fa;
    case 0x10075907u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_4_f = rdf32(sp0 - 4u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_10075907;
    case 0x1007591fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1007591f;
    case 0x1007592bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_4_f = rdf32(sp0 - 4u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1007592b;
    case 0x10075939u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_4_f = rdf32(sp0 - 4u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_10075939;
    default: break;
    }
#endif

    COW_AT(10075700)
    if (rd32(self) == 0u) goto L_1007591f;
    ecx = rd32(self);
    COW_AT(10075713)
    d1 = (double)rdf32(sp0 + 0xcu);
    if (d1 != (double)rdf32(COW_IMG(0x103295d8u)))
    {
        eax = (in_eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d1, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        goto L_10075751;
    }
    COW_AT(10075724)
    if (rd32(ecx + 0x40u) != 0u)
    {
        eax = rd32(ecx + 0x40u);
    }
    else
    {
    COW_AT(1007572b)
        eax = rd32(ecx + 0x44u);
    }
    COW_AT(1007572e)
    t2 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
    g->esp = sp0 - 0x14u;
    cow_thiscall(g, rd32(rd32(t2) + 0xf4u), rd32(t2), 3, t2, arg1, eax);
    COW_AT(10075749)
    g->esi = in_esi;
    g->edi = in_edi;
    return;
L_10075751: ;
    COW_AT(10075751)
    g->esp = sp0 - 0x14u;
    cow_thiscall(g, COW_IMG(0x100755a0u), self, 0);
    COW_AT(10075758)
    t3 = rd32(rd32(COW_IMG(0x1047d158u)) + 0xcu);
    t4 = rd32(rd32(COW_IMG(0x1047d158u)) + 8u);
    t5 = rd32(rd32(COW_IMG(0x1047d158u)) + 4u);
    g->esp = sp0 - 0x14u;
    cow_thiscall(g, COW_IMG(0x1006a060u), rd32(COW_IMG(0x1047bfa8u)), 3, t5, t4, t3);
    COW_AT(10075774)
    if (rd32(rd32(self) + 0x40u) == 0u)
    {
        esi = rd32(self);
    COW_AT(10075781)
        esi = rd32(esi + 0x44u);
    }
    else
    {
        eax = rd32(rd32(self) + 0x40u);
    COW_AT(1007577d)
        esi = eax;
    }
    COW_AT(10075784)
    t6 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
    g->eax = t6;
    g->edx = rd32(t6);
    t7 = rd32(t6);
    g->esp = sp0 - 0x14u;
    t8 = cow_thiscall(g, rd32(t7 + 0xf4u), rd32(COW_IMG(0x1047bfa8u)), 3, t6, 0u, esi);
    t9 = g->edx;
    eax = t8;
    edx = t9;
    COW_AT(1007579b)
    if (rd8(COW_IMG(0x1047d1fcu)) & 1u)
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x1047d1fcu));
    }
    else
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x1047d1fcu));
    COW_AT(100757a4)
        wr8(COW_IMG(0x1047d1fcu), (uint8_t)(eax | 1u));
        g->eax = eax;
        g->edx = (edx & 0xffffff00u) | (uint8_t)(eax | 1u);
        g->esp = sp0 - 0x14u;
        t10 = cow_thiscall(g, COW_IMG(0x1006ad90u), COW_IMG(0x1047d174u), 0);
        t11 = g->ecx;
        t12 = g->edx;
        eax = t10;
        ecx = t11;
        edx = t12;
    COW_AT(100757b9)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t13 = cow_cdecl(g, COW_IMG(0x103134c6u), 1, COW_IMG(0x10075950u));
        t14 = g->edx;
        eax = t13;
        edx = t14;
    COW_AT(100757c3)
    }
    COW_AT(100757c6)
    g->esp = sp0 - 0x14u;
    cow_fastcall(g, COW_IMG(0x1006ae30u), COW_IMG(0x1047d174u), edx, 2, COW_IMG(0x103547a4u), COW_IMG(0x10354708u));
    COW_AT(100757da)
    t15 = rd32(COW_IMG(0x1047d150u)) - 1u;
    t16 = rd32(COW_IMG(0x1047d150u)) * 2u + 2u;
    d17 = (double)(float)fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / (double)(int32_t)t15);
    d18 = (double)(float)fr(g, fr(g, fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / (double)(int32_t)t15) * (double)rdf32(sp0 + 0x10u)) * (double)rdf32(COW_IMG(0x1032a3b0u)));
    g->eax = rd32(COW_IMG(0x1047d150u));
    g->edx = t16;
    t19 = rd32(COW_IMG(0x1047d150u));
    g->esp = sp0 - 0x14u;
    t20 = cow_stdcall(g, COW_IMG(0x10044010u), 1, t16);
    t21 = g->edx;
    eax = t20;
    edx = t21;
    loc_c_f = d17;
    loc_4_f = d18;
    COW_AT(1007581a)
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t22 = cow_thiscall(g, COW_IMG(0x10044130u), rd32(COW_IMG(0x1047bba8u)), 0);
    eax = t22;
    COW_AT(10075825)
    t23 = rd32(COW_IMG(0x1047d150u));
    wr32(sp0 + 0x10u, 0u);
    if ((int32_t)(t23 + 1u) <= 0)
    {
        edx = t23 + 1u;
    }
    else
    {
    COW_AT(10075836)
        ecx = 0u;
        x1 = cow_bits2f(0u);
        x0 = (double)rdf32(sp0 + 8u);
L_10075843: ;
    COW_AT(10075843)
        t24 = rd32(sp0 + 0x10u);
        wr32(eax, 0u);
        wr32(eax + 8u, 0u);
        wr32(eax + 0xcu, 0x3f800000u);
        wrf32(eax + 4u, (float)(double)(int32_t)t24);
        wr32(sp0 + 0x10u, ecx + 1u);
        d25 = fr(g, fr(g, sin(x0)) * (double)rdf32(sp0 + 0xcu));
        wrf32(eax + 0x14u, (float)d25);
        wrf32(eax + 0x18u, (float)x1);
        t26 = rd32(COW_IMG(0x1047d200u));
        wr32(eax + 0x24u, 0u);
        wr32(eax + 0x28u, 0x3f800000u);
        wrf32(eax + 0x1cu, (float)(double)(int32_t)t26);
        wrf32(eax + 0x20u, (float)(double)(int32_t)t24);
        d27 = fr(g, d25 + (double)rdf32(COW_IMG(0x1032961cu)));
        wrf32(eax + 0x30u, (float)d27);
        wrf32(eax + 0x34u, (float)x1);
        if ((int32_t)(ecx + 1u) < (int32_t)(rd32(COW_IMG(0x1047d150u)) + 1u))
        {
            eax = eax + 0x38u;
            ecx = ecx + 1u;
            x1 = fr(g, x1 + loc_c_f);
            x0 = fr(g, x0 + loc_4_f);
            goto L_10075843;
        }
        eax = eax + 0x38u;
        x1 = fr(g, x1 + loc_c_f);
        x0 = fr(g, x0 + loc_4_f);
    COW_AT(100758a2)
        edx = 0x3f800000u;
    }
    COW_AT(100758a6)
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    cow_stdcall(g, COW_IMG(0x100441a0u), 0);
    t28 = g->edx;
    edx = t28;
    COW_AT(100758b1)
    t29 = rd32(COW_IMG(0x1047d150u)) * 2u;
    t30 = rd32(COW_IMG(0x1047bba8u));
    g->esp = sp0 - 0x14u;
    cow_thiscall(g, COW_IMG(0x10043f40u), t30, 5, 0u, t29, 5u, 0u, 0xffffffffu);
    t31 = g->ecx;
    ecx = t31;
    COW_AT(100758cb)
    t32 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
    g->edx = rd32(t32);
    t33 = rd32(t32);
    g->esp = sp0 - 0x14u;
    cow_thiscall(g, rd32(t33 + 0xc8u), ecx, 3, t32, 0x1bu, 0u);
    t34 = g->edx;
    edx = t34;
    COW_AT(100758e2)
    t35 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
    g->eax = t35;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t36 = cow_thiscall(g, rd32(rd32(t35) + 0xc8u), rd32(t35), 3, t35, 0xfu, 1u);
    t37 = g->edx;
    eax = t36;
    edx = t37;
    COW_AT(100758fa)
    g->esp = sp0 - 0x14u;
    cow_fastcall(g, COW_IMG(0x1006a0e0u), rd32(COW_IMG(0x1047bfa8u)), edx, 2, 0u, 0u);
    COW_AT(10075907)
    t38 = rd32(rd32(COW_IMG(0x1047d158u)) + 4u);
    eax = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
    loc_18 = t38;
L_1007592b: ;
    COW_AT(1007592b)
    g->esp = sp0 - 0x14u;
    cow_thiscall(g, rd32(rd32(eax) + 0xf4u), rd32(eax), 3, eax, arg1, loc_18);
    COW_AT(10075939)
    g->esi = in_esi;
    g->edi = in_edi;
    return;
L_1007591f: ;
    COW_AT(1007591f)
    eax = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
    loc_18 = 0u;
    goto L_1007592b;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10075700(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10075713u:
    {
        uint32_t ecx;
        uint32_t in_eax;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        in_eax = g->eax;
        ecx = g->ecx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x14u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10075724u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x14u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1007572bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1007572eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x10075749u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x10075751u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x14u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10075758u:
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
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x14u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10075774u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x14u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1007577du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x14u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10075781u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x14u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10075784u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x14u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1007579bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x14u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100757a4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x14u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100757b9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x14u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100757c3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x18u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100757c6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x14u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100757dau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x14u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1007581au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        double loc_4_f;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_4_f = rdf32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->edi = 0u;
        wr32(sp0 - 8u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10075825u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        double loc_4_f;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_4_f = rdf32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->edi = 0u;
        wr32(sp0 - 8u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10075836u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        double loc_4_f;
        double loc_c_f;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_4_f = rdf32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ecx = 0u;
        g->edi = 0u;
        wr32(sp0 - 8u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10075843u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        double loc_4_f;
        double loc_c_f;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_4_f = rdf32(sp0 - 4u);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0x14u;
        g->edx = 0x3f800000u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100758a2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        double loc_4_f;
        double loc_c_f;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_4_f = rdf32(sp0 - 4u);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0x14u;
        g->edx = 0x3f800000u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100758a6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        double loc_4_f;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_4_f = rdf32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100758b1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        double loc_4_f;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_4_f = rdf32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100758cbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        double loc_4_f;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_4_f = rdf32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100758e2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        double loc_4_f;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_4_f = rdf32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100758fau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        double loc_4_f;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_4_f = rdf32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10075907u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        double loc_4_f;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_4_f = rdf32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1007591fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x14u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1007592bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        double loc_4_f;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_4_f = rdf32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x10075939u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        double loc_4_f;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_4_f = rdf32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10075700(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_10075700(g);
    g->esp = sp0;
    rt_return(g, g->eax, 16u);
}
/* COW_ADAPTER END */
