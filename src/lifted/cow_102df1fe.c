/* f_0x102df1fe - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_102df1fe(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t loc_28;
    uint32_t loc_4;
    uint32_t loc_8;
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
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 68u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102df208u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_esi = g->esi; in_edi = g->edi; in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); goto E_102df208;
    case 0x102df214u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_edi = g->edi; in_esi = rd32(sp0 - 0x28u); loc_14 = rd32(sp0 - 0x14u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0x28u); goto E_102df214;
    case 0x102df21eu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0x28u); goto E_102df21e;
    case 0x102df238u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x30u); in_ebx = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); loc_1c = rd32(sp0 - 0x1cu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x2cu); g->edi = rd32(sp0 - 0x30u); g->esi = rd32(sp0 - 0x28u); goto E_102df238;
    case 0x102df23bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x30u); in_ebx = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); loc_1c = rd32(sp0 - 0x1cu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x2cu); g->edi = rd32(sp0 - 0x30u); g->esi = rd32(sp0 - 0x28u); goto E_102df23b;
    case 0x102df24eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x30u); in_ebx = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_1c = rd32(sp0 - 0x1cu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x2cu); g->edi = rd32(sp0 - 0x30u); g->esi = rd32(sp0 - 0x28u); goto E_102df24e;
    case 0x102df251u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x30u); in_ebx = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_1c = rd32(sp0 - 0x1cu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x2cu); g->edi = rd32(sp0 - 0x30u); g->esi = rd32(sp0 - 0x28u); goto E_102df251;
    case 0x102df264u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x30u); in_ebx = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x2cu); g->edi = rd32(sp0 - 0x30u); g->esi = rd32(sp0 - 0x28u); goto E_102df264;
    case 0x102df267u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x30u); in_ebx = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x2cu); g->edi = rd32(sp0 - 0x30u); g->esi = rd32(sp0 - 0x28u); goto E_102df267;
    case 0x102df273u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_102df273;
    case 0x102df284u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); goto E_102df284;
    case 0x102df290u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_102df290;
    case 0x102df298u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); goto E_102df298;
    case 0x102df29cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_8 = rd32(sp0 - 8u); goto E_102df29c;
    case 0x102df2a6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_8 = rd32(sp0 - 8u); goto E_102df2a6;
    case 0x102df2b0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_8 = rd32(sp0 - 8u); goto E_102df2b0;
    case 0x102df2c5u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_102df2c5;
    case 0x102df2d4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); goto E_102df2d4;
    case 0x102df2e0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_102df2e0;
    case 0x102df2e8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); goto E_102df2e8;
    case 0x102df2ecu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_8 = rd32(sp0 - 8u); goto E_102df2ec;
    case 0x102df2f6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_8 = rd32(sp0 - 8u); goto E_102df2f6;
    case 0x102df2feu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_102df2fe;
    case 0x102df308u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_8 = rd32(sp0 - 8u); goto E_102df308;
    case 0x102df347u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); goto E_102df347;
    case 0x102df350u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); goto E_102df350;
    case 0x102df35eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_102df35e;
    case 0x102df36du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_102df36d;
    case 0x102df372u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); goto E_102df372;
    case 0x102df37fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); goto E_102df37f;
    case 0x102df38bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_102df38b;
    case 0x102df397u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); goto E_102df397;
    case 0x102df3a2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); goto E_102df3a2;
    case 0x102df3adu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); goto E_102df3ad;
    case 0x102df3b3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); goto E_102df3b3;
    case 0x102df3b9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); goto E_102df3b9;
    case 0x102df3c3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_102df3c3;
    case 0x102df3d1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); goto E_102df3d1;
    case 0x102df3ddu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); goto E_102df3dd;
    case 0x102df3e5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_102df3e5;
    case 0x102df3edu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_102df3ed;
    case 0x102df3f0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_102df3f0;
    case 0x102df3f1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_8 = rd32(sp0 - 8u); goto E_102df3f1;
    case 0x102df3f3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102df3f3;
    default: break;
    }
#endif

    COW_AT(102df1fe)
    wr32(sp0 - 8u, 0xffffffffu);
    wr32(sp0 - 0xcu, COW_IMG(0x103281d5u));
    wr32(sp0 - 0x10u, rd32(g->fs_base));
    wr32(g->fs_base, sp0 - 0x10u);
    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x14u, COW_IMG(0x102df208u));
    COW_AT(102df208)
    wr32(sp0 - 0x28u, in_esi);
    t1 = rd8(self + 8u);
    if ((uint8_t)t1 == 1u)
    {
    COW_AT(102df21e)
        wr32(sp0 - 0x2cu, in_ebx);
        wr32(sp0 - 0x30u, in_edi);
        t2 = rd32(rd32(self + 4u) + 0x1058u);
        wr32(sp0 - 0x1cu, t2);
        if (rd32(rd32(self + 4u) + 0x1058u) > rd32(rd32(self) + 0x1058u))
        {
            eax = rd32(self + 4u);
            ecx = rd32(self);
            loc_1c = t2;
        }
        else
        {
            eax = rd32(self + 4u);
            ecx = rd32(self);
            edi = rd32(rd32(self) + 0x1058u);
    COW_AT(102df238)
            wr32(sp0 - 0x1cu, edi);
            loc_1c = edi;
        }
    COW_AT(102df23b)
        t3 = rd32(eax + 0x105cu);
        wr32(sp0 - 0x24u, t3);
        if (rd32(eax + 0x105cu) < rd32(ecx + 0x105cu))
        {
            edx = t3;
            loc_24 = t3;
        }
        else
        {
            edx = t3;
            edi = rd32(ecx + 0x105cu);
    COW_AT(102df24e)
            wr32(sp0 - 0x24u, edi);
            loc_24 = edi;
        }
    COW_AT(102df251)
        t4 = rd32(eax + 0x1060u);
        wr32(sp0 - 0x20u, t4);
        if (rd32(eax + 0x1060u) < rd32(ecx + 0x1060u))
        {
            eax = t4;
            ecx = rd32(ecx + 0x1060u);
            loc_20 = t4;
        }
        else
        {
            eax = t4;
            ecx = rd32(ecx + 0x1060u);
    COW_AT(102df264)
            wr32(sp0 - 0x20u, ecx);
            loc_20 = ecx;
        }
    COW_AT(102df267)
        wr32(sp0 - 0x34u, loc_1c << 4u);
        g->eax = eax;
        g->esp = sp0 - 0x28u;
        t5 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, loc_1c << 4u, in_edi, in_ebx);
        t6 = g->edx;
        eax = t5;
        edx = t6;
        edi = loc_1c << 4u;
    COW_AT(102df273)
        wr32(sp0 - 0x18u, eax);
        t7 = rd32(sp0 - 8u);
        wr32(sp0 - 8u, 0u);
        if (eax == 0u)
        {
            ecx = rd32(sp0 - 0x34u);
    COW_AT(102df298)
            t12 = rd32(sp0 - 0x14u);
            wr32(sp0 - 0x14u, 0u);
            loc_14 = 0u;
            loc_8 = 0u;
        }
        else
        {
            ecx = rd32(sp0 - 0x34u);
            loc_18 = eax;
    COW_AT(102df284)
            wr32(sp0 - 0x34u, COW_IMG(0x102d2a17u));
            t8 = rd32(sp0 - 0x1cu);
            wr32(sp0 - 0x38u, t8);
            wr32(sp0 - 0x3cu, 0x10u);
            wr32(sp0 - 0x40u, eax);
            g->ecx = ecx;
            g->esp = sp0 - 0x30u;
            cow_call_regs(g, COW_IMG(0x102d31edu), g->eax, g->ecx, edx, 0, 4, eax, 0x10u, t8, COW_IMG(0x102d2a17u));
            t9 = g->ecx;
            t10 = g->edx;
            ecx = t9;
            edx = t10;
    COW_AT(102df290)
            t11 = rd32(sp0 - 0x18u);
            wr32(sp0 - 0x14u, t11);
            loc_14 = t11;
            loc_8 = rd32(sp0 - 8u);
        }
    COW_AT(102df29c)
        wr32(sp0 - 8u, 0xffffffffu);
        if (loc_14 != 0u)
        {
    COW_AT(102df2b0)
            t13 = rd32(rd32(self + 4u) + 0x1058u);
            wr32(sp0 - 0x1cu, t13);
            wr32(sp0 - 0x34u, t13 << 4u);
            g->eax = t13 << 4u;
            g->esp = sp0 - 0x28u;
            t14 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, t13 << 4u, rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu));
            t15 = g->edx;
            eax = t14;
            edx = t15;
    COW_AT(102df2c5)
            wr32(sp0 - 0x18u, eax);
            wr32(sp0 - 8u, 1u);
            if (eax == 0u)
            {
                ecx = rd32(sp0 - 0x34u);
                loc_18 = eax;
    COW_AT(102df2e8)
                t20 = rd32(sp0 - 0x1cu);
                wr32(sp0 - 0x1cu, 0u);
                loc_1c = 0u;
                loc_8 = 1u;
            }
            else
            {
                ecx = rd32(sp0 - 0x34u);
                loc_18 = eax;
    COW_AT(102df2d4)
                wr32(sp0 - 0x34u, COW_IMG(0x102d2a17u));
                t16 = rd32(sp0 - 0x1cu);
                wr32(sp0 - 0x38u, t16);
                wr32(sp0 - 0x3cu, 0x10u);
                wr32(sp0 - 0x40u, eax);
                g->ecx = ecx;
                g->esp = sp0 - 0x30u;
                cow_call_regs(g, COW_IMG(0x102d31edu), g->eax, g->ecx, edx, 0, 4, eax, 0x10u, t16, COW_IMG(0x102d2a17u));
                t17 = g->ecx;
                t18 = g->edx;
                ecx = t17;
                edx = t18;
    COW_AT(102df2e0)
                t19 = rd32(sp0 - 0x18u);
                wr32(sp0 - 0x1cu, t19);
                eax = t19;
                loc_1c = t19;
                loc_18 = rd32(sp0 - 0x18u);
                loc_8 = rd32(sp0 - 8u);
            }
    COW_AT(102df2ec)
            wr32(sp0 - 8u, 0xffffffffu);
            if (loc_1c != 0u)
            {
    COW_AT(102df308)
                wr32(sp0 - 0x18u, 0u);
                t23 = rd32(sp0 - 0x20u);
                t24 = rd32(sp0 - 0x14u);
                t25 = edi;
                edi = t24;
                eax = 0u;
                ecx = t25 >> 2u;
                while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
                ecx = t25 & 3u;
                while (ecx) { wr8(edi, (uint8_t)(uint8_t)eax); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
                t26 = rd32(rd32(self + 4u) + 0x1058u) << 4u;
                t27 = rd32(sp0 - 0x1cu);
                edi = t27;
                eax = 0u;
                ecx = t26 >> 2u;
                while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
                ecx = t26 & 3u;
                while (ecx) { wr8(edi, (uint8_t)(uint8_t)eax); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
                if (t23 == 0u)
                {
                    edx = t26;
                    ebx = t23;
                    goto L_102df3a2;
                }
                edx = t26;
                loc_18 = rd32(sp0 - 0x18u);
L_102df347: ;
    COW_AT(102df347)
                if (rd32(sp0 - 0x24u) == 0u)
                {
                    ebx = rd32(sp0 - 0x24u);
                    goto L_102df372;
                }
                ebx = rd32(sp0 - 0x24u);
                edi = 0u;
L_102df350: ;
    COW_AT(102df350)
                t28 = rd32(sp0 - 0x14u);
                wr32(sp0 - 0x34u, t28);
                wr32(sp0 - 0x38u, loc_18);
                wr32(sp0 - 0x3cu, edi);
                g->edx = edx;
                g->esp = sp0 - 0x30u;
                cow_thiscall(g, rd32(rd32(rd32(self)) + 4u), rd32(self), 3, edi, loc_18, t28);
                t29 = g->edx;
                edx = t29;
    COW_AT(102df35e)
                t30 = rd32(sp0 - 0x14u);
                wr32(sp0 - 0x34u, t30);
                t31 = rd32(sp0 - 0x18u);
                wr32(sp0 - 0x38u, t31);
                wr32(sp0 - 0x3cu, edi);
                g->eax = rd32(rd32(self + 4u));
                g->edx = edx;
                t32 = rd32(rd32(self + 4u));
                g->esp = sp0 - 0x30u;
                t33 = cow_thiscall(g, rd32(t32 + 8u), rd32(self + 4u), 3, edi, t31, t30);
                t34 = g->edx;
                eax = t33;
                edx = t34;
    COW_AT(102df36d)
                if (edi + 1u < ebx)
                {
                    edi = edi + 1u;
                    loc_18 = rd32(sp0 - 0x18u);
                    goto L_102df350;
                }
                loc_18 = rd32(sp0 - 0x18u);
L_102df372: ;
    COW_AT(102df372)
                if (ebx >= rd32(rd32(self + 4u) + 0x105cu)) goto L_102df397;
                ecx = rd32(self + 4u);
                edi = ebx;
L_102df37f: ;
    COW_AT(102df37f)
                t35 = rd32(sp0 - 0x1cu);
                wr32(sp0 - 0x34u, t35);
                wr32(sp0 - 0x38u, loc_18);
                wr32(sp0 - 0x3cu, edi);
                g->eax = rd32(ecx);
                g->edx = edx;
                t36 = rd32(ecx);
                g->esp = sp0 - 0x30u;
                t37 = cow_thiscall(g, rd32(t36 + 8u), ecx, 3, edi, loc_18, t35);
                t38 = g->edx;
                eax = t37;
                edx = t38;
    COW_AT(102df38b)
                if (edi + 1u < rd32(rd32(self + 4u) + 0x105cu))
                {
                    ecx = rd32(self + 4u);
                    edi = edi + 1u;
                    loc_18 = rd32(sp0 - 0x18u);
                    goto L_102df37f;
                }
                loc_18 = rd32(sp0 - 0x18u);
L_102df397: ;
    COW_AT(102df397)
                wr32(sp0 - 0x18u, loc_18 + 1u);
                if (loc_18 + 1u < rd32(sp0 - 0x20u))
                {
                    loc_18 = loc_18 + 1u;
                    goto L_102df347;
                }
                ebx = rd32(sp0 - 0x20u);
L_102df3a2: ;
    COW_AT(102df3a2)
                if (ebx >= rd32(rd32(self + 4u) + 0x1060u))
                {
                    ecx = rd32(self + 4u);
                }
                else
                {
                    ecx = rd32(self + 4u);
    COW_AT(102df3ad)
                    eax = rd32(ecx + 0x105cu);
L_102df3b3: ;
    COW_AT(102df3b3)
                    if (eax == 0u) goto L_102df3d1;
                    edi = 0u;
L_102df3b9: ;
    COW_AT(102df3b9)
                    t39 = rd32(sp0 - 0x1cu);
                    wr32(sp0 - 0x34u, t39);
                    wr32(sp0 - 0x38u, ebx);
                    wr32(sp0 - 0x3cu, edi);
                    g->edx = edx;
                    g->esp = sp0 - 0x30u;
                    cow_thiscall(g, rd32(rd32(ecx) + 8u), ecx, 3, edi, ebx, t39);
                    t40 = g->edx;
                    edx = t40;
    COW_AT(102df3c3)
                    if (edi + 1u < rd32(rd32(self + 4u) + 0x105cu))
                    {
                        ecx = rd32(self + 4u);
                        edi = edi + 1u;
                        goto L_102df3b9;
                    }
                    eax = rd32(rd32(self + 4u) + 0x105cu);
L_102df3d1: ;
    COW_AT(102df3d1)
                    if (ebx + 1u < rd32(rd32(self + 4u) + 0x1060u))
                    {
                        ecx = rd32(self + 4u);
                        ebx = ebx + 1u;
                        goto L_102df3b3;
                    }
                    ecx = rd32(self + 4u);
                }
    COW_AT(102df3dd)
                t41 = rd32(sp0 - 0x14u);
                wr32(sp0 - 0x34u, t41);
                g->eax = eax;
                g->esp = sp0 - 0x30u;
                t42 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, t41);
                t43 = g->ecx;
                t44 = g->edx;
                eax = t42;
                ecx = t43;
                edx = t44;
    COW_AT(102df3e5)
                t45 = rd32(sp0 - 0x1cu);
                wr32(sp0 - 0x38u, t45);
                g->esp = sp0 - 0x34u;
                cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, t45);
                t46 = g->edx;
                edx = t46;
    COW_AT(102df3ed)
                eax = 0u;
            }
            else
            {
    COW_AT(102df2f6)
                t21 = rd32(sp0 - 0x14u);
                wr32(sp0 - 0x34u, t21);
                g->esp = sp0 - 0x30u;
                cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, t21);
                t22 = g->edx;
                edx = t22;
    COW_AT(102df2fe)
                eax = 0x80004005u;
            }
    COW_AT(102df3f0)
        }
        else
        {
    COW_AT(102df2a6)
            eax = 0x80004005u;
        }
    COW_AT(102df3f1)
        ebx = rd32(sp0 - 0x2cu);
        edi = rd32(sp0 - 0x30u);
        loc_4 = rd32(sp0 - 4u);
        loc_28 = rd32(sp0 - 0x28u);
    }
    else
    {
    COW_AT(102df214)
        eax = 0x80004005u;
        edx = in_edx;
        ebx = in_ebx;
        edi = in_edi;
        loc_4 = in_ebp;
        loc_28 = in_esi;
    }
    COW_AT(102df3f3)
    t47 = rd32(sp0 - 0x10u);
    wr32(g->fs_base, t47);
    g->ebx = ebx;
    g->esi = loc_28;
    g->edi = edi;
    g->ebp = rd32(sp0 - 4u);
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102df1fe(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102df208u:
    {
        uint32_t eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_esi = g->esi;
        in_edi = g->edi;
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x14u, COW_IMG(0x102df208u));
        (void)sp0;
        return 1;
    }
    case 0x102df214u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x28u);
        loc_14 = rd32(sp0 - 0x14u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x28u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102df21eu:
    {
        uint32_t eax;
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
        in_ebx = g->ebx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x28u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x14u, COW_IMG(0x102df208u));
        (void)sp0;
        return 1;
    }
    case 0x102df238u:
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
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x30u);
        in_ebx = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        loc_1c = rd32(sp0 - 0x1cu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x30u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x14u, COW_IMG(0x102df208u));
        (void)sp0;
        return 1;
    }
    case 0x102df23bu:
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
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x30u);
        in_ebx = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        loc_1c = rd32(sp0 - 0x1cu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x30u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x14u, COW_IMG(0x102df208u));
        (void)sp0;
        return 1;
    }
    case 0x102df24eu:
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
        uint32_t loc_1c;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x30u);
        in_ebx = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_1c = rd32(sp0 - 0x1cu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x30u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x14u, COW_IMG(0x102df208u));
        (void)sp0;
        return 1;
    }
    case 0x102df251u:
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
        uint32_t loc_1c;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x30u);
        in_ebx = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_1c = rd32(sp0 - 0x1cu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x30u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x14u, COW_IMG(0x102df208u));
        (void)sp0;
        return 1;
    }
    case 0x102df264u:
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
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x30u);
        in_ebx = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x30u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x14u, COW_IMG(0x102df208u));
        (void)sp0;
        return 1;
    }
    case 0x102df267u:
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
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x30u);
        in_ebx = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x30u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x14u, COW_IMG(0x102df208u));
        (void)sp0;
        return 1;
    }
    case 0x102df273u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102df284u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x30u;
        g->ebx = COW_IMG(0x102d2a17u);
        g->ebp = sp0 - 4u;
        wr32(sp0 - 8u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x102df290u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        g->ebx = COW_IMG(0x102d2a17u);
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102df298u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x30u;
        g->ebx = COW_IMG(0x102d2a17u);
        g->ebp = sp0 - 4u;
        wr32(sp0 - 8u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x102df29cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x30u;
        g->ebx = COW_IMG(0x102d2a17u);
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102df2a6u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x30u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102df2b0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x30u;
        g->ebx = COW_IMG(0x102d2a17u);
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102df2c5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        g->ebx = COW_IMG(0x102d2a17u);
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102df2d4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x30u;
        g->ebx = COW_IMG(0x102d2a17u);
        g->ebp = sp0 - 4u;
        wr32(sp0 - 8u, 1u);
        (void)sp0;
        return 1;
    }
    case 0x102df2e0u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102df2e8u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x30u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 8u, 1u);
        (void)sp0;
        return 1;
    }
    case 0x102df2ecu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x30u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102df2f6u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x30u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102df2feu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102df308u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x30u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102df347u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x30u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102df350u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x30u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102df35eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102df36du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102df372u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x30u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102df37fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x30u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102df38bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102df397u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x30u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102df3a2u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x30u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102df3adu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x30u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102df3b3u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x30u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102df3b9u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x30u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102df3c3u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102df3d1u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x30u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102df3ddu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x30u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102df3e5u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102df3edu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102df3f0u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102df3f1u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x30u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102df3f3u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_28;
        uint32_t loc_4;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x28u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102df1fe(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102df1fe(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
