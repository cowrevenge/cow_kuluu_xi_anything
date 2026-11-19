/* f_0x1012e6d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1012e6d0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t loc_28;
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
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 72u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1012e6f9u: in_edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; in_ebp = rd32(sp0 - 0x1cu); self = rd32(sp0 - 0x18u); g->ebp = rd32(sp0 - 0x1cu); goto E_1012e6f9;
    case 0x1012e705u: edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; in_ebp = rd32(sp0 - 0x1cu); self = rd32(sp0 - 0x18u); g->ebp = rd32(sp0 - 0x1cu); goto E_1012e705;
    case 0x1012e71eu: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_1012e71e;
    case 0x1012e72du: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_1012e72d;
    case 0x1012e73cu: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_1012e73c;
    case 0x1012e743u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_1012e743;
    case 0x1012e748u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_1012e748;
    case 0x1012e787u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1012e787;
    case 0x1012e794u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_1012e794;
    case 0x1012e7a3u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_1012e7a3;
    case 0x1012e7a7u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_1012e7a7;
    case 0x1012e7bfu: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_1012e7bf;
    case 0x1012e7d5u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1012e7d5;
    case 0x1012e7e1u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1012e7e1;
    case 0x1012e7fdu: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1012e7fd;
    case 0x1012e80bu: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1012e80b;
    case 0x1012e81au: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1012e81a;
    case 0x1012e850u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); goto E_1012e850;
    default: break;
    }
#endif

    COW_AT(1012e6d0)
    wr32(sp0 - 0x1cu, in_ebp);
    wr32(sp0 - 0x18u, self);
    t1 = rd32(self + 8u);
    wr16(sp0 - 8u, 0u);
    wr16(sp0 - 6u, 0u);
    wr16(sp0 - 4u, 0u);
    wr16(sp0 - 2u, 0u);
    if (t1 == 0u)
    {
        eax = 0u;
        edx = in_edx;
        ebx = in_ebx;
        esi = in_esi;
        edi = in_edi;
        loc_1c = in_ebp;
        goto L_1012e850;
    }
    ebp = t1;
    COW_AT(1012e6f9)
    if (rd32(COW_IMG(0x104dfd98u)) == 0u)
    {
        eax = 0u;
        edx = in_edx;
        ebx = in_ebx;
        esi = in_esi;
        edi = in_edi;
        loc_1c = in_ebp;
        goto L_1012e850;
    }
    COW_AT(1012e705)
    wr32(sp0 - 0x20u, in_ebx);
    wr32(sp0 - 0x24u, in_esi);
    wr32(sp0 - 0x28u, in_edi);
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0xcu, 0u);
    wr32(sp0 - 0x10u, 0x2c7d8u);
    ebx = 1u;
    esi = 0x2c7d8u;
    edi = in_edi;
    loc_1c = in_ebp;
    loc_18 = self;
    loc_20 = in_ebx;
    loc_24 = in_esi;
    loc_28 = in_edi;
    loc_14 = 0u;
    loc_c = 0u;
    loc_10 = 0x2c7d8u;
L_1012e71e: ;
    COW_AT(1012e71e)
    if (rd32(esi + rd32(COW_IMG(0x104dfd98u))) - 1u > 0xfu) goto L_1012e7a7;
    eax = rd32(esi + rd32(COW_IMG(0x104dfd98u))) - 1u;
    esi = esi + rd32(COW_IMG(0x104dfd98u));
    COW_AT(1012e72d)
    t2 = rd32(COW_IMG(0x1012e858u) + rd8(COW_IMG(0x1012e864u) + eax) * 4u);
    switch (t2 - RD)
    {
    case 0x1012e73cu: goto L_1012e73c;
    case 0x1012e743u: goto L_1012e743;
    case 0x1012e7a7u: goto L_1012e7a7;
    default: rt_fatal(g, COW_IMG(0x1012e735u), "switch");
    }
    return 0;
L_1012e73c: ;
    COW_AT(1012e73c)
    edi = 0x80808080u;
L_1012e748: ;
    COW_AT(1012e748)
    wr32(sp0 - 0x2cu, 1u);
    wr32(sp0 - 0x30u, 1u);
    wr32(sp0 - 0x34u, ebx);
    wr32(sp0 - 0x38u, sp0 - 8u);
    g->ebx = ebx;
    g->edi = edi;
    g->esp = sp0 - 0x28u;
    cow_thiscall(g, COW_IMG(0x10118900u), ebp, 4, sp0 - 8u, ebx, 1u, 1u);
    wr32(sp0 - 0x2cu, 0u);
    wr32(sp0 - 0x30u, edi);
    t3 = rd32(esi + 0x28u);
    wr32(sp0 - 0x34u, t3);
    wr32(sp0 - 0x38u, 0x3f800000u);
    t4 = rd32(sp0 - 6u);
    wr32(sp0 - 0x3cu, t4);
    t5 = rd32(sp0 - 8u);
    wr32(sp0 - 0x40u, t5);
    t6 = (t3 & 0xffff0000u) | rd16(esi + 0x20u);
    wr32(sp0 - 0x44u, t6);
    cow_thiscall(g, COW_IMG(0x1015bd70u), rd32(COW_IMG(0x10621808u)), 7, t6, t5, t4, 0x3f800000u, t3, edi, 0u);
    if (rd16(esi + 0x20u) != 0xffffu)
    {
        loc_14 = rd32(sp0 - 0x14u);
    }
    else
    {
    COW_AT(1012e787)
        t7 = rd32(esi + 0x28u) + rd32(sp0 - 0x14u);
        wr32(sp0 - 0x14u, t7);
        loc_14 = t7;
    }
    COW_AT(1012e794)
    if ((uint32_t)(int16_t)rd16(rd32(rd32(sp0 - 0x18u) + 8u) + 0x4cu) != ebx)
    {
        ebp = rd32(rd32(sp0 - 0x18u) + 8u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_c = rd32(sp0 - 0xcu);
        loc_10 = rd32(sp0 - 0x10u);
    }
    else
    {
        ebp = rd32(rd32(sp0 - 0x18u) + 8u);
    COW_AT(1012e7a3)
        wr32(sp0 - 0xcu, esi);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_c = esi;
        loc_10 = rd32(sp0 - 0x10u);
    }
L_1012e7a7: ;
    COW_AT(1012e7a7)
    wr32(sp0 - 0x10u, loc_10 + 0x48u);
    if ((int32_t)ebx < 8)
    {
        ebx = ebx + 1u;
        esi = loc_10 + 0x48u;
        loc_10 = loc_10 + 0x48u;
        goto L_1012e71e;
    }
    ebx = ebx + 1u;
    COW_AT(1012e7bf)
    t8 = rd32(loc_18 + 8u);
    wr32(sp0 - 0x2cu, t8);
    g->eax = t8;
    g->edx = loc_18;
    g->esp = sp0 - 0x28u;
    t9 = cow_thiscall(g, COW_IMG(0x1015ed80u), COW_IMG(0x10621838u), 1, t8);
    t10 = g->edx;
    if ((uint8_t)t9 != 0u)
    {
        eax = t9;
        edx = t10;
    COW_AT(1012e7d5)
        wr32(sp0 - 0x2cu, 0u);
        wr32(sp0 - 0x30u, 0u);
        if (rd32(sp0 - 0xcu) == 0u)
        {
    COW_AT(1012e80b)
            wr32(sp0 - 0x34u, 0u);
            wr32(sp0 - 0x38u, 0u);
            g->edi = edi;
            g->esp = sp0 - 0x28u;
            cow_thiscall(g, COW_IMG(0x1013e200u), rd32(COW_IMG(0x10578204u)), 4, 0u, 0u, 0u, 0u);
        }
        else
        {
            esi = rd32(sp0 - 0xcu);
    COW_AT(1012e7e1)
            wr32(sp0 - 0x34u, esi + 0x2cu);
            t11 = (edx & 0xffff0000u) | rd16(esi + 0x20u);
            wr32(sp0 - 0x38u, t11);
            g->edi = edi;
            g->esp = sp0 - 0x28u;
            cow_thiscall(g, COW_IMG(0x1013e200u), rd32(COW_IMG(0x10578204u)), 4, t11, esi + 0x2cu, 0u, 0u);
            if (rd16(esi + 0x20u) == 0xffffu)
            {
    COW_AT(1012e7fd)
                t12 = rd32(esi + 0x28u);
                wr32(rd32(COW_IMG(0x10578204u)) + 0x20u, t12);
            }
        }
    }
    COW_AT(1012e81a)
    wr32(sp0 - 0x2cu, 1u);
    wr32(sp0 - 0x30u, 1u);
    wr32(sp0 - 0x34u, 0xbu);
    wr32(sp0 - 0x38u, sp0 - 8u);
    g->ebx = ebx;
    g->edi = edi;
    g->esp = sp0 - 0x28u;
    cow_thiscall(g, COW_IMG(0x10118900u), rd32(rd32(sp0 - 0x18u) + 8u), 4, sp0 - 8u, 0xbu, 1u, 1u);
    wr32(sp0 - 0x2cu, 1u);
    t13 = rd32(sp0 - 6u);
    wr32(sp0 - 0x30u, t13);
    t14 = rd32(sp0 - 4u) + 0xau;
    wr32(sp0 - 0x34u, t14);
    t15 = rd32(sp0 - 0x14u);
    wr32(sp0 - 0x38u, t15);
    g->eax = t15;
    g->edx = t14;
    t16 = cow_cdecl(g, COW_IMG(0x10140910u), 4, t15, t14, t13, 1u);
    t17 = g->edx;
    eax = t16;
    edx = t17;
    ebx = rd32(sp0 - 0x20u);
    esi = rd32(sp0 - 0x24u);
    edi = rd32(sp0 - 0x28u);
    loc_1c = rd32(sp0 - 0x1cu);
L_1012e850: ;
    COW_AT(1012e850)
    g->ebx = ebx;
    g->esi = esi;
    g->edi = edi;
    g->ebp = loc_1c;
    g->edx = edx;
    return eax;
L_1012e743: ;
    COW_AT(1012e743)
    edi = 0x80404040u;
    goto L_1012e748;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1012e6d0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1012e6f9u:
    {
        uint32_t ebp;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        in_edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        in_ebp = rd32(sp0 - 0x1cu);
        self = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x1cu;
        g->eax = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1012e705u:
    {
        uint32_t ebp;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        in_ebp = rd32(sp0 - 0x1cu);
        self = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x1cu;
        g->eax = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1012e71eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_c;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1012e72du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_c;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1012e73cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_c;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1012e743u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_c;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1012e748u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_c;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1012e787u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1012e794u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1012e7a3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1012e7a7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_c;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1012e7bfu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_c;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1012e7d5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1012e7e1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        wr32(sp0 - 0x30u, 0u);
        wr32(sp0 - 0x2cu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1012e7fdu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1012e80bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        wr32(sp0 - 0x30u, 0u);
        wr32(sp0 - 0x2cu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1012e81au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1012e850u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1012e6d0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1012e6d0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
