/* f_0x10023010 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u16 stack_args=3 */
uint32_t cow_fn_10023010(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
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
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd8(self + 0x34u) & 1u)
    {
        eax = 0u;
        loc_4 = 0u;
    }
    else
    {
        if (rd32(sp0 + 4u) == 0u)
        {
            eax = 0u;
            loc_4 = 0u;
        }
        else
        {
            ecx = rd32(sp0 + 4u);
            wr32(sp0 + 4u, ecx);
            edx = in_edx;
            esi = arg3 + 0x1cu;
            edi = arg2;
            loc_4 = 0u;
L_10023043: ;
            g->eax = rd16(edi);
            g->edx = edx;
            t1 = rd16(edi);
            g->esp = sp0 - 0x10u;
            t2 = cow_stdcall(g, COW_IMG(0x10022fd0u), 2, esi - 0x1cu, t1);
            t3 = g->edx;
            if ((uint8_t)t2 == 0u)
            {
                edx = t3;
            }
            else
            {
                t4 = rd32(edi + 6u);
                wr32(esi - 4u, t4);
                t5 = rd32(edi + 0xau);
                wr32(esi, t5);
                t6 = rd16(edi + 2u);
                g->eax = t6;
                g->edx = t4;
                g->esp = sp0 - 0x10u;
                t7 = cow_stdcall(g, COW_IMG(0x10022fd0u), 2, esi + 4u, t6);
                t8 = g->edx;
                if ((uint8_t)t7 == 0u)
                {
                    edx = t8;
                }
                else
                {
                    t9 = rd32(edi + 0xeu);
                    wr32(esi + 0x1cu, t9);
                    t10 = rd32(edi + 0x12u);
                    wr32(esi + 0x20u, t10);
                    t11 = rd16(edi + 4u);
                    g->eax = t11;
                    g->edx = t9;
                    g->esp = sp0 - 0x10u;
                    t12 = cow_stdcall(g, COW_IMG(0x10022fd0u), 2, esi + 0x24u, t11);
                    t13 = g->edx;
                    if ((uint8_t)t12 == 0u)
                    {
                        edx = t13;
                    }
                    else
                    {
                        t14 = rd32(edi + 0x16u);
                        wr32(esi + 0x3cu, t14);
                        t15 = rd32(edi + 0x1au);
                        wr32(esi + 0x40u, t15);
                        edx = t14;
                        esi = esi + 0x60u;
                        loc_4 = loc_4 + 3u;
                    }
                }
            }
            t16 = rd32(sp0 + 4u) - 1u;
            t17 = rd32(sp0 + 4u);
            wr32(sp0 + 4u, t16);
            if (t17 != 1u)
            {
                edi = edi + 0x1eu;
                goto L_10023043;
            }
            eax = t16;
            eax = (eax & 0xffff0000u) | (uint16_t)loc_4;
        }
    }
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10023010(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10023010(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
