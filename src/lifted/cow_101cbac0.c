/* f_0x101cbac0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_101cbac0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg1 != 0u) goto L_101cbacd;
    return in_eax & 0xffffff00u;
L_101cbacd: ;
    if (rd8(arg1 + 8u) != 0u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(arg1 + 8u);
        goto L_101cbad8;
    }
    eax = (in_eax & 0xffffff00u) | rd8(arg1 + 8u);
    return eax & 0xffffff00u;
L_101cbad8: ;
    if (arg2 == 0u)
    {
        ecx = self;
    }
    else
    {
        g->esp = sp0 - 0xcu;
        t1 = cow_thiscall_cdecl(g, COW_IMG(0x101c8fb0u), self, 1, arg1 + 9u);
        esi = t1;
        edi = arg2;
        ecx = 5u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        eax = t1;
    }
    if (arg3 != 0u)
    {
        t2 = rd16(arg1 + 6u);
        t3 = (rd8(arg1 + 7u) & 0xfu) * 0xdu + 0x38u | (t2 >> 4u & 0xfu) * 0xd00u + 0x3800u | ((t2 & 0xfu) * 0xdu << 0x10u) + 0x380000u | 0x80000000u;
        wr32(arg3, t3);
        eax = ((t2 & 0xfu) * 0xdu << 0x10u) + 0x380000u;
    }
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101cbac0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101cbac0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
