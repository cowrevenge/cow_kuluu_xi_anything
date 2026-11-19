/* f_0x1026d32b - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_1026d32b(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_3c;
    uint32_t loc_4;
    uint32_t loc_40;
    uint32_t loc_44;
    uint32_t loc_4c;
    uint32_t loc_50;
    uint32_t loc_c;
    uint32_t of;
    uint32_t pf;
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
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 104u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1026d351u: ecx = g->ecx; in_edx = g->edx; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x50u); in_esi = rd32(sp0 - 0x4cu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x50u); g->esi = rd32(sp0 - 0x4cu); goto E_1026d351;
    case 0x1026d359u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x50u); in_esi = rd32(sp0 - 0x4cu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x50u); g->esi = rd32(sp0 - 0x4cu); goto E_1026d359;
    case 0x1026d393u: ecx = g->ecx; edx = g->edx; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_c = rd32(sp0 - 0xcu); goto E_1026d393;
    case 0x1026d39bu: ecx = g->ecx; edx = g->edx; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_c = rd32(sp0 - 0xcu); goto E_1026d39b;
    case 0x1026d3a1u: ecx = g->ecx; edx = g->edx; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_c = rd32(sp0 - 0xcu); goto E_1026d3a1;
    case 0x1026d3aeu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_c = rd32(sp0 - 0xcu); goto E_1026d3ae;
    case 0x1026d3b7u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_1026d3b7;
    case 0x1026d3c0u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_3c = rd32(sp0 - 0x3cu); loc_c = rd32(sp0 - 0xcu); goto E_1026d3c0;
    case 0x1026d3ceu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_3c = rd32(sp0 - 0x3cu); loc_c = rd32(sp0 - 0xcu); goto E_1026d3ce;
    case 0x1026d3f4u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_44 = rd32(sp0 - 0x44u); loc_3c = rd32(sp0 - 0x3cu); loc_c = rd32(sp0 - 0xcu); goto E_1026d3f4;
    case 0x1026d412u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_44 = rd32(sp0 - 0x44u); loc_3c = rd32(sp0 - 0x3cu); loc_c = rd32(sp0 - 0xcu); goto E_1026d412;
    case 0x1026d443u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_c = rd32(sp0 - 0xcu); goto E_1026d443;
    case 0x1026d458u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_40 = rd32(sp0 - 0x40u); loc_c = rd32(sp0 - 0xcu); goto E_1026d458;
    case 0x1026d461u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_40 = rd32(sp0 - 0x40u); loc_c = rd32(sp0 - 0xcu); goto E_1026d461;
    case 0x1026d467u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_40 = rd32(sp0 - 0x40u); loc_c = rd32(sp0 - 0xcu); goto E_1026d467;
    case 0x1026d480u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_40 = rd32(sp0 - 0x40u); loc_c = rd32(sp0 - 0xcu); goto E_1026d480;
    case 0x1026d492u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_40 = rd32(sp0 - 0x40u); loc_c = rd32(sp0 - 0xcu); goto E_1026d492;
    case 0x1026d494u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_40 = rd32(sp0 - 0x40u); loc_c = rd32(sp0 - 0xcu); goto E_1026d494;
    case 0x1026d4a4u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_40 = rd32(sp0 - 0x40u); loc_c = rd32(sp0 - 0xcu); goto E_1026d4a4;
    case 0x1026d4b9u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_40 = rd32(sp0 - 0x40u); loc_c = rd32(sp0 - 0xcu); goto E_1026d4b9;
    case 0x1026d4e5u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_1026d4e5;
    case 0x1026d4f9u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_1026d4f9;
    case 0x1026d4ffu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_1026d4ff;
    case 0x1026d513u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_1026d513;
    case 0x1026d52au: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_c = rd32(sp0 - 0xcu); goto E_1026d52a;
    case 0x1026d549u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_1026d549;
    case 0x1026d54eu: eax = g->eax; ecx = g->ecx; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_3c = rd32(sp0 - 0x3cu); loc_c = rd32(sp0 - 0xcu); goto E_1026d54e;
    case 0x1026d555u: ecx = g->ecx; edx = g->edx; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_c = rd32(sp0 - 0xcu); goto E_1026d555;
    case 0x1026d558u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_3c = rd32(sp0 - 0x3cu); loc_c = rd32(sp0 - 0xcu); loc_4 = rd32(sp0 - 4u); goto E_1026d558;
    default: break;
    }
#endif

    COW_AT(1026d32b)
    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x4cu, in_esi);
    wr32(sp0 - 0x50u, in_edi);
    edi = sp0 - 0x48u;
    eax = 0xccccccccu;
    ecx = 0x11u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x48u, 4u);
    if (rd32(arg1) != 0u)
    {
    COW_AT(1026d359)
        wr32(sp0 - 0x54u, 0u);
        t1 = rd32(arg2 + 4u);
        wr32(sp0 - 0x58u, t1);
        wr32(sp0 - 0x5cu, 0u);
        wr32(sp0 - 0x60u, arg1 + 4u);
        wr32(sp0 - 0x64u, rd32(arg1));
        g->eax = arg1 + 4u;
        g->ecx = arg1;
        g->edx = rd32(arg1);
        t2 = rd32(arg1);
        g->esp = sp0 - 0x50u;
        t3 = cow_stdcall(g, rd32(COW_IMG(0x10329430u)), 5, t2, arg1 + 4u, 0u, t1, 0u);   /* ws2_32.dll!WSAWaitForMultipleEvents */
        t4 = g->ecx;
        t5 = g->edx;
        g->cf = 0u;
        g->pf = PARITY(0u);
        g->af = 0u;
        g->zf = 1u;
        g->sf = 0u;
        g->of = 0u;
        g->ecx = t4;
        g->edx = t5;
        t6 = cow_stdcall(g, COW_IMG(0x10316dabu), 0);
        t7 = g->ecx;
        t8 = g->edx;
        wr32(sp0 - 0xcu, t6);
        wr32(arg3 + 0x1cu, 0u);
        if (t6 != 0xffffffffu)
        {
            ecx = t7;
            edx = t8;
            loc_c = t6;
    COW_AT(1026d39b)
            if (1u) goto L_1026d3ae;
    COW_AT(1026d3a1)
            if (loc_c != 0x102u) goto L_1026d555;
L_1026d3ae: ;
    COW_AT(1026d3ae)
            wr32(sp0 - 0x3cu, 0u);
            loc_3c = 0u;
L_1026d3c0: ;
    COW_AT(1026d3c0)
            if (loc_3c >= rd32(arg1)) goto L_1026d54e;
    COW_AT(1026d3ce)
            t9 = rd32(arg1 + loc_3c * 4u + 0x4b4u);
            wr32(sp0 - 0x44u, t9);
            wr32(t9 + 0x10054u, 0u);
            if (rd32(t9 + 0x10u) != 0xffffffffu)
            {
                loc_44 = t9;
                goto L_1026d412;
            }
            edx = t9;
            loc_44 = t9;
    COW_AT(1026d3f4)
            t10 = rd32(loc_44 + 0x1004cu);
            wr32(sp0 - 0x54u, t10);
            g->eax = loc_44;
            g->ecx = t10;
            g->edx = edx;
            g->esp = sp0 - 0x50u;
            t11 = cow_stdcall(g, rd32(COW_IMG(0x10329434u)), 1, t10);   /* ws2_32.dll!WSAResetEvent */
            t12 = g->ecx;
            t13 = g->edx;
            g->cf = 0u;
            g->pf = PARITY(0u);
            g->af = 0u;
            g->zf = 1u;
            g->sf = 0u;
            g->of = 0u;
            cow_stdcall(g, COW_IMG(0x10316dabu), 0);
L_1026d549: ;
    COW_AT(1026d549)
    COW_AT(1026d3b7)
            t38 = rd32(sp0 - 0x3cu) + 1u;
            wr32(sp0 - 0x3cu, t38);
            ecx = t38;
            loc_3c = t38;
            goto L_1026d3c0;
        }
        else
        {
            ecx = t7;
            edx = t8;
    COW_AT(1026d393)
            eax = 0xffffffffu;
            loc_4 = rd32(sp0 - 4u);
            loc_4c = rd32(sp0 - 0x4cu);
            loc_50 = rd32(sp0 - 0x50u);
        }
    }
    else
    {
    COW_AT(1026d351)
        eax = 0xffffffffu;
        edx = in_edx;
        loc_4 = in_ebp;
        loc_4c = in_esi;
        loc_50 = in_edi;
    }
