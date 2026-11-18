/* f_0x102007c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_102007c0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_10;
    uint32_t loc_c;
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
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 40u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102007d4u: eax = g->eax; self = g->ecx; in_edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; in_edi = g->edi; in_esi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0x10u); goto E_102007d4;
    case 0x102007f1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; goto E_102007f1;
    case 0x1020080fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1020080f;
    case 0x10200819u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_ebp = rd32(sp0 - 0x18u); g->ebp = rd32(sp0 - 0x18u); goto E_10200819;
    case 0x1020081cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_ebp = rd32(sp0 - 0x18u); g->ebp = rd32(sp0 - 0x18u); goto E_1020081c;
    case 0x10200829u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_ebp = rd32(sp0 - 0x18u); g->ebp = rd32(sp0 - 0x18u); goto E_10200829;
    case 0x1020082cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1020082c;
    case 0x1020082eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1020082e;
    case 0x10200831u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10200831;
    case 0x1020083au: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1020083a;
    case 0x1020084fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1020084f;
    case 0x102008a0u: edx = g->edx; in_ebp = g->ebp; edi = g->edi; self = rd32(sp0 - 0x14u); goto E_102008a0;
    case 0x102008b1u: in_ebp = g->ebp; edi = g->edi; self = rd32(sp0 - 0x14u); goto E_102008b1;
    case 0x102008b9u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; edi = g->edi; goto E_102008b9;
    case 0x102008bdu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; edi = g->edi; goto E_102008bd;
    case 0x102008c6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; edi = g->edi; goto E_102008c6;
    case 0x102008d0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; edi = g->edi; goto E_102008d0;
    case 0x102008e4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; edi = g->edi; loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_102008e4;
    default: break;
    }
#endif

    COW_AT(102007c0)
    wr32(sp0 - 0xcu, in_ebx);
    wr32(sp0 - 0x10u, in_esi);
    if (rd8(COW_IMG(0x10663ac8u)) != 0u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(COW_IMG(0x10663ac8u));
        edi = in_edi;
        loc_c = in_ebx;
        loc_10 = in_esi;
        goto L_102008e4;
    }
    eax = (in_eax & 0xffffff00u) | rd8(COW_IMG(0x10663ac8u));
    COW_AT(102007d4)
    wr32(sp0 - 0x14u, in_edi);
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t1 = cow_fastcall(g, COW_IMG(0x10200780u), self, in_edx, 0);
    t2 = g->ecx;
    t3 = g->edx;
    g->ecx = t2;
    g->edx = t3;
    t4 = cow_stdcall(g, COW_IMG(0x100f6f30u), 0);
    t5 = g->ecx;
    t6 = g->edx;
    t7 = (uint16_t)t4 + 8u;
    t8 = rd32(self + 0x68u);
    wr32(self + 0x50u, t7);
    if (t8 != 0u)
    {
        edx = t6;
    }
    else
    {
        ecx = t5;
        edx = t6;
        edi = t7;
    COW_AT(102007f1)
        wr32(sp0 - 0x18u, edi * 0x54u);
        g->eax = edi * 0x54u;
        g->esp = sp0 - 0xcu;
        t9 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, edi * 0x54u, rd32(sp0 - 0x14u), rd32(sp0 - 0x10u));
        t10 = g->edx;
        if (t9 == 0u)
        {
            edx = t10;
    COW_AT(1020082c)
            ebx = 0u;
        }
        else
        {
            edx = t10;
            ebx = t9;
    COW_AT(1020080f)
            wr32(sp0 - 0x18u, in_ebp);
            if ((int32_t)(edi - 1u) >= 0)
            {
                eax = edi - 1u;
                ebp = ebx;
    COW_AT(10200819)
                edi = eax + 1u;
L_1020081c: ;
    COW_AT(1020081c)
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x18u;
                t11 = cow_thiscall(g, COW_IMG(0x101f4af0u), ebp, 0);
                t12 = g->edx;
                if (edi != 1u)
                {
                    eax = t11;
                    edx = t12;
                    ebp = ebp + 0x54u;
                    edi = edi - 1u;
                    goto L_1020081c;
                }
                edx = t12;
            }
    COW_AT(10200829)
        }
    COW_AT(1020082e)
        wr32(self + 0x68u, ebx);
    }
    COW_AT(10200831)
    if (rd32(self + 0x6cu) == 0u)
    {
    COW_AT(1020083a)
        t13 = rd32(self + 0x50u) * 0x50u;
        wr32(sp0 - 0x18u, t13);
        g->eax = rd32(self + 0x50u);
        t14 = rd32(self + 0x50u);
        g->esp = sp0 - 0xcu;
        t15 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, t13, edx, 1, 3, t13, rd32(sp0 - 0x14u), rd32(sp0 - 0x10u));
        wr32(self + 0x6cu, t15);
    }
    COW_AT(1020084f)
    wr32(sp0 - 0x18u, sp0 - 4u);
    wr32(sp0 - 0x1cu, sp0 - 8u);
    wr32(self + 0x54u, 0u);
    g->eax = sp0 - 8u;
    g->edx = sp0 - 4u;
    g->esp = sp0 - 0x14u;
    t16 = cow_thiscall(g, COW_IMG(0x10200650u), self, 2, sp0 - 8u, sp0 - 4u);
    t17 = g->edx;
    wr32(sp0 - 0x18u, 0x80808080u);
    t18 = rd32(self + 0x74u);
    wr32(sp0 - 0x1cu, t18);
    wr32(sp0 - 0x20u, 0x20u);
    wr32(sp0 - 0x24u, 0u);
    t19 = rd32(sp0 - 8u);
    cow_fastcall(g, COW_IMG(0x101f4b20u), t19, t17, 4, 0u, 0x20u, t18, 0x80808080u);
    t20 = g->edx;
    t21 = rd32(sp0 - 4u);
    wr32(t21 + 0x48u, 0u);
    wr32(t19 + 0x48u, t21);
    g->esi = self;
    cow_thiscall(g, COW_IMG(0x102006b0u), self, 0);
    t22 = rd32(sp0 - 0x14u);
    wr32(sp0 - 0x14u, self);
    wr32(sp0 - 0x18u, COW_IMG(0x102008f0u));
    if ((arg1 | arg2) == 0u)
    {
        edi = t22;
    COW_AT(102008b1)
        g->eax = arg1;
        g->ecx = arg2;
        g->edx = arg1 | arg2;
        g->esp = sp0 - 0x10u;
        t26 = cow_cdecl(g, COW_IMG(0x100f7470u), 2, COW_IMG(0x102008f0u), self);
        t27 = g->ecx;
        t28 = g->edx;
        eax = t26;
        ecx = t27;
        edx = t28;
    }
    else
    {
        edi = t22;
    COW_AT(102008a0)
        wr32(sp0 - 0x1cu, arg3);
        wr32(sp0 - 0x20u, arg2);
        wr32(sp0 - 0x24u, arg1);
        g->eax = arg1;
        g->ecx = arg2;
        g->edx = arg3;
        g->esp = sp0 - 0x10u;
        t23 = cow_cdecl(g, COW_IMG(0x100f74b0u), 5, arg1, arg2, arg3, COW_IMG(0x102008f0u), self);
        t24 = g->ecx;
        t25 = g->edx;
        eax = t23;
        ecx = t24;
        edx = t25;
    }
    COW_AT(102008b9)
    if (eax != 0u)
    {
        loc_c = rd32(sp0 - 0xcu);
        loc_10 = rd32(sp0 - 0x10u);
        goto L_102008e4;
    }
    COW_AT(102008bd)
    if (rd32(COW_IMG(0x105781f8u)) == 0u)
    {
        eax = rd32(COW_IMG(0x105781f8u));
    }
    else
    {
        eax = rd32(COW_IMG(0x105781f8u));
    COW_AT(102008c6)
        wr32(sp0 - 0x14u, 0x10u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t29 = cow_thiscall(g, COW_IMG(0x10221270u), eax + 0x20u, 1, 0x10u);
        t30 = g->ecx;
        t31 = g->edx;
        eax = t29;
        ecx = t30;
        edx = t31;
    }
    COW_AT(102008d0)
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t32 = cow_stdcall(g, COW_IMG(0x100f6ef0u), 0);
    t33 = rd32(sp0 - 0x10u);
    wr8(COW_IMG(0x10663ac8u), 1u);
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = t33;
    g->edi = edi;
    g->ebp = in_ebp;
    return (t32 & 0xffffff00u) | 1u;
L_102008e4: ;
    COW_AT(102008e4)
    g->ebx = loc_c;
    g->esi = loc_10;
    g->edi = edi;
    g->ebp = in_ebp;
    return eax & 0xffffff00u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102007c0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102007d4u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x10u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x102007f1u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1020080fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x10200819u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_ebp = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x1020081cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_ebp = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x10200829u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_ebp = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x1020082cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1020082eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x10200831u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1020083au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1020084fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102008a0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        edx = g->edx;
        in_ebp = g->ebp;
        edi = g->edi;
        self = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x18u;
        g->eax = arg1;
        g->ecx = arg2;
        g->ebx = 0u;
        wr32(sp0 - 0x18u, COW_IMG(0x102008f0u));
        (void)sp0;
        return 1;
    }
    case 0x102008b1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t self;
        in_ebp = g->ebp;
        edi = g->edi;
        self = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x18u;
        g->eax = arg1;
        g->ecx = arg2;
        g->edx = arg1 | arg2;
        g->ebx = 0u;
        wr32(sp0 - 0x18u, COW_IMG(0x102008f0u));
        (void)sp0;
        return 1;
    }
    case 0x102008b9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102008bdu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102008c6u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x102008d0u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x102008e4u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t loc_10;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        edi = g->edi;
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102007c0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102007c0(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
