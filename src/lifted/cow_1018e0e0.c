/* f_0x1018e0e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1018e0e0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_104;
    uint32_t loc_108;
    uint32_t loc_10c;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t2;
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
    cow_frame(g, sp0, 284u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1018e0f8u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 0x104u); g->edi = rd32(sp0 - 0x104u); goto E_1018e0f8;
    case 0x1018e0fcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; loc_10c = rd32(sp0 - 0x10cu); loc_108 = rd32(sp0 - 0x108u); loc_104 = rd32(sp0 - 0x104u); goto E_1018e0fc;
    case 0x1018e0feu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; loc_10c = rd32(sp0 - 0x10cu); loc_108 = rd32(sp0 - 0x108u); loc_104 = rd32(sp0 - 0x104u); goto E_1018e0fe;
    case 0x1018e103u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; loc_10c = rd32(sp0 - 0x10cu); loc_108 = rd32(sp0 - 0x108u); loc_104 = rd32(sp0 - 0x104u); goto E_1018e103;
    case 0x1018e136u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; goto E_1018e136;
    case 0x1018e13eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; goto E_1018e13e;
    case 0x1018e141u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; goto E_1018e141;
    case 0x1018e14bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; loc_10c = rd32(sp0 - 0x10cu); loc_108 = rd32(sp0 - 0x108u); loc_104 = rd32(sp0 - 0x104u); goto E_1018e14b;
    case 0x1018e166u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_104 = rd32(sp0 - 0x104u); goto E_1018e166;
    default: break;
    }
#endif

    COW_AT(1018e0e0)
    wr32(sp0 - 0x104u, in_edi);
    g->esp = sp0 - 0x104u;
    cow_fastcall(g, COW_IMG(0x1018e660u), self, in_edx, 0);
    t1 = g->ecx;
    t2 = g->edx;
    if (rd32(self + 0xd0u) == 0u)
    {
        edx = t2;
        ebx = in_ebx;
        esi = in_esi;
        loc_104 = in_edi;
    }
    else
    {
        ecx = t1;
        edx = t2;
    COW_AT(1018e0f8)
        wr32(sp0 - 0x108u, in_ebx);
        wr32(sp0 - 0x10cu, in_esi);
        ebx = 0u;
        loc_104 = in_edi;
        loc_108 = in_ebx;
        loc_10c = in_esi;
L_1018e0fc: ;
    COW_AT(1018e0fc)
        esi = 0u;
L_1018e0fe: ;
    COW_AT(1018e0fe)
        if ((int32_t)esi >= 20) goto L_1018e14b;
    COW_AT(1018e103)
        t3 = cow_divs(g, esi, 0x14u);
        t4 = cow_mods(g, esi, 0x14u);
        wr32(sp0 - 0x110u, t4);
        t5 = rd32(self + 0xdcu);
        wr32(sp0 - 0x114u, t5);
        wr32(sp0 - 0x118u, sp0 - 0x100u);
        g->ebx = ebx;
        g->eax = sp0 - 0x100u;
        g->edx = t5;
        g->esp = sp0 - 0x10cu;
        t6 = cow_cdecl(g, COW_IMG(0x1018e170u), 3, sp0 - 0x100u, t5, t4);
        t7 = g->edx;
        wr32(sp0 - 0x110u, sp0 - 0x100u);
        g->edx = t7;
        t8 = rd32(COW_IMG(0x10662dccu));
        t9 = cow_thiscall(g, COW_IMG(0x101c4a90u), t8, 1, sp0 - 0x100u);
        t10 = g->ecx;
        t11 = g->edx;
        if ((uint8_t)t9 == 0u)
        {
            ecx = t10;
            edx = t11;
            goto L_1018e13e;
        }
        eax = t9;
        ecx = t10;
    COW_AT(1018e136)
        if ((int32_t)ebx < 20)
        {
            edx = ebx;
            ebx = ebx + 1u;
            goto L_1018e141;
        }
        edx = ebx;
        ebx = ebx + 1u;
L_1018e13e: ;
    COW_AT(1018e13e)
        esi = esi + 1u;
        loc_104 = rd32(sp0 - 0x104u);
        loc_108 = rd32(sp0 - 0x108u);
        loc_10c = rd32(sp0 - 0x10cu);
        goto L_1018e0fe;
    }
L_1018e166: ;
    COW_AT(1018e166)
    g->ebx = ebx;
    g->esi = esi;
    g->edi = loc_104;
    g->edx = edx;
    return;
L_1018e141: ;
    COW_AT(1018e141)
    wr32(sp0 - 0x110u, 0x64u);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10cu;
    cow_stdcall(g, rd32(COW_IMG(0x103290f8u)), 1, 0x64u);   /* kernel32.dll!Sleep */
    t12 = g->ecx;
    t13 = g->edx;
    ecx = t12;
    edx = t13;
    loc_104 = rd32(sp0 - 0x104u);
    loc_108 = rd32(sp0 - 0x108u);
    loc_10c = rd32(sp0 - 0x10cu);
    goto L_1018e0fc;
L_1018e14b: ;
    COW_AT(1018e14b)
    t14 = rd32(self + 0xd0u);
    wr32(sp0 - 0x110u, t14);
    g->esp = sp0 - 0x10cu;
    cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, t14);
    t15 = g->edx;
    wr32(self + 0xd0u, 0u);
    edx = t15;
    ebx = rd32(sp0 - 0x108u);
    esi = rd32(sp0 - 0x10cu);
    loc_104 = rd32(sp0 - 0x104u);
    goto L_1018e166;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1018e0e0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1018e0f8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0x104u;
        (void)sp0;
        return 1;
    }
    case 0x1018e0fcu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_104;
        uint32_t loc_108;
        uint32_t loc_10c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        loc_10c = rd32(sp0 - 0x10cu);
        loc_108 = rd32(sp0 - 0x108u);
        loc_104 = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0x10cu;
        (void)sp0;
        return 1;
    }
    case 0x1018e0feu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_104;
        uint32_t loc_108;
        uint32_t loc_10c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        loc_10c = rd32(sp0 - 0x10cu);
        loc_108 = rd32(sp0 - 0x108u);
        loc_104 = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0x10cu;
        (void)sp0;
        return 1;
    }
    case 0x1018e103u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_104;
        uint32_t loc_108;
        uint32_t loc_10c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        loc_10c = rd32(sp0 - 0x10cu);
        loc_108 = rd32(sp0 - 0x108u);
        loc_104 = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0x10cu;
        (void)sp0;
        return 1;
    }
    case 0x1018e136u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x10cu;
        wr32(sp0 - 0x118u, sp0 - 0x100u);
        wr32(sp0 - 0x110u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x1018e13eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x10cu;
        wr32(sp0 - 0x118u, sp0 - 0x100u);
        wr32(sp0 - 0x110u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x1018e141u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x10cu;
        wr32(sp0 - 0x118u, sp0 - 0x100u);
        wr32(sp0 - 0x110u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x1018e14bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_104;
        uint32_t loc_108;
        uint32_t loc_10c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        loc_10c = rd32(sp0 - 0x10cu);
        loc_108 = rd32(sp0 - 0x108u);
        loc_104 = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0x10cu;
        (void)sp0;
        return 1;
    }
    case 0x1018e166u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_104;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_104 = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0x104u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1018e0e0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_1018e0e0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
