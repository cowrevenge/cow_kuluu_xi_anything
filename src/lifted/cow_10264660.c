/* f_0x10264660 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10264660(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t loc_28;
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
    cow_frame(g, sp0, 60u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10264691u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; in_edi = rd32(sp0 - 0x28u); in_esi = rd32(sp0 - 0x24u); in_ebp = rd32(sp0 - 0x20u); in_ebx = rd32(sp0 - 0x1cu); g->ebp = rd32(sp0 - 0x20u); g->ebx = rd32(sp0 - 0x1cu); g->edi = rd32(sp0 - 0x28u); g->esi = rd32(sp0 - 0x24u); goto E_10264691;
    case 0x102646aau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); goto E_102646aa;
    case 0x102646adu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_102646ad;
    case 0x102646d2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_102646d2;
    case 0x102646dbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_102646db;
    case 0x102646dfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_102646df;
    case 0x102646e8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_102646e8;
    case 0x102646ecu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); goto E_102646ec;
    case 0x102646fcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_102646fc;
    case 0x10264711u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_10264711;
    case 0x10264716u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_10264716;
    case 0x1026471bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1026471b;
    case 0x10264722u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_10264722;
    case 0x1026473au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1026473a;
    case 0x1026473fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1026473f;
    case 0x10264748u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_10264748;
    case 0x1026475du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1026475d;
    case 0x10264764u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_10264764;
    default: break;
    }
#endif

    COW_AT(10264660)
    wr32(sp0 - 4u, 0xffffffffu);
    wr32(sp0 - 8u, COW_IMG(0x10327c98u));
    wr32(sp0 - 0xcu, rd32(g->fs_base));
    t1 = rd32(g->fs_base);
    wr32(g->fs_base, sp0 - 0xcu);
    wr32(sp0 - 0x1cu, in_ebx);
    wr32(sp0 - 0x20u, in_ebp);
    wr32(sp0 - 0x24u, in_esi);
    wr32(sp0 - 0x28u, in_edi);
    wr32(sp0 - 0x2cu, self + 0xa4u);
    wr32(sp0 - 0x18u, self + 0xa4u);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x28u;
    cow_stdcall(g, rd32(COW_IMG(0x1032918cu)), 1, self + 0xa4u);   /* kernel32.dll!EnterCriticalSection */
    t2 = g->ecx;
    t3 = g->edx;
    ecx = t2;
    edx = t3;
    COW_AT(10264691)
    wr32(sp0 - 4u, 0u);
    if (rd32(self + 0xc4u) != 2u)
    {
        eax = rd32(self + 0xc4u);
        ebx = self + 0xa4u;
        ebp = rd32(COW_IMG(0x10329188u));
        loc_1c = in_ebx;
        loc_20 = in_ebp;
        loc_24 = in_esi;
        loc_28 = in_edi;
        goto L_102646ec;
    }
    eax = rd32(self + 0xc4u);
    ebp = rd32(COW_IMG(0x10329188u));
    loc_1c = in_ebx;
    loc_20 = in_ebp;
    loc_24 = in_esi;
    loc_28 = in_edi;
    loc_18 = self + 0xa4u;
