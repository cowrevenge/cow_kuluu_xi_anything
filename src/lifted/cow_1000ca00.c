/* f_0x1000ca00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1000ca00(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
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
    uint32_t t3;
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
    cow_frame(g, sp0, 44u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1000ca17u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0x14u); goto E_1000ca17;
    case 0x1000caa3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_1000caa3;
    case 0x1000caa9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_1000caa9;
    case 0x1000cab3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_1000cab3;
    case 0x1000cab8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_1000cab8;
    case 0x1000cacau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_1000caca;
    case 0x1000cad6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_1000cad6;
    case 0x1000caedu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1000caed;
    case 0x1000caf1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1000caf1;
    case 0x1000caf5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1000caf5;
    case 0x1000caf7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1000caf7;
    case 0x1000cafdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1000cafd;
    case 0x1000cb07u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1000cb07;
    case 0x1000cb0du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); goto E_1000cb0d;
    default: break;
    }
#endif

    COW_AT(1000ca00)
    wr32(sp0 - 0x10u, in_ebx);
    wr32(sp0 - 0x14u, in_esi);
    if (rd8(self + 0x828u) == 0u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(self + 0x828u);
        edx = in_edx;
        ebx = in_ebx & 0xffffff00u;
        ebp = in_ebp;
        edi = in_edi;
        loc_10 = in_ebx;
        loc_14 = in_esi;
    }
    else
    {
        eax = (in_eax & 0xffffff00u) | rd8(self + 0x828u);
    COW_AT(1000ca17)
        g->eax = eax;
        g->edx = in_edx;
        g->esp = sp0 - 0x14u;
        t1 = cow_thiscall(g, COW_IMG(0x1000d660u), rd32(COW_IMG(0x104566e8u)), 0);
        t2 = g->edx;
        eax = t1;
        edx = t2;
    COW_AT(1000ca22)
        if ((uint8_t)eax == 0u)
        {
            ebx = in_ebx & 0xffffff00u;
            ebp = in_ebp;
            edi = in_edi;
            loc_10 = rd32(sp0 - 0x10u);
            loc_14 = rd32(sp0 - 0x14u);
        }
        else
        {
    COW_AT(1000ca2a)
            wr32(sp0 - 0x18u, in_ebp);
            wr32(sp0 - 0x1cu, in_edi);
            wr32(sp0 - 0x20u, sp0 - 8u);
            t3 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0x24u, t3);
            g->esp = sp0 - 0x1cu;
            cow_thiscall(g, rd32(rd32(t3) + 0x80u), rd32(t3), 2, t3, sp0 - 8u);
    COW_AT(1000ca42)
            wr32(sp0 - 0x20u, sp0 - 0xcu);
            wr32(sp0 - 0x24u, 0u);
            t4 = rd32(self + 0x194u);
            wr32(sp0 - 0x28u, t4);
            g->esp = sp0 - 0x1cu;
            cow_thiscall(g, rd32(rd32(rd32(self + 0x194u)) + 0x3cu), rd32(rd32(self + 0x194u)), 3, t4, 0u, sp0 - 0xcu);
    COW_AT(1000ca55)
            wr32(sp0 - 0x20u, sp0 - 4u);
            wr32(sp0 - 0x24u, 0u);
            t5 = rd32(self + 0x198u);
            wr32(sp0 - 0x28u, t5);
            g->esp = sp0 - 0x1cu;
            cow_thiscall(g, rd32(rd32(rd32(self + 0x198u)) + 0x3cu), rd32(rd32(self + 0x198u)), 3, t5, 0u, sp0 - 4u);
    COW_AT(1000ca68)
            if (rd32(sp0 - 8u) == rd32(sp0 - 0xcu))
            {
                ecx = rd32(sp0 - 0xcu);
                goto L_1000ca82;
            }
            eax = rd32(sp0 - 8u);
            ecx = rd32(sp0 - 0xcu);
    COW_AT(1000ca7c)
            if (eax != rd32(sp0 - 4u))
            {
                ebx = in_ebx & 0xffffff00u;
                goto L_1000caa3;
            }
L_1000ca82: ;
    COW_AT(1000ca82)
            t6 = rd32(self + 0x198u);
            wr32(arg1, t6);
            t7 = rd32(self + 0x1a8u);
            wr32(arg2, t7);
            if (rd32(arg1) == 0u)
            {
                eax = t7;
                goto L_1000caa1;
            }
            eax = t7;
    COW_AT(1000ca99)
            if (eax == 0u) goto L_1000caa1;
    COW_AT(1000ca9d)
            ebx = (in_ebx & 0xffffff00u) | 1u;
L_1000caa3: ;
    COW_AT(1000caa3)
            wr32(sp0 - 0x20u, ecx);
            g->edx = rd32(ecx);
            t8 = rd32(ecx);
            g->esp = sp0 - 0x1cu;
            cow_thiscall(g, rd32(t8 + 8u), ecx, 1, ecx);
            t9 = g->edx;
            edx = t9;
    COW_AT(1000caa9)
            t10 = rd32(sp0 - 4u);
            wr32(sp0 - 0x20u, t10);
            g->edx = edx;
            t11 = rd32(t10);
            g->esp = sp0 - 0x1cu;
            cow_thiscall(g, rd32(t11 + 8u), t11, 1, t10);
            t12 = g->ecx;
            t13 = g->edx;
            ecx = t12;
            edx = t13;
    COW_AT(1000cab3)
            if ((uint8_t)ebx != 1u)
            {
    COW_AT(1000cab8)
                wr32(sp0 - 0x20u, sp0 - 0xcu);
                wr32(sp0 - 0x24u, 0u);
                wr32(sp0 - 0x28u, rd32(COW_IMG(0x10456d50u)));
                g->edx = rd32(rd32(COW_IMG(0x10456d50u)));
                t14 = rd32(rd32(COW_IMG(0x10456d50u)));
                g->esp = sp0 - 0x1cu;
                cow_thiscall(g, rd32(t14 + 0x3cu), sp0 - 0xcu, 3, rd32(COW_IMG(0x10456d50u)), 0u, sp0 - 0xcu);
                t15 = g->edx;
                edx = t15;
    COW_AT(1000caca)
                if (rd32(sp0 - 8u) != rd32(sp0 - 0xcu))
                {
                    eax = rd32(sp0 - 0xcu);
                }
                else
                {
                    eax = rd32(sp0 - 0xcu);
    COW_AT(1000cad6)
                    t16 = rd32(COW_IMG(0x10456d54u));
                    wr32(arg1, t16);
                    t17 = rd32(self + 0x1a8u);
                    wr32(arg2, t17);
                    if (rd32(arg1) == 0u)
                    {
                        edx = t16;
                        goto L_1000caf5;
                    }
                    edx = t16;
                    esi = t17;
    COW_AT(1000caed)
                    if (esi == 0u) goto L_1000caf5;
    COW_AT(1000caf1)
                    ebx = (ebx & 0xffffff00u) | 1u;
                }
L_1000caf7: ;
    COW_AT(1000caf7)
                wr32(sp0 - 0x20u, eax);
                g->edx = edx;
                t18 = rd32(eax);
                g->esp = sp0 - 0x1cu;
                cow_thiscall(g, rd32(t18 + 8u), t18, 1, eax);
                t19 = g->ecx;
                t20 = g->edx;
                ecx = t19;
                edx = t20;
            }
    COW_AT(1000cafd)
            if (rd32(sp0 - 8u) == 0u)
            {
                eax = rd32(sp0 - 8u);
                ebp = rd32(sp0 - 0x18u);
                edi = rd32(sp0 - 0x1cu);
                loc_10 = rd32(sp0 - 0x10u);
                loc_14 = rd32(sp0 - 0x14u);
            }
            else
            {
                eax = rd32(sp0 - 8u);
                ebp = rd32(sp0 - 0x18u);
                edi = rd32(sp0 - 0x1cu);
    COW_AT(1000cb07)
                wr32(sp0 - 0x18u, eax);
                g->eax = eax;
                g->edx = rd32(eax);
                t21 = rd32(eax);
                g->esp = sp0 - 0x14u;
                t22 = cow_thiscall(g, rd32(t21 + 8u), ecx, 1, eax);
                t23 = g->edx;
                eax = t22;
                edx = t23;
                loc_10 = rd32(sp0 - 0x10u);
                loc_14 = rd32(sp0 - 0x14u);
            }
        }
    }
    COW_AT(1000cb0d)
    g->ebx = loc_10;
    g->esi = loc_14;
    g->edi = edi;
    g->ebp = ebp;
    g->edx = edx;
    return (eax & 0xffffff00u) | (uint8_t)ebx;
L_1000caa1: ;
    COW_AT(1000caa1)
    ebx = in_ebx & 0xffffff00u;
    goto L_1000caa3;
L_1000caf5: ;
    COW_AT(1000caf5)
    ebx = ebx & 0xffffff00u;
    goto L_1000caf7;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1000ca00(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1000ca17u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x14u;
        g->ebx = in_ebx & 0xffffff00u;
        (void)sp0;
        return 1;
    }
    case 0x1000caa3u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x1cu;
        g->ebp = arg2;
        g->edi = arg1;
        wr32(sp0 - 0x20u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x1000caa9u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x1cu;
        g->ebp = arg2;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1000cab3u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x1cu;
        g->ebp = arg2;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1000cab8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x1cu;
        g->ebp = arg2;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1000cacau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x1cu;
        g->ebp = arg2;
        g->edi = arg1;
        wr32(sp0 - 0x20u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x1000cad6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x1cu;
        g->ebp = arg2;
        g->edi = arg1;
        wr32(sp0 - 0x20u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x1000caedu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x20u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x1000caf1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x20u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x1000caf5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x20u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x1000caf7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x20u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x1000cafdu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1000cb07u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1000cb0du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
/* blocks no state can start at, and why (the gittable lists their sites):
     1000ca22: holds in_ebx, which no location here says
     1000ca2a: holds in_ebx, which no location here says
     1000ca42: holds in_ebx, which no location here says
     1000ca55: holds in_ebx, which no location here says
     1000ca68: holds in_ebx, which no location here says
     1000ca7c: holds in_ebx, which no location here says
     1000ca82: holds in_ebx, which no location here says
     1000ca99: holds in_ebx, which no location here says
     1000ca9d: holds in_ebx, which no location here says
     1000caa1: holds in_ebx, which no location here says
*/
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1000ca00(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1000ca00(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
