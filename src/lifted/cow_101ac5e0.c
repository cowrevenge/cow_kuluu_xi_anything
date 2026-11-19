/* f_0x101ac5e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=7 */
uint32_t cow_fn_101ac5e0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_38c;
    uint32_t loc_394;
    uint32_t loc_398;
    uint32_t sf;
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
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg5 = rd32(sp0 + 0x14u);
    const uint32_t arg6 = rd32(sp0 + 0x18u);
    const uint32_t arg7 = rd32(sp0 + 0x1cu);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 976u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101ac5ffu: in_eax = g->eax; self = g->ecx; in_edx = g->edx; ebp = g->ebp; esi = g->esi; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x3b0u); in_esi = rd32(sp0 - 0x3acu); in_ebp = rd32(sp0 - 0x3a8u); in_ebx = rd32(sp0 - 0x3a4u); g->ebp = rd32(sp0 - 0x3a8u); g->ebx = rd32(sp0 - 0x3a4u); g->edi = rd32(sp0 - 0x3b0u); g->esi = rd32(sp0 - 0x3acu); goto E_101ac5ff;
    case 0x101ac616u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; zf = g->zf; sf = g->sf; goto E_101ac616;
    case 0x101ac61bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; goto E_101ac61b;
    case 0x101ac62bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; goto E_101ac62b;
    case 0x101ac66fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; goto E_101ac66f;
    case 0x101ac673u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; goto E_101ac673;
    case 0x101ac67bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; goto E_101ac67b;
    case 0x101ac683u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; goto E_101ac683;
    case 0x101ac6bdu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; goto E_101ac6bd;
    case 0x101ac6e4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; loc_398 = rd32(sp0 - 0x398u); loc_394 = rd32(sp0 - 0x394u); loc_38c = rd32(sp0 - 0x38cu); goto E_101ac6e4;
    case 0x101ac6f4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; loc_398 = rd32(sp0 - 0x398u); goto E_101ac6f4;
    case 0x101ac6feu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; loc_398 = rd32(sp0 - 0x398u); loc_394 = rd32(sp0 - 0x394u); loc_38c = rd32(sp0 - 0x38cu); goto E_101ac6fe;
    case 0x101ac70au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; zf = g->zf; sf = g->sf; loc_398 = rd32(sp0 - 0x398u); loc_394 = rd32(sp0 - 0x394u); loc_38c = rd32(sp0 - 0x38cu); goto E_101ac70a;
    case 0x101ac715u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; zf = g->zf; sf = g->sf; loc_398 = rd32(sp0 - 0x398u); loc_394 = rd32(sp0 - 0x394u); loc_38c = rd32(sp0 - 0x38cu); goto E_101ac715;
    case 0x101ac724u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; zf = g->zf; sf = g->sf; loc_398 = rd32(sp0 - 0x398u); loc_394 = rd32(sp0 - 0x394u); loc_38c = rd32(sp0 - 0x38cu); goto E_101ac724;
    case 0x101ac72fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; zf = g->zf; sf = g->sf; loc_398 = rd32(sp0 - 0x398u); loc_394 = rd32(sp0 - 0x394u); loc_38c = rd32(sp0 - 0x38cu); goto E_101ac72f;
    case 0x101ac73bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; zf = g->zf; sf = g->sf; loc_398 = rd32(sp0 - 0x398u); loc_394 = rd32(sp0 - 0x394u); loc_38c = rd32(sp0 - 0x38cu); goto E_101ac73b;
    case 0x101ac747u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; loc_398 = rd32(sp0 - 0x398u); loc_394 = rd32(sp0 - 0x394u); loc_38c = rd32(sp0 - 0x38cu); goto E_101ac747;
    case 0x101ac75fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; goto E_101ac75f;
    case 0x101ac79au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; goto E_101ac79a;
    case 0x101ac7dbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; goto E_101ac7db;
    case 0x101ac7e1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; goto E_101ac7e1;
    case 0x101ac80fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; goto E_101ac80f;
    case 0x101ac81cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; loc_394 = rd32(sp0 - 0x394u); loc_38c = rd32(sp0 - 0x38cu); goto E_101ac81c;
    case 0x101ac826u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; loc_398 = rd32(sp0 - 0x398u); loc_394 = rd32(sp0 - 0x394u); loc_38c = rd32(sp0 - 0x38cu); goto E_101ac826;
    case 0x101ac82eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; loc_398 = rd32(sp0 - 0x398u); loc_394 = rd32(sp0 - 0x394u); loc_38c = rd32(sp0 - 0x38cu); goto E_101ac82e;
    case 0x101ac839u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; loc_398 = rd32(sp0 - 0x398u); loc_394 = rd32(sp0 - 0x394u); loc_38c = rd32(sp0 - 0x38cu); goto E_101ac839;
    case 0x101ac845u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; loc_398 = rd32(sp0 - 0x398u); loc_394 = rd32(sp0 - 0x394u); loc_38c = rd32(sp0 - 0x38cu); goto E_101ac845;
    case 0x101ac850u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; loc_398 = rd32(sp0 - 0x398u); loc_394 = rd32(sp0 - 0x394u); loc_38c = rd32(sp0 - 0x38cu); goto E_101ac850;
    case 0x101ac85cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; loc_398 = rd32(sp0 - 0x398u); loc_394 = rd32(sp0 - 0x394u); loc_38c = rd32(sp0 - 0x38cu); goto E_101ac85c;
    case 0x101ac88cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x3b0u); in_esi = rd32(sp0 - 0x3acu); in_ebp = rd32(sp0 - 0x3a8u); in_ebx = rd32(sp0 - 0x3a4u); g->ebp = rd32(sp0 - 0x3a8u); g->ebx = rd32(sp0 - 0x3a4u); g->edi = rd32(sp0 - 0x3b0u); g->esi = rd32(sp0 - 0x3acu); goto E_101ac88c;
    default: break;
    }
