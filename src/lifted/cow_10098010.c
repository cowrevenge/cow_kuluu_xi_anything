/* f_0x10098010 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10098010(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd32(COW_IMG(0x10487e94u)) != 0u)
    {
        eax = rd32(COW_IMG(0x10487e94u));
        goto L_10098070;
    }
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0;
    t1 = cow_cdecl(g, COW_IMG(0x100fc3c0u), 3, 0x5au, 0u, 0u);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        goto L_10098070;
    }
    eax = t1;
    ecx = t2;
    edx = t3;
    g->esp = sp0;
    cow_cdecl(g, COW_IMG(0x100fc4d0u), 3, eax, 4u, 0u);
    wr32(COW_IMG(0x10487e94u), arg1);
    t4 = rd32(COW_IMG(0x104dfd98u));
    wr32(COW_IMG(0x10487e98u), arg3);
    if (t4 == 0u)
    {
        eax = t4;
    }
    else
    {
        eax = t4;
        wr32(eax + 0x3c150u, arg2);
        t5 = rd32(COW_IMG(0x104dfd98u));
        wr32(t5 + 0x3c154u, 0u);
        eax = t5;
    }
    return (eax & 0xffffff00u) | 1u;
L_10098070: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10098010(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10098010(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
