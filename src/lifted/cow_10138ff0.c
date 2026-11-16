/* f_0x10138ff0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10138ff0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
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
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 68u);

    wr32(sp0 - 0x18u, in_ebp);
    wr32(sp0 - 0x1cu, in_edi);
    if (rd32(COW_IMG(0x104dfd98u)) == 0u)
    {
        eax = 0u;
        edx = in_edx;
    }
    else
    {
        ecx = rd32(COW_IMG(0x104dfd98u));
        wr32(sp0 - 0x20u, in_ebx);
        wr32(sp0 - 0x24u, in_esi);
        t1 = rd16(self + 0x34u);
        wr16(sp0 - 8u, 0u);
        wr32(sp0 - 0x10u, ecx + 0x19308u);
        wr16(sp0 - 6u, 0u);
        wr16(sp0 - 4u, 0u);
        wr16(sp0 - 2u, 0u);
        wr32(sp0 - 0x14u, 0xfu);
        eax = 0u;
        edx = in_edx;
        ebx = 1u;
        ebp = (uint32_t)(int16_t)t1;
        esi = ecx + 0x19308u;
        loc_10 = ecx + 0x19308u;
        loc_14 = 0xfu;
L_1013903e: ;
        t2 = rd8(COW_IMG(0x1036f9bcu) + ebx);
        wr8(sp0 - 0xcu, (uint8_t)t2);
        if ((uint8_t)t2 != 0u)
        {
            eax = (eax & 0xffffff00u) | t2;
            if ((uint8_t)eax != 0xffu)
            {
                if (rd16(esi + (uint8_t)rd32(sp0 - 0xcu) * 0x2cu) == 0u)
                {
                    edx = (uint8_t)rd32(sp0 - 0xcu) * 0xbu;
                }
                else
                {
                    eax = rd16(esi + (uint8_t)rd32(sp0 - 0xcu) * 0x2cu);
                    edx = (uint8_t)rd32(sp0 - 0xcu) * 0xbu;
                    esi = esi + (uint8_t)rd32(sp0 - 0xcu) * 0x2cu;
                    if ((uint16_t)eax != 0xffffu)
                    {
                        wr32(sp0 - 0x28u, 1u);
                        wr32(sp0 - 0x2cu, 1u);
                        wr32(sp0 - 0x30u, ebx);
                        wr32(sp0 - 0x34u, sp0 - 8u);
                        g->ebx = ebx;
                        g->edi = self;
                        g->esp = sp0 - 0x24u;
                        cow_thiscall(g, COW_IMG(0x10118900u), rd32(self + 8u), 4, sp0 - 8u, ebx, 1u, 1u);
                        wr32(sp0 - 0x28u, 0u);
                        wr32(sp0 - 0x2cu, 0x80808080u);
                        t8 = rd32(esi + 4u);
                        wr32(sp0 - 0x30u, t8);
                        wr32(sp0 - 0x34u, 0x3f800000u);
                        t9 = rd32(sp0 - 6u);
                        wr32(sp0 - 0x38u, t9);
                        t10 = rd32(sp0 - 8u);
                        wr32(sp0 - 0x3cu, t10);
                        wr32(sp0 - 0x40u, esi);
                        g->edx = t9;
                        cow_thiscall(g, COW_IMG(0x1015bdb0u), rd32(COW_IMG(0x10621808u)), 7, esi, t10, t9, 0x3f800000u, t8, 0x80808080u, 0u);
                        t11 = g->edx;
                        edx = t11;
                    }
                }
            }
        }
        else
        {
            wr32(sp0 - 0x28u, sp0 - 8u);
            g->esp = sp0 - 0x24u;
            cow_call_regs(g, COW_IMG(0x10118f70u), sp0 - 8u, rd32(self + 8u), g->edx, 0, 1, sp0 - 8u);
            wr32(sp0 - 0x28u, 1u);
            t3 = rd32(sp0 - 6u) + 8u;
            wr32(sp0 - 0x2cu, t3);
            t4 = rd32(sp0 - 4u) - 0xeu;
            wr32(sp0 - 0x30u, t4);
            t5 = rd32(esi + 4u);
            wr32(sp0 - 0x34u, t5);
            g->ebx = ebx;
            g->eax = t5;
            g->edx = t4;
            t6 = cow_cdecl(g, COW_IMG(0x10140910u), 4, t5, t4, t3, 1u);
            t7 = g->edx;
            edx = t7;
            ebp = t6;
        }
        wr32(sp0 - 0x14u, loc_14 - 1u);
        if (loc_14 != 1u)
        {
            eax = loc_14 - 1u;
            ebx = ebx + 1u;
            loc_14 = loc_14 - 1u;
            goto L_1013903a;
        }
        if ((int32_t)ebp <= (int32_t)((uint32_t)(int16_t)rd16(self + 0x30u) + 0x18u))
        {
            eax = (uint32_t)(int16_t)rd16(self + 0x30u) + 4u;
        }
        else
        {
            eax = (uint32_t)(int16_t)rd16(self + 0x30u) + 4u;
            t12 = (-(rd32(rd32(COW_IMG(0x10578484u)) + 0xc4u) != 4u) & 0x4060u) - 0x7f7fbfe0u;
            wr32(sp0 - 0x20u, t12);
            t13 = rd32(COW_IMG(0x10578484u)) + 0x7cu;
            wr32(sp0 - 0x24u, t13);
            t14 = (t13 & 0xffff0000u) | (uint16_t)(rd16(self + 0x32u) + 5u);
            wr32(sp0 - 0x28u, t14);
            wr32(sp0 - 0x2cu, eax);
            t15 = ebp - eax - 0x14u;
            wr32(sp0 - 0x30u, t15);
            g->eax = eax;
            g->edx = t12;
            g->esp = sp0 - 0x1cu;
            t16 = cow_cdecl(g, COW_IMG(0x101c9d50u), 5, t15, eax, t14, t13, t12);
            t17 = g->edx;
            eax = t16;
            edx = t17;
        }
    }
    g->ebx = in_ebx;
    g->edi = in_edi;
    g->edx = edx;
    return eax;
L_1013903a: ;
    esi = loc_10;
    goto L_1013903e;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10138ff0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10138ff0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
