/* f_0x102b30b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_102b30b0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10c;
    uint32_t loc_110;
    uint32_t loc_130;
    uint32_t loc_134;
    uint32_t loc_138;
    int64_t q18;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
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
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 320u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102b30c9u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; in_edi = g->edi; zf = g->zf; in_esi = rd32(sp0 - 0x120u); g->esi = rd32(sp0 - 0x120u); goto E_102b30c9;
    case 0x102b30d4u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; in_edi = g->edi; zf = g->zf; in_esi = rd32(sp0 - 0x120u); g->esi = rd32(sp0 - 0x120u); goto E_102b30d4;
    case 0x102b30f5u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_102b30f5;
    case 0x102b30fcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_102b30fc;
    case 0x102b3107u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_102b3107;
    case 0x102b3146u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_110 = rd32(sp0 - 0x110u); goto E_102b3146;
    case 0x102b314au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_130 = rd32(sp0 - 0x130u); loc_110 = rd32(sp0 - 0x110u); loc_10c = rd32(sp0 - 0x10cu); goto E_102b314a;
    case 0x102b3158u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_110 = rd32(sp0 - 0x110u); loc_10c = rd32(sp0 - 0x10cu); goto E_102b3158;
    case 0x102b3168u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_134 = rd32(sp0 - 0x134u); goto E_102b3168;
    case 0x102b317au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_130 = rd32(sp0 - 0x130u); goto E_102b317a;
    case 0x102b31b3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102b31b3;
    case 0x102b31b9u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_110 = rd32(sp0 - 0x110u); loc_10c = rd32(sp0 - 0x10cu); goto E_102b31b9;
    case 0x102b31d9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; loc_134 = rd32(sp0 - 0x134u); goto E_102b31d9;
    case 0x102b31dbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102b31db;
    case 0x102b31dfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_130 = rd32(sp0 - 0x130u); goto E_102b31df;
    case 0x102b31e9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_130 = rd32(sp0 - 0x130u); goto E_102b31e9;
    case 0x102b31eeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_130 = rd32(sp0 - 0x130u); goto E_102b31ee;
    case 0x102b31f0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_130 = rd32(sp0 - 0x130u); goto E_102b31f0;
    case 0x102b31f6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_130 = rd32(sp0 - 0x130u); goto E_102b31f6;
    case 0x102b31fau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_130 = rd32(sp0 - 0x130u); goto E_102b31fa;
    case 0x102b3221u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_130 = rd32(sp0 - 0x130u); goto E_102b3221;
    case 0x102b3233u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_130 = rd32(sp0 - 0x130u); loc_10c = rd32(sp0 - 0x10cu); goto E_102b3233;
    case 0x102b3242u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_102b3242;
    case 0x102b324eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102b324e;
    case 0x102b3250u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102b3250;
    case 0x102b325au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_130 = rd32(sp0 - 0x130u); goto E_102b325a;
    case 0x102b325fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_130 = rd32(sp0 - 0x130u); goto E_102b325f;
    case 0x102b3264u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_130 = rd32(sp0 - 0x130u); goto E_102b3264;
    case 0x102b3272u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102b3272;
    case 0x102b3281u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_102b3281;
    case 0x102b3285u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_102b3285;
    case 0x102b3287u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; loc_130 = rd32(sp0 - 0x130u); goto E_102b3287;
    case 0x102b3295u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_134 = rd32(sp0 - 0x134u); loc_130 = rd32(sp0 - 0x130u); loc_110 = rd32(sp0 - 0x110u); goto E_102b3295;
    case 0x102b32a4u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; in_edi = g->edi; zf = g->zf; in_esi = rd32(sp0 - 0x120u); g->esi = rd32(sp0 - 0x120u); goto E_102b32a4;
    default: break;
    }
#endif

    COW_AT(102b30b0)
    wr32(sp0 - 0x120u, in_esi);
    if (rd32(arg1 + 0x34u) == 0u)
    {
        eax = rd32(arg1 + 0x34u);
        ecx = self;
        goto L_102b32a4;
    }
    eax = rd32(arg1 + 0x34u);
    COW_AT(102b30c9)
    if (rd32(eax + 0x14u) == 0u)
    {
        ecx = rd32(eax + 0x14u);
        goto L_102b32a4;
    }
    ecx = rd32(eax + 0x14u);
    COW_AT(102b30d4)
    wr32(sp0 - 0x124u, in_ebx);
    wr32(sp0 - 0x128u, in_ebp);
    wr32(sp0 - 0x12cu, in_edi);
    wr32(sp0 - 0x130u, eax);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = in_edx;
    g->esp = sp0 - 0x124u;
    t1 = cow_cdecl(g, COW_IMG(0x102b32e0u), 3, eax, in_edi, in_ebp);
    t2 = g->ecx;
    t3 = g->edx;
    g->ecx = t2;
    g->edx = t3;
    g->esp = sp0 - 0x12cu;
    cow_stdcall(g, COW_IMG(0x1028b000u), 0);
    t4 = g->ecx;
    t5 = g->edx;
    if (arg2 == 0u)
    {
        ecx = t4;
        edx = t5;
        goto L_102b3285;
    }
    ecx = t4;
    edx = t5;
    COW_AT(102b30f5)
    if (arg2 == 1u) goto L_102b3281;
    COW_AT(102b30fc)
    if (rd32(arg1 + 0x50u) == 0u) goto L_102b3242;
    COW_AT(102b3107)
    wr32(sp0 - 0x130u, sp0 - 0x84u);
    g->eax = sp0 - 0x84u;
    g->edx = edx;
    g->esp = sp0 - 0x124u;
    t6 = cow_cdecl(g, COW_IMG(0x102b6720u), 3, sp0 - 0x84u, rd32(sp0 - 0x12cu), rd32(sp0 - 0x128u));
    t7 = g->edx;
    wr32(sp0 - 0x134u, sp0 - 0x108u);
    g->ecx = sp0 - 0x108u;
    g->edx = t7;
    g->esp = sp0 - 0x130u;
    t8 = cow_cdecl(g, COW_IMG(0x102b67f0u), 1, sp0 - 0x108u);
    t9 = g->ecx;
    t10 = g->edx;
    wr32(sp0 - 0x138u, arg1);
    g->ecx = t9;
    t11 = rd32(rd32(arg1 + 0x48u));
    t12 = rd32(arg1 + 0x48u);
    g->esp = sp0 - 0x134u;
    t13 = cow_cdecl(g, COW_IMG(0x102ac520u), 1, arg1);
    t14 = g->ecx;
    wr32(sp0 - 0x110u, t13 + 1u);
    t15 = t13 * 2u + 3u;
    wr32(sp0 - 0xf4u, t15);
    if (t11 == 0u)
    {
        eax = t13;
        ecx = t14;
        edx = t15;
        goto L_102b3295;
    }
    ecx = t14;
    edx = t15;
    ebx = t11;
    ebp = t13 + 1u;
    edi = t12 + 4u;
    loc_110 = t13 + 1u;
    COW_AT(102b3146)
    wr32(sp0 - 0x10cu, ebx);
    loc_10c = ebx;
L_102b314a: ;
    COW_AT(102b314a)
    wr32(sp0 - 0x130u, sp0 - 0x108u);
    if ((int32_t)rd32(edi) <= 0)
    {
        ebx = rd32(edi);
        edi = edi + 4u;
    COW_AT(102b31b9)
        g->edx = edx;
        g->esp = sp0 - 0x124u;
        cow_cdecl(g, COW_IMG(0x102b32e0u), 3, sp0 - 0x108u, rd32(sp0 - 0x12cu), rd32(sp0 - 0x128u));
        t24 = g->edx;
        wr32(sp0 - 0x11cu, rd32(edi));
        t25 = rd32(edi + 4u);
        wr32(sp0 - 0x114u, t25);
        if ((int32_t)-ebx <= 2)
        {
            ecx = rd32(edi);
            edx = t24;
            ebx = -ebx;
        }
        else
        {
            eax = t25;
            ebx = -ebx;
    COW_AT(102b31d9)
            esi = 2u;
L_102b31df: ;
    COW_AT(102b31df)
            if ((int32_t)(esi & 0x80000001u) >= 0)
            {
                zf = (esi & 0x80000001u) == 0u;
            }
            else
            {
                edx = esi & 0x80000001u;
    COW_AT(102b31e9)
                zf = (edx - 1u | 0xfffffffeu) + 1u == 0u;
            }
    COW_AT(102b31ee)
            if (zf)
            {
    COW_AT(102b31f6)
                wr32(sp0 - 0x118u, eax);
            }
            else
            {
    COW_AT(102b31f0)
                wr32(sp0 - 0x11cu, eax);
            }
    COW_AT(102b31fa)
            t26 = rd32(edi + esi * 4u);
            wr32(sp0 - 0x114u, t26);
            wr32(sp0 - 0x130u, ebp);
            wr32(sp0 - 0x134u, sp0 - 0x11cu);
            wr32(sp0 - 0x138u, sp0 - 0x84u);
            wr32(sp0 - 0x13cu, sp0 - 0x108u);
            g->ecx = sp0 - 0x11cu;
            g->edx = sp0 - 0x84u;
            g->esp = sp0 - 0x12cu;
            cow_call_regs(g, COW_IMG(0x102b6890u), sp0 - 0x108u, g->ecx, g->edx, 1, 4, sp0 - 0x108u, sp0 - 0x84u, sp0 - 0x11cu, ebp);
            t27 = g->ecx;
            t28 = g->edx;
            if ((int32_t)(esi + 1u) < (int32_t)ebx)
            {
                esi = esi + 1u;
                goto L_102b31db;
            }
            ecx = t27;
            edx = t28;
        }
    }
    else
    {
        ebx = rd32(edi);
        edi = edi + 4u;
    COW_AT(102b3158)
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x124u;
        cow_cdecl(g, COW_IMG(0x102b32e0u), 3, sp0 - 0x108u, rd32(sp0 - 0x12cu), rd32(sp0 - 0x128u));
        t16 = g->ecx;
        t17 = g->edx;
        if ((int32_t)ebx <= 0)
        {
            ecx = t16;
            edx = t17;
        }
        else
        {
            edx = t17;
    COW_AT(102b3168)
            q18 = (uint64_t)cow_mulu(0xaaaaaaabu, ebx - 1u);
            ebp = (cow_qhi(q18) >> 1u) + 1u;
            esi = edi + 8u;
L_102b317a: ;
    COW_AT(102b317a)
            t19 = rd32(esi - 8u);
            wr32(sp0 - 0x11cu, t19);
            t20 = rd32(esi - 4u);
            wr32(sp0 - 0x118u, t20);
            wr32(sp0 - 0x114u, rd32(esi));
            t21 = rd32(sp0 - 0x110u);
            wr32(sp0 - 0x130u, t21);
            wr32(sp0 - 0x134u, sp0 - 0x11cu);
            wr32(sp0 - 0x138u, sp0 - 0x84u);
            wr32(sp0 - 0x13cu, sp0 - 0x108u);
            g->ecx = sp0 - 0x84u;
            g->edx = sp0 - 0x108u;
            g->esp = sp0 - 0x12cu;
            cow_call_regs(g, COW_IMG(0x102b6890u), sp0 - 0x11cu, g->ecx, g->edx, 1, 4, sp0 - 0x108u, sp0 - 0x84u, sp0 - 0x11cu, t21);
            t22 = g->ecx;
            t23 = g->edx;
            if (ebp != 1u)
            {
                ebp = ebp - 1u;
                esi = esi + 0xcu;
                goto L_102b317a;
            }
            ecx = t22;
            edx = t23;
    COW_AT(102b31b3)
            ebp = rd32(sp0 - 0x110u);
        }
    }
    COW_AT(102b3221)
    t29 = rd32(sp0 - 0x10cu) - 1u;
    t30 = rd32(sp0 - 0x10cu);
    wr32(sp0 - 0x10cu, t29);
    if (t30 != 1u)
    {
        edi = ebx * 4u + edi;
        loc_110 = rd32(sp0 - 0x110u);
        loc_10c = t29;
        goto L_102b314a;
    }
    eax = t29;
    COW_AT(102b3233)
    g->esp = sp0;
    g->ebx = rd32(sp0 - 0x124u);
    g->esi = rd32(sp0 - 0x120u);
    g->edi = rd32(sp0 - 0x12cu);
    g->ebp = rd32(sp0 - 0x128u);
    g->edx = edx;
    return cow_tailcall(g, COW_IMG(0x1028bbf0u), eax, ecx, edx);
L_102b31db: ;
    COW_AT(102b31db)
    eax = rd32(sp0 - 0x114u);
    goto L_102b31df;
L_102b3242: ;
    COW_AT(102b3242)
    if (rd32(rd32(arg1 + 0x48u)) == 0u)
    {
        eax = rd32(rd32(arg1 + 0x48u));
        goto L_102b3295;
    }
    eax = rd32(rd32(arg1 + 0x48u));
    esi = rd32(arg1 + 0x48u) + 4u;
    COW_AT(102b324e)
    ebx = eax;
L_102b3250: ;
    COW_AT(102b3250)
    wr32(sp0 - 0x130u, esi + 4u);
    if ((int32_t)rd32(esi) <= 0)
    {
        edi = rd32(esi);
        loc_130 = esi + 4u;
        esi = esi + 4u;
    COW_AT(102b325f)
        wr32(sp0 - 0x134u, -edi);
        wr32(sp0 - 0x138u, 5u);
        loc_134 = -edi;
        edi = -edi;
        loc_138 = 5u;
    }
    else
    {
        edi = rd32(esi);
        loc_130 = esi + 4u;
        esi = esi + 4u;
    COW_AT(102b325a)
        wr32(sp0 - 0x134u, edi);
        wr32(sp0 - 0x138u, 4u);
        loc_134 = edi;
        loc_138 = 4u;
    }
    COW_AT(102b3264)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x12cu;
    t31 = cow_cdecl(g, COW_IMG(0x1028a820u), 3, loc_138, loc_134, loc_130);
    t32 = g->ecx;
    t33 = g->edx;
    if (ebx != 1u)
    {
        eax = t31;
        ecx = t32;
        edx = t33;
        ebx = ebx - 1u;
        esi = edi * 4u + esi;
        goto L_102b3250;
    }
    eax = t31;
    ecx = t32;
    edx = t33;
    COW_AT(102b3272)
    g->esp = sp0;
    g->ebx = rd32(sp0 - 0x124u);
    g->esi = rd32(sp0 - 0x120u);
    g->edi = rd32(sp0 - 0x12cu);
    g->ebp = rd32(sp0 - 0x128u);
    g->edx = edx;
    return cow_tailcall(g, COW_IMG(0x1028bbf0u), eax, ecx, edx);
L_102b3281: ;
    COW_AT(102b3281)
    wr32(sp0 - 0x130u, 3u);
    eax = arg2 - 1u;
    loc_130 = 3u;
L_102b3287: ;
    COW_AT(102b3287)
    wr32(sp0 - 0x134u, COW_IMG(0x102b3080u));
    wr32(sp0 - 0x138u, arg1);
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x12cu;
    t34 = cow_call_regs(g, COW_IMG(0x102abee0u), g->eax, g->ecx, edx, 1, 3, arg1, COW_IMG(0x102b3080u), loc_130);
    t35 = g->ecx;
    t36 = g->edx;
    eax = t34;
    ecx = t35;
    edx = t36;
L_102b3295: ;
    COW_AT(102b3295)
    g->esp = sp0;
    g->ebx = rd32(sp0 - 0x124u);
    g->esi = rd32(sp0 - 0x120u);
    g->edi = rd32(sp0 - 0x12cu);
    g->ebp = rd32(sp0 - 0x128u);
    g->edx = edx;
    return cow_tailcall(g, COW_IMG(0x1028bbf0u), eax, ecx, edx);
L_102b3285: ;
    COW_AT(102b3285)
    wr32(sp0 - 0x130u, 1u);
    eax = arg2;
    loc_130 = 1u;
    goto L_102b3287;
L_102b32a4: ;
    COW_AT(102b32a4)
    wr32(sp0 - 0x124u, 0x16fu);
    wr32(sp0 - 0x128u, COW_IMG(0x103bfd88u));
    wr32(sp0 - 0x12cu, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = in_edx;
    g->esp = sp0 - 0x124u;
    t37 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bfd88u));
    t38 = g->ecx;
    t39 = g->edx;
    wr32(sp0 - 0x130u, COW_IMG(0x103bfd80u));
    wr32(sp0 - 0x134u, COW_IMG(0x103beaa4u));
    g->edx = t39;
    g->esp = sp0 - 0x12cu;
    t40 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103beaa4u), COW_IMG(0x103bfd80u));
    t41 = g->edx;
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    g->edx = t41;
    return t40;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102b30b0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102b30c9u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        in_edi = g->edi;
        zf = g->zf;
        in_esi = rd32(sp0 - 0x120u);
        g->esp = sp0 - 0x120u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102b30d4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        in_edi = g->edi;
        zf = g->zf;
        in_esi = rd32(sp0 - 0x120u);
        g->esp = sp0 - 0x120u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102b30f5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x12cu;
        g->eax = arg2;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102b30fcu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x12cu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102b3107u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x12cu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102b3146u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_110;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_110 = rd32(sp0 - 0x110u);
        g->esp = sp0 - 0x12cu;
        wr32(sp0 - 0x134u, sp0 - 0x108u);
        wr32(sp0 - 0x130u, sp0 - 0x84u);
        (void)sp0;
        return 1;
    }
    case 0x102b314au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10c;
        uint32_t loc_110;
        uint32_t loc_130;
        uint32_t loc_134;
        uint32_t loc_138;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_130 = rd32(sp0 - 0x130u);
        loc_110 = rd32(sp0 - 0x110u);
        loc_10c = rd32(sp0 - 0x10cu);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x102b3158u:
    {
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10c;
        uint32_t loc_110;
        uint32_t loc_134;
        uint32_t loc_138;
        uint32_t zf;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_110 = rd32(sp0 - 0x110u);
        loc_10c = rd32(sp0 - 0x10cu);
        g->esp = sp0 - 0x130u;
        g->eax = sp0 - 0x108u;
        wr32(sp0 - 0x130u, sp0 - 0x108u);
        (void)sp0;
        return 1;
    }
    case 0x102b3168u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_134;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_134 = rd32(sp0 - 0x134u);
        g->esp = sp0 - 0x12cu;
        wr32(sp0 - 0x130u, sp0 - 0x108u);
        (void)sp0;
        return 1;
    }
    case 0x102b317au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_130;
        uint32_t loc_134;
        uint32_t loc_138;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_130 = rd32(sp0 - 0x130u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x102b31b3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x12cu;
        wr32(sp0 - 0x13cu, sp0 - 0x108u);
        wr32(sp0 - 0x138u, sp0 - 0x84u);
        wr32(sp0 - 0x134u, sp0 - 0x11cu);
        (void)sp0;
        return 1;
    }
    case 0x102b31b9u:
    {
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10c;
        uint32_t loc_110;
        uint32_t loc_134;
        uint32_t loc_138;
        uint32_t zf;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_110 = rd32(sp0 - 0x110u);
        loc_10c = rd32(sp0 - 0x10cu);
        g->esp = sp0 - 0x130u;
        g->eax = sp0 - 0x108u;
        wr32(sp0 - 0x130u, sp0 - 0x108u);
        (void)sp0;
        return 1;
    }
    case 0x102b31d9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_134;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        loc_134 = rd32(sp0 - 0x134u);
        g->esp = sp0 - 0x12cu;
        g->esi = 2u;
        wr32(sp0 - 0x130u, sp0 - 0x108u);
        (void)sp0;
        return 1;
    }
    case 0x102b31dbu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x12cu;
        wr32(sp0 - 0x13cu, sp0 - 0x108u);
        wr32(sp0 - 0x138u, sp0 - 0x84u);
        wr32(sp0 - 0x134u, sp0 - 0x11cu);
        (void)sp0;
        return 1;
    }
    case 0x102b31dfu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_130;
        uint32_t loc_134;
        uint32_t loc_138;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_130 = rd32(sp0 - 0x130u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x102b31e9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_130;
        uint32_t loc_134;
        uint32_t loc_138;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_130 = rd32(sp0 - 0x130u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x102b31eeu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_130;
        uint32_t loc_134;
        uint32_t loc_138;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_130 = rd32(sp0 - 0x130u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x102b31f0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_130;
        uint32_t loc_134;
        uint32_t loc_138;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_130 = rd32(sp0 - 0x130u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x102b31f6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_130;
        uint32_t loc_134;
        uint32_t loc_138;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_130 = rd32(sp0 - 0x130u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x102b31fau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_130;
        uint32_t loc_134;
        uint32_t loc_138;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_130 = rd32(sp0 - 0x130u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x102b3221u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_130;
        uint32_t loc_134;
        uint32_t loc_138;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_130 = rd32(sp0 - 0x130u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x102b3233u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10c;
        uint32_t loc_130;
        uint32_t loc_134;
        uint32_t loc_138;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_130 = rd32(sp0 - 0x130u);
        loc_10c = rd32(sp0 - 0x10cu);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x102b3242u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x12cu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102b324eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x102b3250u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x102b325au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_130;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_130 = rd32(sp0 - 0x130u);
        g->esp = sp0 - 0x130u;
        (void)sp0;
        return 1;
    }
    case 0x102b325fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_130;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_130 = rd32(sp0 - 0x130u);
        g->esp = sp0 - 0x130u;
        (void)sp0;
        return 1;
    }
    case 0x102b3264u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_130;
        uint32_t loc_134;
        uint32_t loc_138;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_130 = rd32(sp0 - 0x130u);
        g->esp = sp0 - 0x138u;
        (void)sp0;
        return 1;
    }
    case 0x102b3272u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x102b3281u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x12cu;
        g->eax = arg2 - 1u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102b3285u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x12cu;
        g->eax = arg2;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102b3287u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_130;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        loc_130 = rd32(sp0 - 0x130u);
        g->esp = sp0 - 0x130u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102b3295u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_110;
        uint32_t loc_130;
        uint32_t loc_134;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_134 = rd32(sp0 - 0x134u);
        loc_130 = rd32(sp0 - 0x130u);
        loc_110 = rd32(sp0 - 0x110u);
        g->esp = sp0 - 0x12cu;
        (void)sp0;
        return 1;
    }
    case 0x102b32a4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        zf = g->zf;
        in_esi = rd32(sp0 - 0x120u);
        g->esp = sp0 - 0x120u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102b30b0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102b30b0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
