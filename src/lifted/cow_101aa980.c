/* f_0x101aa980 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_101aa980(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
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
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 8u);

    if (arg1 != 0x32u) goto L_101aa9af;
    wr32(sp0 - 4u, sp0 + 4u);
    g->edx = in_edx;
    g->esp = sp0;
    t1 = cow_cdecl(g, COW_IMG(0x100e47a0u), 1, sp0 + 4u);
    t2 = g->edx;
    if ((uint8_t)t1 == 0u)
    {
        edx = t2;
        goto L_101aaa1e;
    }
    edx = t2;
    if (arg1 == 0u) goto L_101aaa1e;
    wr32(arg1 + 4u, arg2);
    ecx = arg2;
L_101aaa08: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0;
    t8 = cow_stdcall(g, COW_IMG(0x100e4610u), 0);
    t9 = g->ecx;
    t10 = g->edx;
    if ((uint8_t)t8 != 0u)
    {
        edx = t10;
    }
    else
    {
        eax = t8;
        ecx = t9;
        edx = t10;
        wr32(sp0 - 4u, COW_IMG(0x1037ab38u));
        g->edx = edx;
        g->esp = sp0 - 4u;
        cow_stdcall(g, COW_IMG(0x10017d30u), 0);
        t11 = g->edx;
        edx = t11;
    }
L_101aaa1e: ;
    g->edx = edx;
    return 1u;
L_101aa9af: ;
    if (arg1 != 0x33u) goto L_101aa9d6;
    wr32(sp0 - 4u, sp0 + 4u);
    g->edx = sp0 + 4u;
    g->esp = sp0;
    t3 = cow_cdecl(g, COW_IMG(0x100e47a0u), 1, sp0 + 4u);
    t4 = g->edx;
    if ((uint8_t)t3 == 0u)
    {
        edx = t4;
        goto L_101aaa1e;
    }
    edx = t4;
    if (arg1 == 0u) goto L_101aaa1e;
    wr32(arg1 + 8u, arg2);
    ecx = arg2;
    goto L_101aaa08;
L_101aa9d6: ;
    if (arg1 != 0x35u)
    {
        edx = in_edx;
        goto L_101aaa1e;
    }
    wr32(sp0 - 4u, sp0 + 4u);
    g->edx = sp0 + 4u;
    g->esp = sp0;
    t5 = cow_cdecl(g, COW_IMG(0x100e47a0u), 1, sp0 + 4u);
    t6 = g->edx;
    if ((uint8_t)t5 == 0u)
    {
        edx = t6;
        goto L_101aaa1e;
    }
    eax = t5;
    edx = t6;
    if (arg1 == 0u) goto L_101aaa1e;
    t7 = rd8(arg1 + 1u);
    wr8(arg1 + 1u, (uint8_t)(((arg2 << 3u ^ t7) & 0x18u) ^ t7));
    ecx = arg1;
    edx = (edx & 0xffffff00u) | (((arg2 << 3u ^ t7) & 0x18u) ^ t7);
    goto L_101aaa08;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101aa980(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101aa980(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
