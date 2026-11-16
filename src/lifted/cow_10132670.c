/* f_0x10132670 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10132670(Guest* g)
{
    uint32_t eax;
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
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (arg1 == 0u)
    {
        eax = in_eax;
        goto L_101326b7;
    }
    if ((int8_t)rd8(COW_IMG(0x1036f7aau)) < 0)
    {
        eax = (in_eax & 0xffffff00u) | rd8(COW_IMG(0x1036f7aau));
        goto L_101326b7;
    }
    edx = in_edx;
    esi = COW_IMG(0x1036f7a8u);
    edi = 0u;
L_1013268b: ;
    t1 = (uint32_t)(int8_t)rd8(esi + 1u);
    g->eax = t1;
    g->ecx = (uint32_t)(int8_t)rd8(esi);
    g->edx = edx;
    t2 = rd8(esi);
    g->esp = sp0 - 0x10u;
    t3 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, (uint32_t)(int8_t)t2, t1);
    t4 = g->ecx;
    t5 = g->edx;
    g->esp = sp0 - 0xcu;
    t6 = cow_call_regs(g, COW_IMG(0x101c8730u), t3, g->ecx, t5, 1, 3, arg1, t3, 0u);
    t7 = g->edx;
    if (t6 == 0u) goto L_101326c0;
    eax = t6;
    edx = t7;
    if ((int8_t)rd8(esi + 5u) >= 0)
    {
        esi = esi + 3u;
        edi = edi + 1u;
        goto L_1013268b;
    }
    eax = (eax & 0xffffff00u) | rd8(esi + 5u);
L_101326b7: ;
    return 0xffffffffu;
L_101326c0: ;
    return (uint32_t)(int8_t)rd8(COW_IMG(0x1036f7aau) + edi * 3u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10132670(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10132670(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
