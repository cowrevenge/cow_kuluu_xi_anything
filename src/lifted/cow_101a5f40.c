/* f_0x101a5f40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_101a5f40(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_14;
    uint32_t loc_18;
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
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 36u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101a5f50u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_esi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0x10u); goto E_101a5f50;
    case 0x101a5f55u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0x10u); goto E_101a5f55;
    case 0x101a5f68u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0x10u); goto E_101a5f68;
    case 0x101a5f7bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_14 = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0x10u); goto E_101a5f7b;
    case 0x101a5f92u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_101a5f92;
    case 0x101a5f98u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_101a5f98;
    case 0x101a5f9cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_101a5f9c;
    case 0x101a5fa5u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_18 = rd32(sp0 - 0x18u); goto E_101a5fa5;
    case 0x101a5fb9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_18 = rd32(sp0 - 0x18u); goto E_101a5fb9;
    case 0x101a5fbdu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_18 = rd32(sp0 - 0x18u); goto E_101a5fbd;
    case 0x101a5fbfu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_18 = rd32(sp0 - 0x18u); goto E_101a5fbf;
    case 0x101a600au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_18 = rd32(sp0 - 0x18u); goto E_101a600a;
    case 0x101a601du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_18 = rd32(sp0 - 0x18u); goto E_101a601d;
    case 0x101a6021u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_18 = rd32(sp0 - 0x18u); goto E_101a6021;
    case 0x101a6023u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_18 = rd32(sp0 - 0x18u); goto E_101a6023;
    case 0x101a603fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_101a603f;
    case 0x101a604fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_18 = rd32(sp0 - 0x18u); goto E_101a604f;
    case 0x101a605eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_101a605e;
    case 0x101a606fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_101a606f;
    case 0x101a607du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_101a607d;
    case 0x101a608au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_101a608a;
    case 0x101a6098u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_101a6098;
    case 0x101a60a2u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_101a60a2;
    default: break;
    }
#endif

    COW_AT(101a5f40)
    wr32(sp0 - 0xcu, in_ebx);
    wr32(sp0 - 0x10u, in_esi);
    if ((int32_t)rd32(self + 0x18u) < 0)
    {
        eax = rd32(self + 0x18u);
        ecx = self;
        edx = in_edx;
    }
    else
    {
        eax = rd32(self + 0x18u);
    COW_AT(101a5f50)
        if ((int32_t)eax >= 20)
        {
            ecx = self;
            edx = in_edx;
        }
        else
        {
    COW_AT(101a5f55)
            if (eax * 0x17cu + rd32(self + 0x14u) + 4u == 0u)
            {
                ecx = eax * 0x17cu + rd32(self + 0x14u) + 4u;
                edx = rd32(self + 0x14u);
            }
            else
            {
                ecx = eax * 0x17cu + rd32(self + 0x14u) + 4u;
                edx = rd32(self + 0x14u);
    COW_AT(101a5f68)
                wr32(sp0 - 0x14u, 2u);
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x14u;
                t1 = cow_thiscall(g, COW_IMG(0x101a19a0u), ecx, 0);
                t2 = g->edx;
                wr32(sp0 - 0x18u, t1);
                g->edx = t2;
                t3 = rd32(COW_IMG(0x1057847cu));
                g->esp = sp0 - 0x10u;
                t4 = cow_thiscall(g, COW_IMG(0x10150cd0u), t3, 2, t1, 2u);
                t5 = g->ecx;
                t6 = g->edx;
                eax = t4;
                ecx = t5;
                edx = t6;
            }
        }
    }
    COW_AT(101a5f7b)
    wr32(sp0 - 0x14u, 0xffffffffu);
    wr32(sp0 - 0x18u, 4u);
    wr32(sp0 - 0x1cu, 0xa8u);
    wr32(sp0 - 0x20u, 0x3eu);
    g->ebx = 0u;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t7 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 7, 0x3eu, 0xa8u, 4u, 0xffffffffu, in_esi, in_ebx, rd32(sp0 - 8u));
    t8 = g->ecx;
    t9 = g->edx;
    if ((uint8_t)t7 == 0u)
    {
        eax = t7;
        ecx = t8;
        edx = t9;
    COW_AT(101a5f98)
        wr16(self + 0x1eu, 0u);
    }
    else
    {
        eax = t7;
        ecx = t8;
        edx = t9;
    COW_AT(101a5f92)
        wr16(self + 0x1eu, (uint16_t)(rd16(self + 0x1eu) + 1u));
    }
    COW_AT(101a5f9c)
    wr32(sp0 - 0x14u, 2u);
    if ((int16_t)rd16(self + 0x1eu) <= 30)
    {
    COW_AT(101a600a)
        t28 = rd32(self + 0x14u);
        wr8(self + 0x1du, 0u);
        if (rd8(t28 + 0x235cu) == 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(t28 + 0x235cu);
            ecx = rd32(self + 8u);
    COW_AT(101a6021)
            wr32(sp0 - 0x18u, 5u);
            loc_18 = 5u;
        }
        else
        {
            eax = (eax & 0xffffff00u) | rd8(t28 + 0x235cu);
            ecx = rd32(self + 8u);
    COW_AT(101a601d)
            wr32(sp0 - 0x18u, 0xbu);
            loc_18 = 0xbu;
        }
    COW_AT(101a6023)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t29 = cow_thiscall(g, COW_IMG(0x10118b60u), ecx, 2, loc_18, 2u);
        t30 = g->edx;
        wr32(sp0 - 0x14u, 0u);
        wr32(sp0 - 0x18u, 1u);
        g->edx = t30;
        t31 = cow_thiscall(g, COW_IMG(0x1011adb0u), rd32(self + 8u), 2, 1u, 0u);
        t32 = g->edx;
        wr32(sp0 - 0x14u, 0u);
        wr32(sp0 - 0x18u, 2u);
        g->edx = t32;
        t33 = cow_thiscall(g, COW_IMG(0x1011adb0u), rd32(self + 8u), 2, 2u, 0u);
        t34 = g->edx;
        wr32(sp0 - 0x14u, 0u);
        eax = t33;
        edx = t34;
        loc_14 = 0u;
    }
    else
    {
    COW_AT(101a5fa5)
        t10 = rd32(self + 0x14u);
        wr8(self + 0x1du, 1u);
        if (rd8(t10 + 0x235du) == 0u)
        {
            eax = t10;
            ecx = rd32(self + 8u);
    COW_AT(101a5fbd)
            wr32(sp0 - 0x18u, 5u);
            loc_18 = 5u;
        }
        else
        {
            eax = t10;
            ecx = rd32(self + 8u);
    COW_AT(101a5fb9)
            wr32(sp0 - 0x18u, 0xbu);
            loc_18 = 0xbu;
        }
    COW_AT(101a5fbf)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t11 = cow_thiscall(g, COW_IMG(0x10118b60u), ecx, 2, loc_18, 2u);
        t12 = g->ecx;
        t13 = g->edx;
        wr32(sp0 - 0x14u, 0x29cu);
        wr32(sp0 - 0x18u, 0xeu);
        g->edx = t13;
        t14 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, 0x29cu);
        t15 = g->edx;
        wr32(sp0 - 0x14u, t14);
        wr32(sp0 - 0x18u, 1u);
        g->edx = t15;
        t16 = rd32(self + 8u);
        t17 = cow_thiscall(g, COW_IMG(0x1011adb0u), t16, 2, 1u, t14);
        t18 = g->ecx;
        t19 = g->edx;
        wr32(sp0 - 0x14u, 0x29du);
        wr32(sp0 - 0x18u, 0xeu);
        g->edx = t19;
        t20 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, 0x29du);
        t21 = g->edx;
        wr32(sp0 - 0x14u, t20);
        wr32(sp0 - 0x18u, 2u);
        g->edx = t21;
        t22 = rd32(self + 8u);
        t23 = cow_thiscall(g, COW_IMG(0x1011adb0u), t22, 2, 2u, t20);
        t24 = g->ecx;
        t25 = g->edx;
        wr32(sp0 - 0x14u, 0x29eu);
        wr32(sp0 - 0x18u, 0xeu);
        g->edx = t25;
        t26 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, 0x29eu);
        t27 = g->edx;
        wr32(sp0 - 0x14u, t26);
        eax = t26;
        edx = t27;
        loc_14 = t26;
    }
    COW_AT(101a603f)
    wr32(sp0 - 0x18u, 3u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t35 = cow_thiscall(g, COW_IMG(0x1011adb0u), rd32(self + 8u), 2, 3u, loc_14);
    t36 = g->edx;
    if ((uint8_t)arg1 == 0u)
    {
        eax = t35;
        edx = t36;
    }
    else
    {
        eax = t35;
        edx = t36;
    COW_AT(101a604f)
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t37 = cow_call_regs(g, COW_IMG(0x101262e0u), eax, rd32(COW_IMG(0x104e1d4cu)), g->edx, 1, 0);
        t38 = g->edx;
        if ((uint8_t)t37 == 0u)
        {
            eax = t37;
            edx = t38;
        }
        else
        {
            edx = t38;
    COW_AT(101a605e)
            wr32(sp0 - 8u, 0u);
            wr32(sp0 - 4u, 0u);
            if (rd32(COW_IMG(0x104e1d4cu)) == 0u)
            {
                eax = rd32(COW_IMG(0x104e1d4cu));
            }
            else
            {
                eax = rd32(COW_IMG(0x104e1d4cu));
    COW_AT(101a606f)
                t39 = rd32(eax + 4u);
                wr32(sp0 - 8u, t39);
                t40 = rd32(eax + 8u);
                wr32(sp0 - 4u, t40);
                eax = t40;
                edx = t39;
            }
    COW_AT(101a607d)
            if (rd32(rd32(COW_IMG(0x106627b4u)) + 8u) != 0u)
            {
                ecx = rd32(rd32(COW_IMG(0x106627b4u)) + 8u);
    COW_AT(101a608a)
                wr32(sp0 - 0x14u, sp0 - 8u);
                g->eax = eax;
                g->edx = sp0 - 8u;
                g->esp = sp0 - 0x10u;
                t41 = cow_thiscall(g, COW_IMG(0x10118c10u), ecx, 1, sp0 - 8u);
                t42 = g->edx;
                if ((uint8_t)t41 == 0u)
                {
                    eax = t41;
                    edx = t42;
                }
                else
                {
                    edx = t42;
    COW_AT(101a6098)
                    wr32(sp0 - 0x14u, 0u);
                    wr32(sp0 - 0x18u, 8u);
                    g->eax = rd32(self);
                    g->edx = edx;
                    t43 = rd32(self);
                    g->esp = sp0 - 0x10u;
                    t44 = cow_thiscall(g, rd32(t43 + 0x18u), self, 2, 8u, 0u);
                    t45 = g->edx;
                    eax = t44;
                    edx = t45;
                }
            }
        }
    }
    COW_AT(101a60a2)
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 0x10u);
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101a5f40(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101a5f50u:
    {
        uint32_t eax;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x101a5f55u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101a5f68u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101a5f7bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_14 = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101a5f92u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_14;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101a5f98u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_14;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101a5f9cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_14;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101a5fa5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x14u;
        g->ebx = 0u;
        wr32(sp0 - 0x14u, 2u);
        (void)sp0;
        return 1;
    }
    case 0x101a5fb9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x14u;
        g->ebx = 0u;
        wr32(sp0 - 0x14u, 2u);
        (void)sp0;
        return 1;
    }
    case 0x101a5fbdu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x14u;
        g->ebx = 0u;
        wr32(sp0 - 0x14u, 2u);
        (void)sp0;
        return 1;
    }
    case 0x101a5fbfu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        wr32(sp0 - 0x14u, 2u);
        (void)sp0;
        return 1;
    }
    case 0x101a600au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x14u;
        g->ebx = 0u;
        wr32(sp0 - 0x14u, 2u);
        (void)sp0;
        return 1;
    }
    case 0x101a601du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x14u;
        g->ebx = 0u;
        wr32(sp0 - 0x14u, 2u);
        (void)sp0;
        return 1;
    }
    case 0x101a6021u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x14u;
        g->ebx = 0u;
        wr32(sp0 - 0x14u, 2u);
        (void)sp0;
        return 1;
    }
    case 0x101a6023u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        wr32(sp0 - 0x14u, 2u);
        (void)sp0;
        return 1;
    }
    case 0x101a603fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_14;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x14u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101a604fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101a605eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101a606fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101a607du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101a608au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101a6098u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        wr32(sp0 - 0x14u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x101a60a2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_14;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101a5f40(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101a5f40(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
