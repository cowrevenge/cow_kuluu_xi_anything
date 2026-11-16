/* f_0x101f4750 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_101f4750(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((uint16_t)arg1 != 6u)
    {
        eax = in_eax;
        edx = in_edx;
    }
    else
    {
        g->eax = in_eax;
        g->edx = in_edx;
        g->esp = sp0 - 8u;
        t1 = cow_cdecl(g, COW_IMG(0x101236e0u), 1, 0x42u);
        t2 = g->edx;
        eax = t1;
        edx = t2;
    }
    if (rd32(COW_IMG(0x106631d4u)) == 0u) goto L_101f47a8;
    ecx = rd32(COW_IMG(0x106631d4u));
    if ((uint16_t)arg1 != 5u) goto L_101f47a8;
    if ((uint32_t)(int16_t)arg2 == 1u) goto L_101f47cc;
    if ((uint32_t)(int16_t)arg2 == 2u) goto L_101f47ad;
    if ((uint32_t)(int16_t)arg2 != 3u)
    {
        eax = (uint32_t)(int16_t)arg2 - 3u;
    }
    else
    {
        g->eax = (uint32_t)(int16_t)arg2 - 3u;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t3 = cow_thiscall(g, COW_IMG(0x101d3380u), ecx, 3, 0u, 0xffffffffu, 1u);
        t4 = g->edx;
        wr32(self + 0x14u, 0xffffu);
        eax = t3;
        edx = t4;
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t5 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1037ec94u));
    t6 = g->edx;
    eax = t5;
    edx = t6;
L_101f47a8: ;
    g->edx = edx;
    return eax;
L_101f47ad: ;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t7 = cow_call_regs(g, COW_IMG(0x101d3cc0u), (uint32_t)(int16_t)arg2 - 2u, ecx, g->edx, 0, 3, 1u, 1u, 1u);
    t8 = g->edx;
    g->edx = t8;
    t9 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1037ec94u));
    t10 = g->edx;
    g->edx = t10;
    return t9;
L_101f47cc: ;
    if (rd32(COW_IMG(0x106631e4u)) == 0u)
    {
        eax = (uint32_t)(int16_t)arg2 - 1u;
        goto L_101f47a8;
    }
    ecx = rd32(COW_IMG(0x106631e4u));
    g->edx = edx;
    g->esp = sp0 - 8u;
    t11 = cow_thiscall(g, COW_IMG(0x101d6c90u), ecx, 1, COW_IMG(0x101f4a00u));
    t12 = g->edx;
    g->edx = t12;
    return t11;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101f4750(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101f4750(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
