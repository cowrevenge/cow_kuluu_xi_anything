/* f_0x10253230 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10253230(Guest* g)
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (!(rd8(arg1) & 1u)) goto L_10253286;
    wr32(arg1 + 0xcu, 0xffffffffu);
    wr32(arg1 + 0x10u, 0xffffffffu);
    wr32(arg1 + 4u, 0u);
    t1 = rd32(arg1 + 0x14u);
    wr32(arg1 + 8u, 0u);
    if (t1 == 0u)
    {
        ecx = self;
        edx = in_edx;
    }
    else
    {
        eax = t1;
        g->eax = eax;
        g->edx = in_edx;
        g->esp = sp0 - 8u;
        t2 = cow_thiscall(g, COW_IMG(0x10071ec0u), rd32(eax), 0);
        t3 = g->edx;
        g->edx = t3;
        cow_thiscall(g, COW_IMG(0x10071050u), arg1 + 0x14u, 0);
        t4 = g->ecx;
        t5 = g->edx;
        wr32(arg1 + 0x14u, 0u);
        ecx = t4;
        edx = t5;
    }
    g->esp = sp0;
    cow_cdecl(g, COW_IMG(0x102896c0u), 3, arg1 + 0x18u, in_edi, in_esi);
    t6 = (rd32(arg1) & 0xffffff00u) | (rd32(arg1) & 0xf3u);
    wr32(arg1, t6);
    return 0u;
L_10253286: ;
    return 0xffffffffu;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10253230(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10253230(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
