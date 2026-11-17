/* f_0x10141300 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10141300(Guest* g)
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
    cow_frame(g, sp0, 64u);

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
        t1 = rd16(eax + 0x4cu);
        wr16(sp0 - 8u, 0u);
        wr16(sp0 - 0xcu, (uint16_t)t1);
        t2 = rd8(self + 0x14u);
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
            wr32(sp0 - 0x18u, in_ebp);
            wr32(sp0 - 0x1cu, in_edi);
            edx = in_edx;
            ebp = self + 0x1cu;
            edi = 1u;
            loc_10 = in_ebx;
            loc_14 = in_esi;
            loc_18 = in_ebp;
            loc_1c = in_edi;
L_10141346: ;
            wr32(sp0 - 0x20u, 1u);
            wr32(sp0 - 0x24u, 1u);
            wr32(sp0 - 0x28u, edi);
            wr32(sp0 - 0x2cu, sp0 - 8u);
            g->ebx = 0u;
            g->edi = edi;
            g->edx = edx;
            g->esp = sp0 - 0x1cu;
            cow_thiscall(g, COW_IMG(0x10118900u), rd32(self + 8u), 4, sp0 - 8u, edi, 1u, 1u);
            t3 = g->edx;
            if (rd32(ebp) == 0u)
            {
                edx = t3;
            }
            else
            {
                ecx = rd32(ebp);
                if ((uint32_t)(int16_t)rd16(sp0 - 0xcu) != edi)
                {
                    wr32(sp0 - 0x20u, 0u);
                    wr32(sp0 - 0x24u, 0u);
                    wr32(sp0 - 0x28u, 0x80808080u);
                    t10 = (uint32_t)(int16_t)rd16(sp0 - 6u);
                    wr32(sp0 - 0x2cu, t10);
                    t11 = (uint32_t)(int16_t)rd16(sp0 - 8u);
                    wr32(sp0 - 0x30u, t11);
                    g->edx = t11;
                    g->esp = sp0 - 0x1cu;
                    cow_thiscall(g, COW_IMG(0x1011fb60u), ecx, 5, t11, t10, 0x80808080u, 0u, 0u);
                    t12 = g->edx;
                    edx = t12;
                }
                else
                {
                    edx = (uint32_t)(int16_t)rd16(sp0 - 0xcu);
                    if ((int16_t)rd16(rd32(self + 8u) + 0x5eu) <= 0)
                    {
                        wr32(sp0 - 0x20u, 0u);
                        wr32(sp0 - 0x24u, 0u);
                        wr32(sp0 - 0x28u, 0u);
                        wr32(sp0 - 0x2cu, 0x80805020u);
                        wr32(sp0 - 0x30u, 0x3f800000u);
                        wr32(sp0 - 0x34u, 0x3f800000u);
                        t7 = (uint32_t)(int16_t)rd16(sp0 - 6u);
                        wr32(sp0 - 0x38u, t7);
                        t8 = (uint32_t)(int16_t)rd16(sp0 - 8u);
                        wr32(sp0 - 0x3cu, t8);
                        g->edx = t8;
                        g->esp = sp0 - 0x1cu;
                        cow_thiscall(g, COW_IMG(0x1011fc80u), ecx, 8, t8, t7, 0x3f800000u, 0x3f800000u, 0x80805020u, 0u, 0u, 0u);
                        t9 = g->edx;
                        edx = t9;
                    }
                    else
                    {
                        eax = rd32(self + 8u);
                        edx = (edx & 0xffff0000u) | rd16(rd32(self + 8u) + 0x5eu);
                        wr32(sp0 - 0x20u, edx);
                        wr32(sp0 - 0x24u, 0x1eu);
                        t4 = rd32(sp0 - 6u);
                        wr32(sp0 - 0x28u, t4);
                        t5 = rd32(sp0 - 8u);
                        wr32(sp0 - 0x2cu, t5);
                        wr32(sp0 - 0x30u, ecx);
                        g->edx = t5;
                        g->esp = sp0 - 0x1cu;
                        cow_thiscall(g, COW_IMG(0x10119f80u), eax, 5, ecx, t5, t4, 0x1eu, edx);
                        t6 = g->edx;
                        edx = t6;
                    }
                }
            }
            if ((int32_t)edi < (int32_t)rd8(self + 0x14u))
            {
                eax = edi;
                ebp = ebp + 4u;
                edi = edi + 1u;
                loc_10 = rd32(sp0 - 0x10u);
                loc_14 = rd32(sp0 - 0x14u);
                loc_18 = rd32(sp0 - 0x18u);
                loc_1c = rd32(sp0 - 0x1cu);
                goto L_10141346;
            }
            eax = edi;
            ebp = rd32(sp0 - 0x18u);
            edi = rd32(sp0 - 0x1cu);
            loc_10 = rd32(sp0 - 0x10u);
            loc_14 = rd32(sp0 - 0x14u);
        }
    }
    g->ebx = loc_10;
    g->esi = loc_14;
    g->edi = edi;
    g->ebp = ebp;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10141300(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10141300(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
