/* f_0x1024d4c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_1024d4c0(Guest* g)
{
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
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((rd8(arg1) & 0x20u) == 0u) goto L_1024d4f2;
    t1 = rd32(COW_IMG(0x10389518u) + arg2 * 4u) * 9u + 0x7c08u;
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x10250dd0u), 2, arg1 + 0x198u, t1);
    return 0u;
L_1024d4f2: ;
    ecx = self;
    esi = 0u;
    edi = arg1 + 0xf0u;
L_1024d501: ;
    t2 = esi + rd32(COW_IMG(0x10389558u) + arg2 * 4u);
    g->ecx = ecx;
    g->edx = t2;
    g->esp = sp0 - 0x10u;
    cow_cdecl(g, COW_IMG(0x10250dd0u), 2, edi, t2);
    t3 = g->ecx;
    t4 = g->edx;
    if ((int32_t)(esi + 1u) < 4)
    {
        ecx = t3;
        esi = esi + 1u;
        edi = edi + 0x1cu;
        goto L_1024d501;
    }
    edx = t4;
    t5 = rd32(COW_IMG(0x10389558u) + arg2 * 4u) + 8u;
    g->ecx = arg1 + 0x160u;
    g->esp = sp0 - 0x10u;
    cow_cdecl(g, COW_IMG(0x10250dd0u), 2, arg1 + 0x160u, t5);
    t6 = g->ecx;
    t7 = rd32(COW_IMG(0x10389558u) + arg2 * 4u) + 9u;
    g->esp = sp0 - 0x18u;
    cow_cdecl(g, COW_IMG(0x10250dd0u), 2, arg1 + 0x198u, t7);
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1024d4c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1024d4c0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