L_102646aa: ;
    COW_AT(102646aa)
    wr32(sp0 - 0x2cu, self + 0xa4u);
    g->esp = sp0 - 0x28u;
    cow_thiscall(g, ebp, ecx, 1, self + 0xa4u);
    COW_AT(102646ad)
    wr32(sp0 - 0x2cu, 0xffffffffu);
    wr32(sp0 - 0x30u, 0u);
    wr32(sp0 - 0x34u, sp0 - 0x14u);
    wr32(sp0 - 0x38u, 2u);
    t4 = rd32(self + 0xbcu);
    wr32(sp0 - 0x14u, t4);
    t5 = rd32(self + 0xd0u);
    wr32(sp0 - 0x10u, t5);
    g->eax = t4;
    g->ecx = t5;
    g->edx = sp0 - 0x14u;
    g->esp = sp0 - 0x28u;
    t6 = cow_stdcall(g, rd32(COW_IMG(0x103291c0u)), 4, 2u, sp0 - 0x14u, 0u, 0xffffffffu);   /* kernel32.dll!WaitForMultipleObjects */
    t7 = g->ecx;
    t8 = g->edx;
    eax = t6;
    ecx = t7;
    edx = t8;
    COW_AT(102646d2)
    wr32(sp0 - 0x2cu, self + 0xa4u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t9 = cow_stdcall(g, rd32(COW_IMG(0x1032918cu)), 1, self + 0xa4u);   /* kernel32.dll!EnterCriticalSection */
    t10 = g->ecx;
    t11 = g->edx;
    ecx = t10;
    edx = t11;
    ebx = eax;
    eax = t9;
    COW_AT(102646db)
    if (ebx != 0u) goto L_10264711;
    COW_AT(102646df)
    if (rd32(self + 0xc4u) == 2u)
    {
        loc_1c = rd32(sp0 - 0x1cu);
        loc_20 = rd32(sp0 - 0x20u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_18 = rd32(sp0 - 0x18u);
        goto L_102646aa;
    }
    COW_AT(102646e8)
    ebx = rd32(sp0 - 0x18u);
    loc_1c = rd32(sp0 - 0x1cu);
    loc_20 = rd32(sp0 - 0x20u);
    loc_24 = rd32(sp0 - 0x24u);
    loc_28 = rd32(sp0 - 0x28u);
L_102646ec: ;
    COW_AT(102646ec)
    wr32(sp0 - 0x2cu, ebx);
    t35 = rd32(self + 0xccu) + 1u;
    wr32(self + 0xccu, t35);
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    cow_thiscall(g, ebp, t35, 1, ebx);
    t36 = g->edx;
    edx = t36;
    COW_AT(102646fc)
    t37 = rd32(sp0 - 0xcu);
    t38 = rd32(sp0 - 0x1cu);
    t39 = rd32(sp0 - 0x20u);
    t40 = rd32(sp0 - 0x24u);
    t41 = rd32(sp0 - 0x28u);
    wr32(g->fs_base, t37);
    g->ebx = t38;
    g->esi = t40;
    g->edi = t41;
    g->ebp = t39;
    g->edx = edx;
    return 0u;
L_10264711: ;
    COW_AT(10264711)
    if (ebx == 1u) goto L_1026475d;
    COW_AT(10264716)
    if (ebx == 0xffffffffu) goto L_1026473a;
    COW_AT(1026471b)
    t12 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x2cu, t12);
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    cow_thiscall(g, ebp, ecx, 1, t12);
    t13 = g->edx;
    edx = t13;
    COW_AT(10264722)
    t14 = rd32(sp0 - 0xcu);
    t15 = rd32(sp0 - 0x1cu);
    t16 = rd32(sp0 - 0x20u);
    t17 = rd32(sp0 - 0x24u);
    t18 = rd32(sp0 - 0x28u);
    wr32(g->fs_base, t14);
    g->ebx = t15;
    g->esi = t17;
    g->edi = t18;
    g->ebp = t16;
    g->edx = edx;
    return 0x8000ffffu;
L_1026473a: ;
    COW_AT(1026473a)
    g->eax = eax;
    g->esp = sp0 - 0x28u;
    t19 = cow_fastcall(g, COW_IMG(0x10266ad0u), ecx, edx, 0);
    t20 = g->edx;
    eax = t19;
    edx = t20;
    COW_AT(1026473f)
    t21 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x2cu, t21);
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    cow_thiscall(g, ebp, t21, 1, t21);
    t22 = g->edx;
    edx = t22;
    esi = eax;
    COW_AT(10264748)
    t23 = rd32(sp0 - 0xcu);
    t24 = rd32(sp0 - 0x1cu);
    t25 = rd32(sp0 - 0x20u);
    t26 = rd32(sp0 - 0x24u);
    t27 = rd32(sp0 - 0x28u);
    wr32(g->fs_base, t23);
    g->ebx = t24;
    g->esi = t26;
    g->edi = t27;
    g->ebp = t25;
    g->edx = edx;
    return esi;
L_1026475d: ;
    COW_AT(1026475d)
    t28 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x2cu, t28);
    g->edx = t28;
    g->esp = sp0 - 0x28u;
    cow_thiscall(g, ebp, ecx, 1, t28);
    t29 = g->edx;
    edx = t29;
    COW_AT(10264764)
    t30 = rd32(sp0 - 0xcu);
    t31 = rd32(sp0 - 0x1cu);
    t32 = rd32(sp0 - 0x20u);
    t33 = rd32(sp0 - 0x24u);
    t34 = rd32(sp0 - 0x28u);
    wr32(g->fs_base, t30);
    g->ebx = t31;
    g->esi = t33;
    g->edi = t34;
    g->ebp = t32;
    g->edx = edx;
    return 0x80040223u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10264660(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10264691u:
    {
        uint32_t eax;
        uint32_t ebp;
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
        ebp = g->ebp;
        self = g->esi;
        in_edi = rd32(sp0 - 0x28u);
        in_esi = rd32(sp0 - 0x24u);
        in_ebp = rd32(sp0 - 0x20u);
        in_ebx = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x28u;
        g->ebx = self + 0xa4u;
        g->edi = self + 0xa4u;
        wr32(sp0 - 0x18u, self + 0xa4u);
        (void)sp0;
        return 1;
    }
    case 0x102646aau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x28u;
        g->edi = self + 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x102646adu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = self + 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x102646d2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = self + 0xa4u;
        wr32(sp0 - 0x34u, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x102646dbu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = self + 0xa4u;
        wr32(sp0 - 0x34u, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x102646dfu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = self + 0xa4u;
        wr32(sp0 - 0x34u, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x102646e8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x34u, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x102646ecu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x102646fcu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10264711u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x34u, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x10264716u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x34u, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x1026471bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x34u, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x10264722u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x34u, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x1026473au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x34u, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x1026473fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x34u, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x10264748u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x34u, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x1026475du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x34u, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x10264764u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x34u, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10264660(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10264660(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