#endif

    COW_AT(101ac5e0)
    wr32(sp0 - 0x3a4u, in_ebx);
    wr32(sp0 - 0x3a8u, in_ebp);
    wr32(sp0 - 0x3acu, in_esi);
    wr32(sp0 - 0x3b0u, in_edi);
    wr32(sp0 - 0x390u, self);
    if (arg2 == 0u)
    {
        edx = in_edx;
        goto L_101ac88c;
    }
    COW_AT(101ac5ff)
    wr32(sp0 - 0x3b4u, 0u);
    wr32(sp0 - 0x3b8u, arg1);
    g->eax = in_eax;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x3b0u;
    t1 = cow_stdcall(g, COW_IMG(0x101ad1b0u), 2, arg1, 0u);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)t1 == 0u)
    {
        edx = t3;
        goto L_101ac88c;
    }
    eax = t1;
    ecx = t2;
    edx = t3;
    COW_AT(101ac616)
    if ((int32_t)arg2 >= 2) goto L_101ac62b;
    COW_AT(101ac61b)
    g->ebx = rd32(sp0 - 0x3a4u);
    g->esi = rd32(sp0 - 0x3acu);
    g->edi = rd32(sp0 - 0x3b0u);
    g->ebp = rd32(sp0 - 0x3a8u);
    g->edx = edx;
    return 0xffffffffu;
L_101ac62b: ;
    COW_AT(101ac62b)
    t4 = rd8(arg1 + 1u);
    t5 = rd8(arg1 + 4u);
    wr8(sp0 - 0x396u, rd8(arg1 + 3u));
    t6 = rd32(self + 0x3cu);
    wr8(sp0 - 0x395u, (uint8_t)t5);
    wr32(sp0 - 0x38cu, 0u);
    t7 = rd8(t6 + 4u);
    wr8(sp0 - 0x398u, (uint8_t)t4);
    wr8(sp0 - 0x39cu, 0u);
    wr8(sp0 - 0x39bu, 0u);
    wr8(sp0 - 0x39au, 0u);
    wr8(sp0 - 0x399u, 0u);
    wr8(sp0 - 0x39du, 1u);
    wr8(sp0 - 0x397u, (uint8_t)t7);
    if ((uint8_t)t4 >= 7u)
    {
        ecx = t6;
        goto L_101ac6bd;
    }
    eax = (eax & 0xffffff00u) | t4;
    ecx = t6;
    edx = ((edx | t5) & 0xffffff00u) | t7;
    COW_AT(101ac66f)
    if ((uint8_t)eax != 6u) goto L_101ac6bd;
    COW_AT(101ac673)
    if ((int8_t)rd8(arg1 + 5u) < 0) goto L_101ac6e4;
    ecx = (uint32_t)(int8_t)rd8(arg1 + 5u);
    COW_AT(101ac67b)
    if ((int32_t)ecx > 450) goto L_101ac6e4;
    COW_AT(101ac683)
    wr32(sp0 - 0x398u, ecx);
    t8 = rd32(arg5);
    wr8(sp0 - 0x39du, 0u);
    t9 = ecx + t8 + 7u;
    wr32(arg5, t9);
    esi = arg1 + 6u;
    edi = sp0 - 0x1c4u;
    ecx = ecx >> 2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x394u, ecx + 7u);
    ecx = ecx & 3u;
    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    eax = ecx + 7u;
    edx = ecx;
    loc_38c = 0u;
    loc_398 = ecx;
    loc_394 = ecx + 7u;
