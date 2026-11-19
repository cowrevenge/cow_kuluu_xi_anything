/* f_0x101decc0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101decc0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_4;
    uint32_t loc_8;
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
    uint32_t t3;
    uint32_t t4;
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
    cow_frame(g, sp0, 32u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101decedu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_101deced;
    case 0x101ded00u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; goto E_101ded00;
    case 0x101ded09u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x14u); in_ebp = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x14u); goto E_101ded09;
    case 0x101ded16u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101ded16;
    case 0x101ded1cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; goto E_101ded1c;
    case 0x101ded1eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101ded1e;
    case 0x101ded21u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_101ded21;
    case 0x101ded39u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101ded39;
    case 0x101ded83u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101ded83;
    case 0x101ded8au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101ded8a;
    case 0x101ded9fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101ded9f;
    default: break;
    }
#endif

    COW_AT(101decc0)
    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_ebx);
    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, 1u);
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, 0u);
    g->esi = self;
    g->esp = sp0 - 0xcu;
    t1 = cow_fastcall(g, COW_IMG(0x101f7020u), self, in_edx, 3, 0u, 0u, 1u);
    t2 = g->edx;
    wr32(self + 0x3cu, 0u);
    wr8(self + 0x44u, 0x20u);
    wr8(self + 0x45u, 0x18u);
    cow_fastcall(g, COW_IMG(0x101deca0u), self, t2, 0);
    t3 = g->ecx;
    t4 = g->edx;
    if (rd32(self + 0x54u) != 0u)
    {
        ecx = t3;
        edx = t4;
        ebp = in_ebp;
        edi = in_edi;
        loc_4 = self;
        loc_8 = in_ebx;
        loc_c = in_esi;
    }
    else
    {
        eax = rd32(self + 0x54u);
        ecx = t3;
        edx = t4;
    COW_AT(101deced)
        wr32(sp0 - 0x10u, 0x6270u);
        g->eax = eax;
        g->esp = sp0 - 4u;
        t5 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x6270u, in_esi, in_ebx);
        t6 = g->ecx;
        t7 = g->edx;
        if (t5 == 0u)
        {
            ecx = t6;
            edx = t7;
    COW_AT(101ded1c)
            eax = 0u;
            ebp = in_ebp;
            edi = in_edi;
        }
        else
        {
            eax = t5;
            edx = t7;
            ebx = t5;
    COW_AT(101ded00)
            wr32(sp0 - 0x10u, in_ebp);
            wr32(sp0 - 0x14u, in_edi);
            ebp = 0x12cu;
            edi = ebx;
L_101ded09: ;
    COW_AT(101ded09)
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x14u;
            t8 = cow_thiscall(g, COW_IMG(0x101f4af0u), edi, 0);
            t9 = g->ecx;
            t10 = g->edx;
            if (ebp != 1u)
            {
                eax = t8;
                edx = t10;
                ebp = ebp - 1u;
                edi = edi + 0x54u;
                goto L_101ded09;
            }
            ecx = t9;
            edx = t10;
    COW_AT(101ded16)
            eax = ebx;
            ebp = rd32(sp0 - 0x10u);
            edi = rd32(sp0 - 0x14u);
        }
    COW_AT(101ded1e)
        wr32(self + 0x54u, eax);
        loc_4 = rd32(sp0 - 4u);
        loc_8 = rd32(sp0 - 8u);
        loc_c = rd32(sp0 - 0xcu);
    }
    COW_AT(101ded21)
    wr32(self + 0x50u, 0u);
    wr32(sp0 - 0x10u, sp0 - 4u);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t11 = cow_call_regs(g, COW_IMG(0x100e0c70u), sp0 - 4u, g->ecx, g->edx, 1, 1, sp0 - 4u);
    t12 = g->ecx;
    t13 = g->edx;
    if (t11 != 0u)
    {
        ecx = t12;
        edx = t13;
        goto L_101ded83;
    }
L_101ded39: ;
    COW_AT(101ded39)
    wr32(sp0 - 0x10u, 0x80808080u);
    t14 = rd32(sp0 - 4u);
    t15 = rd32(self + 0x50u);
    t16 = rd32(self + 0x54u);
    wr32(t15 * 0x54u + t16 + 0x48u, t14);
    t17 = rd32(sp0 - 4u) + 4u;
    wr32(sp0 - 0x14u, t17);
    wr32(sp0 - 0x18u, 1u);
    wr32(sp0 - 0x1cu, 0u);
    g->esp = sp0 - 0xcu;
    cow_fastcall(g, COW_IMG(0x101f4b20u), t15 * 0x54u + t16, t17, 4, 0u, 1u, t17, 0x80808080u);
    t18 = g->ecx;
    t19 = g->edx;
    wr32(sp0 - 0x10u, sp0 - 4u);
    t20 = rd32(self + 0x50u) + 1u;
    wr32(self + 0x50u, t20);
    g->eax = sp0 - 4u;
    g->ecx = t18;
    g->edx = t19;
    t21 = cow_cdecl(g, COW_IMG(0x100e0cf0u), 1, sp0 - 4u);
    t22 = g->ecx;
    t23 = g->edx;
    if (t21 == 0u) goto L_101ded39;
    ecx = t22;
    edx = t23;
L_101ded83: ;
    COW_AT(101ded83)
    if (rd32(self + 0x50u) == 0u)
    {
        eax = rd32(self + 0x50u);
        goto L_101ded9f;
    }
    eax = rd32(self + 0x50u);
    COW_AT(101ded8a)
    wr32(sp0 - 0x10u, 1u);
    t24 = (ecx & 0xffff0000u) | (uint16_t)eax;
    wr32(sp0 - 0x14u, t24);
    t25 = rd32(self + 0x54u);
    wr32(sp0 - 0x18u, t25);
    g->esi = self;
    g->edi = edi;
    g->esp = sp0 - 0xcu;
    cow_fastcall(g, COW_IMG(0x101f7020u), self, t25, 3, t25, t24, 1u);
    g->ebx = rd32(sp0 - 8u);
    g->esi = rd32(sp0 - 0xcu);
    g->edi = edi;
    g->ebp = ebp;
    return;
L_101ded9f: ;
    COW_AT(101ded9f)
    wr32(sp0 - 0x10u, 0x67u);
    wr32(sp0 - 0x14u, 7u);
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t26 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 7u, 0x67u);
    wr32(self + 0x3cu, t26);
    wr8(self + 0x44u, 0x20u);
    wr8(self + 0x45u, 0x18u);
    g->ebx = rd32(sp0 - 8u);
    g->esi = rd32(sp0 - 0xcu);
    g->edi = edi;
    g->ebp = ebp;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101decc0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101decedu:
    {
        uint32_t eax;
        uint32_t ebx;
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
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x101ded00u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101ded09u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x14u);
        in_ebp = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x101ded16u:
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
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x101ded1cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101ded1eu:
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
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101ded21u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101ded39u:
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
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 0x10u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x101ded83u:
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
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 0x10u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x101ded8au:
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
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 0x10u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x101ded9fu:
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
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 0x10u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101decc0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_101decc0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
