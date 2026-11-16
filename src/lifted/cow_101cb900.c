/* f_0x101cb900 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_101cb900(Guest* g)
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd32(COW_IMG(0x104dfd98u)) == 0u)
    {
        edx = in_edx;
        goto L_101cb931;
    }
    ecx = rd32(COW_IMG(0x104dfd98u));
    t1 = rd16(arg1 * 0x2cu + ecx + 0x9868u);
    g->eax = arg1 * 0xbu;
    g->edx = arg1 * 5u;
    g->esp = sp0 - 4u;
    t2 = cow_thiscall(g, COW_IMG(0x1015bc40u), rd32(COW_IMG(0x10621808u)), 1, t1);
    t3 = g->edx;
    if (t2 != 0u)
    {
        eax = t2;
        esi = arg1 * 0x2cu + ecx + 0x9868u;
        goto L_101cb940;
    }
    edx = t3;
L_101cb931: ;
    if (arg2 != 0u)
    {
        wr8(arg2, 0xffu);
    }
    g->edx = edx;
    return (arg2 & 0xffffff00u) | 1u;
L_101cb940: ;
    t4 = rd16(eax + 4u);
    t5 = (eax & 0xffff0000u) | rd16(esi);
    g->eax = t5;
    g->edx = t4;
    g->esp = sp0 - 4u;
    t6 = cow_cdecl(g, COW_IMG(0x101cb8a0u), 4, t5, t4, esi + 0x10u, arg2);
    t7 = g->edx;
    g->edx = t7;
    return t6;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101cb900(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101cb900(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