L_1026d558: ;
    COW_AT(1026d558)
    g->cf = 0u;
    g->pf = PARITY(0u);
    g->af = 0u;
    g->zf = 1u;
    g->sf = 0u;
    g->of = 0u;
    g->esp = sp0 - 4u;
    cow_stdcall(g, COW_IMG(0x10316dabu), 0);
    g->esi = loc_4c;
    g->edi = loc_50;
    g->ebp = rd32(sp0 - 4u);
    return;
L_1026d412: ;
    COW_AT(1026d412)
    wr32(sp0 - 0x54u, sp0 - 0x38u);
    t14 = rd32(loc_44 + 0x1004cu);
    wr32(sp0 - 0x58u, t14);
    t15 = rd32(loc_44 + 0x10u);
    wr32(sp0 - 0x5cu, t15);
    g->eax = t15;
    g->ecx = t14;
    g->edx = loc_44;
    g->esp = sp0 - 0x50u;
    t16 = cow_stdcall(g, rd32(COW_IMG(0x10329438u)), 3, t15, t14, sp0 - 0x38u);   /* ws2_32.dll!WSAEnumNetworkEvents */
    t17 = g->ecx;
    t18 = g->edx;
    g->cf = 0u;
    g->pf = PARITY(0u);
    g->af = 0u;
    g->zf = 1u;
    g->sf = 0u;
    g->of = 0u;
    g->ecx = t17;
    t19 = cow_stdcall(g, COW_IMG(0x10316dabu), 0);
    t20 = g->ecx;
    wr32(sp0 - 0xcu, t19);
    if (t19 == 0xffffffffu)
    {
        ecx = t20;
        goto L_1026d52a;
    }
    COW_AT(1026d443)
    t21 = rd32(sp0 - 0x38u);
    wr32(rd32(sp0 - 0x44u) + 0x10050u, t21);
    wr32(sp0 - 0x40u, 0u);
    loc_40 = 0u;
