/* f_0x100165b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=7 */
uint32_t cow_fn_100165b0(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_26c;
    uint32_t loc_270;
    uint32_t loc_274;
    uint32_t loc_278;
    uint32_t loc_27c;
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
    uint32_t t46;
    uint32_t t47;
    uint32_t t48;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    unsigned zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(sp0 + 0x10u);
    const uint32_t arg5 = rd32(sp0 + 0x14u);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 688u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100165cbu: self = g->ecx; in_edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x27cu); in_esi = rd32(sp0 - 0x278u); in_ebp = rd32(sp0 - 0x274u); in_ebx = rd32(sp0 - 0x270u); g->ebp = rd32(sp0 - 0x274u); g->ebx = rd32(sp0 - 0x270u); g->edi = rd32(sp0 - 0x27cu); g->esi = rd32(sp0 - 0x278u); goto E_100165cb;
    case 0x100165ceu: self = g->ecx; in_edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x27cu); in_esi = rd32(sp0 - 0x278u); in_ebp = rd32(sp0 - 0x274u); in_ebx = rd32(sp0 - 0x270u); g->ebp = rd32(sp0 - 0x274u); g->ebx = rd32(sp0 - 0x270u); g->edi = rd32(sp0 - 0x27cu); g->esi = rd32(sp0 - 0x278u); goto E_100165ce;
    case 0x100165d1u: self = g->ecx; in_edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x27cu); in_esi = rd32(sp0 - 0x278u); in_ebp = rd32(sp0 - 0x274u); in_ebx = rd32(sp0 - 0x270u); g->ebp = rd32(sp0 - 0x274u); g->ebx = rd32(sp0 - 0x270u); g->edi = rd32(sp0 - 0x27cu); g->esi = rd32(sp0 - 0x278u); goto E_100165d1;
    case 0x100165e6u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100165e6;
    case 0x100165f1u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100165f1;
    case 0x100165fau: eax = g->eax; self = g->ecx; in_edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x27cu); in_esi = rd32(sp0 - 0x278u); in_ebp = rd32(sp0 - 0x274u); in_ebx = rd32(sp0 - 0x270u); g->ebp = rd32(sp0 - 0x274u); g->ebx = rd32(sp0 - 0x270u); g->edi = rd32(sp0 - 0x27cu); g->esi = rd32(sp0 - 0x278u); goto E_100165fa;
    case 0x10016608u: eax = g->eax; self = g->ecx; in_edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x27cu); in_esi = rd32(sp0 - 0x278u); in_ebp = rd32(sp0 - 0x274u); in_ebx = rd32(sp0 - 0x270u); g->ebp = rd32(sp0 - 0x274u); g->ebx = rd32(sp0 - 0x270u); g->edi = rd32(sp0 - 0x27cu); g->esi = rd32(sp0 - 0x278u); goto E_10016608;
    case 0x1001661cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_27c = rd32(sp0 - 0x27cu); loc_278 = rd32(sp0 - 0x278u); loc_274 = rd32(sp0 - 0x274u); loc_270 = rd32(sp0 - 0x270u); goto E_1001661c;
    case 0x10016665u: eax = g->eax; ecx = g->ecx; edx = g->edx; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10016665;
    case 0x1001666au: eax = g->eax; ecx = g->ecx; edx = g->edx; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1001666a;
    case 0x10016687u: eax = g->eax; ecx = g->ecx; edx = g->edx; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10016687;
    case 0x100166a1u: eax = g->eax; ecx = g->ecx; edx = g->edx; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100166a1;
    case 0x100166d9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100166d9;
    case 0x100166e3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_26c = rd32(sp0 - 0x26cu); goto E_100166e3;
    case 0x100166f0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_26c = rd32(sp0 - 0x26cu); goto E_100166f0;
    case 0x100166fdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_26c = rd32(sp0 - 0x26cu); goto E_100166fd;
    case 0x1001670du: eax = g->eax; ecx = g->ecx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_26c = rd32(sp0 - 0x26cu); goto E_1001670d;
    case 0x10016717u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_26c = rd32(sp0 - 0x26cu); goto E_10016717;
    case 0x10016751u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10016751;
    case 0x10016757u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10016757;
    case 0x10016764u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10016764;
    case 0x10016772u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10016772;
    case 0x1001677cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1001677c;
    case 0x1001678fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1001678f;
    case 0x100167d4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100167d4;
    case 0x100167e0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100167e0;
    case 0x100167e4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100167e4;
    case 0x100167f6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100167f6;
    case 0x100167fdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100167fd;
    case 0x1001680au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1001680a;
    case 0x10016811u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_26c = rd32(sp0 - 0x26cu); goto E_10016811;
    default: break;
    }