L_101ac6fe: ;
    COW_AT(101ac6fe)
    if (rd8(sp0 - 0x39du) == 0u)
    {
        ebp = 0u;
    }
    else
    {
        eax = (eax & 0xffffff00u) | rd8(sp0 - 0x39du);
    COW_AT(101ac70a)
        if ((uint8_t)arg6 == 0u)
        {
            eax = (eax & 0xffffff00u) | (uint8_t)arg6;
            ebp = 0u;
        }
        else
        {
            eax = (eax & 0xffffff00u) | (uint8_t)arg6;
    COW_AT(101ac715)
            wr8(sp0 - 0x388u, 0xefu);
            wr8(sp0 - 0x387u, 0x27u);
            ebp = 2u;
        }
    COW_AT(101ac724)
        if ((uint8_t)arg7 != 0u)
        {
    COW_AT(101ac72f)
            wr8(ebp + sp0 - 0x388u, 0x7fu);
            wr8(ebp + sp0 - 0x387u, 0x69u);
            ebp = ebp + 2u;
        }
    }
    COW_AT(101ac73b)
    if ((int32_t)loc_398 <= 0)
    {
        eax = loc_398;
        goto L_101ac826;
    }
    ebx = self;
    edi = 0u;
L_101ac747: ;
    COW_AT(101ac747)
    wr32(sp0 - 0x3b4u, edi);
    wr32(sp0 - 0x3b8u, sp0 - 0x1c4u);
    g->eax = sp0 - 0x1c4u;
    g->edx = edx;
    g->esp = sp0 - 0x3b0u;
    t13 = cow_stdcall(g, COW_IMG(0x101ad1b0u), 2, sp0 - 0x1c4u, edi);
    t14 = g->edx;
    if ((uint8_t)t13 == 0u)
    {
        eax = t13;
        edx = t14;
        goto L_101ac80f;
    }
    COW_AT(101ac75f)
    wr32(sp0 - 0x3b4u, 0u);
    wr32(sp0 - 0x3b8u, 0u);
    wr32(sp0 - 0x3bcu, sp0 - 0x38cu);
    wr32(sp0 - 0x3c0u, 0x1c2u - ebp);
    t15 = ebp + sp0 - 0x388u;
    wr32(sp0 - 0x3c4u, t15);
    t16 = arg2 - rd32(sp0 - 0x394u);
    wr32(sp0 - 0x3c8u, t16);
    t17 = arg1 + rd32(sp0 - 0x394u);
    wr32(sp0 - 0x3ccu, t17);
    g->eax = t17;
    g->edx = t16;
    t18 = rd32(sp0 - 0x390u);
    g->esp = sp0 - 0x3b0u;
    t19 = cow_thiscall(g, COW_IMG(0x101ac5e0u), t18, 7, t17, t16, t15, 0x1c2u - ebp, sp0 - 0x38cu, 0u, 0u);
    t20 = g->ecx;
    t21 = g->edx;
    if (t19 != 0u)
    {
        eax = t19;
        edx = t21;
        zf = t19 == 0u;
        sf = (int32_t)t19 < 0;
        goto L_101ac7db;
    }
    eax = t19;
    ecx = t20;
    edx = t21;
    ebx = t15;
    esi = 0x1c2u - ebp;
    COW_AT(101ac79a)
    t22 = rd8(edi + sp0 - 0x1c2u);
    t23 = rd8(edi + sp0 - 0x1c1u);
    t24 = rd8(edi + sp0 - 0x1c3u);
    wr8(sp0 - 0x39cu, (uint8_t)t24);
    t25 = rd8(edi + sp0 - 0x1c0u);
    wr8(sp0 - 0x39au, (uint8_t)t23);
    t26 = rd32(sp0 - 0x390u);
    wr8(sp0 - 0x39bu, (uint8_t)t22);
    wr8(sp0 - 0x399u, (uint8_t)t25);
    wr32(sp0 - 0x3b4u, esi);
    wr32(sp0 - 0x3b8u, ebx);
    t27 = rd32(sp0 - 0x39cu);
    wr32(sp0 - 0x3bcu, t27);
    g->esp = sp0 - 0x3b0u;
    t28 = cow_call_regs(g, COW_IMG(0x101bc100u), t27, rd32(t26 + 0x3cu), g->edx, 0, 3, t27, ebx, esi);
    eax = t28;