L_1026d461: ;
    COW_AT(1026d461)
    if (loc_40 >= 0xau) goto L_1026d494;
    cf = loc_40 < 0xau;
    pf = PARITY((uint8_t)(loc_40 - 0xau));
    zf = loc_40 == 0xau;
    sf = (int32_t)(loc_40 - 0xau) < 0;
    of = ((loc_40 ^ 0xau) & (loc_40 ^ loc_40 - 0xau)) >> 0x1fu;
    COW_AT(1026d467)
    if ((rd32(rd32(sp0 - 0x44u) + 0x10050u) & 1u << (loc_40 & 0x1fu)) == 0u) goto L_1026d492;
    COW_AT(1026d480)
    t22 = rd32(loc_40 * 4u + sp0 - 0x34u);
    wr32(rd32(sp0 - 0x44u) + 0x10054u, t22);
L_1026d494: ;
    COW_AT(1026d494)
    if ((rd32(rd32(sp0 - 0x44u) + 0x10050u) & 0x20u) != 0u)
    {
    COW_AT(1026d4a4)
        t23 = rd32(rd32(sp0 - 0x44u) + 0x10050u) | 1u;
        wr32(rd32(sp0 - 0x44u) + 0x10050u, t23);
    }
    COW_AT(1026d4b9)
    wr32(sp0 - 0x54u, sp0 - 0x48u);
    wr32(sp0 - 0x58u, sp0 - 8u);
    wr32(sp0 - 0x5cu, 0x1007u);
    wr32(sp0 - 0x60u, 0xffffu);
    t24 = rd32(rd32(sp0 - 0x44u) + 0x10u);
    wr32(sp0 - 0x64u, t24);
    g->eax = rd32(sp0 - 0x44u);
    g->ecx = t24;
    g->edx = sp0 - 8u;
    t25 = rd32(sp0 - 0x44u);
    g->esp = sp0 - 0x50u;
    t26 = cow_stdcall(g, rd32(COW_IMG(0x10329460u)), 5, t24, 0xffffu, 0x1007u, sp0 - 8u, sp0 - 0x48u);   /* ws2_32.dll!getsockopt */
    t27 = g->ecx;
    t28 = g->edx;
    g->cf = 0u;
    g->pf = PARITY(0u);
    g->af = 0u;
    g->zf = 1u;
    g->sf = 0u;
    g->of = 0u;
    g->ecx = t27;
    g->edx = t28;
    t29 = cow_stdcall(g, COW_IMG(0x10316dabu), 0);
    t30 = g->ecx;
    t31 = g->edx;
    if ((int32_t)t29 >= 0)
    {
        eax = t29;
        ecx = t30;
        edx = t31;
    }
    else
    {
    COW_AT(1026d4e5)
        t32 = (rd32(rd32(sp0 - 0x44u) + 0x10054u) & 0xffffff00u) | (uint8_t)(rd32(rd32(sp0 - 0x44u) + 0x10054u) | 1u);
        t33 = rd32(sp0 - 0x44u);
        wr32(t33 + 0x10054u, t32);
        eax = t32;
        ecx = t33;
        edx = t33;
    }
    COW_AT(1026d4f9)
    if (rd32(sp0 - 8u) != 0u)
    {
    COW_AT(1026d4ff)
        wr32(sp0 - 0x54u, COW_IMG(0x103b0fccu));
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x50u;
        t34 = cow_stdcall(g, rd32(COW_IMG(0x103291f0u)), 1, COW_IMG(0x103b0fccu));   /* kernel32.dll!OutputDebugStringA */
        t35 = g->ecx;
        t36 = g->edx;
        g->cf = 0u;
        g->pf = PARITY(0u);
        g->af = 0u;
        g->zf = 1u;
        g->sf = 0u;
        g->of = 0u;
        cow_stdcall(g, COW_IMG(0x10316dabu), 0);
    }
    COW_AT(1026d513)
    t37 = rd32(rd32(sp0 - 0x44u) + 0x10054u) | rd32(sp0 - 8u);
    wr32(rd32(sp0 - 0x44u) + 0x10054u, t37);
    goto L_1026d549;
