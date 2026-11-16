/* f_0x100e0770 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100e0770(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    wr8(rd32(COW_IMG(0x104dfd98u)) + 0x1a698u, 3u);
    if ((uint32_t)(int8_t)rd8(arg3 + 0x18u) == 0u)
    {
        eax = (uint32_t)(int8_t)rd8(arg3 + 0x18u);
        goto L_100e0798;
    }
    eax = (uint32_t)(int8_t)rd8(arg3 + 0x18u);
    if (eax != 1u)
    {
        edx = in_edx;
        goto L_100e07a4;
    }
    eax = eax - 1u;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    cow_thiscall_cdecl(g, COW_IMG(0x100e0800u), arg3 + 4u, 1, arg3 + 4u);
    t1 = g->edx;
    edx = t1;
L_100e07a1: ;
L_100e07a4: ;
    wr8(rd32(COW_IMG(0x104dfd98u)) + 0x1a698u, 1u);
    wr8(rd32(COW_IMG(0x104dfd98u)) + 0x1a699u, 1u);
    if (rd32(rd32(COW_IMG(0x104dfd98u)) + 0x1c78cu) == 0u)
    {
        eax = rd32(rd32(COW_IMG(0x104dfd98u)) + 0x1c78cu);
    }
    else
    {
        eax = rd32(rd32(COW_IMG(0x104dfd98u)) + 0x1c78cu);
        ecx = rd32(COW_IMG(0x104dfd98u));
        t3 = (edx & 0xffffff00u) | rd8(arg3 + 0x18u);
        t4 = rd32(ecx + 0x1c790u);
        g->esp = sp0 - 4u;
        cow_thiscall_cdecl(g, eax, t4, 2, t4, t3);
        t5 = rd32(COW_IMG(0x104dfd98u));
        wr32(t5 + 0x1c78cu, 0u);
        t6 = rd32(COW_IMG(0x104dfd98u));
        wr32(t6 + 0x1c790u, 0u);
        eax = t6;
        edx = t5;
    }
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_100e0798: ;
    g->edx = arg3 + 4u;
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x100e0680u), 1, arg3 + 4u);
    t2 = g->edx;
    edx = t2;
    goto L_100e07a1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100e0770(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100e0770(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
