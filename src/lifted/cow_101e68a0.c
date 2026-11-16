/* f_0x101e68a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=1 */
uint32_t cow_fn_101e68a0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 28u);

    wr32(sp0 - 0xcu, in_esi);
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_thiscall(g, COW_IMG(0x1020a420u), rd32(COW_IMG(0x10663524u)), 0);
    t2 = g->edx;
    if (t1 == 0u)
    {
        eax = 0u;
        goto L_101e68f8;
    }
    edx = t2;
    esi = t1;
    wr32(sp0 - 4u, 0u);
    wr32(sp0 - 0x10u, sp0 - 4u);
    wr32(sp0 - 0x14u, arg1);
    t3 = rd32(sp0 - 8u);
    g->esp = sp0 - 8u;
    t4 = cow_thiscall_cdecl(g, COW_IMG(0x101e4ca0u), arg1, 3, arg1, sp0 - 4u, in_esi);
    t5 = g->ecx;
    if ((uint8_t)t4 == 0u)
    {
        eax = t4;
        goto L_101e68f8;
    }
    ecx = t5;
    wr32(sp0 - 0x10u, sp0 - 5u);
    t6 = rd32(sp0 - 4u);
    wr32(sp0 - 0x14u, t6);
    wr32(sp0 - 0x18u, esi + 0x40u);
    g->esp = sp0 - 0xcu;
    t7 = cow_cdecl(g, COW_IMG(0x101e4ce0u), 3, esi + 0x40u, t6, sp0 - 5u);
    if ((uint8_t)t7 == 0u)
    {
        eax = t7;
        goto L_101e68f8;
    }
    eax = t7;
    g->esi = rd32(sp0 - 0xcu);
    return (eax & 0xffffff00u) | rd8(sp0 - 5u);
L_101e68f8: ;
    return (eax & 0xffffff00u) | (uint8_t)(eax | 0xffu);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101e68a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101e68a0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
