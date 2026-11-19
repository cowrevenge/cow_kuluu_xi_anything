/* f_0x102c6136 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_102c6136(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
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
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 56u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102c6146u: self = g->ecx; in_edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_102c6146;
    case 0x102c6153u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); self = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_102c6153;
    case 0x102c615au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); self = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_102c615a;
    case 0x102c615fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); self = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_102c615f;
    case 0x102c6174u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); goto E_102c6174;
    case 0x102c6184u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); goto E_102c6184;
    case 0x102c619bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102c619b;
    case 0x102c61a7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102c61a7;
    case 0x102c61b4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102c61b4;
    case 0x102c61bau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102c61ba;
    case 0x102c61beu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102c61be;
    case 0x102c61d1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102c61d1;
    case 0x102c61dcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102c61dc;
    case 0x102c61edu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); goto E_102c61ed;
    case 0x102c61eeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); goto E_102c61ee;
    case 0x102c6218u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102c6218;
    case 0x102c622fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102c622f;
    case 0x102c626bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); goto E_102c626b;
    case 0x102c6276u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); goto E_102c6276;
    case 0x102c6278u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); goto E_102c6278;
    default: break;
    }
#endif

    COW_AT(102c6136)
    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 8u, self);
    wr32(sp0 - 0xcu, in_ebx);
    wr32(sp0 - 0x10u, in_esi);
    wr32(sp0 - 0x14u, in_edi);
    if (rd8(rd32(sp0 + 4u) + 0x68u) & 1u)
    {
        ecx = self;
        edx = in_edx;
        edi = rd32(sp0 + 4u);
    }
    else
    {
        edi = rd32(sp0 + 4u);
    COW_AT(102c6146)
        wr32(sp0 - 0x18u, COW_IMG(0x103c9450u));
        wr32(sp0 - 0x1cu, edi);
        g->esp = sp0 - 0xcu;
        cow_call_regs(g, COW_IMG(0x102bc97eu), g->eax, g->ecx, in_edx, 1, 4, edi, COW_IMG(0x103c9450u), in_edi, in_esi);
        t1 = g->edx;
        ecx = COW_IMG(0x103c9450u);
        edx = t1;
    }
    COW_AT(102c6153)
    if ((rd32(edi + 0x68u) & 4u) != 0u)
    {
        eax = rd32(edi + 0x68u);
    COW_AT(102c615a)
        t2 = (eax & 0xffffff00u) | (uint8_t)(eax | 8u);
        wr32(edi + 0x68u, t2);
    }
    COW_AT(102c615f)
    t3 = rd32(sp0 + 0xcu) + 1u;
    wr32(sp0 - 0x18u, t3);
    wr32(sp0 - 0x1cu, edi);
    g->eax = t3;
    t4 = rd32(sp0 + 0xcu);
    g->esp = sp0 - 4u;
    t5 = cow_call_regs(g, COW_IMG(0x102c44bfu), g->eax, ecx, edx, 1, 6, edi, t3, in_edi, in_esi, in_ebx, self);
    t6 = g->edx;
    if (t5 != 0u)
    {
        eax = t5;
        ecx = rd32(sp0 - 0x18u);
        edx = t6;
        ebx = t5;
        esi = t4;
        goto L_102c6184;
    }
    eax = t5;
    ecx = rd32(sp0 - 0x18u);
    edx = t6;
    COW_AT(102c6174)
    wr32(sp0 - 0x18u, COW_IMG(0x103c9428u));
    wr32(sp0 - 0x1cu, edi);
    g->esp = sp0 - 0x14u;
    cow_cdecl(g, COW_IMG(0x102bca0au), 2, edi, COW_IMG(0x103c9428u));
    loc_18 = COW_IMG(0x103c9428u);
L_102c6276: ;
    COW_AT(102c6276)
L_102c6278: ;
    COW_AT(102c6278)
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    g->ebp = rd32(sp0 - 4u);
    return;
L_102c6184: ;
    COW_AT(102c6184)
    wr32(sp0 - 0x18u, esi);
    wr32(sp0 - 0x1cu, ebx);
    wr32(sp0 - 0x20u, edi);
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0xcu;
    t7 = cow_call_regs(g, COW_IMG(0x102c4595u), g->eax, g->ecx, edx, 1, 5, edi, ebx, esi, rd32(sp0 - 0x14u), rd32(sp0 - 0x10u));
    t8 = g->ecx;
    t9 = g->edx;
    wr32(sp0 - 0x24u, 0u);
    wr32(sp0 - 0x28u, edi);
    g->ecx = t8;
    g->esp = sp0 - 0x14u;
    t10 = cow_call_regs(g, COW_IMG(0x102c45b9u), g->eax, g->ecx, t9, 1, 5, edi, 0u, rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u));
    t11 = g->ecx;
    t12 = g->edx;
    if (t10 == 0u)
    {
        ecx = t11;
        edx = t12;
        goto L_102c61a7;
    }
    eax = t10;
    ecx = t11;
    edx = t12;
    COW_AT(102c619b)
    wr32(sp0 - 0x18u, ebx);
    wr32(sp0 - 0x1cu, edi);
    g->esp = sp0 - 0x14u;
    cow_call_regs(g, COW_IMG(0x102c447cu), g->eax, g->ecx, edx, 1, 2, edi, ebx);
    loc_18 = rd32(sp0 - 0x18u);
    goto L_102c6276;
L_102c61a7: ;
    COW_AT(102c61a7)
    wr8(ebx + esi, 0u);
    if (rd8(ebx) == 0u)
    {
        eax = ebx + esi;
        esi = ebx;
        goto L_102c61ba;
    }
    eax = ebx + esi;
    esi = ebx;
L_102c61b4: ;
    COW_AT(102c61b4)
    if (rd8(esi + 1u) != 0u)
    {
        esi = esi + 1u;
        goto L_102c61b4;
    }
    esi = esi + 1u;
L_102c61ba: ;
    COW_AT(102c61ba)
    if (esi != eax)
    {
    COW_AT(102c61d1)
        t14 = (uint32_t)(int8_t)rd8(esi + 1u);
        t15 = rd8(esi + 1u);
        wr32(sp0 + 4u, t14);
        if ((uint32_t)(int8_t)t15 == 0u)
        {
            esi = esi + 1u;
        }
        else
        {
            eax = t14;
            esi = esi + 1u;
    COW_AT(102c61dc)
            wr32(sp0 - 0x18u, COW_IMG(0x103c93e8u));
            wr32(sp0 - 0x1cu, edi);
            g->edx = edx;
            g->esp = sp0 - 0x14u;
            cow_cdecl(g, COW_IMG(0x102bca0au), 2, edi, COW_IMG(0x103c93e8u));
            t16 = g->edx;
            wr32(sp0 + 4u, 0u);
            ecx = COW_IMG(0x103c93e8u);
            edx = t16;
        }
    COW_AT(102c61ed)
        esi = esi + 1u;
    }
    else
    {
    COW_AT(102c61be)
        wr32(sp0 + 4u, 0xffffffffu);
        wr32(sp0 - 0x18u, COW_IMG(0x103c9410u));
        wr32(sp0 - 0x1cu, edi);
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        cow_cdecl(g, COW_IMG(0x102bca0au), 2, edi, COW_IMG(0x103c9410u));
        t13 = g->edx;
        ecx = COW_IMG(0x103c9410u);
        edx = t13;
    }
    COW_AT(102c61ee)
    wr32(sp0 - 0x18u, sp0 + 0xcu);
    wr32(sp0 - 0x1cu, esi - ebx);
    t17 = rd32(sp0 + 0xcu);
    wr32(sp0 - 0x20u, t17);
    wr32(sp0 - 8u, esi - ebx);
    wr32(sp0 - 0x24u, ebx);
    t18 = rd32(sp0 + 4u);
    wr32(sp0 - 0x28u, t18);
    wr32(sp0 - 0x2cu, edi);
    g->eax = sp0 + 0xcu;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t19 = cow_cdecl(g, COW_IMG(0x102c46a3u), 6, edi, t18, ebx, t17, esi - ebx, sp0 + 0xcu);
    t20 = g->ecx;
    t21 = g->edx;
    wr32(sp0 - 0x30u, 0x10u);
    wr32(sp0 - 0x34u, edi);
    g->esp = sp0 - 0x1cu;
    t22 = cow_call_regs(g, COW_IMG(0x102c44bfu), g->eax, t20, t21, 1, 6, edi, 0x10u, rd32(sp0 - 0x2cu), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u));
    t23 = g->ecx;
    t24 = g->edx;
    if (t22 != 0u)
    {
        ecx = t23;
        edx = t24;
        ebx = t19;
        esi = t22;
        goto L_102c622f;
    }
    eax = t22;
    ecx = t23;
    edx = t24;
    ebx = t19;
    COW_AT(102c6218)
    wr32(sp0 - 0x18u, COW_IMG(0x103c93bcu));
    wr32(sp0 - 0x1cu, edi);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t25 = cow_cdecl(g, COW_IMG(0x102bca0au), 2, edi, COW_IMG(0x103c93bcu));
    t26 = g->ecx;
    t27 = g->edx;
    wr32(sp0 - 0x20u, ebx);
    wr32(sp0 - 0x24u, edi);
    g->esp = sp0 - 0x1cu;
    cow_call_regs(g, COW_IMG(0x102c447cu), g->eax, g->ecx, t27, 1, 2, edi, ebx);
    goto L_102c6278;
L_102c622f: ;
    COW_AT(102c622f)
    wr32(sp0 - 0x18u, 1u);
    t28 = rd32(sp0 + 4u);
    wr32(esi, t28);
    wr32(sp0 - 0x1cu, esi);
    wr32(sp0 - 0x20u, arg2);
    t29 = ebx + rd32(sp0 - 8u);
    wr32(esi + 8u, t29);
    t30 = rd32(sp0 + 0xcu);
    wr32(esi + 4u, ebx);
    wr32(sp0 - 0x24u, edi);
    wr32(esi + 0xcu, t30);
    g->eax = t30;
    g->esp = sp0 - 0x14u;
    t31 = cow_call_regs(g, COW_IMG(0x102c86b9u), g->eax, ecx, edx, 1, 4, edi, arg2, esi, 1u);
    t32 = g->ecx;
    t33 = g->edx;
    wr32(sp0 - 0x28u, esi);
    wr32(sp0 - 0x2cu, edi);
    wr32(sp0 + 0xcu, t31);
    g->ecx = t32;
    g->esp = sp0 - 0x24u;
    t34 = cow_call_regs(g, COW_IMG(0x102c447cu), g->eax, g->ecx, t33, 1, 2, edi, esi);
    t35 = g->ecx;
    t36 = g->edx;
    wr32(sp0 - 0x30u, ebx);
    wr32(sp0 - 0x34u, edi);
    g->ecx = t35;
    g->esp = sp0 - 0x2cu;
    t37 = cow_call_regs(g, COW_IMG(0x102c447cu), g->eax, g->ecx, t36, 1, 2, edi, ebx);
    t38 = g->ecx;
    t39 = g->edx;
    if (rd32(sp0 + 0xcu) == 0u) goto L_102c6278;
    eax = t37;
    ecx = t38;
    edx = t39;
    COW_AT(102c626b)
    wr32(sp0 - 0x18u, COW_IMG(0x103c9390u));
    wr32(sp0 - 0x1cu, edi);
    g->esp = sp0 - 0xcu;
    cow_call_regs(g, COW_IMG(0x102bc97eu), g->eax, g->ecx, edx, 1, 4, edi, COW_IMG(0x103c9390u), rd32(sp0 - 0x14u), rd32(sp0 - 0x10u));
    loc_18 = COW_IMG(0x103c9390u);
    goto L_102c6276;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102c6136(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102c6146u:
    {
        uint32_t ebx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        self = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 8u, self);
        (void)sp0;
        return 1;
    }
    case 0x102c6153u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        self = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c615au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        self = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c615fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        self = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c6174u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c6184u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c619bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c61a7u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c61b4u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c61bau:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c61beu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c61d1u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c61dcu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c61edu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c61eeu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c6218u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x18u, sp0 + 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x102c622fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x18u, sp0 + 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x102c626bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c6276u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c6278u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102c6136(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_102c6136(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
