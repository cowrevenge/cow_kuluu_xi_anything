/* f_0x1012b3c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1012b3c0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
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
    cow_frame(g, sp0, 64u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1012b3d4u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0x14u); goto E_1012b3d4;
    case 0x1012b3fcu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0x14u); goto E_1012b3fc;
    case 0x1012b406u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); goto E_1012b406;
    case 0x1012b428u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1012b428;
    case 0x1012b431u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1012b431;
    case 0x1012b43du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1012b43d;
    case 0x1012b452u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1012b452;
    case 0x1012b479u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1012b479;
    case 0x1012b493u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1012b493;
    case 0x1012b4a7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_1012b4a7;
    case 0x1012b4a9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); goto E_1012b4a9;
    default: break;
    }
#endif

    COW_AT(1012b3c0)
    wr32(sp0 - 0x10u, in_ebx);
    wr32(sp0 - 0x14u, in_esi);
    if (rd32(self + 8u) == 0u)
    {
        eax = rd32(self + 8u);
        edx = in_edx;
        ebp = in_ebp;
        edi = in_edi;
        loc_10 = in_ebx;
        loc_14 = in_esi;
    }
    else
    {
        eax = rd32(self + 8u);
    COW_AT(1012b3d4)
        t1 = rd16(eax + 0x4cu);
        wr16(sp0 - 8u, 0u);
        wr16(sp0 - 0xcu, (uint16_t)t1);
        t2 = rd8(self + 0x53u);
        wr16(sp0 - 6u, 0u);
        wr16(sp0 - 4u, 0u);
        wr16(sp0 - 2u, 0u);
        if ((uint8_t)t2 == 0u)
        {
            eax = (((eax & 0xffff0000u) | t1) & 0xffffff00u) | t2;
            edx = in_edx;
            ebp = in_ebp;
            edi = in_edi;
            loc_10 = in_ebx;
            loc_14 = in_esi;
        }
        else
        {
            eax = (((eax & 0xffff0000u) | t1) & 0xffffff00u) | t2;
    COW_AT(1012b3fc)
            wr32(sp0 - 0x18u, in_ebp);
            wr32(sp0 - 0x1cu, in_edi);
            edx = in_edx;
            ebp = self + 0x1cu;
            edi = 1u;
            loc_10 = in_ebx;
            loc_14 = in_esi;
            loc_18 = in_ebp;
            loc_1c = in_edi;
L_1012b406: ;
    COW_AT(1012b406)
            wr32(sp0 - 0x20u, 1u);
            wr32(sp0 - 0x24u, 1u);
            wr32(sp0 - 0x28u, edi);
            wr32(sp0 - 0x2cu, sp0 - 8u);
            g->ebx = 0u;
            g->edi = edi;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x1cu;
            t3 = cow_thiscall(g, COW_IMG(0x10118900u), rd32(self + 8u), 4, sp0 - 8u, edi, 1u, 1u);
            t4 = g->edx;
            t5 = (t4 & 0xffff0000u) | rd16(ebp);
            wr32(sp0 - 0x20u, t5);
            g->edx = t5;
            t6 = cow_call_regs(g, COW_IMG(0x1012b380u), t3, self, g->edx, 0, 1, t5);
            t7 = g->edx;
            if (t6 == 0u)
            {
                edx = t7;
            }
            else
            {
                eax = t6;
                edx = t7;
    COW_AT(1012b428)
                if ((uint32_t)(int16_t)rd16(sp0 - 0xcu) != edi)
                {
    COW_AT(1012b479)
                    wr32(sp0 - 0x20u, 0u);
                    wr32(sp0 - 0x24u, 0u);
                    wr32(sp0 - 0x28u, 0x80808080u);
                    t14 = (uint32_t)(int16_t)rd16(sp0 - 6u);
                    wr32(sp0 - 0x2cu, t14);
                    t15 = (uint32_t)(int16_t)rd16(sp0 - 8u);
                    wr32(sp0 - 0x30u, t15);
                    g->edx = t15;
                    g->esp = sp0 - 0x1cu;
                    cow_thiscall(g, COW_IMG(0x1011fb60u), eax, 5, t15, t14, 0x80808080u, 0u, 0u);
                    t16 = g->edx;
                    edx = t16;
                }
                else
                {
    COW_AT(1012b431)
                    if ((int16_t)rd16(rd32(self + 8u) + 0x5eu) <= 0)
                    {
    COW_AT(1012b452)
                        wr32(sp0 - 0x20u, 0u);
                        wr32(sp0 - 0x24u, 0u);
                        wr32(sp0 - 0x28u, 0u);
                        wr32(sp0 - 0x2cu, 0x80805020u);
                        wr32(sp0 - 0x30u, 0x3f800000u);
                        wr32(sp0 - 0x34u, 0x3f800000u);
                        t11 = (uint32_t)(int16_t)rd16(sp0 - 6u);
                        wr32(sp0 - 0x38u, t11);
                        t12 = (uint32_t)(int16_t)rd16(sp0 - 8u);
                        wr32(sp0 - 0x3cu, t12);
                        g->edx = t12;
                        g->esp = sp0 - 0x1cu;
                        cow_thiscall(g, COW_IMG(0x1011fc80u), eax, 8, t12, t11, 0x3f800000u, 0x3f800000u, 0x80805020u, 0u, 0u, 0u);
                        t13 = g->edx;
                        edx = t13;
                    }
                    else
                    {
                        ecx = rd32(self + 8u);
                        edx = (edx & 0xffff0000u) | rd16(rd32(self + 8u) + 0x5eu);
    COW_AT(1012b43d)
                        wr32(sp0 - 0x20u, edx);
                        wr32(sp0 - 0x24u, 0x1eu);
                        t8 = rd32(sp0 - 6u);
                        wr32(sp0 - 0x28u, t8);
                        t9 = rd32(sp0 - 8u);
                        wr32(sp0 - 0x2cu, t9);
                        wr32(sp0 - 0x30u, eax);
                        g->edx = t9;
                        g->esp = sp0 - 0x1cu;
                        cow_thiscall(g, COW_IMG(0x10119f80u), ecx, 5, eax, t9, t8, 0x1eu, edx);
                        t10 = g->edx;
                        edx = t10;
                    }
                }
            }
    COW_AT(1012b493)
            if ((int32_t)edi < (int32_t)rd8(self + 0x53u))
            {
                eax = edi;
                ebp = ebp + 2u;
                edi = edi + 1u;
                loc_10 = rd32(sp0 - 0x10u);
                loc_14 = rd32(sp0 - 0x14u);
                loc_18 = rd32(sp0 - 0x18u);
                loc_1c = rd32(sp0 - 0x1cu);
                goto L_1012b406;
            }
            eax = edi;
    COW_AT(1012b4a7)
            ebp = rd32(sp0 - 0x18u);
            edi = rd32(sp0 - 0x1cu);
            loc_10 = rd32(sp0 - 0x10u);
            loc_14 = rd32(sp0 - 0x14u);
        }
    }
    COW_AT(1012b4a9)
    g->ebx = loc_10;
    g->esi = loc_14;
    g->edi = edi;
    g->ebp = ebp;
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1012b3c0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1012b3d4u:
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
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1012b3fcu:
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
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1012b406u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1012b428u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        wr32(sp0 - 0x2cu, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x1012b431u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        wr32(sp0 - 0x2cu, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x1012b43du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        wr32(sp0 - 0x2cu, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x1012b452u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        wr32(sp0 - 0x2cu, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x1012b479u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        wr32(sp0 - 0x2cu, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x1012b493u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1012b4a7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1012b4a9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_10;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
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
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1012b3c0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1012b3c0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
