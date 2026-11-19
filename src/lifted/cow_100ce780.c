/* f_0x100ce780 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_100ce780(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_24;
    uint32_t loc_28;
    uint32_t loc_2c;
    uint32_t loc_30;
    uint32_t loc_34;
    uint32_t loc_38;
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
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 76u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100ce79du: eax = g->eax; self = g->ebx; esi = g->esi; in_edi = rd32(sp0 - 0x38u); in_esi = rd32(sp0 - 0x34u); in_ebp = rd32(sp0 - 0x30u); in_ebx = rd32(sp0 - 0x2cu); g->ebp = rd32(sp0 - 0x30u); g->ebx = rd32(sp0 - 0x2cu); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x34u); goto E_100ce79d;
    case 0x100ce7b2u: eax = g->eax; edx = g->edx; self = g->ebx; esi = g->esi; goto E_100ce7b2;
    case 0x100ce7b7u: eax = g->eax; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_100ce7b7;
    case 0x100ce7bcu: eax = g->eax; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_24 = rd32(sp0 - 0x24u); goto E_100ce7bc;
    case 0x100ce7d9u: eax = g->eax; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); goto E_100ce7d9;
    case 0x100ce7e6u: eax = g->eax; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_100ce7e6;
    case 0x100ce7eeu: eax = g->eax; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_100ce7ee;
    case 0x100ce7f2u: eax = g->eax; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_100ce7f2;
    case 0x100ce7f4u: eax = g->eax; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_100ce7f4;
    case 0x100ce7f7u: eax = g->eax; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_100ce7f7;
    case 0x100ce7fbu: eax = g->eax; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_100ce7fb;
    case 0x100ce7ffu: eax = g->eax; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_100ce7ff;
    case 0x100ce801u: eax = g->eax; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_100ce801;
    case 0x100ce81au: eax = g->eax; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_100ce81a;
    case 0x100ce836u: eax = g->eax; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_100ce836;
    case 0x100ce841u: eax = g->eax; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_100ce841;
    case 0x100ce845u: eax = g->eax; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_100ce845;
    case 0x100ce855u: eax = g->eax; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); goto E_100ce855;
    case 0x100ce872u: eax = g->eax; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); goto E_100ce872;
    case 0x100ce87fu: eax = g->eax; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_100ce87f;
    case 0x100ce887u: eax = g->eax; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_100ce887;
    case 0x100ce88bu: eax = g->eax; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_100ce88b;
    case 0x100ce88du: eax = g->eax; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_100ce88d;
    case 0x100ce890u: eax = g->eax; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_100ce890;
    case 0x100ce894u: eax = g->eax; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_100ce894;
    case 0x100ce898u: eax = g->eax; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_100ce898;
    case 0x100ce89au: eax = g->eax; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_100ce89a;
    case 0x100ce8b7u: eax = g->eax; edx = g->edx; self = g->ebx; esi = g->esi; goto E_100ce8b7;
    case 0x100ce8d3u: eax = g->eax; edx = g->edx; self = g->ebx; esi = g->esi; goto E_100ce8d3;
    case 0x100ce8deu: eax = g->eax; edx = g->edx; self = g->ebx; esi = g->esi; goto E_100ce8de;
    case 0x100ce8e2u: eax = g->eax; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_100ce8e2;
    case 0x100ce8f2u: eax = g->eax; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); goto E_100ce8f2;
    case 0x100ce8f6u: eax = g->eax; edx = g->edx; self = g->ebx; esi = g->esi; loc_28 = rd32(sp0 - 0x28u); goto E_100ce8f6;
    case 0x100ce904u: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_28 = rd32(sp0 - 0x28u); goto E_100ce904;
    case 0x100ce90fu: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_28 = rd32(sp0 - 0x28u); goto E_100ce90f;
    case 0x100ce91cu: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_100ce91c;
    case 0x100ce924u: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_100ce924;
    case 0x100ce928u: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_100ce928;
    case 0x100ce92au: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_100ce92a;
    case 0x100ce92du: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_100ce92d;
    case 0x100ce931u: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_100ce931;
    case 0x100ce935u: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_100ce935;
    case 0x100ce937u: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_100ce937;
    case 0x100ce950u: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_100ce950;
    case 0x100ce96cu: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_100ce96c;
    case 0x100ce977u: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_100ce977;
    case 0x100ce97bu: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_100ce97b;
    case 0x100ce98bu: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_28 = rd32(sp0 - 0x28u); goto E_100ce98b;
    case 0x100ce996u: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); goto E_100ce996;
    default: break;
    }
#endif

    COW_AT(100ce780)
    wr32(sp0 - 0x2cu, in_ebx);
    wr32(sp0 - 0x30u, in_ebp);
    wr32(sp0 - 0x34u, in_esi);
    wr32(sp0 - 0x38u, in_edi);
    wr32(sp0 - 0x24u, 0u);
    if (arg2 != 0x74696e69u)
    {
        edi = arg2;
        loc_2c = in_ebx;
        loc_30 = in_ebp;
        loc_34 = in_esi;
        loc_38 = in_edi;
        loc_24 = 0u;
    }
    else
    {
    COW_AT(100ce79d)
        wr32(sp0 - 0x3cu, sp0 - 0x20u);
        g->eax = rd32(self);
        t1 = rd32(self);
        g->esp = sp0 - 0x38u;
        t2 = cow_thiscall(g, rd32(t1 + 0x1dcu), self, 1, sp0 - 0x20u);
        if (rd32(t2) == 0u)
        {
            edi = arg2;
            loc_2c = in_ebx;
            loc_30 = in_ebp;
            loc_34 = in_esi;
            loc_38 = in_edi;
            loc_24 = 0u;
        }
        else
        {
            eax = rd32(t2);
    COW_AT(100ce7b2)
            if (rd32(eax) == 0u)
            {
                edi = arg2;
                loc_2c = rd32(sp0 - 0x2cu);
                loc_30 = rd32(sp0 - 0x30u);
                loc_34 = rd32(sp0 - 0x34u);
                loc_38 = rd32(sp0 - 0x38u);
                loc_24 = rd32(sp0 - 0x24u);
            }
            else
            {
    COW_AT(100ce7b7)
                edi = 0x30696e69u;
                loc_2c = rd32(sp0 - 0x2cu);
                loc_30 = rd32(sp0 - 0x30u);
                loc_34 = rd32(sp0 - 0x34u);
                loc_38 = rd32(sp0 - 0x38u);
                loc_24 = rd32(sp0 - 0x24u);
            }
        }
    }
    COW_AT(100ce7bc)
    wr32(sp0 - 0x3cu, sp0 - 0x20u);
    g->eax = sp0 - 0x20u;
    g->edx = rd32(self);
    t3 = rd32(self);
    g->esp = sp0 - 0x38u;
    t4 = cow_thiscall(g, rd32(t3 + 0x400u), self, 1, sp0 - 0x20u);
    t5 = g->edx;
    wr32(sp0 - 0x28u, rd32(t4));
    if (rd32(t4) != 0u)
    {
        eax = rd32(t4);
        edx = t5;
        loc_28 = rd32(t4);
    COW_AT(100ce7d9)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x38u;
        t6 = cow_thiscall(g, COW_IMG(0x10071060u), sp0 - 0x28u, 0);
        t7 = g->edx;
        if ((uint8_t)t6 != 0u)
        {
            edx = t7;
    COW_AT(100ce7e6)
            if (rd32(sp0 - 0x28u) == 0u)
            {
    COW_AT(100ce7f2)
                eax = 0u;
            }
            else
            {
                eax = rd32(sp0 - 0x28u);
    COW_AT(100ce7ee)
                eax = rd32(eax);
            }
    COW_AT(100ce7f4)
            esi = rd32(eax + 0x14u);
L_100ce7f7: ;
    COW_AT(100ce7f7)
            if (esi == 0u)
            {
    COW_AT(100ce7ff)
                eax = 0u;
            }
            else
            {
    COW_AT(100ce7fb)
                eax = rd32(esi);
            }
    COW_AT(100ce801)
            wr32(sp0 - 0x3cu, arg3);
            wr32(sp0 - 0x40u, edi);
            wr32(sp0 - 0x44u, arg1);
            wr32(sp0 - 0x48u, eax);
            g->edx = edx;
            g->esp = sp0 - 0x38u;
            cow_thiscall(g, COW_IMG(0x100742b0u), sp0 - 0x1cu, 4, eax, arg1, edi, arg3);
            t8 = g->edx;
            if (rd32(sp0 - 8u) == 0u)
            {
                eax = rd32(sp0 - 8u);
                edx = t8;
                goto L_100ce836;
            }
            edx = t8;
L_100ce81a: ;
    COW_AT(100ce81a)
            wr32(sp0 - 0x3cu, 0u);
            t9 = rd32(sp0 - 0x24u) + 1u;
            wr32(sp0 - 0x24u, t9);
            g->edx = edx;
            g->esp = sp0 - 0x38u;
            cow_thiscall(g, COW_IMG(0x100745c0u), sp0 - 0x1cu, 1, 0u);
            t10 = g->edx;
            if (rd32(sp0 - 8u) != 0u)
            {
                edx = t10;
                goto L_100ce81a;
            }
            eax = rd32(sp0 - 8u);
            edx = t10;
L_100ce836: ;
    COW_AT(100ce836)
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x38u;
            t11 = cow_thiscall(g, COW_IMG(0x10072270u), rd32(esi), 0);
            t12 = g->edx;
            if (t11 == 0u) goto L_100ce855;
            eax = t11;
            edx = t12;
    COW_AT(100ce841)
            if (eax == rd32(esi)) goto L_100ce855;
    COW_AT(100ce845)
            t13 = rd32(COW_IMG(0x1047d130u)) - 1u;
            t14 = rd32(eax + 0x14u);
            wr32(COW_IMG(0x1047d130u), t13);
            esi = t14;
            goto L_100ce7f7;
        }
    }
L_100ce855: ;
    COW_AT(100ce855)
    wr32(sp0 - 0x3cu, sp0 + 0xcu);
    g->eax = sp0 + 0xcu;
    g->edx = rd32(self);
    t15 = rd32(self);
    g->esp = sp0 - 0x38u;
    t16 = cow_thiscall(g, rd32(t15 + 0x1dcu), self, 1, sp0 + 0xcu);
    t17 = g->edx;
    wr32(sp0 - 0x28u, rd32(t16));
    if (rd32(t16) == 0u)
    {
        edx = t17;
        goto L_100ce8f2;
    }
    eax = rd32(t16);
    edx = t17;
    loc_28 = rd32(t16);
    COW_AT(100ce872)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x38u;
    t18 = cow_thiscall(g, COW_IMG(0x10071060u), sp0 - 0x28u, 0);
    t19 = g->edx;
    if ((uint8_t)t18 == 0u)
    {
        edx = t19;
        goto L_100ce8f2;
    }
    edx = t19;
    COW_AT(100ce87f)
    if (rd32(sp0 - 0x28u) == 0u)
    {
    COW_AT(100ce88b)
        eax = 0u;
    }
    else
    {
        eax = rd32(sp0 - 0x28u);
    COW_AT(100ce887)
        eax = rd32(eax);
    }
    COW_AT(100ce88d)
    esi = rd32(eax + 0x14u);
L_100ce890: ;
    COW_AT(100ce890)
    if (esi == 0u)
    {
    COW_AT(100ce898)
        eax = 0u;
    }
    else
    {
    COW_AT(100ce894)
        eax = rd32(esi);
    }
    COW_AT(100ce89a)
    wr32(sp0 - 0x3cu, arg3);
    wr32(sp0 - 0x40u, arg2);
    wr32(sp0 - 0x44u, arg1);
    wr32(sp0 - 0x48u, eax);
    g->edx = edx;
    g->esp = sp0 - 0x38u;
    cow_thiscall(g, COW_IMG(0x100742b0u), sp0 - 0x1cu, 4, eax, arg1, arg2, arg3);
    t20 = g->edx;
    if (rd32(sp0 - 8u) == 0u)
    {
        eax = rd32(sp0 - 8u);
        edx = t20;
        goto L_100ce8d3;
    }
    edx = t20;
L_100ce8b7: ;
    COW_AT(100ce8b7)
    wr32(sp0 - 0x3cu, 0u);
    t21 = rd32(sp0 - 0x24u) + 1u;
    wr32(sp0 - 0x24u, t21);
    g->edx = edx;
    g->esp = sp0 - 0x38u;
    cow_thiscall(g, COW_IMG(0x100745c0u), sp0 - 0x1cu, 1, 0u);
    t22 = g->edx;
    if (rd32(sp0 - 8u) != 0u)
    {
        edx = t22;
        goto L_100ce8b7;
    }
    eax = rd32(sp0 - 8u);
    edx = t22;
L_100ce8d3: ;
    COW_AT(100ce8d3)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x38u;
    t23 = cow_thiscall(g, COW_IMG(0x10072270u), rd32(esi), 0);
    t24 = g->edx;
    if (t23 == 0u)
    {
        edx = t24;
        goto L_100ce8f6;
    }
    eax = t23;
    edx = t24;
    COW_AT(100ce8de)
    if (eax == rd32(esi)) goto L_100ce8f6;
    COW_AT(100ce8e2)
    t25 = rd32(COW_IMG(0x1047d130u)) - 1u;
    t26 = rd32(eax + 0x14u);
    wr32(COW_IMG(0x1047d130u), t25);
    esi = t26;
    goto L_100ce890;
L_100ce8f2: ;
    COW_AT(100ce8f2)
L_100ce8f6: ;
    COW_AT(100ce8f6)
    if (rd32(self + 0x7e4u) == 0u) goto L_100ce996;
    ebx = rd32(self + 0x7e4u);
L_100ce904: ;
    COW_AT(100ce904)
    t27 = rd32(ebx + 0x1cu);
    wr32(sp0 - 0x28u, t27);
    if (rd32(ebx + 0x1cu) != 0u)
    {
        eax = t27;
        loc_28 = t27;
    COW_AT(100ce90f)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x38u;
        t28 = cow_thiscall(g, COW_IMG(0x10071060u), sp0 - 0x28u, 0);
        t29 = g->edx;
        if ((uint8_t)t28 == 0u)
        {
            edx = t29;
        }
        else
        {
    COW_AT(100ce91c)
            if (rd32(sp0 - 0x28u) == 0u)
            {
    COW_AT(100ce928)
                eax = 0u;
            }
            else
            {
                eax = rd32(sp0 - 0x28u);
    COW_AT(100ce924)
                eax = rd32(eax);
            }
    COW_AT(100ce92a)
            esi = rd32(eax + 0x14u);
L_100ce92d: ;
    COW_AT(100ce92d)
            if (esi == 0u)
            {
    COW_AT(100ce935)
                eax = 0u;
            }
            else
            {
    COW_AT(100ce931)
                eax = rd32(esi);
            }
    COW_AT(100ce937)
            wr32(sp0 - 0x3cu, arg3);
            wr32(sp0 - 0x40u, arg2);
            wr32(sp0 - 0x44u, arg1);
            wr32(sp0 - 0x48u, eax);
            g->edx = arg2;
            g->esp = sp0 - 0x38u;
            cow_thiscall(g, COW_IMG(0x100742b0u), sp0 - 0x1cu, 4, eax, arg1, arg2, arg3);
            t30 = g->edx;
            if (rd32(sp0 - 8u) == 0u)
            {
                eax = rd32(sp0 - 8u);
                edx = t30;
                goto L_100ce96c;
            }
            edx = t30;
L_100ce950: ;
    COW_AT(100ce950)
            wr32(sp0 - 0x3cu, 0u);
            t31 = rd32(sp0 - 0x24u) + 1u;
            wr32(sp0 - 0x24u, t31);
            g->edx = edx;
            g->esp = sp0 - 0x38u;
            cow_thiscall(g, COW_IMG(0x100745c0u), sp0 - 0x1cu, 1, 0u);
            t32 = g->edx;
            if (rd32(sp0 - 8u) != 0u)
            {
                edx = t32;
                goto L_100ce950;
            }
            eax = rd32(sp0 - 8u);
            edx = t32;
L_100ce96c: ;
    COW_AT(100ce96c)
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x38u;
            t33 = cow_thiscall(g, COW_IMG(0x10072270u), rd32(esi), 0);
            t34 = g->edx;
            if (t33 == 0u)
            {
                edx = t34;
                goto L_100ce98b;
            }
            eax = t33;
            edx = t34;
    COW_AT(100ce977)
            if (eax == rd32(esi)) goto L_100ce98b;
    COW_AT(100ce97b)
            t35 = rd32(COW_IMG(0x1047d130u)) - 1u;
            t36 = rd32(eax + 0x14u);
            wr32(COW_IMG(0x1047d130u), t35);
            esi = t36;
            goto L_100ce92d;
        }
    }
L_100ce98b: ;
    COW_AT(100ce98b)
    if (rd32(ebx + 4u) != 0u)
    {
        ebx = rd32(ebx + 4u);
        goto L_100ce904;
    }
L_100ce996: ;
    COW_AT(100ce996)
    g->ebx = rd32(sp0 - 0x2cu);
    g->esi = rd32(sp0 - 0x34u);
    g->edi = rd32(sp0 - 0x38u);
    g->ebp = rd32(sp0 - 0x30u);
    return rd32(sp0 - 0x24u);
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100ce780(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100ce79du:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ebx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x38u);
        in_esi = rd32(sp0 - 0x34u);
        in_ebp = rd32(sp0 - 0x30u);
        in_ebx = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x38u;
        g->edi = arg2;
        wr32(sp0 - 0x24u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x100ce7b2u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x38u;
        g->edi = arg2;
        wr32(sp0 - 0x3cu, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x100ce7b7u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x38u;
        wr32(sp0 - 0x3cu, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x100ce7bcu:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        eax = g->eax;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x38u;
        (void)sp0;
        return 1;
    }
    case 0x100ce7d9u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_28;
        eax = g->eax;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x38u;
        g->ebp = arg3;
        wr32(sp0 - 0x3cu, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x100ce7e6u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x38u;
        g->ebp = arg3;
        wr32(sp0 - 0x3cu, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x100ce7eeu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x38u;
        g->ebp = arg3;
        wr32(sp0 - 0x3cu, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x100ce7f2u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x38u;
        g->ebp = arg3;
        wr32(sp0 - 0x3cu, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x100ce7f4u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x38u;
        g->ebp = arg3;
        wr32(sp0 - 0x3cu, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x100ce7f7u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x38u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100ce7fbu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x38u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100ce7ffu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x38u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100ce801u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x38u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100ce81au:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x38u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100ce836u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x38u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100ce841u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x38u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100ce845u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x38u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100ce855u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_28;
        eax = g->eax;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x38u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100ce872u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_28;
        eax = g->eax;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x38u;
        g->ebp = arg3;
        wr32(sp0 - 0x3cu, sp0 + 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x100ce87fu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x38u;
        g->ebp = arg3;
        wr32(sp0 - 0x3cu, sp0 + 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x100ce887u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x38u;
        g->ebp = arg3;
        wr32(sp0 - 0x3cu, sp0 + 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x100ce88bu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x38u;
        g->ebp = arg3;
        wr32(sp0 - 0x3cu, sp0 + 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x100ce88du:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x38u;
        g->ebp = arg3;
        wr32(sp0 - 0x3cu, sp0 + 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x100ce890u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x38u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100ce894u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x38u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100ce898u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x38u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100ce89au:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x38u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100ce8b7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x38u;
        g->ebp = arg3;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ce8d3u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x38u;
        g->ebp = arg3;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ce8deu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x38u;
        g->ebp = arg3;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ce8e2u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x38u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100ce8f2u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_28;
        eax = g->eax;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x38u;
        g->ebp = arg3;
        wr32(sp0 - 0x3cu, sp0 + 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x100ce8f6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_28;
        eax = g->eax;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x38u;
        g->ebp = arg3;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ce904u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x38u;
        g->ebp = arg3;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ce90fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x38u;
        g->ebp = arg3;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ce91cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x38u;
        g->ebp = arg3;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ce924u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x38u;
        g->ebp = arg3;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ce928u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x38u;
        g->ebp = arg3;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ce92au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x38u;
        g->ebp = arg3;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ce92du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x38u;
        g->ebp = arg3;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ce931u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x38u;
        g->ebp = arg3;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ce935u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x38u;
        g->ebp = arg3;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ce937u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x38u;
        g->ebp = arg3;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ce950u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x38u;
        g->ebp = arg3;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ce96cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x38u;
        g->ebp = arg3;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ce977u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x38u;
        g->ebp = arg3;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ce97bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x38u;
        g->ebp = arg3;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ce98bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x38u;
        g->ebp = arg3;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ce996u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x38u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100ce780(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100ce780(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