L_101ac7e1: ;
    COW_AT(101ac7e1)
    t29 = rd32(sp0 - 0x38cu) + rd32(sp0 - 0x394u);
    wr32(sp0 - 0x394u, t29);
    t30 = rd32(arg5) + rd32(sp0 - 0x38cu);
    t31 = rd32(sp0 - 0x390u);
    wr32(arg5, t30);
    wr32(sp0 - 0x38cu, 0u);
    edx = t30;
    ebx = t31;
    ebp = eax + ebp;
    eax = arg5;
    edi = edi + 6u;
    loc_394 = t29;
    loc_38c = 0u;
L_101ac81c: ;
    COW_AT(101ac81c)
    if ((int32_t)edi < (int32_t)rd32(sp0 - 0x398u))
    {
        loc_398 = rd32(sp0 - 0x398u);
        goto L_101ac747;
    }
L_101ac826: ;
    COW_AT(101ac826)
    if (rd8(sp0 - 0x39du) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(sp0 - 0x39du);
    COW_AT(101ac82e)
        if ((uint8_t)arg7 == 0u)
        {
            eax = (eax & 0xffffff00u) | (uint8_t)arg7;
        }
        else
        {
            eax = (eax & 0xffffff00u) | (uint8_t)arg7;
    COW_AT(101ac839)
            wr8(ebp + sp0 - 0x388u, 0x7fu);
            wr8(ebp + sp0 - 0x387u, 0x64u);
            ebp = ebp + 2u;
        }
    COW_AT(101ac845)
        if ((uint8_t)arg6 != 0u)
        {
    COW_AT(101ac850)
            wr8(ebp + sp0 - 0x388u, 0xefu);
            wr8(ebp + sp0 - 0x387u, 0x28u);
            ebp = ebp + 2u;
        }
    }
    COW_AT(101ac85c)
    esi = sp0 - 0x388u;
    edi = arg3;
    ecx = ebp >> 2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    ecx = ebp & 3u;
    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    wr8(arg3 + ebp, 0u);
    g->ebx = rd32(sp0 - 0x3a4u);
    g->esi = rd32(sp0 - 0x3acu);
    g->edi = rd32(sp0 - 0x3b0u);
    g->ebp = rd32(sp0 - 0x3a8u);
    g->edx = ebp;
    return ebp;
L_101ac6bd: ;
    COW_AT(101ac6bd)
    wr32(sp0 - 0x3b4u, 0x1c2u);
    wr32(sp0 - 0x3b8u, sp0 - 0x1c4u);
    t10 = rd32(sp0 - 0x398u);
    wr32(sp0 - 0x3bcu, t10);
    wr32(sp0 - 0x394u, 6u);
    g->edx = t10;
    g->esp = sp0 - 0x3b0u;
    t11 = cow_call_regs(g, COW_IMG(0x101bc100u), sp0 - 0x1c4u, ecx, g->edx, 0, 3, t10, sp0 - 0x1c4u, 0x1c2u);
    t12 = g->edx;
    wr32(sp0 - 0x398u, t11);
    if ((int32_t)t11 >= 0)
    {
        edx = t12;
        loc_398 = t11;
        goto L_101ac6f4;
    }
    eax = t11;
    edx = t12;
L_101ac6e4: ;
    COW_AT(101ac6e4)
    g->ebx = rd32(sp0 - 0x3a4u);
    g->esi = rd32(sp0 - 0x3acu);
    g->edi = rd32(sp0 - 0x3b0u);
    g->ebp = rd32(sp0 - 0x3a8u);
    g->edx = edx;
    return 0xffffffffu;
L_101ac6f4: ;
    COW_AT(101ac6f4)
    wr32(arg5, rd32(arg5) + 6u);
    eax = arg5;
    loc_38c = rd32(sp0 - 0x38cu);
    loc_394 = 6u;
    goto L_101ac6fe;
