/* f_0x1029a180 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=6 */
void cow_fn_1029a180(Guest* g)
{
    uint32_t ecx;
    uint32_t edi;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg1 != 0u)
    {
        if (arg3 != 0u)
        {
            g->esp = sp0 - 0x10u;
            t1 = cow_stdcall(g, COW_IMG(0x102aeeb0u), 0);
            wr32(arg1 + 0x24u, t1);
            wr32(t1 + 0x14u, arg5);
            wr32(rd32(arg1 + 0x24u) + 0x28u, arg2);
            wr32(rd32(arg1 + 0x24u) + 0x18u, arg3);
            wr32(rd32(arg1 + 0x24u) + 0x20u, arg4);
            t2 = (arg6 & 0xffffff00u) | (arg6 & 0xfdu);
            t3 = rd32(arg1 + 0x24u);
            wr32(t3 + 0x34u, t2);
            t4 = cow_cdecl(g, COW_IMG(0x10275da0u), 4, 1u, arg2 * 0xcu, COW_IMG(0x103bc310u), 0x122u);
            wr32(arg1 + 0x28u, t4);
            esi = arg3;
            edi = t4;
            ecx = arg2 * 0xcu >> 2u;
            while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            ecx = arg2 * 0xcu & 3u;
            while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
            if (arg4 != 0u)
            {
                g->esp = sp0 - 0x10u;
                t5 = cow_cdecl(g, COW_IMG(0x10275da0u), 4, 1u, arg2 * 0xcu, COW_IMG(0x103bc310u), 0x125u);
                wr32(arg1 + 0x2cu, t5);
                esi = arg4;
                edi = t5;
                ecx = arg2 * 0xcu >> 2u;
                while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
                ecx = arg2 * 0xcu & 3u;
                while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
            }
            t6 = (rd32(arg1 + 0x30u) & 0xffffff00u) | (uint8_t)(rd32(arg1 + 0x30u) | 1u);
            wr32(arg1 + 0x30u, t6);
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1029a180(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1029a180(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
