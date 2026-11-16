/* f_0x101359c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101359c0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_4;
    uint32_t loc_8;
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
    wr32(sp0 - 0x10u, in_ebp);
    wr32(sp0 - 0x14u, in_esi);
    if ((int16_t)rd16(rd32(self + 8u) + 0x58u) < 1)
    {
        eax = in_eax;
        edx = in_edx;
        edi = in_edi;
    }
    else
    {
        ebx = rd32(self + 8u);
        wr32(sp0 - 0x18u, in_edi);
        edx = in_edx;
        ebp = 1u;
L_101359db: ;
        wr32(sp0 - 0x1cu, ebp);
        g->edx = edx;
        g->esp = sp0 - 0x18u;
        t1 = cow_stdcall(g, COW_IMG(0x10131680u), 1, ebp);
        t2 = g->edx;
        if ((int16_t)t1 < 0)
        {
            eax = t1;
        }
        else
        {
            edx = t2;
            edi = (uint32_t)(int16_t)t1;
            wr32(sp0 - 0x1cu, 1u);
            wr32(sp0 - 0x20u, 1u);
            wr32(sp0 - 0x24u, ebp);
            wr32(sp0 - 0x28u, sp0 - 8u);
            g->ebx = ebx;
            g->edi = edi;
            g->eax = sp0 - 8u;
            g->edx = edx;
            g->esp = sp0 - 0x18u;
            t3 = cow_thiscall(g, COW_IMG(0x10118900u), ebx, 4, sp0 - 8u, ebp, 1u, 1u);
            t4 = g->edx;
            if ((rd8(edi * 4u + self + 0x78u) & 3u) == 0u)
            {
                eax = (t3 & 0xffffff00u) | (rd8(edi * 4u + self + 0x78u) & 3u);
            }
            else
            {
                eax = (t3 & 0xffffff00u) | (rd8(edi * 4u + self + 0x78u) & 3u);
                edx = t4;
                if ((uint8_t)eax != 2u)
                {
                    if ((uint8_t)eax == 1u)
                    {
                        t8 = rd16(edi * 4u + self + 0x7au);
                        wr32(sp0 - 0x1cu, t8);
                        t9 = rd32(COW_IMG(0x10621808u));
                        g->esp = sp0 - 0x18u;
                        t10 = cow_thiscall(g, COW_IMG(0x1015b9e0u), t9, 1, t8);
                        t11 = g->ecx;
                        if (t10 == 0u)
                        {
                            eax = t10;
                        }
                        else
                        {
                            ecx = t11;
                            edi = edi * 4u + self + 0x7au;
                            wr32(sp0 - 0x1cu, 0u);
                            wr32(sp0 - 0x20u, 0x80808080u);
                            wr32(sp0 - 0x24u, 0u);
                            wr32(sp0 - 0x28u, 0x3f800000u);
                            t12 = rd32(sp0 - 6u);
                            wr32(sp0 - 0x2cu, t12);
                            t13 = rd32(sp0 - 8u);
                            wr32(sp0 - 0x30u, t13);
                            t14 = (ecx & 0xffff0000u) | rd16(edi);
                            wr32(sp0 - 0x34u, t14);
                            g->eax = t13;
                            g->esp = sp0 - 0x18u;
                            t15 = cow_thiscall(g, COW_IMG(0x1015bd70u), rd32(COW_IMG(0x10621808u)), 7, t14, t13, t12, 0x3f800000u, 0u, 0x80808080u, 0u);
                            eax = t15;
                        }
                    }
                }
                else
                {
                    if (rd32(self + 0xb8u) != 0u)
                    {
                        ecx = rd32(self + 0xb8u);
                        wr32(sp0 - 0x1cu, 0u);
                        wr32(sp0 - 0x20u, 0u);
                        wr32(sp0 - 0x24u, 0x80808080u);
                        t5 = (uint32_t)(int16_t)rd16(sp0 - 6u);
                        wr32(sp0 - 0x28u, t5);
                        t6 = (uint32_t)(int16_t)rd16(sp0 - 8u) + 1u;
                        wr32(sp0 - 0x2cu, t6);
                        g->eax = t6;
                        g->esp = sp0 - 0x18u;
                        t7 = cow_thiscall(g, COW_IMG(0x1011fb60u), ecx, 5, t6, t5, 0x80808080u, 0u, 0u);
                        eax = t7;
                    }
                }
            }
        }
        if ((int32_t)(ebp + 1u) <= (int16_t)rd16(rd32(self + 8u) + 0x58u))
        {
            edx = (uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x58u);
            ebx = rd32(self + 8u);
            ebp = ebp + 1u;
            loc_8 = 0u;
            loc_4 = 0u;
            goto L_101359db;
        }
        edx = (uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x58u);
        edi = rd32(sp0 - 0x18u);
    }
    g->ebx = in_ebx;
    g->edi = edi;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101359c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101359c0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