L_101ac7db: ;
    COW_AT(101ac7db)
    if (zf || sf) goto L_101ac6e4;
    goto L_101ac7e1;
L_101ac80f: ;
    COW_AT(101ac80f)
    t32 = rd8(edi + sp0 - 0x1c4u);
    wr8(ebp + sp0 - 0x388u, (uint8_t)t32);
    edx = (edx & 0xffffff00u) | t32;
    ebp = ebp + 1u;
    edi = edi + 1u;
    loc_394 = rd32(sp0 - 0x394u);
    loc_38c = rd32(sp0 - 0x38cu);
    goto L_101ac81c;
L_101ac88c: ;
    COW_AT(101ac88c)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    g->edx = edx;
    return 0u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101ac5e0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101ac5ffu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ebp;
        uint32_t esi;
        uint32_t in_eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t sf;
        uint32_t zf;
        in_eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x3b0u);
        in_esi = rd32(sp0 - 0x3acu);
        in_ebp = rd32(sp0 - 0x3a8u);
        in_ebx = rd32(sp0 - 0x3a4u);
        g->esp = sp0 - 0x3b0u;
        g->ebx = self;
        g->edi = arg2;
        wr32(sp0 - 0x390u, self);
        (void)sp0;
        return 1;
    }
    case 0x101ac616u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x3b0u;
        g->esi = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101ac61bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x3b0u;
        (void)sp0;
        return 1;
    }
    case 0x101ac62bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x3b0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101ac66fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x3b0u;
        g->esi = arg1;
        wr32(sp0 - 0x38cu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x101ac673u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x3b0u;
        g->esi = arg1;
        wr32(sp0 - 0x38cu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x101ac67bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x3b0u;
        g->esi = arg1;
        wr32(sp0 - 0x38cu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x101ac683u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x3b0u;
        g->esi = arg1;
        wr32(sp0 - 0x38cu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x101ac6bdu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x3b0u;
        wr32(sp0 - 0x38cu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x101ac6e4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38c;
        uint32_t loc_394;
        uint32_t loc_398;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_398 = rd32(sp0 - 0x398u);
        loc_394 = rd32(sp0 - 0x394u);
        loc_38c = rd32(sp0 - 0x38cu);
        g->esp = sp0 - 0x3b0u;
        (void)sp0;
        return 1;
    }
    case 0x101ac6f4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_398;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_398 = rd32(sp0 - 0x398u);
        g->esp = sp0 - 0x3b0u;
        wr32(sp0 - 0x3b8u, sp0 - 0x1c4u);
        wr32(sp0 - 0x394u, 6u);
        (void)sp0;
        return 1;
    }
    case 0x101ac6feu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_38c;
        uint32_t loc_394;
        uint32_t loc_398;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_398 = rd32(sp0 - 0x398u);
        loc_394 = rd32(sp0 - 0x394u);
        loc_38c = rd32(sp0 - 0x38cu);
        g->esp = sp0 - 0x3b0u;
        (void)sp0;
        return 1;
    }
    case 0x101ac70au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_38c;
        uint32_t loc_394;
        uint32_t loc_398;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        zf = g->zf;
        sf = g->sf;
        loc_398 = rd32(sp0 - 0x398u);
        loc_394 = rd32(sp0 - 0x394u);
        loc_38c = rd32(sp0 - 0x38cu);
        g->esp = sp0 - 0x3b0u;
        g->ebp = 0u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101ac715u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_38c;
        uint32_t loc_394;
        uint32_t loc_398;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        zf = g->zf;
        sf = g->sf;
        loc_398 = rd32(sp0 - 0x398u);
        loc_394 = rd32(sp0 - 0x394u);
        loc_38c = rd32(sp0 - 0x38cu);
        g->esp = sp0 - 0x3b0u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101ac724u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_38c;
        uint32_t loc_394;
        uint32_t loc_398;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        zf = g->zf;
        sf = g->sf;
        loc_398 = rd32(sp0 - 0x398u);
        loc_394 = rd32(sp0 - 0x394u);
        loc_38c = rd32(sp0 - 0x38cu);
        g->esp = sp0 - 0x3b0u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101ac72fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_38c;
        uint32_t loc_394;
        uint32_t loc_398;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        zf = g->zf;
        sf = g->sf;
        loc_398 = rd32(sp0 - 0x398u);
        loc_394 = rd32(sp0 - 0x394u);
        loc_38c = rd32(sp0 - 0x38cu);
        g->esp = sp0 - 0x3b0u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101ac73bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_38c;
        uint32_t loc_394;
        uint32_t loc_398;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        zf = g->zf;
        sf = g->sf;
        loc_398 = rd32(sp0 - 0x398u);
        loc_394 = rd32(sp0 - 0x394u);
        loc_38c = rd32(sp0 - 0x38cu);
        g->esp = sp0 - 0x3b0u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101ac747u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38c;
        uint32_t loc_394;
        uint32_t loc_398;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_398 = rd32(sp0 - 0x398u);
        loc_394 = rd32(sp0 - 0x394u);
        loc_38c = rd32(sp0 - 0x38cu);
        g->esp = sp0 - 0x3b0u;
        (void)sp0;
        return 1;
    }
    case 0x101ac75fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x3b0u;
        wr32(sp0 - 0x3b8u, sp0 - 0x1c4u);
        (void)sp0;
        return 1;
    }
    case 0x101ac79au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x3b0u;
        wr32(sp0 - 0x3bcu, sp0 - 0x38cu);
        (void)sp0;
        return 1;
    }
    case 0x101ac7dbu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x3b0u;
        g->of = (uint8_t)(0u);
        wr32(sp0 - 0x3bcu, sp0 - 0x38cu);
        (void)sp0;
        return 1;
    }
    case 0x101ac7e1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x3b0u;
        (void)sp0;
        return 1;
    }
    case 0x101ac80fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x3b0u;
        wr32(sp0 - 0x3b8u, sp0 - 0x1c4u);
        (void)sp0;
        return 1;
    }
    case 0x101ac81cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38c;
        uint32_t loc_394;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_394 = rd32(sp0 - 0x394u);
        loc_38c = rd32(sp0 - 0x38cu);
        g->esp = sp0 - 0x3b0u;
        (void)sp0;
        return 1;
    }
    case 0x101ac826u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38c;
        uint32_t loc_394;
        uint32_t loc_398;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_398 = rd32(sp0 - 0x398u);
        loc_394 = rd32(sp0 - 0x394u);
        loc_38c = rd32(sp0 - 0x38cu);
        g->esp = sp0 - 0x3b0u;
        (void)sp0;
        return 1;
    }
    case 0x101ac82eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38c;
        uint32_t loc_394;
        uint32_t loc_398;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_398 = rd32(sp0 - 0x398u);
        loc_394 = rd32(sp0 - 0x394u);
        loc_38c = rd32(sp0 - 0x38cu);
        g->esp = sp0 - 0x3b0u;
        (void)sp0;
        return 1;
    }
    case 0x101ac839u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38c;
        uint32_t loc_394;
        uint32_t loc_398;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_398 = rd32(sp0 - 0x398u);
        loc_394 = rd32(sp0 - 0x394u);
        loc_38c = rd32(sp0 - 0x38cu);
        g->esp = sp0 - 0x3b0u;
        (void)sp0;
        return 1;
    }
    case 0x101ac845u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38c;
        uint32_t loc_394;
        uint32_t loc_398;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_398 = rd32(sp0 - 0x398u);
        loc_394 = rd32(sp0 - 0x394u);
        loc_38c = rd32(sp0 - 0x38cu);
        g->esp = sp0 - 0x3b0u;
        (void)sp0;
        return 1;
    }
    case 0x101ac850u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38c;
        uint32_t loc_394;
        uint32_t loc_398;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_398 = rd32(sp0 - 0x398u);
        loc_394 = rd32(sp0 - 0x394u);
        loc_38c = rd32(sp0 - 0x38cu);
        g->esp = sp0 - 0x3b0u;
        (void)sp0;
        return 1;
    }
    case 0x101ac85cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38c;
        uint32_t loc_394;
        uint32_t loc_398;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_398 = rd32(sp0 - 0x398u);
        loc_394 = rd32(sp0 - 0x394u);
        loc_38c = rd32(sp0 - 0x38cu);
        g->esp = sp0 - 0x3b0u;
        (void)sp0;
        return 1;
    }
    case 0x101ac88cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x3b0u);
        in_esi = rd32(sp0 - 0x3acu);
        in_ebp = rd32(sp0 - 0x3a8u);
        in_ebx = rd32(sp0 - 0x3a4u);
        g->esp = sp0 - 0x3b0u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101ac5e0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101ac5e0(g);
    g->esp = sp0;
    rt_return(g, r, 28u);
}
/* COW_ADAPTER END */
