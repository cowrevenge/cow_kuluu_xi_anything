/* f_0x10238500 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10238500(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_6c;
    uint32_t loc_70;
    unsigned of;
    unsigned pf;
    unsigned sf;
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
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    unsigned zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 136u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10238515u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x70u); in_esi = rd32(sp0 - 0x6cu); g->edi = rd32(sp0 - 0x70u); g->esi = rd32(sp0 - 0x6cu); goto E_10238515;
    case 0x10238526u: self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x70u); in_esi = rd32(sp0 - 0x6cu); g->edi = rd32(sp0 - 0x70u); g->esi = rd32(sp0 - 0x6cu); goto E_10238526;
    case 0x1023852du: self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x70u); in_esi = rd32(sp0 - 0x6cu); g->edi = rd32(sp0 - 0x70u); g->esi = rd32(sp0 - 0x6cu); goto E_1023852d;
    case 0x10238534u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x70u); in_esi = rd32(sp0 - 0x6cu); g->edi = rd32(sp0 - 0x70u); g->esi = rd32(sp0 - 0x6cu); goto E_10238534;
    case 0x10238539u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10238539;
    case 0x10238541u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; self = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x70u); in_esi = rd32(sp0 - 0x6cu); g->edi = rd32(sp0 - 0x70u); g->esi = rd32(sp0 - 0x6cu); goto E_10238541;
    case 0x1023854cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023854c;
    case 0x10238557u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10238557;
    case 0x1023855fu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x70u); in_esi = rd32(sp0 - 0x6cu); g->edi = rd32(sp0 - 0x70u); g->esi = rd32(sp0 - 0x6cu); goto E_1023855f;
    case 0x1023857bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023857b;
    case 0x10238588u: eax = g->eax; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10238588;
    case 0x1023858du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023858d;
    case 0x10238591u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10238591;
    case 0x1023859cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023859c;
    case 0x102385a3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102385a3;
    case 0x102385b7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102385b7;
    case 0x102385bau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102385ba;
    case 0x102385cbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102385cb;
    case 0x102385d7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102385d7;
    case 0x102385ecu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102385ec;
    case 0x102385f6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102385f6;
    case 0x102385fdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102385fd;
    case 0x10238608u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10238608;
    case 0x10238615u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10238615;
    case 0x10238629u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10238629;
    case 0x10238631u: ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; self = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x70u); in_esi = rd32(sp0 - 0x6cu); g->edi = rd32(sp0 - 0x70u); g->esi = rd32(sp0 - 0x6cu); goto E_10238631;
    case 0x1023863cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023863c;
    case 0x1023864bu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023864b;
    case 0x10238653u: ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x70u); in_esi = rd32(sp0 - 0x6cu); g->edi = rd32(sp0 - 0x70u); g->esi = rd32(sp0 - 0x6cu); goto E_10238653;
    case 0x10238660u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10238660;
    case 0x10238668u: ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x70u); in_esi = rd32(sp0 - 0x6cu); g->edi = rd32(sp0 - 0x70u); g->esi = rd32(sp0 - 0x6cu); goto E_10238668;
    case 0x10238675u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_70 = rd32(sp0 - 0x70u); loc_6c = rd32(sp0 - 0x6cu); goto E_10238675;
    default: break;
    }
#endif

    COW_AT(10238500)
    wr32(sp0 - 0x6cu, in_esi);
    wr32(sp0 - 0x70u, in_edi);
    t1 = rd32(self + 0x28u);
    if (t1 == 1u)
    {
        eax = in_eax;
        edx = in_edx;
        ebx = in_ebx;
        loc_6c = in_esi;
        loc_70 = in_edi;
        goto L_10238675;
    }
    COW_AT(10238515)
    if ((uint32_t)(int16_t)arg1 - 3u > 9u)
    {
        eax = (uint32_t)(int16_t)arg1 - 3u;
        edx = in_edx;
        ebx = in_ebx;
        loc_6c = in_esi;
        loc_70 = in_edi;
        goto L_10238675;
    }
    COW_AT(10238526)
    t2 = rd32(COW_IMG(0x10238680u) + (uint32_t)(int16_t)arg1 * 4u - 0xcu);
    switch (t2 - RD)
    {
    case 0x1023852du: goto L_1023852d;
    case 0x1023855fu: goto L_1023855f;
    case 0x10238631u: goto L_10238631;
    case 0x10238653u: goto L_10238653;
    case 0x10238668u: goto L_10238668;
    case 0x10238675u: eax = (uint32_t)(int16_t)arg1 - 3u; edx = in_edx; ebx = in_ebx; loc_6c = in_esi; loc_70 = in_edi; goto L_10238675;
    default: rt_fatal(g, COW_IMG(0x10238526u), "switch");
    }
    return 0;
L_1023852d: ;
    COW_AT(1023852d)
    if (rd8(self + 0x14u) != 0u)
    {
        eax = ((uint32_t)(int16_t)arg1 - 3u & 0xffffff00u) | rd8(self + 0x14u);
        goto L_10238541;
    }
    eax = ((uint32_t)(int16_t)arg1 - 3u & 0xffffff00u) | rd8(self + 0x14u);
    COW_AT(10238534)
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 0x70u;
    t38 = cow_thiscall(g, COW_IMG(0x10037c50u), self, 0);
    t39 = g->edx;
    eax = t38;
    edx = t39;
    COW_AT(10238539)
    g->ebx = in_ebx;
    g->esi = rd32(sp0 - 0x6cu);
    g->edi = rd32(sp0 - 0x70u);
    g->edx = edx;
    return eax;
L_10238541: ;
    COW_AT(10238541)
    t40 = rd32(COW_IMG(0x10662da0u));
    g->esp = sp0 - 0x70u;
    t41 = cow_call_regs(g, COW_IMG(0x101c68a0u), eax, t40, in_edx, 1, 0);
    t42 = g->ecx;
    t43 = g->edx;
    eax = t41;
    ecx = t42;
    edx = t43;
    COW_AT(1023854c)
    wr32(self + 0x24u, 1u);
    wr32(self + 0x28u, 1u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x70u;
    t44 = cow_thiscall(g, COW_IMG(0x10037b90u), ecx, 0);
    t45 = g->edx;
    eax = t44;
    edx = t45;
    COW_AT(10238557)
    g->ebx = in_ebx;
    g->esi = rd32(sp0 - 0x6cu);
    g->edi = rd32(sp0 - 0x70u);
    g->edx = edx;
    return eax;
L_1023855f: ;
    COW_AT(1023855f)
    wr32(sp0 - 0x74u, in_ebx);
    t13 = rd32(COW_IMG(0x10668facu));
    t14 = rd32(COW_IMG(0x10668fb4u));
    t15 = rd32(rd32(COW_IMG(0x10668fb4u)) + 0x14u);
    t16 = rd32(rd32(COW_IMG(0x10668facu)) + 0x14u);
    wr8(sp0 - 0x48u, 0u);
    g->eax = t13;
    g->esp = sp0 - 0x74u;
    t17 = cow_fastcall(g, COW_IMG(0x103149e0u), t14, in_edx, 0);
    eax = t17;
    ebx = t15;
    edi = t16;
    COW_AT(1023857b)
    t18 = cow_divs(g, eax, 0xau);
    t19 = cow_mods(g, eax, 0xau);
    if (t19 == 7u)
    {
        ecx = 0xau;
    }
    else
    {
        eax = t18;
        edx = t19;
    COW_AT(10238588)
        g->eax = eax;
        g->ecx = 0xau;
        g->esp = sp0 - 0x74u;
        t20 = cow_stdcall(g, COW_IMG(0x10310070u), 0);
        t21 = g->ecx;
        eax = t20;
        ecx = t21;
    COW_AT(1023858d)
        if ((int32_t)eax >= 0)
        {
    COW_AT(10238591)
            wr32(sp0 - 0x78u, sp0 - 0x28u);
            wr32(sp0 - 0x7cu, eax);
            g->eax = eax;
            g->ecx = ecx;
            g->edx = sp0 - 0x28u;
            g->esp = sp0 - 0x74u;
            t22 = cow_cdecl(g, COW_IMG(0x1030ffb5u), 2, eax, sp0 - 0x28u);
            t23 = g->ecx;
            t24 = g->edx;
            eax = t22;
            ecx = t23;
            edx = t24;
    COW_AT(1023859c)
            if ((int32_t)eax >= 0)
            {
    COW_AT(102385a3)
                wr32(sp0 - 0x78u, sp0 - 0x20u);
                wr32(sp0 - 0x7cu, COW_IMG(0x1034f7e0u));
                wr32(sp0 - 0x80u, sp0 - 0x48u);
                g->ebx = ebx;
                g->ecx = sp0 - 0x48u;
                g->esp = sp0 - 0x6cu;
                cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x48u, COW_IMG(0x1034f7e0u), sp0 - 0x20u, rd32(sp0 - 0x74u), rd32(sp0 - 0x70u));
                t25 = g->ecx;
                ecx = t25;
    COW_AT(102385b7)
            }
        }
    }
    COW_AT(102385ba)
    wr32(sp0 - 0x78u, sp0 - 0x68u);
    wr32(sp0 - 0x7cu, sp0 - 0x48u);
    wr32(sp0 - 0x80u, ebx);
    wr32(sp0 - 0x84u, edi);
    g->eax = sp0 - 0x48u;
    g->edx = sp0 - 0x68u;
    g->esp = sp0 - 0x5cu;
    t26 = cow_thiscall_cdecl(g, COW_IMG(0x102386b0u), ecx, 10, edi, ebx, sp0 - 0x48u, sp0 - 0x68u, rd32(sp0 - 0x74u), rd32(sp0 - 0x70u), rd32(sp0 - 0x6cu), rd32(sp0 - 0x68u), rd32(sp0 - 0x64u), rd32(sp0 - 0x60u));
    t27 = g->ecx;
    t28 = g->edx;
    eax = t26;
    ecx = t27;
    edx = t28;
    COW_AT(102385cb)
    if (eax != 0u)
    {
        ebx = rd32(sp0 - 0x74u);
        loc_6c = rd32(sp0 - 0x6cu);
        loc_70 = rd32(sp0 - 0x70u);
        goto L_10238675;
    }
    ebx = rd32(sp0 - 0x74u);
    COW_AT(102385d7)
    t29 = ecx;
    edi = sp0 - 0x68u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0xffu);
    af = 0u;
    zf = 0u;
    sf = 1u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    if (~ecx - 1u >= 0x10u)
    {
        loc_6c = rd32(sp0 - 0x6cu);
        loc_70 = rd32(sp0 - 0x70u);
        goto L_10238675;
    }
    COW_AT(102385ec)
    wr32(sp0 - 0x74u, sp0 - 0x68u);
    g->edx = edx;
    g->esp = sp0 - 0x70u;
    t30 = cow_call_regs(g, COW_IMG(0x101ba240u), eax, g->ecx, g->edx, 1, 1, sp0 - 0x68u);
    t31 = g->edx;
    eax = t30;
    edx = t31;
    COW_AT(102385f6)
    if (eax != 0u)
    {
        loc_6c = rd32(sp0 - 0x6cu);
        loc_70 = rd32(sp0 - 0x70u);
        goto L_10238675;
    }
    COW_AT(102385fd)
    g->esp = sp0 - 0x70u;
    t32 = cow_call_regs(g, COW_IMG(0x101c68a0u), eax, rd32(COW_IMG(0x10662da0u)), edx, 1, 0);
    eax = t32;
    COW_AT(10238608)
    wr32(sp0 - 0x74u, sp0 - 0x68u);
    g->edx = sp0 - 0x68u;
    g->esp = sp0 - 0x70u;
    cow_thiscall(g, COW_IMG(0x101c5f30u), rd32(self + 0x30u), 1, sp0 - 0x68u);
    t33 = g->edx;
    edx = t33;
    COW_AT(10238615)
    t34 = rd32(rd32(COW_IMG(0x10668fc4u)) + 0x30u);
    wr32(sp0 - 0x74u, t34);
    g->eax = rd32(COW_IMG(0x10668fc4u));
    g->edx = edx;
    t35 = rd32(COW_IMG(0x10668fc4u));
    g->esp = sp0 - 0x70u;
    t36 = cow_thiscall(g, COW_IMG(0x101c6870u), rd32(COW_IMG(0x10662da0u)), 1, t34);
    t37 = g->edx;
    eax = t36;
    edx = t37;
    COW_AT(10238629)
    g->ebx = ebx;
    g->esi = rd32(sp0 - 0x6cu);
    g->edi = rd32(sp0 - 0x70u);
    g->edx = edx;
    return eax;
L_10238631: ;
    COW_AT(10238631)
    t7 = rd32(COW_IMG(0x10662da0u));
    g->esp = sp0 - 0x70u;
    t8 = cow_call_regs(g, COW_IMG(0x101c68a0u), (uint32_t)(int16_t)arg1 - 3u, t7, in_edx, 1, 0);
    t9 = g->ecx;
    t10 = g->edx;
    eax = t8;
    ecx = t9;
    edx = t10;
    COW_AT(1023863c)
    wr32(self + 0x24u, 0xffffffffu);
    wr32(self + 0x28u, 1u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x70u;
    t11 = cow_thiscall(g, COW_IMG(0x10037bf0u), ecx, 0);
    t12 = g->edx;
    eax = t11;
    edx = t12;
    COW_AT(1023864b)
    g->ebx = in_ebx;
    g->esi = rd32(sp0 - 0x6cu);
    g->edi = rd32(sp0 - 0x70u);
    g->edx = edx;
    return eax;
L_10238653: ;
    COW_AT(10238653)
    wr32(sp0 - 0x74u, 5u);
    g->edx = in_edx;
    g->esp = sp0 - 0x70u;
    t5 = cow_call_regs(g, COW_IMG(0x101c6920u), (uint32_t)(int16_t)arg1 - 3u, rd32(COW_IMG(0x10662da0u)), g->edx, 0, 1, 5u);
    t6 = g->edx;
    eax = t5;
    edx = t6;
    COW_AT(10238660)
    g->ebx = in_ebx;
    g->esi = rd32(sp0 - 0x6cu);
    g->edi = rd32(sp0 - 0x70u);
    g->edx = edx;
    return eax;
L_10238668: ;
    COW_AT(10238668)
    wr32(sp0 - 0x74u, 4u);
    g->edx = in_edx;
    g->esp = sp0 - 0x70u;
    t3 = cow_call_regs(g, COW_IMG(0x101c6920u), (uint32_t)(int16_t)arg1 - 3u, rd32(COW_IMG(0x10662da0u)), g->edx, 0, 1, 4u);
    t4 = g->edx;
    eax = t3;
    edx = t4;
    ebx = in_ebx;
    loc_6c = in_esi;
    loc_70 = in_edi;
L_10238675: ;
    COW_AT(10238675)
    g->ebx = ebx;
    g->esi = loc_6c;
    g->edi = loc_70;
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10238500(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10238515u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x70u);
        in_esi = rd32(sp0 - 0x6cu);
        g->esp = sp0 - 0x70u;
        g->esi = self;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10238526u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        self = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x70u);
        in_esi = rd32(sp0 - 0x6cu);
        g->esp = sp0 - 0x70u;
        g->eax = (uint32_t)(int16_t)arg1 - 3u;
        g->esi = self;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1023852du:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        self = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x70u);
        in_esi = rd32(sp0 - 0x6cu);
        g->esp = sp0 - 0x70u;
        g->eax = (uint32_t)(int16_t)arg1 - 3u;
        g->esi = self;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10238534u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t edi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x70u);
        in_esi = rd32(sp0 - 0x6cu);
        g->esp = sp0 - 0x70u;
        (void)sp0;
        return 1;
    }
    case 0x10238539u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x70u;
        (void)sp0;
        return 1;
    }
    case 0x10238541u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x70u);
        in_esi = rd32(sp0 - 0x6cu);
        g->esp = sp0 - 0x70u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1023854cu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x70u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10238557u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x70u;
        (void)sp0;
        return 1;
    }
    case 0x1023855fu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x70u);
        in_esi = rd32(sp0 - 0x6cu);
        g->esp = sp0 - 0x70u;
        (void)sp0;
        return 1;
    }
    case 0x1023857bu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x10238588u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x74u;
        g->ecx = 0xau;
        (void)sp0;
        return 1;
    }
    case 0x1023858du:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x10238591u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x1023859cu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x7cu;
        wr32(sp0 - 0x78u, sp0 - 0x28u);
        (void)sp0;
        return 1;
    }
    case 0x102385a3u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x74u;
        wr32(sp0 - 0x78u, sp0 - 0x28u);
        (void)sp0;
        return 1;
    }
    case 0x102385b7u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x80u;
        wr32(sp0 - 0x80u, sp0 - 0x48u);
        wr32(sp0 - 0x78u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x102385bau:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x102385cbu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x84u;
        wr32(sp0 - 0x7cu, sp0 - 0x48u);
        wr32(sp0 - 0x78u, sp0 - 0x68u);
        (void)sp0;
        return 1;
    }
    case 0x102385d7u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x70u;
        wr32(sp0 - 0x7cu, sp0 - 0x48u);
        wr32(sp0 - 0x78u, sp0 - 0x68u);
        (void)sp0;
        return 1;
    }
    case 0x102385ecu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x70u;
        wr32(sp0 - 0x7cu, sp0 - 0x48u);
        wr32(sp0 - 0x78u, sp0 - 0x68u);
        (void)sp0;
        return 1;
    }
    case 0x102385f6u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x74u;
        wr32(sp0 - 0x7cu, sp0 - 0x48u);
        wr32(sp0 - 0x78u, sp0 - 0x68u);
        wr32(sp0 - 0x74u, sp0 - 0x68u);
        (void)sp0;
        return 1;
    }
    case 0x102385fdu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x70u;
        wr32(sp0 - 0x7cu, sp0 - 0x48u);
        wr32(sp0 - 0x78u, sp0 - 0x68u);
        wr32(sp0 - 0x74u, sp0 - 0x68u);
        (void)sp0;
        return 1;
    }
    case 0x10238608u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x70u;
        wr32(sp0 - 0x7cu, sp0 - 0x48u);
        wr32(sp0 - 0x78u, sp0 - 0x68u);
        wr32(sp0 - 0x74u, sp0 - 0x68u);
        (void)sp0;
        return 1;
    }
    case 0x10238615u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x70u;
        wr32(sp0 - 0x7cu, sp0 - 0x48u);
        wr32(sp0 - 0x78u, sp0 - 0x68u);
        wr32(sp0 - 0x74u, sp0 - 0x68u);
        (void)sp0;
        return 1;
    }
    case 0x10238629u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x70u;
        wr32(sp0 - 0x7cu, sp0 - 0x48u);
        wr32(sp0 - 0x78u, sp0 - 0x68u);
        (void)sp0;
        return 1;
    }
    case 0x10238631u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x70u);
        in_esi = rd32(sp0 - 0x6cu);
        g->esp = sp0 - 0x70u;
        g->eax = (uint32_t)(int16_t)arg1 - 3u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1023863cu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x70u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1023864bu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x70u;
        (void)sp0;
        return 1;
    }
    case 0x10238653u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x70u);
        in_esi = rd32(sp0 - 0x6cu);
        g->esp = sp0 - 0x70u;
        g->eax = (uint32_t)(int16_t)arg1 - 3u;
        (void)sp0;
        return 1;
    }
    case 0x10238660u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x70u;
        (void)sp0;
        return 1;
    }
    case 0x10238668u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x70u);
        in_esi = rd32(sp0 - 0x6cu);
        g->esp = sp0 - 0x70u;
        g->eax = (uint32_t)(int16_t)arg1 - 3u;
        (void)sp0;
        return 1;
    }
    case 0x10238675u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_6c;
        uint32_t loc_70;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_70 = rd32(sp0 - 0x70u);
        loc_6c = rd32(sp0 - 0x6cu);
        g->esp = sp0 - 0x70u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10238500(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10238500(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