#endif

    COW_AT(100165b0)
    wr32(sp0 - 0x270u, in_ebx);
    wr32(sp0 - 0x274u, in_ebp);
    wr32(sp0 - 0x278u, in_esi);
    wr32(sp0 - 0x27cu, in_edi);
    if (arg5 == 1u)
    {
    COW_AT(10016608)
        wr32(COW_IMG(0x103505a4u), 0x300u);
        wr32(COW_IMG(0x103505a8u), 0xcf0000u);
        ecx = self;
        edx = in_edx;
        loc_270 = in_ebx;
        loc_274 = in_ebp;
        loc_278 = in_esi;
        loc_27c = in_edi;
    }
    else
    {
    COW_AT(100165cb)
        if (arg5 == 2u)
        {
    COW_AT(100165fa)
            wr32(COW_IMG(0x103505a4u), 0u);
            wr32(COW_IMG(0x103505a8u), 0x80000000u);
            ecx = self;
            edx = in_edx;
            loc_270 = in_ebx;
            loc_274 = in_ebp;
            loc_278 = in_esi;
            loc_27c = in_edi;
        }
        else
        {
    COW_AT(100165ce)
            if (arg5 != 3u)
            {
                ecx = self;
                edx = in_edx;
                loc_270 = in_ebx;
                loc_274 = in_ebp;
                loc_278 = in_esi;
                loc_27c = in_edi;
            }
            else
            {
    COW_AT(100165d1)
                wr32(sp0 - 0x280u, 0u);
                t1 = rd32(COW_IMG(0x103293a0u));
                wr32(COW_IMG(0x103505a4u), 0u);
                wr32(COW_IMG(0x103505a8u), 0x80000000u);
                g->eax = arg5 - 3u;
                g->edx = in_edx;
                g->esp = sp0 - 0x27cu;
                t2 = cow_thiscall(g, t1, self, 1, 0u);
                t3 = g->ecx;
                t4 = g->edx;
                eax = t2;
                ecx = t3;
                edx = t4;
                esi = t1;
    COW_AT(100165e6)
                wr32(sp0 - 0x280u, 1u);
                wr32(sp0 + 0x18u, eax);
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x27cu;
                t5 = cow_thiscall(g, esi, ecx, 1, 1u);
                t6 = g->ecx;
                t7 = g->edx;
                eax = t5;
                ecx = t6;
                edx = t7;
    COW_AT(100165f1)
                wr32(sp0 + 0x1cu, eax);
                loc_270 = rd32(sp0 - 0x270u);
                loc_274 = rd32(sp0 - 0x274u);
                loc_278 = rd32(sp0 - 0x278u);
                loc_27c = rd32(sp0 - 0x27cu);
            }
        }
    }
    COW_AT(1001661c)
    wr32(sp0 - 0x258u, 0u);
    wr32(sp0 - 0x280u, sp0 - 0x258u);
    wr32(sp0 - 0x254u, COW_IMG(0x10016870u));
    wr32(sp0 - 0x250u, 0u);
    wr32(sp0 - 0x24cu, 0u);
    wr32(sp0 - 0x248u, arg3);
    wr32(sp0 - 0x244u, 0u);
    wr32(sp0 - 0x240u, 0u);
    wr32(sp0 - 0x23cu, 6u);
    wr32(sp0 - 0x238u, 0u);
    wr32(sp0 - 0x234u, arg2);
    g->eax = sp0 - 0x258u;
    g->esp = sp0 - 0x27cu;
    t8 = cow_stdcall(g, rd32(COW_IMG(0x103293e0u)), 1, sp0 - 0x258u);   /* user32.dll!RegisterClassA */
    eax = t8;
    COW_AT(10016665)
    if ((uint16_t)eax == 0u) goto L_100166e3;
    COW_AT(1001666a)
    t9 = rd32(sp0 + 0x1cu);
    wr32(sp0 - 0x280u, t9);
    t10 = rd32(sp0 + 0x18u);
    wr32(sp0 - 0x284u, t10);
    wr32(sp0 - 0x288u, 0u);
    wr32(sp0 - 0x28cu, 0u);
    wr32(sp0 - 0x290u, sp0 - 0x268u);
    g->esp = sp0 - 0x27cu;
    cow_stdcall(g, rd32(COW_IMG(0x103293f0u)), 5, sp0 - 0x268u, 0u, 0u, t10, t9);   /* user32.dll!SetRect */
    COW_AT(10016687)
    wr32(sp0 - 0x280u, rd32(COW_IMG(0x103505a4u)));
    wr32(sp0 - 0x284u, 0u);
    wr32(sp0 - 0x288u, rd32(COW_IMG(0x103505a8u)));
    wr32(sp0 - 0x28cu, sp0 - 0x268u);
    g->esp = sp0 - 0x27cu;
    cow_stdcall(g, rd32(COW_IMG(0x10329348u)), 4, sp0 - 0x268u, rd32(COW_IMG(0x103505a8u)), 0u, rd32(COW_IMG(0x103505a4u)));   /* user32.dll!AdjustWindowRectEx */
    COW_AT(100166a1)
    wr32(sp0 - 0x280u, 0u);
    wr32(sp0 - 0x284u, arg3);
    wr32(sp0 - 0x288u, 0u);
    wr32(sp0 - 0x28cu, 0u);
    t11 = rd32(sp0 - 0x25cu) - rd32(sp0 - 0x264u);
    wr32(sp0 - 0x290u, t11);
    t12 = rd32(sp0 - 0x260u) - rd32(sp0 - 0x268u);
    wr32(sp0 - 0x294u, t12);
    wr32(sp0 - 0x298u, 0x80000000u);
    wr32(sp0 - 0x29cu, 0x80000000u);
    wr32(sp0 - 0x2a0u, rd32(COW_IMG(0x103505a8u)));
    wr32(sp0 - 0x2a4u, arg1);
    wr32(sp0 - 0x2a8u, arg2);
    wr32(sp0 - 0x2acu, rd32(COW_IMG(0x103505a4u)));
    g->eax = rd32(COW_IMG(0x103505a8u));
    g->ecx = arg1;
    t13 = rd32(COW_IMG(0x103505a8u));
    g->esp = sp0 - 0x27cu;
    t14 = cow_stdcall(g, rd32(COW_IMG(0x1032934cu)), 12, rd32(COW_IMG(0x103505a4u)), arg2, arg1, t13, 0x80000000u, 0x80000000u, t12, t11, 0u, 0u, arg3, 0u);   /* user32.dll!CreateWindowExA */
    t15 = g->ecx;
    eax = t14;
    ecx = t15;
    COW_AT(100166d9)
    wr32(sp0 - 0x26cu, eax);
    if (eax != 0u)
    {
        esi = eax;
        loc_26c = eax;
        goto L_100166f0;
    }
