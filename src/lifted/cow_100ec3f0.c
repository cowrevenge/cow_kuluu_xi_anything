/* f_0x100ec3f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100ec3f0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd32(COW_IMG(0x104dfd98u)) == 0u)
    {
        eax = rd32(COW_IMG(0x104dfd98u));
        goto L_100ec40e;
    }
    g->edx = in_edx;
    g->esp = sp0;
    t1 = cow_cdecl(g, COW_IMG(0x100fc3c0u), 3, 0xd8u, 0u, 0u);
    t2 = g->edx;
    if (t1 != 0u)
    {
        eax = t1;
        edx = t2;
        goto L_100ec411;
    }
    eax = t1;
L_100ec40e: ;
    return eax & 0xffffff00u;
L_100ec411: ;
    t3 = rd32(COW_IMG(0x104dfd98u));
    t4 = rd16(rd32(COW_IMG(0x104dfd98u)) + 0x40da8u);
    wr16(eax + 4u, (uint16_t)t4);
    wr16(eax + 6u, (uint16_t)arg2);
    wr8(eax + 8u, (uint8_t)arg1);
    t5 = rd32(rd32(COW_IMG(0x104dfd98u)) + 0x3c390u);
    wr32(eax + 0xcu, t5);
    esi = arg3;
    edi = eax + 0x10u;
    ecx = 6u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    g->eax = eax;
    g->esp = sp0 - 8u;
    t6 = cow_cdecl(g, COW_IMG(0x100fc4d0u), 3, eax, 0x28u, 0u);
    return (t6 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100ec3f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100ec3f0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
