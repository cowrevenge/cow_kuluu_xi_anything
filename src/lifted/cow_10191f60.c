/* f_0x10191f60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10191f60(Guest* g)
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
    cow_frame(g, sp0, 72u);

    wr32(sp0 - 0x18u, in_ebp);
    wr32(sp0 - 0x1cu, in_esi);
    wr32(sp0 - 0x20u, in_edi);
    if (rd32(self + 8u) == 0u)
    {
        eax = rd32(self + 8u);
        edx = in_edx;
        ebx = in_ebx;
    }
    else
    {
        eax = rd32(self + 8u);
        if (rd32(rd32(self + 0x18u) + 8u) == 1u)
        {
            wr8(eax + 0x62u, 1u);
        }
        else
        {
            wr8(eax + 0x62u, 0u);
        }
        wr32(sp0 - 0x24u, sp0 - 8u);
        t1 = (uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x4cu);
        wr32(sp0 - 0xcu, t1);
        g->edx = t1;
        g->esp = sp0 - 0x20u;
        cow_thiscall(g, COW_IMG(0x1011a710u), rd32(self + 8u), 1, sp0 - 8u);
        t2 = g->edx;
        g->edx = t2;
        t3 = cow_thiscall(g, COW_IMG(0x10191960u), rd32(self + 0x18u), 0);
        t4 = g->edx;
        if (t3 == 0u)
        {
            eax = t3;
            edx = t4;
            ebx = in_ebx;
        }
        else
        {
            eax = t3;
            wr32(sp0 - 0x24u, in_ebx);
            wr32(sp0 - 0x10u, 1u);
            wr32(sp0 - 0x14u, eax);
            ebx = in_ebx;
            ebp = 1u;
            loc_10 = 1u;
            loc_14 = eax;
L_10191fd2: ;
            if (rd32(loc_14) == 0u)
            {
                eax = rd32(loc_14);
                ecx = rd32(rd32(self + 0x14u));
                edx = rd32(self + 0x14u);
                esi = rd32(ecx + 0x4cu);
            }
            else
            {
                eax = rd32(loc_14);
                ecx = rd32(rd32(self + 0x14u));
                edx = rd32(self + 0x14u);
                esi = rd32(eax * 4u + ecx);
            }
            wr32(sp0 - 0x28u, eax);
            g->esp = sp0 - 0x24u;
            t5 = cow_stdcall(g, COW_IMG(0x101921f0u), 1, eax);
            wr32(sp0 - 0x28u, 1u);
            wr32(sp0 - 0x2cu, 1u);
            wr32(sp0 - 0x30u, ebp);
            wr32(sp0 - 0x34u, sp0 - 8u);
            g->ebx = (ebx & 0xffffff00u) | (uint8_t)t5;
            g->edi = self;
            cow_thiscall(g, COW_IMG(0x10118900u), rd32(self + 8u), 4, sp0 - 8u, ebp, 1u, 1u);
            if (esi == 0u)
            {
                edx = (uint32_t)(int16_t)rd16(sp0 - 6u);
                ebx = (ebx & 0xffffff00u) | (uint8_t)t5;
            }
            else
            {
                eax = (uint32_t)(int16_t)rd16(sp0 - 8u);
                edx = (uint32_t)(int16_t)rd16(sp0 - 6u);
                ebx = (ebx & 0xffffff00u) | (uint8_t)t5;
                if (rd32(sp0 - 0xcu) != ebp)
                {
                    wr32(sp0 - 0x28u, 0u);
                    wr32(sp0 - 0x2cu, 0u);
                    wr32(sp0 - 0x30u, 0u);
                    t9 = (-((uint8_t)((uint8_t)ebx - 1u) != 0u) & 0x40405870u) + 0x40402810u;
                    wr32(sp0 - 0x34u, t9);
                    wr32(sp0 - 0x38u, 0x3f800000u);
                    wr32(sp0 - 0x3cu, 0x3f800000u);
                    wr32(sp0 - 0x40u, edx);
                    wr32(sp0 - 0x44u, eax);
                    g->edx = edx;
                    g->esp = sp0 - 0x24u;
                    cow_thiscall(g, COW_IMG(0x1011fc80u), esi, 8, eax, edx, 0x3f800000u, 0x3f800000u, t9, 0u, 0u, 0u);
                    t10 = g->edx;
                    edx = t10;
                    ebx = t9;
                }
                else
                {
                    if ((int16_t)rd16(rd32(self + 8u) + 0x5eu) <= 0)
                    {
                        wr32(sp0 - 0x28u, 0u);
                        wr32(sp0 - 0x2cu, 0u);
                        wr32(sp0 - 0x30u, 0u);
                        t7 = (-((uint8_t)((uint8_t)ebx - 1u) != 0u) & 0x40402810u) + 0x40402810u;
                        wr32(sp0 - 0x34u, t7);
                        wr32(sp0 - 0x38u, 0x3f800000u);
                        wr32(sp0 - 0x3cu, 0x3f800000u);
                        wr32(sp0 - 0x40u, edx);
                        wr32(sp0 - 0x44u, eax);
                        g->edx = edx;
                        g->esp = sp0 - 0x24u;
                        cow_thiscall(g, COW_IMG(0x1011fc80u), esi, 8, eax, edx, 0x3f800000u, 0x3f800000u, t7, 0u, 0u, 0u);
                        t8 = g->edx;
                        edx = t8;
                        ebx = t7;
                        ebp = rd32(sp0 - 0x10u);
                    }
                    else
                    {
                        ecx = rd32(self + 8u);
                        ebp = (ebp & 0xffff0000u) | rd16(rd32(self + 8u) + 0x5eu);
                        wr32(sp0 - 0x28u, ebp);
                        wr32(sp0 - 0x2cu, 0x1eu);
                        wr32(sp0 - 0x30u, edx);
                        wr32(sp0 - 0x34u, eax);
                        wr32(sp0 - 0x38u, esi);
                        g->edx = edx;
                        g->esp = sp0 - 0x24u;
                        cow_thiscall(g, COW_IMG(0x10119f80u), ecx, 5, esi, eax, edx, 0x1eu, ebp);
                        t6 = g->edx;
                        edx = t6;
                        ebp = rd32(sp0 - 0x10u);
                    }
                }
            }
            t11 = rd32(sp0 - 0x14u) + 4u;
            wr32(sp0 - 0x14u, t11);
            wr32(sp0 - 0x10u, ebp + 1u);
            if ((int32_t)ebp < 10)
            {
                loc_14 = t11;
                loc_10 = ebp + 1u;
                ebp = ebp + 1u;
                goto L_10191fd0;
            }
            eax = ebp;
            ebx = rd32(sp0 - 0x24u);
        }
    }
    g->ebx = ebx;
    g->edi = in_edi;
    g->edx = edx;
    return eax;
L_10191fd0: ;
    goto L_10191fd2;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10191f60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10191f60(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
