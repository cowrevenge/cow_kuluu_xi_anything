/* f_0x10195160 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10195160(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t2;
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
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1019516bu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1019516b;
    case 0x1019517eu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; in_ebp = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); self = g->ebp - 0xfffffffcu; g->ebp = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1019517e;
    case 0x10195182u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_ebx = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); self = g->ebp - 0xfffffffcu; g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 4u); goto E_10195182;
    case 0x10195192u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_ebx = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); self = g->ebp - 0xfffffffcu; g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 4u); goto E_10195192;
    case 0x1019519fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_ebx = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); self = g->ebp - 0xfffffffcu; g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 4u); goto E_1019519f;
    case 0x101951a2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_ebx = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); self = g->ebp - 0xfffffffcu; g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 4u); goto E_101951a2;
    case 0x101951a3u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; in_ebp = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); self = g->ebp - 0xfffffffcu; g->ebp = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101951a3;
    case 0x101951aau: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; in_ebp = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); self = g->ebp - 0xfffffffcu; g->ebp = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101951aa;
    case 0x101951b3u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; in_ebp = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); self = g->ebp - 0xfffffffcu; g->ebp = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101951b3;
    case 0x101951d4u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101951d4;
    case 0x101951dbu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101951db;
    case 0x101951e4u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101951e4;
    default: break;
    }
#endif

    COW_AT(10195160)
    if ((arg1 & 2u) == 0u) goto L_101951ba;
    COW_AT(1019516b)
    if ((int32_t)(rd32(self - 4u) - 1u) < 0)
    {
        eax = rd32(self - 4u) - 1u;
        ecx = rd32(self - 4u) * 5u;
        edx = rd32(self - 4u) * 0xbu;
    }
    else
    {
        eax = rd32(self - 4u) - 1u;
        edx = rd32(self - 4u) * 0xbu;
        esi = self + rd32(self - 4u) * 0x2cu;
    COW_AT(1019517e)
        ebx = eax + 1u;
L_10195182: ;
    COW_AT(10195182)
        t1 = rd32(esi - 8u);
        wr32(esi - 0x2cu, COW_IMG(0x10336a04u));
        if (t1 == 0u)
        {
            ecx = t1;
            esi = esi - 0x2cu;
        }
        else
        {
            ecx = t1;
            esi = esi - 0x2cu;
    COW_AT(10195192)
            g->eax = rd32(ecx);
            g->edx = edx;
            t2 = rd32(ecx);
            g->esp = sp0 - 0xcu;
            t3 = cow_thiscall(g, rd32(t2), ecx, 1, 1u);
            t4 = g->ecx;
            t5 = g->edx;
            wr32(esi + 0x24u, 0u);
            eax = t3;
            ecx = t4;
            edx = t5;
        }
    COW_AT(1019519f)
        if (ebx != 1u)
        {
            ebx = ebx - 1u;
            goto L_10195182;
        }
    COW_AT(101951a2)
    }
    COW_AT(101951a3)
    if (arg1 & 1u)
    {
    COW_AT(101951aa)
        g->esp = sp0 - 8u;
        cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, self - 4u);
        t6 = g->edx;
        edx = t6;
    }
    COW_AT(101951b3)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->ebp = in_ebp;
    g->edx = edx;
    return self - 4u;
L_101951ba: ;
    COW_AT(101951ba)
    t7 = rd32(self + 0x24u);
    wr32(self, COW_IMG(0x10336a04u));
    if (t7 == 0u)
    {
        eax = (in_eax & 0xffffff00u) | (uint8_t)arg1;
        ecx = t7;
        edx = in_edx;
    }
    else
    {
        ecx = t7;
    COW_AT(101951c7)
        g->eax = (in_eax & 0xffffff00u) | (uint8_t)arg1;
        g->edx = rd32(ecx);
        t8 = rd32(ecx);
        g->esp = sp0 - 4u;
        t9 = cow_thiscall(g, rd32(t8), ecx, 1, 1u);
        t10 = g->ecx;
        t11 = g->edx;
        wr32(self + 0x24u, 0u);
        eax = t9;
        ecx = t10;
        edx = t11;
    }
    COW_AT(101951d4)
    if (arg1 & 1u)
    {
    COW_AT(101951db)
        g->esp = sp0 - 4u;
        cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, self);
        t12 = g->edx;
        edx = t12;
    }
    COW_AT(101951e4)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->ebp = in_ebp;
    g->edx = edx;
    return self;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10195160(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1019516bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1019517eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        in_ebp = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        self = g->ebp - 0xfffffffcu;
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10195182u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_ebx = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        self = g->ebp - 0xfffffffcu;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10195192u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_ebx = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        self = g->ebp - 0xfffffffcu;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x1019519fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_ebx = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        self = g->ebp - 0xfffffffcu;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101951a2u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_ebx = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        self = g->ebp - 0xfffffffcu;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101951a3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        in_ebp = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        self = g->ebp - 0xfffffffcu;
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x101951aau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        in_ebp = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        self = g->ebp - 0xfffffffcu;
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x101951b3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        in_ebp = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        self = g->ebp - 0xfffffffcu;
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x101951d4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101951dbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101951e4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
/* blocks no state can start at, and why (the gittable lists their sites):
     101951ba: holds in_eax, which no location here says
     101951c7: holds in_eax, which no location here says
*/
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10195160(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10195160(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