L_100166e3: ;
    COW_AT(100166e3)
    g->ebx = rd32(sp0 - 0x270u);
    g->esi = rd32(sp0 - 0x278u);
    g->edi = rd32(sp0 - 0x27cu);
    g->ebp = rd32(sp0 - 0x274u);
    return 0u;
L_100166f0: ;
    COW_AT(100166f0)
    if (arg5 != 0u)
    {
    COW_AT(100166fd)
        eax = arg4;
L_1001670d: ;
    COW_AT(1001670d)
        t16 = rd8(eax);
        wr8(eax + sp0 - arg4 - 0x104u, (uint8_t)t16);
        if ((uint8_t)t16 != 0u)
        {
            eax = eax + 1u;
            ecx = (ecx & 0xffffff00u) | t16;
            goto L_1001670d;
        }
        ecx = (ecx & 0xffffff00u) | t16;
    COW_AT(10016717)
        t17 = rd32(COW_IMG(0x103506b4u));
        edi = sp0 - 0x104u;
        eax = 0u;
        ecx = 0xffffffffu;
        cf = 0u;
        pf = PARITY(0u);
        af = 0u;
        zf = 1u;
        sf = 0u;
        of = 0u;
        while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
        wr32(sp0 - 0x280u, 0u);
        wr32(sp0 - 0x284u, esi);
        t18 = rd32(COW_IMG(0x103506acu));
        t19 = rd32(COW_IMG(0x103506b0u));
        wr32(edi - 1u, t18);
        t20 = rd16(COW_IMG(0x103506b8u));
        wr32(edi + 3u, t19);
        wr32(edi + 7u, t17);
        wr16(edi + 0xbu, (uint16_t)t20);
        g->eax = (t18 & 0xffff0000u) | t20;
        g->ecx = t19;
        g->edx = t17;
        g->esp = sp0 - 0x27cu;
        t21 = cow_stdcall(g, rd32(COW_IMG(0x10329350u)), 2, esi, 0u);   /* user32.dll!GetSystemMenu */
        t22 = g->ecx;
        t23 = g->edx;
        eax = t21;
        ecx = t22;
        edx = t23;
    COW_AT(10016751)
        if (eax == 0u)
        {
            ebp = eax;
        }
        else
        {
            ebp = eax;
    COW_AT(10016757)
            wr32(sp0 - 0x280u, 0u);
            wr32(sp0 - 0x284u, 0xf060u);
            wr32(sp0 - 0x288u, ebp);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x27cu;
            t24 = cow_stdcall(g, rd32(COW_IMG(0x10329354u)), 3, ebp, 0xf060u, 0u);   /* user32.dll!RemoveMenu */
            t25 = g->edx;
            eax = t24;
            edx = t25;
        }
    COW_AT(10016764)
        wr32(sp0 - 0x280u, sp0 - 0x104u);
        g->eax = eax;
        g->ecx = sp0 - 0x104u;
        g->edx = edx;
        g->esp = sp0 - 0x27cu;
        t26 = cow_stdcall(g, rd32(COW_IMG(0x10329134u)), 1, sp0 - 0x104u);   /* kernel32.dll!LoadLibraryA */
        t27 = g->ecx;
        t28 = g->edx;
        eax = t26;
        ecx = t27;
        edx = t28;
    COW_AT(10016772)
        if (eax != 0u)
        {
            esi = eax;
    COW_AT(1001677c)
            wr32(sp0 - 0x280u, 0x100u);
            wr32(sp0 - 0x284u, sp0 - 0x204u);
            wr32(sp0 - 0x288u, 0x65u);
            wr32(sp0 - 0x28cu, esi);
            g->ecx = ecx;
            g->edx = sp0 - 0x204u;
            g->esp = sp0 - 0x27cu;
            cow_stdcall(g, rd32(COW_IMG(0x10329358u)), 4, esi, 0x65u, sp0 - 0x204u, 0x100u);   /* user32.dll!LoadStringA */
            t29 = g->ecx;
            t30 = g->edx;
            ecx = t29;
            edx = t30;
    COW_AT(1001678f)
            wr32(sp0 - 0x20cu, sp0 - 0x204u);
            wr32(sp0 - 0x230u, 0x2cu);
            edi = sp0 - 0x204u;
            eax = 0u;
            ecx = 0xffffffffu;
            cf = 0u;
            pf = PARITY(0u);
            af = 0u;
            zf = 1u;
            sf = 0u;
            of = 0u;
            while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
            wr32(sp0 - 0x22cu, 0x12u);
            t31 = ~ecx - 1u;
            wr32(sp0 - 0x208u, t31);
            wr32(sp0 - 0x280u, sp0 - 0x230u);
            wr32(sp0 - 0x284u, 1u);
            wr32(sp0 - 0x288u, 0u);
            wr32(sp0 - 0x28cu, ebp);
            wr32(sp0 - 0x220u, 1u);
            wr32(sp0 - 0x228u, 0u);
            g->eax = eax;
            g->ecx = sp0 - 0x230u;
            g->edx = edx;
            g->esp = sp0 - 0x27cu;
            t32 = cow_stdcall(g, rd32(COW_IMG(0x1032935cu)), 4, ebp, 0u, 1u, sp0 - 0x230u);   /* user32.dll!InsertMenuItemA */
            t33 = g->ecx;
            t34 = g->edx;
            eax = t32;
            ecx = t33;
            edx = t34;
    COW_AT(100167d4)
            wr32(sp0 - 0x280u, 0xcfu);
            wr32(sp0 - 0x284u, esi);
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x27cu;
            t35 = cow_stdcall(g, rd32(COW_IMG(0x10329360u)), 2, esi, 0xcfu);   /* user32.dll!LoadIconA */
            t36 = g->ecx;
            t37 = g->edx;
            eax = t35;
            ecx = t36;
            edx = t37;
    COW_AT(100167e0)
            if (eax != 0u)
            {
    COW_AT(100167e4)
                wr32(sp0 - 0x280u, eax);
                wr32(sp0 - 0x284u, 0u);
                wr32(sp0 - 0x288u, 0x80u);
                t38 = rd32(sp0 - 0x26cu);
                wr32(sp0 - 0x28cu, t38);
                g->eax = eax;
                g->ecx = ecx;
                g->edx = t38;
                g->esp = sp0 - 0x27cu;
                t39 = cow_stdcall(g, rd32(COW_IMG(0x10329364u)), 4, t38, 0x80u, 0u, eax);   /* user32.dll!SendMessageA */
                t40 = g->ecx;
                t41 = g->edx;
                eax = t39;
                ecx = t40;
                edx = t41;
            }
    COW_AT(100167f6)
            wr32(sp0 - 0x280u, esi);
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x27cu;
            t42 = cow_stdcall(g, rd32(COW_IMG(0x10329130u)), 1, esi);   /* kernel32.dll!FreeLibrary */
            t43 = g->ecx;
            t44 = g->edx;
            eax = t42;
            ecx = t43;
            edx = t44;
        }
    COW_AT(100167fd)
        wr32(sp0 - 0x280u, 5u);
        t45 = rd32(sp0 - 0x26cu);
        wr32(sp0 - 0x284u, t45);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x27cu;
        t46 = cow_stdcall(g, rd32(COW_IMG(0x10329368u)), 2, t45, 5u);   /* user32.dll!ShowWindow */
        t47 = g->ecx;
        t48 = g->edx;
        eax = t46;
        ecx = t47;
        edx = t48;
        esi = t45;
    COW_AT(1001680a)
        wr32(sp0 - 0x280u, esi);
        g->esp = sp0 - 0x27cu;
        cow_stdcall(g, rd32(COW_IMG(0x1032936cu)), 1, esi);   /* user32.dll!UpdateWindow */
    }
    COW_AT(10016811)
    g->ebx = rd32(sp0 - 0x270u);
    g->esi = rd32(sp0 - 0x278u);
    g->edi = rd32(sp0 - 0x27cu);
    g->ebp = rd32(sp0 - 0x274u);
    return esi;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100165b0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100165cbu:
    {
        unsigned af;
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        unsigned cf;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
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
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x27cu);
        in_esi = rd32(sp0 - 0x278u);
        in_ebp = rd32(sp0 - 0x274u);
        in_ebx = rd32(sp0 - 0x270u);
        g->esp = sp0 - 0x27cu;
        g->eax = arg5 - 1u;
        g->ebx = 0u;
        g->ebp = 0x80000000u;
        (void)sp0;
        return 1;
    }
    case 0x100165ceu:
    {
        unsigned af;
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        unsigned cf;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
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
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x27cu);
        in_esi = rd32(sp0 - 0x278u);
        in_ebp = rd32(sp0 - 0x274u);
        in_ebx = rd32(sp0 - 0x270u);
        g->esp = sp0 - 0x27cu;
        g->eax = arg5 - 2u;
        g->ebx = 0u;
        g->ebp = 0x80000000u;
        (void)sp0;
        return 1;
    }
    case 0x100165d1u:
    {
        unsigned af;
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        unsigned cf;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
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
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x27cu);
        in_esi = rd32(sp0 - 0x278u);
        in_ebp = rd32(sp0 - 0x274u);
        in_ebx = rd32(sp0 - 0x270u);
        g->esp = sp0 - 0x27cu;
        g->eax = arg5 - 3u;
        g->ebx = 0u;
        g->ebp = 0x80000000u;
        (void)sp0;
        return 1;
    }
    case 0x100165e6u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x27cu;
        g->ebx = 0u;
        g->ebp = 0x80000000u;
        (void)sp0;
        return 1;
    }
    case 0x100165f1u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x27cu;
        g->ebx = 0u;
        g->ebp = 0x80000000u;
        (void)sp0;
        return 1;
    }
    case 0x100165fau:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
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
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x27cu);
        in_esi = rd32(sp0 - 0x278u);
        in_ebp = rd32(sp0 - 0x274u);
        in_ebx = rd32(sp0 - 0x270u);
        g->esp = sp0 - 0x27cu;
        g->ebx = 0u;
        g->ebp = 0x80000000u;
        (void)sp0;
        return 1;
    }
    case 0x10016608u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
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
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x27cu);
        in_esi = rd32(sp0 - 0x278u);
        in_ebp = rd32(sp0 - 0x274u);
        in_ebx = rd32(sp0 - 0x270u);
        g->esp = sp0 - 0x27cu;
        g->ebx = 0u;
        g->ebp = 0x80000000u;
        (void)sp0;
        return 1;
    }
    case 0x1001661cu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_270;
        uint32_t loc_274;
        uint32_t loc_278;
        uint32_t loc_27c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_27c = rd32(sp0 - 0x27cu);
        loc_278 = rd32(sp0 - 0x278u);
        loc_274 = rd32(sp0 - 0x274u);
        loc_270 = rd32(sp0 - 0x270u);
        g->esp = sp0 - 0x27cu;
        g->ebx = 0u;
        g->ebp = 0x80000000u;
        (void)sp0;
        return 1;
    }
    case 0x10016665u:
    {
        unsigned af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x27cu;
        g->ebx = 0u;
        g->ebp = 0x80000000u;
        g->esi = arg3;
        g->edi = arg2;
        wr32(sp0 - 0x280u, sp0 - 0x258u);
        (void)sp0;
        return 1;
    }
    case 0x1001666au:
    {
        unsigned af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x27cu;
        g->ebx = 0u;
        g->ebp = 0x80000000u;
        g->esi = arg3;
        g->edi = arg2;
        wr32(sp0 - 0x280u, sp0 - 0x258u);
        (void)sp0;
        return 1;
    }
    case 0x10016687u:
    {
        unsigned af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x27cu;
        g->ebx = 0u;
        g->ebp = 0x80000000u;
        g->esi = arg3;
        g->edi = arg2;
        wr32(sp0 - 0x290u, sp0 - 0x268u);
        (void)sp0;
        return 1;
    }
    case 0x100166a1u:
    {
        unsigned af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x27cu;
        g->ebx = 0u;
        g->ebp = 0x80000000u;
        g->esi = arg3;
        g->edi = arg2;
        wr32(sp0 - 0x290u, sp0 - 0x268u);
        wr32(sp0 - 0x28cu, sp0 - 0x268u);
        (void)sp0;
        return 1;
    }
    case 0x100166d9u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x27cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100166e3u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_26c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_26c = rd32(sp0 - 0x26cu);
        g->esp = sp0 - 0x27cu;
        (void)sp0;
        return 1;
    }
    case 0x100166f0u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_26c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_26c = rd32(sp0 - 0x26cu);
        g->esp = sp0 - 0x27cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100166fdu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_26c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_26c = rd32(sp0 - 0x26cu);
        g->esp = sp0 - 0x27cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1001670du:
    {
        unsigned af;
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_26c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_26c = rd32(sp0 - 0x26cu);
        g->esp = sp0 - 0x27cu;
        g->edx = sp0 - 0x104u - arg4;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10016717u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_26c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_26c = rd32(sp0 - 0x26cu);
        g->esp = sp0 - 0x27cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10016751u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x27cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10016757u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x27cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10016764u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x27cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10016772u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x27cu;
        g->ebx = 0u;
        wr32(sp0 - 0x280u, sp0 - 0x104u);
        (void)sp0;
        return 1;
    }
    case 0x1001677cu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x27cu;
        g->ebx = 0u;
        wr32(sp0 - 0x280u, sp0 - 0x104u);
        (void)sp0;
        return 1;
    }
    case 0x1001678fu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x27cu;
        g->ebx = 0u;
        wr32(sp0 - 0x284u, sp0 - 0x204u);
        (void)sp0;
        return 1;
    }
    case 0x100167d4u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x27cu;
        g->ebx = 0u;
        wr32(sp0 - 0x280u, sp0 - 0x230u);
        wr32(sp0 - 0x20cu, sp0 - 0x204u);
        (void)sp0;
        return 1;
    }
    case 0x100167e0u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x27cu;
        g->ebx = 0u;
        wr32(sp0 - 0x20cu, sp0 - 0x204u);
        (void)sp0;
        return 1;
    }
    case 0x100167e4u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x27cu;
        g->ebx = 0u;
        wr32(sp0 - 0x20cu, sp0 - 0x204u);
        (void)sp0;
        return 1;
    }
    case 0x100167f6u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x27cu;
        wr32(sp0 - 0x20cu, sp0 - 0x204u);
        (void)sp0;
        return 1;
    }
    case 0x100167fdu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x27cu;
        (void)sp0;
        return 1;
    }
    case 0x1001680au:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x27cu;
        (void)sp0;
        return 1;
    }
    case 0x10016811u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_26c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_26c = rd32(sp0 - 0x26cu);
        g->esp = sp0 - 0x27cu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100165b0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100165b0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
