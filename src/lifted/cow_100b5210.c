/* f_0x100b5210 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100b5210(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t loc_20;
    uint32_t loc_24;
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
    uint32_t t48;
    uint32_t t49;
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
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 52u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100b5241u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x24u); in_esi = rd32(sp0 - 0x20u); in_ebp = rd32(sp0 - 0x1cu); in_ebx = rd32(sp0 - 0x18u); g->ebp = rd32(sp0 - 0x1cu); g->ebx = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x20u); goto E_100b5241;
    case 0x100b5264u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100b5264;
    case 0x100b5288u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_100b5288;
    case 0x100b52a1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_100b52a1;
    case 0x100b52c1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_100b52c1;
    case 0x100b52cbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_100b52cb;
    case 0x100b52deu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_100b52de;
    case 0x100b52f1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_100b52f1;
    case 0x100b52fcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_100b52fc;
    case 0x100b5307u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_100b5307;
    case 0x100b533du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_100b533d;
    case 0x100b534du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100b534d;
    case 0x100b5357u: eax = g->eax; self = g->ecx; edx = g->edx; edi = g->edi; goto E_100b5357;
    case 0x100b5373u: eax = g->eax; self = g->ecx; edx = g->edx; edi = g->edi; goto E_100b5373;
    case 0x100b5382u: eax = g->eax; self = g->ecx; edx = g->edx; edi = g->edi; goto E_100b5382;
    case 0x100b539bu: eax = g->eax; self = g->ecx; edx = g->edx; edi = g->edi; goto E_100b539b;
    case 0x100b53aau: eax = g->eax; self = g->ecx; edx = g->edx; edi = g->edi; goto E_100b53aa;
    case 0x100b53c3u: eax = g->eax; self = g->ecx; edx = g->edx; edi = g->edi; goto E_100b53c3;
    case 0x100b53d2u: eax = g->eax; self = g->ecx; edx = g->edx; edi = g->edi; goto E_100b53d2;
    case 0x100b53ebu: eax = g->eax; self = g->ecx; edx = g->edx; edi = g->edi; goto E_100b53eb;
    case 0x100b5404u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100b5404;
    case 0x100b540cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100b540c;
    case 0x100b542eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_100b542e;
    case 0x100b543du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100b543d;
    case 0x100b5445u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100b5445;
    case 0x100b544du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100b544d;
    case 0x100b547cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100b547c;
    case 0x100b5492u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100b5492;
    case 0x100b54a8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_100b54a8;
    case 0x100b54bfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_100b54bf;
    case 0x100b54c9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_100b54c9;
    case 0x100b54dfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100b54df;
    default: break;
    }
#endif

    COW_AT(100b5210)
    wr32(sp0 - 0x18u, in_ebx);
    wr32(sp0 - 0x1cu, in_ebp);
    wr32(sp0 - 0x20u, in_esi);
    wr32(sp0 - 0x24u, in_edi);
    wr32(sp0 - 0x28u, sp0 - 0x14u);
    wr32(sp0 - 0x2cu, sp0 - 8u);
    wr32(sp0 - 0x30u, 3u);
    g->eax = sp0 - 0x14u;
    g->edx = in_edx;
    g->esp = sp0 - 0x2cu;
    t1 = cow_thiscall(g, COW_IMG(0x100afac0u), self, 1, 3u);
    t2 = g->edx;
    wr32(sp0 - 0x30u, t1);
    g->esp = sp0 - 0x24u;
    t3 = cow_fastcall(g, COW_IMG(0x100afb00u), self, t2, 3, t1, sp0 - 8u, sp0 - 0x14u);
    t4 = g->ecx;
    if ((uint8_t)t3 != 1u)
    {
        eax = t3;
        ecx = t4;
        loc_18 = in_ebx;
        loc_1c = in_ebp;
        loc_20 = in_esi;
        loc_24 = in_edi;
        goto L_100b54a8;
    }
    COW_AT(100b5241)
    wr32(sp0 - 0x28u, sp0 - 0x10u);
    wr32(sp0 - 0x2cu, sp0 - 4u);
    wr32(sp0 - 0x30u, 7u);
    g->eax = sp0 - 4u;
    g->edx = sp0 - 0x10u;
    g->esp = sp0 - 0x2cu;
    t5 = cow_thiscall(g, COW_IMG(0x100afac0u), self, 1, 7u);
    t6 = g->edx;
    wr32(sp0 - 0x30u, t5);
    g->esp = sp0 - 0x24u;
    t7 = cow_fastcall(g, COW_IMG(0x100afb00u), self, t6, 3, t5, sp0 - 4u, sp0 - 0x10u);
    t8 = g->ecx;
    if ((uint8_t)t7 != 1u)
    {
        eax = t7;
        ecx = t8;
        loc_18 = in_ebx;
        loc_1c = in_ebp;
        loc_20 = in_esi;
        loc_24 = in_edi;
        goto L_100b54a8;
    }
    COW_AT(100b5264)
    t9 = COW_IMG(0x10480af0u) + (uint16_t)rd32(sp0 - 0x14u) * 4u;
    t10 = rd32(sp0 - 0x14u);
    wr32(sp0 - 0x14u, t9);
    if (rd32(COW_IMG(0x10480af0u) + (uint16_t)t10 * 4u) == 0u)
    {
        eax = t9;
        ecx = (uint16_t)t10;
        loc_18 = rd32(sp0 - 0x18u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_20 = rd32(sp0 - 0x20u);
        loc_24 = rd32(sp0 - 0x24u);
        goto L_100b54a8;
    }
    eax = t9;
    ecx = (uint16_t)t10;
    edi = rd32(COW_IMG(0x10480af0u) + (uint16_t)t10 * 4u);
    loc_14 = t9;
    COW_AT(100b5288)
    if (rd32(COW_IMG(0x10480af0u) + (uint16_t)rd32(sp0 - 0x10u) * 4u) == 0u)
    {
        loc_18 = rd32(sp0 - 0x18u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_20 = rd32(sp0 - 0x20u);
        loc_24 = rd32(sp0 - 0x24u);
        goto L_100b54a8;
    }
    ebp = rd32(COW_IMG(0x10480af0u) + (uint16_t)rd32(sp0 - 0x10u) * 4u);
    COW_AT(100b52a1)
    t11 = rd32(edi + 0x74u);
    wr32(sp0 - 0x10u, t11);
    t12 = rd32(ebp + 0x74u);
    wr32(sp0 - 0x10u, t12);
    if (rd32(edi + 0x78u) != rd32(sp0 - 8u))
    {
        eax = rd32(edi + 0x78u);
        ecx = rd32(ebp + 0x78u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_20 = rd32(sp0 - 0x20u);
        loc_24 = rd32(sp0 - 0x24u);
        goto L_100b54a8;
    }
    eax = rd32(edi + 0x78u);
    ecx = rd32(ebp + 0x78u);
    COW_AT(100b52c1)
    if (ecx != rd32(sp0 - 4u))
    {
        loc_18 = rd32(sp0 - 0x18u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_20 = rd32(sp0 - 0x20u);
        loc_24 = rd32(sp0 - 0x24u);
        goto L_100b54a8;
    }
    COW_AT(100b52cb)
    t13 = rd32(edi + 0x120u);
    if (!(t13 >> 9u & 1u))
    {
        ecx = t13;
        loc_18 = rd32(sp0 - 0x18u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_20 = rd32(sp0 - 0x20u);
        loc_24 = rd32(sp0 - 0x24u);
        goto L_100b54a8;
    }
    ecx = t13;
    COW_AT(100b52de)
    t14 = rd32(ebp + 0x120u);
    if (!(t14 >> 9u & 1u))
    {
        eax = t14;
        loc_18 = rd32(sp0 - 0x18u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_20 = rd32(sp0 - 0x20u);
        loc_24 = rd32(sp0 - 0x24u);
        goto L_100b54a8;
    }
    eax = t14;
    edx = t14 >> 9u;
    COW_AT(100b52f1)
    if (!(ecx >> 7u & 1u))
    {
        ecx = ecx >> 7u;
        loc_18 = rd32(sp0 - 0x18u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_20 = rd32(sp0 - 0x20u);
        loc_24 = rd32(sp0 - 0x24u);
        goto L_100b54a8;
    }
    ecx = ecx >> 7u;
    COW_AT(100b52fc)
    if (!(eax >> 7u & 1u))
    {
        eax = eax >> 7u;
        loc_18 = rd32(sp0 - 0x18u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_20 = rd32(sp0 - 0x20u);
        loc_24 = rd32(sp0 - 0x24u);
        goto L_100b54a8;
    }
    eax = eax >> 7u;
    COW_AT(100b5307)
    wr32(sp0 - 0x28u, 0xbu);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    t15 = cow_thiscall(g, COW_IMG(0x100afac0u), self, 1, 0xbu);
    t16 = g->edx;
    wr32(sp0 - 4u, t15);
    t17 = rd32(ebp + 0xa0u);
    wr32(sp0 - 8u, t17);
    if (rd8(arg1 + rd32(self + 0x260u) + 0x160u) != 0u)
    {
        eax = (t17 & 0xffffff00u) | rd8(arg1 + rd32(self + 0x260u) + 0x160u);
        edx = t16;
        edi = rd32(edi + 0xa0u);
        loc_4 = t15;
        loc_8 = t17;
        goto L_100b542e;
    }
    eax = (t17 & 0xffffff00u) | rd8(arg1 + rd32(self + 0x260u) + 0x160u);
    edx = t16;
    edi = rd32(edi + 0xa0u);
    loc_4 = t15;
    loc_8 = t17;
L_100b533d: ;
    COW_AT(100b533d)
    wr32(sp0 - 0x28u, 1u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    t18 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 1u);
    t19 = g->edx;
    if (arg1 != 0u)
    {
        eax = t18;
        edx = t19;
    COW_AT(100b5404)
        wr32(sp0 - 0x28u, eax);
        g->edx = edx;
        g->esp = sp0 - 0x24u;
        cow_thiscall(g, COW_IMG(0x100d2220u), edi, 1, eax);
        t36 = g->edx;
        edx = t36;
    }
    else
    {
        eax = t18;
        edx = t19;
    COW_AT(100b534d)
        wr32(sp0 - 0x28u, 1u);
        if ((int32_t)eax < 3072)
        {
    COW_AT(100b5373)
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x24u;
            t22 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 1u);
            t23 = g->edx;
            wr32(sp0 - 0x28u, 1u);
            if ((int32_t)t22 < 2048)
            {
                eax = t22;
                edx = t23;
    COW_AT(100b539b)
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x24u;
                t26 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 1u);
                t27 = g->edx;
                wr32(sp0 - 0x28u, 1u);
                if ((int32_t)t26 < 1024)
                {
                    eax = t26;
                    edx = t27;
    COW_AT(100b53c3)
                    g->eax = eax;
                    g->edx = edx;
                    g->esp = sp0 - 0x24u;
                    t30 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 1u);
                    t31 = g->edx;
                    wr32(sp0 - 0x28u, 1u);
                    if ((int32_t)t30 < 512)
                    {
                        eax = t30;
                        edx = t31;
    COW_AT(100b53eb)
                        g->eax = eax;
                        g->esp = sp0 - 0x24u;
                        t34 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 1u);
                        wr32(sp0 - 0x28u, t34 + 0x7d68u);
                        wr32(sp0 - 0x2cu, sp0 + 4u);
                        g->edx = sp0 + 4u;
                        cow_thiscall(g, COW_IMG(0x100d2110u), edi, 2, sp0 + 4u, t34 + 0x7d68u);
                        t35 = g->edx;
                        edx = t35;
                    }
                    else
                    {
                        eax = t30;
                        edx = t31;
    COW_AT(100b53d2)
                        g->eax = eax;
                        g->esp = sp0 - 0x24u;
                        t32 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 1u);
                        wr32(sp0 - 0x28u, t32 + 0xbfefu);
                        wr32(sp0 - 0x2cu, sp0 + 4u);
                        g->edx = sp0 + 4u;
                        cow_thiscall(g, COW_IMG(0x100d2110u), edi, 2, sp0 + 4u, t32 + 0xbfefu);
                        t33 = g->edx;
                        edx = t33;
                    }
                }
                else
                {
                    eax = t26;
                    edx = t27;
    COW_AT(100b53aa)
                    g->eax = eax;
                    g->esp = sp0 - 0x24u;
                    t28 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 1u);
                    wr32(sp0 - 0x28u, t28 + 0xdc19u);
                    wr32(sp0 - 0x2cu, sp0 + 4u);
                    g->edx = sp0 + 4u;
                    cow_thiscall(g, COW_IMG(0x100d2110u), edi, 2, sp0 + 4u, t28 + 0xdc19u);
                    t29 = g->edx;
                    edx = t29;
                }
            }
            else
            {
                eax = t22;
                edx = t23;
    COW_AT(100b5382)
                g->eax = eax;
                g->esp = sp0 - 0x24u;
                t24 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 1u);
                wr32(sp0 - 0x28u, t24 + 0xe95bu);
                wr32(sp0 - 0x2cu, sp0 + 4u);
                g->edx = sp0 + 4u;
                cow_thiscall(g, COW_IMG(0x100d2110u), edi, 2, sp0 + 4u, t24 + 0xe95bu);
                t25 = g->edx;
                edx = t25;
            }
        }
        else
        {
    COW_AT(100b5357)
            g->eax = eax;
            g->esp = sp0 - 0x24u;
            t20 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 1u);
            wr32(sp0 - 0x28u, t20 + 0x10323u);
            wr32(sp0 - 0x2cu, sp0 + 4u);
            g->edx = sp0 + 4u;
            cow_thiscall(g, COW_IMG(0x100d2110u), edi, 2, sp0 + 4u, t20 + 0x10323u);
            t21 = g->edx;
            edx = t21;
        }
    }
    COW_AT(100b540c)
    t37 = rd32(self + 0x260u);
    wr8(arg1 + t37 + 0x160u, 1u);
    if (rd8(arg1 + rd32(self + 0x260u) + 0x160u) == 0u)
    {
        eax = (t37 & 0xffffff00u) | rd8(arg1 + rd32(self + 0x260u) + 0x160u);
        loc_4 = rd32(sp0 - 4u);
        loc_8 = rd32(sp0 - 8u);
        goto L_100b533d;
    }
    eax = (t37 & 0xffffff00u) | rd8(arg1 + rd32(self + 0x260u) + 0x160u);
    loc_4 = rd32(sp0 - 4u);
    loc_8 = rd32(sp0 - 8u);
L_100b542e: ;
    COW_AT(100b542e)
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    t38 = cow_call_regs(g, COW_IMG(0x100d12d0u), eax, edi, g->edx, 1, 0);
    t39 = g->ecx;
    t40 = g->edx;
    if ((uint8_t)t38 == 0u)
    {
        eax = t38;
        goto L_100b54df;
    }
    eax = t38;
    ecx = t39;
    edx = t40;
    COW_AT(100b543d)
    if (rd32(sp0 - 4u) == 0u)
    {
        ebx = rd32(sp0 - 4u);
    }
    else
    {
        ebx = rd32(sp0 - 4u);
    COW_AT(100b5445)
        if (ebx != 0x78787878u)
        {
    COW_AT(100b544d)
            g->esp = sp0 - 0x24u;
            cow_thiscall(g, COW_IMG(0x10087d40u), rd32(rd32(sp0 - 0x14u)), 0);
            wr32(sp0 - 0x28u, 0u);
            t41 = rd32(sp0 - 8u);
            wr32(sp0 - 0x2cu, t41);
            wr32(sp0 - 0x30u, ebx);
            t42 = rd32(rd32(sp0 - 0x14u));
            wr32(t42 + 0x1ecu, ebx);
            wr32(t42 + 0x1f4u, t41);
            g->edx = rd32(edi);
            t43 = rd32(edi);
            cow_thiscall(g, rd32(t43 + 0x298u), edi, 3, ebx, t41, 0u);
            t44 = g->ecx;
            t45 = g->edx;
            ecx = t44;
            edx = t45;
        }
    }
    COW_AT(100b547c)
    t46 = rd32(self + 0x260u);
    wr8(arg1 + t46 + 0x160u, 0u);
    if ((uint8_t)arg3 == 0u)
    {
        eax = (t46 & 0xffffff00u) | (uint8_t)arg3;
        loc_18 = rd32(sp0 - 0x18u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_20 = rd32(sp0 - 0x20u);
        loc_24 = rd32(sp0 - 0x24u);
    }
    else
    {
        eax = (t46 & 0xffffff00u) | (uint8_t)arg3;
    COW_AT(100b5492)
        wr32(sp0 - 0x28u, 0xfu);
        g->eax = eax;
        g->esp = sp0 - 0x24u;
        t47 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 0xfu);
        wr32(sp0 - 0x28u, edi);
        wr32(sp0 - 0x2cu, ebx);
        wr32(sp0 - 0x30u, t47);
        t48 = cow_thiscall(g, rd32(rd32(edi) + 0x2a8u), edi, 3, t47, ebx, edi);
        t49 = g->ecx;
        eax = t48;
        ecx = t49;
        loc_18 = rd32(sp0 - 0x18u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_20 = rd32(sp0 - 0x20u);
        loc_24 = rd32(sp0 - 0x24u);
    }
L_100b54a8: ;
    COW_AT(100b54a8)
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 0xfu));
    if ((uint8_t)arg3 == 0u)
    {
        eax = (eax & 0xffff0000u) | rd16(self + 0x256u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | rd16(self + 0x256u);
    COW_AT(100b54bf)
        wr16(self + 0x256u, (uint16_t)(eax + 2u));
        eax = eax + 2u;
    }
    COW_AT(100b54c9)
    wr8(self + 0x25au, (uint8_t)arg2);
    g->ebx = loc_18;
    g->esi = loc_20;
    g->edi = loc_24;
    g->ebp = loc_1c;
    return (eax & 0xffffff00u) | 1u;
L_100b54df: ;
    COW_AT(100b54df)
    wr8(self + 0x25au, 1u);
    g->ebx = rd32(sp0 - 0x18u);
    g->esi = rd32(sp0 - 0x20u);
    g->edi = rd32(sp0 - 0x24u);
    g->ebp = rd32(sp0 - 0x1cu);
    return eax & 0xffffff00u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100b5210(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100b5241u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x24u);
        in_esi = rd32(sp0 - 0x20u);
        in_ebp = rd32(sp0 - 0x1cu);
        in_ebx = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x24u;
        g->ebx = 1u;
        wr32(sp0 - 0x2cu, sp0 - 8u);
        wr32(sp0 - 0x28u, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x100b5264u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        g->ebx = 1u;
        wr32(sp0 - 0x2cu, sp0 - 4u);
        wr32(sp0 - 0x28u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x100b5288u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x24u;
        g->ebx = 1u;
        wr32(sp0 - 0x2cu, sp0 - 4u);
        wr32(sp0 - 0x28u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x100b52a1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x24u;
        g->ebx = 1u;
        wr32(sp0 - 0x2cu, sp0 - 4u);
        wr32(sp0 - 0x28u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x100b52c1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x24u;
        g->ebx = 1u;
        wr32(sp0 - 0x2cu, sp0 - 4u);
        wr32(sp0 - 0x28u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x100b52cbu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x24u;
        g->ebx = 1u;
        wr32(sp0 - 0x2cu, sp0 - 4u);
        wr32(sp0 - 0x28u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x100b52deu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x24u;
        g->ebx = 1u;
        wr32(sp0 - 0x2cu, sp0 - 4u);
        wr32(sp0 - 0x28u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x100b52f1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x24u;
        g->ebx = 1u;
        wr32(sp0 - 0x2cu, sp0 - 4u);
        wr32(sp0 - 0x28u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x100b52fcu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x24u;
        g->ebx = 1u;
        wr32(sp0 - 0x2cu, sp0 - 4u);
        wr32(sp0 - 0x28u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x100b5307u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x24u;
        g->ebx = 1u;
        wr32(sp0 - 0x2cu, sp0 - 4u);
        wr32(sp0 - 0x28u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x100b533du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_4;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x24u;
        g->ebx = 1u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100b534du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x24u;
        g->ebx = 1u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100b5357u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        g->ebx = 1u;
        g->ebp = arg1;
        g->esi = self;
        wr32(sp0 - 0x28u, 1u);
        (void)sp0;
        return 1;
    }
    case 0x100b5373u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        g->ebx = 1u;
        g->ebp = arg1;
        g->esi = self;
        wr32(sp0 - 0x28u, 1u);
        (void)sp0;
        return 1;
    }
    case 0x100b5382u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        g->ebx = 1u;
        g->ebp = arg1;
        g->esi = self;
        wr32(sp0 - 0x28u, 1u);
        (void)sp0;
        return 1;
    }
    case 0x100b539bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        g->ebx = 1u;
        g->ebp = arg1;
        g->esi = self;
        wr32(sp0 - 0x28u, 1u);
        (void)sp0;
        return 1;
    }
    case 0x100b53aau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        g->ebx = 1u;
        g->ebp = arg1;
        g->esi = self;
        wr32(sp0 - 0x28u, 1u);
        (void)sp0;
        return 1;
    }
    case 0x100b53c3u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        g->ebx = 1u;
        g->ebp = arg1;
        g->esi = self;
        wr32(sp0 - 0x28u, 1u);
        (void)sp0;
        return 1;
    }
    case 0x100b53d2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        g->ebx = 1u;
        g->ebp = arg1;
        g->esi = self;
        wr32(sp0 - 0x28u, 1u);
        (void)sp0;
        return 1;
    }
    case 0x100b53ebu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        g->ebx = 1u;
        g->ebp = arg1;
        g->esi = self;
        wr32(sp0 - 0x28u, 1u);
        (void)sp0;
        return 1;
    }
    case 0x100b5404u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x24u;
        g->ebx = 1u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100b540cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x24u;
        g->ebx = 1u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100b542eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_4;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x24u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100b543du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x24u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100b5445u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x24u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100b544du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x24u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100b547cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x24u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100b5492u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x100b54a8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x100b54bfu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x100b54c9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x100b54dfu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100b5210(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100b5210(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