L_1026d458: ;
    COW_AT(1026d458)
    wr32(sp0 - 0x40u, loc_40 + 1u);
    loc_40 = loc_40 + 1u;
    goto L_1026d461;
L_1026d492: ;
    COW_AT(1026d492)
    goto L_1026d458;
L_1026d52a: ;
    COW_AT(1026d52a)
    t39 = rd32(sp0 - 0x44u);
    wr32(t39 + 0x10050u, 0u);
    t40 = rd32(sp0 - 0x44u);
    wr32(t40 + 0x10054u, 0u);
    eax = 0xffffffffu;
    edx = t39;
    loc_4 = rd32(sp0 - 4u);
    loc_4c = rd32(sp0 - 0x4cu);
    loc_50 = rd32(sp0 - 0x50u);
    goto L_1026d558;
L_1026d54e: ;
    COW_AT(1026d54e)
    eax = 1u;
    edx = arg1;
    loc_4 = rd32(sp0 - 4u);
    loc_4c = rd32(sp0 - 0x4cu);
    loc_50 = rd32(sp0 - 0x50u);
    goto L_1026d558;
L_1026d555: ;
    COW_AT(1026d555)
    eax = 0xffffffffu;
    loc_4 = rd32(sp0 - 4u);
    loc_4c = rd32(sp0 - 0x4cu);
    loc_50 = rd32(sp0 - 0x50u);
    goto L_1026d558;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1026d32b(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1026d351u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        ecx = g->ecx;
        in_edx = g->edx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x50u);
        in_esi = rd32(sp0 - 0x4cu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x50u;
        g->eax = arg1;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1026d359u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x50u);
        in_esi = rd32(sp0 - 0x4cu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x50u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1026d393u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x50u;
        g->eax = arg3;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x1026d39bu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x50u;
        g->eax = arg3;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x1026d3a1u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x50u;
        g->eax = arg3;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x1026d3aeu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x50u;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x1026d3b7u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x50u;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x1026d3c0u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_3c;
        uint32_t loc_c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x50u;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x1026d3ceu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_3c;
        uint32_t loc_c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x50u;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x1026d3f4u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_3c;
        uint32_t loc_44;
        uint32_t loc_c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_44 = rd32(sp0 - 0x44u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x50u;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x1026d412u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_3c;
        uint32_t loc_44;
        uint32_t loc_c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_44 = rd32(sp0 - 0x44u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x50u;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x1026d443u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x50u;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x50u;
        wr32(sp0 - 0x54u, sp0 - 0x38u);
        (void)sp0;
        return 1;
    }
    case 0x1026d458u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_40;
        uint32_t loc_c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_40 = rd32(sp0 - 0x40u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x50u;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x50u;
        wr32(sp0 - 0x54u, sp0 - 0x38u);
        (void)sp0;
        return 1;
    }
    case 0x1026d461u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_40;
        uint32_t loc_c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_40 = rd32(sp0 - 0x40u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x50u;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x50u;
        wr32(sp0 - 0x54u, sp0 - 0x38u);
        (void)sp0;
        return 1;
    }
    case 0x1026d467u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_40;
        uint32_t loc_c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_40 = rd32(sp0 - 0x40u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x50u;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x50u;
        wr32(sp0 - 0x54u, sp0 - 0x38u);
        (void)sp0;
        return 1;
    }
    case 0x1026d480u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_40;
        uint32_t loc_c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_40 = rd32(sp0 - 0x40u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x50u;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x50u;
        wr32(sp0 - 0x54u, sp0 - 0x38u);
        (void)sp0;
        return 1;
    }
    case 0x1026d492u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_40;
        uint32_t loc_c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_40 = rd32(sp0 - 0x40u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x50u;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x50u;
        wr32(sp0 - 0x54u, sp0 - 0x38u);
        (void)sp0;
        return 1;
    }
    case 0x1026d494u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_40;
        uint32_t loc_c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_40 = rd32(sp0 - 0x40u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x50u;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x50u;
        wr32(sp0 - 0x54u, sp0 - 0x38u);
        (void)sp0;
        return 1;
    }
    case 0x1026d4a4u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_40;
        uint32_t loc_c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_40 = rd32(sp0 - 0x40u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x50u;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x50u;
        wr32(sp0 - 0x54u, sp0 - 0x38u);
        (void)sp0;
        return 1;
    }
    case 0x1026d4b9u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_40;
        uint32_t loc_c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_40 = rd32(sp0 - 0x40u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x50u;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x50u;
        wr32(sp0 - 0x54u, sp0 - 0x38u);
        (void)sp0;
        return 1;
    }
    case 0x1026d4e5u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x50u;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x50u;
        wr32(sp0 - 0x58u, sp0 - 8u);
        wr32(sp0 - 0x54u, sp0 - 0x48u);
        (void)sp0;
        return 1;
    }
    case 0x1026d4f9u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x50u;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x50u;
        wr32(sp0 - 0x58u, sp0 - 8u);
        wr32(sp0 - 0x54u, sp0 - 0x48u);
        (void)sp0;
        return 1;
    }
    case 0x1026d4ffu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x50u;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x50u;
        wr32(sp0 - 0x58u, sp0 - 8u);
        wr32(sp0 - 0x54u, sp0 - 0x48u);
        (void)sp0;
        return 1;
    }
    case 0x1026d513u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x50u;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x50u;
        wr32(sp0 - 0x58u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x1026d52au:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x50u;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x50u;
        wr32(sp0 - 0x54u, sp0 - 0x38u);
        (void)sp0;
        return 1;
    }
    case 0x1026d549u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x50u;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x1026d54eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t loc_3c;
        uint32_t loc_c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x50u;
        g->edx = arg1;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x1026d555u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x50u;
        g->eax = arg3;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x1026d558u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_3c;
        uint32_t loc_4;
        uint32_t loc_4c;
        uint32_t loc_50;
        uint32_t loc_c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_c = rd32(sp0 - 0xcu);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x50u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1026d32b(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_1026d32b(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
