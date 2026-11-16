/* f_0x10139bd0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10139bd0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_24;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 56u);

    wr32(sp0 - 0xcu, in_ebx);
    wr32(sp0 - 0x10u, in_edi);
    t1 = rd32(self + 8u);
    wr16(sp0 - 8u, 0u);
    wr16(sp0 - 6u, 0u);
    wr16(sp0 - 4u, 0u);
    wr16(sp0 - 2u, 0u);
    if (t1 == 0u)
    {
        eax = in_eax;
        edx = in_edx;
        ebp = in_ebp;
        esi = in_esi;
    }
    else
    {
        ecx = t1;
        wr32(sp0 - 0x14u, in_ebp);
        wr32(sp0 - 0x18u, in_esi);
        wr32(sp0 - 0x1cu, 1u);
        wr32(sp0 - 0x20u, 1u);
        wr32(sp0 - 0x24u, 0xbu);
        wr32(sp0 - 0x28u, sp0 - 8u);
        g->ebx = self;
        g->edi = 0u;
        g->esp = sp0 - 0x18u;
        cow_thiscall(g, COW_IMG(0x10118900u), ecx, 4, sp0 - 8u, 0xbu, 1u, 1u);
        wr32(sp0 - 0x1cu, 1u);
        t2 = rd32(sp0 - 6u) + 1u;
        wr32(sp0 - 0x20u, t2);
        t3 = rd32(sp0 - 4u) + 8u;
        wr32(sp0 - 0x24u, t3);
        t4 = rd32(self + 0x3cu);
        wr32(sp0 - 0x28u, t4);
        g->ebx = self;
        g->eax = t4;
        g->edx = t3;
        t5 = cow_cdecl(g, COW_IMG(0x10140910u), 4, t4, t3, t2, 1u);
        t6 = g->edx;
        eax = t5;
        edx = t6;
        ebp = 0u;
        esi = self + 0x18u;
L_10139c2f: ;
        if (rd16(esi) == 0u)
        {
            eax = (eax & 0xffff0000u) | rd16(esi);
        }
        else
        {
            eax = (eax & 0xffff0000u) | rd16(esi);
            wr32(sp0 - 0x1cu, (uint16_t)eax);
            g->eax = (uint16_t)eax;
            g->edx = edx;
            g->esp = sp0 - 0x18u;
            t7 = cow_thiscall(g, COW_IMG(0x1015b9e0u), rd32(COW_IMG(0x10621808u)), 1, (uint16_t)eax);
            t8 = g->edx;
            if (t7 == 0u)
            {
                eax = t7;
                edx = t8;
            }
            else
            {
                eax = t7;
                edi = t7;
                wr32(sp0 - 0x1cu, 1u);
                wr32(sp0 - 0x20u, 1u);
                wr32(sp0 - 0x24u, ebp + 1u);
                wr32(sp0 - 0x28u, sp0 - 8u);
                g->ebx = self;
                g->edi = edi;
                g->esp = sp0 - 0x18u;
                cow_thiscall(g, COW_IMG(0x10118900u), rd32(self + 8u), 4, sp0 - 8u, ebp + 1u, 1u, 1u);
                if (rd32(edi + 0x14c0u) == 0u)
                {
                    eax = rd32(edi + 0x14c0u);
                    goto L_10139c87;
                }
                eax = rd32(edi + 0x14c0u);
                if (rd16(eax) <= 1u)
                {
                    eax = (eax & 0xffffff00u) | rd16(eax) > 1u;
                    goto L_10139c87;
                }
                wr32(sp0 - 0x1cu, 0u);
                wr32(sp0 - 0x20u, 0x80808080u);
                t9 = rd8(esi + 3u);
                wr32(sp0 - 0x24u, t9);
                eax = t9;
                loc_24 = t9;
L_10139c90: ;
                wr32(sp0 - 0x28u, 0x3f800000u);
                t10 = rd32(sp0 - 6u);
                wr32(sp0 - 0x2cu, t10);
                t11 = rd32(sp0 - 8u);
                wr32(sp0 - 0x30u, t11);
                t12 = (eax & 0xffff0000u) | rd16(esi);
                wr32(sp0 - 0x34u, t12);
                g->eax = t12;
                g->edx = t11;
                g->esp = sp0 - 0x18u;
                t13 = cow_thiscall(g, COW_IMG(0x1015bd70u), rd32(COW_IMG(0x10621808u)), 7, t12, t11, t10, 0x3f800000u, loc_24, 0x80808080u, 0u);
                t14 = g->edx;
                eax = t13;
                edx = t14;
            }
        }
        if ((int32_t)(ebp + 1u) < 8)
        {
            ebp = ebp + 1u;
            esi = esi + 4u;
            goto L_10139c2d;
        }
        ebp = rd32(sp0 - 0x14u);
        esi = rd32(sp0 - 0x18u);
    }
    g->ebx = in_ebx;
    g->esi = esi;
    g->edi = in_edi;
    g->ebp = ebp;
    g->edx = edx;
    return eax;
L_10139c2d: ;
    goto L_10139c2f;
L_10139c87: ;
    wr32(sp0 - 0x1cu, 0u);
    wr32(sp0 - 0x20u, 0x80808080u);
    wr32(sp0 - 0x24u, 0u);
    loc_24 = 0u;
    goto L_10139c90;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10139bd0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10139bd0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
