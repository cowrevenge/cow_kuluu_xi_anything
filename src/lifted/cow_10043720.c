/* f_0x10043720 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10043720(Guest* g)
{
    double d13;
    double d14;
    double d15;
    double d16;
    double d17;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_14;
    uint32_t loc_1c;
    double loc_1c_f;
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t loc_28;
    uint32_t loc_2c;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
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
    uint32_t t47;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    double x0;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 80u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1004376au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; edi = g->edi; in_edi = rd32(sp0 - 0x3cu); in_esi = rd32(sp0 - 0x38u); in_ebp = rd32(sp0 - 0x34u); in_ebx = rd32(sp0 - 0x30u); loc_20 = rd32(sp0 - 0x20u); g->ebp = rd32(sp0 - 0x34u); g->ebx = rd32(sp0 - 0x30u); g->edi = rd32(sp0 - 0x3cu); g->esi = rd32(sp0 - 0x38u); goto E_1004376a;
    case 0x1004379fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x3cu); in_esi = rd32(sp0 - 0x38u); in_ebp = rd32(sp0 - 0x34u); in_ebx = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); g->ebp = rd32(sp0 - 0x34u); g->ebx = rd32(sp0 - 0x30u); g->edi = rd32(sp0 - 0x3cu); g->esi = rd32(sp0 - 0x38u); goto E_1004379f;
    case 0x100437f3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x3cu); in_esi = rd32(sp0 - 0x38u); in_ebp = rd32(sp0 - 0x34u); in_ebx = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); g->ebp = rd32(sp0 - 0x34u); g->ebx = rd32(sp0 - 0x30u); g->edi = rd32(sp0 - 0x3cu); g->esi = rd32(sp0 - 0x38u); goto E_100437f3;
    case 0x10043821u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x3cu); in_esi = rd32(sp0 - 0x38u); in_ebp = rd32(sp0 - 0x34u); in_ebx = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); g->ebp = rd32(sp0 - 0x34u); g->ebx = rd32(sp0 - 0x30u); g->edi = rd32(sp0 - 0x3cu); g->esi = rd32(sp0 - 0x38u); goto E_10043821;
    case 0x10043827u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x3cu); in_esi = rd32(sp0 - 0x38u); in_ebp = rd32(sp0 - 0x34u); in_ebx = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); g->ebp = rd32(sp0 - 0x34u); g->ebx = rd32(sp0 - 0x30u); g->edi = rd32(sp0 - 0x3cu); g->esi = rd32(sp0 - 0x38u); goto E_10043827;
    case 0x1004383bu: eax = g->eax; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x3cu); in_esi = rd32(sp0 - 0x38u); in_ebp = rd32(sp0 - 0x34u); in_ebx = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); x0 = ST(0); g->ebp = rd32(sp0 - 0x34u); g->ebx = rd32(sp0 - 0x30u); g->edi = rd32(sp0 - 0x3cu); g->esi = rd32(sp0 - 0x38u); goto E_1004383b;
    case 0x10043843u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x3cu); in_esi = rd32(sp0 - 0x38u); in_ebp = rd32(sp0 - 0x34u); in_ebx = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); x0 = ST(0); g->ebp = rd32(sp0 - 0x34u); g->ebx = rd32(sp0 - 0x30u); g->edi = rd32(sp0 - 0x3cu); g->esi = rd32(sp0 - 0x38u); goto E_10043843;
    case 0x1004388bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x3cu); in_esi = rd32(sp0 - 0x38u); in_ebp = rd32(sp0 - 0x34u); in_ebx = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); x0 = ST(0); g->ebp = rd32(sp0 - 0x34u); g->ebx = rd32(sp0 - 0x30u); g->edi = rd32(sp0 - 0x3cu); g->esi = rd32(sp0 - 0x38u); goto E_1004388b;
    case 0x1004388fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x3cu); in_esi = rd32(sp0 - 0x38u); in_ebp = rd32(sp0 - 0x34u); in_ebx = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); x0 = ST(0); g->ebp = rd32(sp0 - 0x34u); g->ebx = rd32(sp0 - 0x30u); g->edi = rd32(sp0 - 0x3cu); g->esi = rd32(sp0 - 0x38u); goto E_1004388f;
    case 0x100438c8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x3cu); in_esi = rd32(sp0 - 0x38u); in_ebp = rd32(sp0 - 0x34u); in_ebx = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); g->ebp = rd32(sp0 - 0x34u); g->ebx = rd32(sp0 - 0x30u); g->edi = rd32(sp0 - 0x3cu); g->esi = rd32(sp0 - 0x38u); goto E_100438c8;
    case 0x100438cau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x3cu); in_esi = rd32(sp0 - 0x38u); in_ebp = rd32(sp0 - 0x34u); in_ebx = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); g->ebp = rd32(sp0 - 0x34u); g->ebx = rd32(sp0 - 0x30u); g->edi = rd32(sp0 - 0x3cu); g->esi = rd32(sp0 - 0x38u); goto E_100438ca;
    case 0x100438f7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100438f7;
    case 0x10043903u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10043903;
    case 0x10043924u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10043924;
    case 0x10043937u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10043937;
    case 0x1004394bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_1004394b;
    case 0x1004398du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1004398d;
    case 0x10043991u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10043991;
    case 0x1004399au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1004399a;
    default: break;
    }
#endif

    COW_AT(10043720)
    wr32(sp0 - 0x30u, in_ebx);
    wr32(sp0 - 0x34u, in_ebp);
    wr32(sp0 - 0x38u, in_esi);
    wr32(sp0 - 0x3cu, in_edi);
    t1 = (uint32_t)(int8_t)rd8(self + 0x1b4u) * 2u + 2u;
    wr32(sp0 - 0x14u, t1);
    t2 = (uint32_t)(int8_t)rd8(self + 0x1b5u) * ((uint32_t)(int8_t)rd8(self + 0x1b4u) * 2u + 2u);
    wr32(sp0 - 0x18u, t2);
    wr32(sp0 - 0x40u, t2 * 0x24u);
    g->eax = t2;
    g->esp = sp0 - 0x34u;
    t3 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, t2 * 0x24u, in_edx, 1, 3, t2 * 0x24u, in_edi, in_esi);
    t4 = g->ecx;
    t5 = g->edx;
    wr32(sp0 - 0x20u, t3);
    if ((int8_t)rd8(self + 0x1b5u) <= 0)
    {
        eax = t3;
        edx = t5;
        edi = (uint32_t)(int8_t)rd8(self + 0x1b5u);
        loc_20 = t3;
        loc_2c = rd32(sp0 - 0x2cu);
    }
    else
    {
        eax = t3;
        ecx = t4;
        edi = (uint32_t)(int8_t)rd8(self + 0x1b5u);
        loc_20 = t3;
    COW_AT(1004376a)
        t6 = (uint8_t)rd16(COW_IMG(0x1047bc0eu));
        wr32(sp0 - 0x24u, t6);
        t7 = (uint8_t)rd32(COW_IMG(0x1047bc0cu));
        wr32(sp0 - 0x2cu, t7);
        t8 = (uint8_t)(rd32(COW_IMG(0x1047bc0cu)) >> 8u);
        wr32(sp0 - 0x28u, t8);
        t9 = rd16(COW_IMG(0x1047bc0eu)) >> 8u;
        wr32(sp0 - 0x1cu, t9);
        ecx = self + 0x1a5u;
        esi = 0u;
        loc_24 = t6;
        loc_2c = t7;
        loc_28 = t8;
        loc_1c = t9;
L_1004379f: ;
    COW_AT(1004379f)
        wr8(esi * 4u + sp0 - 0xeu, (uint8_t)((uint8_t)rd32(ecx - 1u) * loc_24 >> 7u));
        t10 = rd8(ecx);
        wr8(esi * 4u + sp0 - 0xfu, (uint8_t)(t10 * loc_28 >> 7u));
        wr8(esi * 4u + sp0 - 0x10u, (uint8_t)(rd8(ecx + 1u) * loc_2c >> 7u));
        t11 = rd8(ecx + 2u);
        wr8(esi * 4u + sp0 - 0xdu, (uint8_t)(t11 * loc_1c >> 7u));
        if ((int32_t)(esi + 1u) < (int32_t)edi)
        {
            ecx = ecx + 4u;
            esi = esi + 1u;
            goto L_1004379f;
        }
        edx = t11 * loc_1c >> 7u;
    }
    COW_AT(100437f3)
    t12 = (uint32_t)(int8_t)rd8(self + 0x1b4u);
    wr32(sp0 - 0x1cu, t12);
    wr32(sp0 - 0x24u, edi - 1u);
    d13 = fr(g, (double)rdf32(COW_IMG(0x1032a3b0u)) / (double)(int32_t)t12);
    wr32(sp0 - 0x28u, 0u);
    wrf32(sp0 - 0x1cu, (float)(double)(float)d13);
    if ((int32_t)(edi - 1u) <= 0)
    {
        esi = edi - 1u;
        loc_24 = edi - 1u;
        loc_28 = 0u;
        loc_1c_f = (double)(float)d13;
    }
    else
    {
        loc_24 = edi - 1u;
        loc_1c_f = (double)(float)d13;
    COW_AT(10043821)
        edx = self + 0x198u;
        ebx = 0u;
        loc_28 = 0u;
L_10043827: ;
    COW_AT(10043827)
        wr32(sp0 - 0x2cu, eax);
        if ((int8_t)rd8(self + 0x1b4u) <= 0)
        {
            loc_2c = eax;
            x0 = (double)rdf32(COW_IMG(0x103295d8u));
        }
        else
        {
            loc_2c = eax;
            x0 = (double)rdf32(COW_IMG(0x103295d8u));
    COW_AT(1004383b)
            ecx = 0u;
            esi = rd32(ebx * 4u + sp0 - 0x10u);
            edi = rd32(ebx * 4u + sp0 - 0xcu);
L_10043843: ;
    COW_AT(10043843)
            d14 = fr(g, fr(g, sin(x0)) * (double)rdf32(edx - 4u));
            wrf32(eax, (float)d14);
            d15 = fr(g, fr(g, cos(x0)) * (double)rdf32(edx - 4u));
            wr32(eax + 8u, 0u);
            wr32(eax + 0x18u, esi);
            wrf32(eax + 4u, (float)d15);
            d16 = fr(g, fr(g, sin(x0)) * (double)rdf32(edx));
            wrf32(eax + 0x24u, (float)d16);
            d17 = fr(g, fr(g, cos(x0)) * (double)rdf32(edx));
            wr32(eax + 0x2cu, 0u);
            wr32(eax + 0x3cu, edi);
            wrf32(eax + 0x28u, (float)d17);
            if ((int32_t)(ecx + 1u) < (int8_t)rd8(self + 0x1b4u))
            {
                eax = eax + 0x48u;
                ecx = ecx + 1u;
                x0 = fr(g, x0 + loc_1c_f);
                goto L_10043843;
            }
            eax = eax + 0x48u;
            x0 = fr(g, x0 + loc_1c_f);
    COW_AT(1004388b)
            ebx = loc_28;
        }
    COW_AT(1004388f)
        esi = loc_2c;
        edi = eax;
        ecx = 9u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        esi = loc_2c + 0x24u;
        edi = eax + 0x24u;
        ecx = 9u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        wr32(sp0 - 0x28u, ebx + 1u);
        if ((int32_t)(ebx + 1u) < (int32_t)loc_24)
        {
            eax = eax + 0x48u;
            edx = edx + 4u;
            loc_28 = ebx + 1u;
            ebx = ebx + 1u;
            goto L_10043827;
        }
        eax = eax + 0x48u;
        ecx = loc_24;
        edx = edx + 4u;
        loc_28 = ebx + 1u;
    COW_AT(100438c8)
        esi = ecx;
    }
    COW_AT(100438ca)
    g->esp = sp0 - 0x14u;
    cow_thiscall_cdecl(g, COW_IMG(0x10045d40u), self, 10, in_edi, in_esi, in_ebp, in_ebx, loc_2c, loc_28, loc_24, loc_20, cow_f2bits(loc_1c_f), rd32(sp0 - 0x18u));
    wr32(sp0 - 0x40u, 0u);
    wr32(sp0 - 0x44u, self + 0xa0u);
    t18 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x48u, t18);
    t19 = rd32(sp0 - 0x20u);
    wr32(sp0 - 0x4cu, t19);
    g->eax = t18;
    g->ecx = self + 0x1b6u;
    g->edx = self + 0xa0u;
    g->esp = sp0 - 0x3cu;
    t20 = cow_stdcall(g, COW_IMG(0x10042d00u), 4, t19, t18, self + 0xa0u, 0u);
    t21 = g->ecx;
    t22 = g->edx;
    if ((uint8_t)t20 == 0u)
    {
        eax = t20;
        edx = t22;
    }
    else
    {
        eax = t20;
        ecx = t21;
        edx = t22;
        edi = t19;
    COW_AT(100438f7)
        if (rd8(COW_IMG(0x1047bb78u)) & 1u)
        {
            eax = (eax & 0xffffff00u) | 1u;
        }
        else
        {
            eax = (eax & 0xffffff00u) | 1u;
            ecx = (ecx & 0xffffff00u) | rd8(COW_IMG(0x1047bb78u));
    COW_AT(10043903)
            wr8(COW_IMG(0x1047bb78u), (uint8_t)(ecx | eax));
            g->eax = eax;
            g->edx = (edx & 0xffffff00u) | (uint8_t)(ecx | eax);
            g->esp = sp0 - 0x3cu;
            t23 = cow_thiscall(g, COW_IMG(0x1006ad90u), COW_IMG(0x1047bb7cu), 0);
            t24 = g->ecx;
            t25 = g->edx;
            wr32(sp0 - 0x40u, COW_IMG(0x100439b0u));
            g->edx = t25;
            t26 = cow_cdecl(g, COW_IMG(0x103134c6u), 1, COW_IMG(0x100439b0u));
            t27 = g->edx;
            eax = t26;
            edx = t27;
        }
    COW_AT(10043924)
        wr32(sp0 - 0x40u, COW_IMG(0x10353378u));
        g->eax = eax;
        g->esp = sp0 - 0x3cu;
        t28 = cow_fastcall(g, COW_IMG(0x1006af90u), COW_IMG(0x1047bb7cu), edx, 1, COW_IMG(0x10353378u));
        t29 = g->ecx;
        t30 = g->edx;
        if ((int32_t)esi <= 0)
        {
            eax = t28;
            ecx = t29;
            edx = t30;
        }
        else
        {
    COW_AT(10043937)
            t31 = rd32(sp0 - 0x14u) - 2u;
            t32 = rd32(sp0 - 0x14u);
            wr32(sp0 - 0x14u, t31);
            ecx = t31;
            ebx = esi;
            ebp = t32 * 0x24u;
            loc_14 = t31;
L_1004394b: ;
    COW_AT(1004394b)
            wr32(sp0 - 0x40u, 0x152u);
            t33 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
            wr32(sp0 - 0x44u, t33);
            g->eax = t33;
            g->edx = rd32(t33);
            t34 = rd32(t33);
            t35 = rd32(COW_IMG(0x1047bfa8u));
            g->esp = sp0 - 0x3cu;
            t36 = cow_thiscall(g, rd32(t34 + 0x130u), ecx, 2, t33, 0x152u);
            t37 = g->ecx;
            t38 = g->edx;
            wr32(sp0 - 0x40u, 0x152u);
            g->edx = t38;
            t39 = rd32(t35 + 0xdc8u);
            t40 = cow_cdecl(g, COW_IMG(0x1006a560u), 1, 0x152u);
            t41 = g->edx;
            wr32(sp0 - 0x40u, t40);
            wr32(sp0 - 0x44u, edi);
            t42 = rd32(sp0 - 0x14u);
            wr32(sp0 - 0x48u, t42);
            wr32(sp0 - 0x4cu, 5u);
            g->ebx = ebx;
            g->eax = t42;
            g->edx = t41;
            t43 = cow_thiscall(g, COW_IMG(0x1000cd00u), t39, 4, 5u, t42, edi, t40);
            t44 = g->ecx;
            t45 = g->edx;
            if (ebx != 1u)
            {
                ecx = t44;
                ebx = ebx - 1u;
                edi = ebp + edi;
                loc_14 = rd32(sp0 - 0x14u);
                goto L_1004394b;
            }
            eax = t43;
            ecx = t44;
            edx = t45;
    COW_AT(1004398d)
            edi = rd32(sp0 - 0x20u);
        }
    COW_AT(10043991)
        wr32(sp0 - 0x40u, edi);
        g->eax = eax;
        g->esp = sp0 - 0x3cu;
        t46 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, edi);
        t47 = g->edx;
        eax = t46;
        edx = t47;
    }
    COW_AT(1004399a)
    g->ebx = rd32(sp0 - 0x30u);
    g->esi = rd32(sp0 - 0x38u);
    g->edi = rd32(sp0 - 0x3cu);
    g->ebp = rd32(sp0 - 0x34u);
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10043720(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1004376au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_20;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x3cu);
        in_esi = rd32(sp0 - 0x38u);
        in_ebp = rd32(sp0 - 0x34u);
        in_ebx = rd32(sp0 - 0x30u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x3cu;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1004379fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x3cu);
        in_esi = rd32(sp0 - 0x38u);
        in_ebp = rd32(sp0 - 0x34u);
        in_ebx = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x100437f3u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x3cu);
        in_esi = rd32(sp0 - 0x38u);
        in_ebp = rd32(sp0 - 0x34u);
        in_ebx = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x10043821u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_1c_f;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x3cu);
        in_esi = rd32(sp0 - 0x38u);
        in_ebp = rd32(sp0 - 0x34u);
        in_ebx = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        g->esp = sp0 - 0x3cu;
        g->ebx = 0u;
        wr32(sp0 - 0x28u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10043827u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_1c_f;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x3cu);
        in_esi = rd32(sp0 - 0x38u);
        in_ebp = rd32(sp0 - 0x34u);
        in_ebx = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1004383bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_1c_f;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        double x0;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x3cu);
        in_esi = rd32(sp0 - 0x38u);
        in_ebp = rd32(sp0 - 0x34u);
        in_ebx = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        x0 = ST(0);
        g->esp = sp0 - 0x3cu;
        g->ecx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10043843u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_1c_f;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x3cu);
        in_esi = rd32(sp0 - 0x38u);
        in_ebp = rd32(sp0 - 0x34u);
        in_ebx = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        x0 = ST(0);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1004388bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_1c_f;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x3cu);
        in_esi = rd32(sp0 - 0x38u);
        in_ebp = rd32(sp0 - 0x34u);
        in_ebx = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        x0 = ST(0);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1004388fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_1c_f;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x3cu);
        in_esi = rd32(sp0 - 0x38u);
        in_ebp = rd32(sp0 - 0x34u);
        in_ebx = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        x0 = ST(0);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x100438c8u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_1c_f;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x3cu);
        in_esi = rd32(sp0 - 0x38u);
        in_ebp = rd32(sp0 - 0x34u);
        in_ebx = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x100438cau:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_1c_f;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x3cu);
        in_esi = rd32(sp0 - 0x38u);
        in_ebp = rd32(sp0 - 0x34u);
        in_ebx = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x100438f7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x10043903u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x10043924u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x10043937u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1004394bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1004398du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x10043991u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1004399au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10043720(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10043720(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
