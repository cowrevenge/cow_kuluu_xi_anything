/* f_0x10209920 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
void cow_fn_10209920(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t esi;
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
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    g->esp = sp0 - 4u;
    t1 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 2u);
    if (t1 != 0u)
    {
        esi = t1;
        g->esp = sp0 - 0x10u;
        cow_cdecl(g, COW_IMG(0x101c9780u), 4, arg1 + 0x20u, arg2 + 5u, arg3 + 4u, 0x80808080u);
        cow_thiscall(g, COW_IMG(0x1011fb60u), rd32(rd32(esi) + (rd32(arg4 + 4u) >> 5u & 7u) * 4u + 0x71cu), 5, arg1 + 0x3au, arg2 + 0x12u, 0x80808080u, 0u, 0u);
        t2 = rd32(rd32(esi) + (rd8(arg4 + 5u) >> 5u) * 4u + 0x71cu);
        cow_thiscall(g, COW_IMG(0x1011fb60u), t2, 5, arg1 + 0x68u, arg2 + 0x12u, 0x80808080u, 0u, 0u);
        t3 = g->ecx;
        cow_thiscall(g, COW_IMG(0x1011fb60u), rd32(rd32(esi) + (rd8(arg4 + 6u) >> 5u) * 4u + 0x71cu), 5, arg1 + 0x99u, arg2 + 0x12u, 0x80808080u, 0u, 0u);
        cow_thiscall(g, COW_IMG(0x1011fb60u), rd32(rd32(esi) + (rd8(arg4 + 7u) >> 5u) * 4u + 0x71cu), 5, arg1 + 0xcbu, arg2 + 0x12u, 0x80808080u, 0u, 0u);
        if ((rd32(arg3) & 3u) != 0u)
        {
            eax = rd32(arg3) & 3u;
            g->esp = sp0 - 0x10u;
            cow_thiscall(g, COW_IMG(0x1011fb60u), rd32(eax * 4u + rd32(esi) + 0x6c8u), 5, arg1 + 0xe0u, arg2 + 8u, 0x80808080u, 0u, 0u);
        }
        g->edx = arg2;
        g->esp = sp0 - 0x10u;
        cow_thiscall(g, COW_IMG(0x1011fb60u), rd32(rd32(esi) + (rd32(arg4 + 8u) >> 0x19u & 7u) * 4u + 0x6dcu), 5, arg1 + 0xf0u, arg2 + 8u, 0x80808080u, 0u, 0u);
        t4 = g->edx;
        g->edx = rd8(arg4 + 0xbu) & 1u;
        t5 = rd8(arg4 + 0xbu);
        cow_thiscall(g, COW_IMG(0x1011fb60u), rd32(rd32(esi) + (t5 & 1u) * 4u + 0x6f0u), 5, arg1 + 0xf0u, arg2 + 8u, 0x80808080u, 0u, 0u);
        t6 = g->edx;
        if ((rd32(arg4 + 8u) >> 0x14u & 0xfu) < 1u)
        {
            edx = t6;
        }
        else
        {
            eax = rd32(arg4 + 8u) >> 0x14u & 0xfu;
            edx = t6;
            if (eax <= 8u)
            {
                g->edx = rd32(esi);
                t7 = rd32(esi);
                g->esp = sp0 - 0x10u;
                cow_thiscall(g, COW_IMG(0x1011fb60u), rd32(eax * 4u + t7 + 0x738u), 5, arg1 + 0x100u, arg2 + 8u, 0x80808080u, 0u, 0u);
                t8 = g->edx;
                edx = t8;
            }
        }
        if ((rd32(arg4 + 8u) >> 9u & 0xfu) != 0u)
        {
            eax = rd32(arg4 + 8u) >> 9u & 0xfu;
            g->edx = arg1 + 0x114u;
            g->esp = sp0 - 0x10u;
            cow_thiscall(g, COW_IMG(0x1011fb60u), rd32(eax * 4u + rd32(esi) + 0x700u), 5, arg1 + 0x114u, arg2 + 7u, 0x80808080u, 0u, 0u);
            t9 = g->edx;
            edx = t9;
        }
        if ((rd32(arg4 + 8u) >> 0xdu & 0xfu) != 0u)
        {
            eax = rd32(arg4 + 8u) >> 0xdu & 0xfu;
            g->edx = rd32(esi);
            t10 = rd32(esi);
            g->esp = sp0 - 0x10u;
            cow_thiscall(g, COW_IMG(0x1011fb60u), rd32(eax * 4u + t10 + 0x700u), 5, arg1 + 0x114u, arg2 + 0x11u, 0x80808080u, 0u, 0u);
            t11 = g->edx;
            edx = t11;
        }
        g->esp = sp0 - 0x10u;
        cow_thiscall(g, COW_IMG(0x1011fb60u), rd32(rd32(esi) + (rd32(arg4) & 0xfu) * 4u + 0x6f8u), 5, arg1 + 0x14du, arg2 + 8u, 0x80808080u, 0u, 0u);
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10209920(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10209920(g);
    g->esp = sp0;
    rt_return(g, g->eax, 16u);
}
/* COW_ADAPTER END */
