/* f_0x101bae40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101bae40(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;

    t1 = rd32(sp0 + 7u);
    if ((int32_t)(uint8_t)t1 >= (int32_t)(rd32(self + 0x1cu) + 1u))
    {
        edx = t1;
        goto L_101baea8;
    }
    eax = (uint8_t)t1;
    edx = t1;
    if ((int8_t)rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u) < 0) goto L_101bae9d;
    ebx = (in_ebx & 0xffffff00u) | rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u);
    esi = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
    if (esi != 3u) goto L_101bae9d;
    t2 = rd32(rd32(eax * 4u + rd32(self + 0x18u)) + 0x14u);
    t3 = rd32(eax * 4u + rd32(self + 0x18u));
    t4 = rd32(self + 0x18u);
    wr32(sp0 + 4u, t2);
    if (rd8(sp0 + 7u) == (uint8_t)edx)
    {
        eax = t3;
        goto L_101baeaa;
    }
    ecx = eax * 4u + t4;
    ebx = (ebx & 0xffffff00u) | rd8(sp0 + 7u);
L_101bae83: ;
    t5 = rd32(rd32(ecx + 4u) + 0x14u);
    t6 = rd32(ecx + 4u);
    wr32(sp0 + 4u, t5);
    if (rd8(sp0 + 7u) != (uint8_t)edx)
    {
        ecx = ecx + 4u;
        ebx = (ebx & 0xffffff00u) | rd8(sp0 + 7u);
        goto L_101bae83;
    }
    eax = t6;
    g->edx = edx;
    return eax;
L_101bae9d: ;
    g->edx = rd32(self + 0x18u);
    return rd32(eax * 4u + rd32(self + 0x18u));
L_101baea8: ;
    eax = 0u;
L_101baeaa: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101bae40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101bae40(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
